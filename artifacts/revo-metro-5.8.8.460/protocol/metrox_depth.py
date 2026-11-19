#!/usr/bin/env python3
"""
metrox_depth.py — MetroX depth frame -> point cloud  (separate from metrox_usb.py)

Architecture (per design):
  metrox_usb.py  : transport — yields RAW frame bytes + a header dict.
  metrox_depth.py: this module — turns a raw depth frame into a point cloud.

What's SOLVED (reverse-engineered, see ../DEPTH-DECODE.md):
  * Reprojection  : world = (M4x4 @ [u/CU, v/CV, z/CZ, 1]) / w      [FUN_181325650]
  * Depth model   : float arrays, [value, baseline] per pixel (CPAIR base+delta)
  * Point layout  : (X, Y, Z) float32
  * Validity gate : drop points whose depth is out of the device window (-> NaN)

What's CONFIRM (fill from the device / a capture):
  * CPAIR/PMCZ byte-packing  : how the zlib-inflated payload bytes become the
    (W*H, 2) float32 [value, baseline] array.  decode_cpair() below implements the
    Z16Y8Y8/float path for now and TODOs the CPAIR/PMCZ compressed path.
  * Q matrix (M4x4) + the 3 normalization scalars + validity constants: pulled from
    the device (getIntrinsics + the Q-mat command). Put them in device.json["depth"].

Usage:
  d = DepthDecoder.from_device_json()           # loads device.json["depth"]
  pts = d.frame_to_points(header, payload)      # (N, 3) float32 world points
  d.save_ply("out.ply", pts)
"""
import os
import struct
import json
try:
    import numpy as np
except ImportError:
    np = None  # metrox_depth needs numpy: pip install numpy

HERE = os.path.dirname(os.path.abspath(__file__))


def _cfg():
    p = os.path.join(HERE, "device.json")
    try:
        with open(p) as f:
            return json.load(f)
    except Exception:
        return {}


DEPTH = _cfg().get("depth", {})
FMT = {n: i for i, n in enumerate(
    ["Z16", "GRAY", "PAIR", "CPAIR", "PMCZ", "PMLD", "PPLD", "PSLD",
     "PRCZ", "XYZS", "XZ32", "Z16Y8Y8", "Z16Y8Y8P", "I8DS"])}
NAME = {i: n for n, i in FMT.items()}


class DepthDecoder:
    def __init__(self, Q=None, cu=1.0, cv=1.0, cz=1.0,
                 win_offset=0.0, win_cmp=0.25, w_num=1.0,
                 near=None, far=None, log=print):
        if np is None:
            raise ImportError("numpy is required for metrox_depth (pip install numpy)")
        # Q : 4x4 back-projection ("Q") matrix, row-major (from the device)
        self.Q = np.asarray(Q, dtype=np.float64) if Q is not None else None
        self.cu, self.cv, self.cz = float(cu), float(cv), float(cz)
        self.win_offset, self.win_cmp, self.w_num = win_offset, win_cmp, w_num
        self.near, self.far = near, far
        self.log = log

    @classmethod
    def from_device_json(cls, **kw):
        d = DEPTH
        return cls(Q=d.get("Q"), cu=d.get("cu", 1.0), cv=d.get("cv", 1.0),
                   cz=d.get("cz", 1.0), win_offset=d.get("win_offset", 0.0),
                   win_cmp=d.get("win_cmp", 0.25), w_num=d.get("w_num", 1.0),
                   near=d.get("near"), far=d.get("far"), **kw)

    # ---- SOLVED: reprojection (FUN_181325650) --------------------------------
    def reproject(self, u, v, depth):
        """u,v,pixel-index or normalized coords; depth in unpacked CPAIR units.
        Returns (N,3) float world points; invalid depths -> NaN."""
        if self.Q is None:
            raise RuntimeError("no Q matrix set (device.json['depth']['Q'])")
        u = np.asarray(u, np.float64); v = np.asarray(v, np.float64)
        depth = np.asarray(depth, np.float64)
        x = u / self.cu; y = v / self.cv; z = depth / self.cz
        P = np.stack([x, y, z, np.ones_like(x)], axis=-1)          # (N,4)
        H = P @ self.Q.T                                            # row-major M
        w = H[:, 3:4] * self.w_num
        with np.errstate(invalid="ignore", divide="ignore"):
            xyz = H[:, :3] / np.where(w == 0, np.nan, w)
        xyz[(z - self.win_offset) <= self.win_cmp] = np.nan         # validity gate
        return xyz

    # ---- CONFIRM: CPAIR/PMCZ byte-packing -----------------------------------
    def decode_cpair(self, payload, width, height):
        """Return the unpacked depth as a (W*H, 2) float32 [value, baseline] array.

        CONFIRM: the exact byte-packing of CPAIR/PMCZ (zlib-inflated) is not yet
        pinned statically. Two supported cases:
          * if the frame is already the float layout (Z16Y8Y8 / raw float), interpret
            directly as float32 [value, baseline] pairs.
          * TODO: CPAIR/PMCZ — inflate (zlib) then unpack the base+delta pairs.
        """
        fmt_ok = True
        if len(payload) == width * height * 2 * 4:
            arr = np.frombuffer(payload, dtype="<f4").reshape(width * height, 2)
            return arr.copy()
        # CONFIRM: CPAIR/PMCZ compressed path goes here (zlib + base+delta unpack).
        self.log("[decode_cpair] CONFIRM packing: got %d bytes for %dx%d; "
                 "expecting %d (float layout) — CPAIR/PMCZ unpack not implemented"
                 % (len(payload), width, height, width * height * 8))
        raise NotImplementedError("CPAIR/PMCZ byte-packing is CONFIRM (see DEPTH-DECODE.md §9)")

    # ---- frame -> points -----------------------------------------------------
    def frame_to_points(self, header, payload):
        w, h = header["width"], header["height"]
        depth = self.decode_cpair(payload, w, h)          # (W*H, 2) [value, baseline]
        val = depth[:, 0].ravel(); base = depth[:, 1].ravel()
        # CPAIR: z = value - baseline (per DEPTH-DECODE.md §3)
        z = val - base
        idx = np.arange(w * h)
        u = (idx % w).astype(np.float64)
        v = (idx // w).astype(np.float64)
        return self.reproject(u, v, z)

    # ---- output --------------------------------------------------------------
    def save_ply(self, path, pts):
        pts = np.asarray(pts)
        pts = pts[~np.isnan(pts).any(axis=1)]
        with open(path, "wb") as f:
            f.write(b"ply\nformat binary_little_endian 1.0\n"
                    b"element vertex " + str(len(pts)).encode() + b"\n"
                    b"property float x\nproperty float y\nproperty float z\nend_header\n")
            f.write(np.ascontiguousarray(pts, dtype="<f4").tobytes())
        self.log(f"[depth] wrote {len(pts)} points -> {path}")
        return path


def main():
    import argparse
    ap = argparse.ArgumentParser(description="MetroX depth frame -> point cloud")
    ap.add_argument("--frame", help="raw frame payload file (from metrox_usb.py --dump)")
    ap.add_argument("--out", default="out.ply")
    ap.add_argument("--width", type=int, default=0)
    ap.add_argument("--height", type=int, default=0)
    a = ap.parse_args()
    if not a.frame:
        ap.print_help(); return
    payload = open(a.frame, "rb").read()
    d = DepthDecoder.from_device_json()
    hdr = {"width": a.width or 1600, "height": a.height or 1300, "streamFormat": FMT.get("Z16Y8Y8", 11)}
    pts = d.frame_to_points(hdr, payload)
    d.save_ply(a.out, pts)


if __name__ == "__main__":
    main()
