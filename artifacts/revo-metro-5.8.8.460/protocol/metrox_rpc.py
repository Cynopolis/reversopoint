#!/usr/bin/env python3
"""
metrox_rpc.py — reference client for the Revopoint MetroX live-control protocol.

Reverse-engineered from `3DCamera.dll` (Revopoint's closed "SDK 3.2.444"), class
`cs::CameraDeviceRpcClient` + `DeviceDataComTcp`. See PROTOCOL.md for the full map.

CONFIRMED (from decompilation):
  * Transport : plain TCP, select + recv/send, connect() with 5000 ms timeout.
  * Protocol  : JSON-RPC. A request is a single JSON object sent on the socket.
  * msgId     : the `msgId` field IS the command name (server dispatches on it),
                e.g.  {"msgId":"setPropertyExtension","valLen":N,"propertyType":P}
  * Commands  : the 34-command table (see COMMANDS below).
  * Response  : JSON object with at least {"result":..., "code":...} (code==0 ok).
  * Depth     : MJPG-compressed, zlib-inflated, delivered after `startStream`.

UNKNOWN (fill from a live capture — see CAPTURE.md, ~2 min with the device):
  * The RPC server PORT (it's a code constant behind a virtual call).
  * Exact message FRAMING (newline? length prefix? bare JSON?) — the reader below
    is framing-agnostic (brace-matches complete JSON objects), so it usually just works.
  * The `propertyType` integer IDs (enumerate with getProperty/getPropertyRange).
  * How depth/RGB frames are framed after startStream (same socket? separate?).

Usage:
  python3 metrox_rpc.py <host> <port>           # connect + getInfo + getStreamInfos
  python3 metrox_rpc.py <host> <port> --stream  # also startStream + read frames
"""
import argparse, json, socket, struct, sys, time, zlib

# ---- the 34 commands from the dispatch table (index order = table order) ----
COMMANDS = [
    "queryCameras","connect","disconnect","getInfo","getStreamInfos",
    "startStream","stopStream","getPropertyRange","getProperty","setProperty",
    "setPropertyExtension","getPropertyExtension","getIntrinsics","getExtrinsics",
    "getDistort","setUserData","getUserData","upgradeFirmware",
    "getUpgradeFirmwareProgress","initDriver","readBuffer","writeBuffer",
    "startProbe","stopProbe","writeReadHid","startIMUCalibration",
    "getIMUCalibrationState","stopIMUCalibration","setIMUCalibrationDate",
    "getIMUCalibrationDate","getImuData","autoGetExpouseCtrl",
    "setInternalProperty","restartRpcService",
]

# ---- device config: filled in from CAPTURE.md results (see HUMAN-TODO.md) ----
import os
def _load_cfg():
    p = os.path.join(os.path.dirname(os.path.abspath(__file__)), "device.json")
    if os.path.exists(p):
        try:
            return json.load(open(p))
        except Exception as e:
            print(f"[warn] bad device.json: {e}")
    return {}
DEVICE_CFG = _load_cfg()
PROPERTY_TYPES = DEVICE_CFG.get("propertyTypes", {})

class MetroXRPC:
    def __init__(self, host, port, timeout=5.0, log=print):
        self.host, self.port, self.timeout, self.log = host, port, timeout, log
        self.sock = None
        self.buf = b""
        self.framing = DEVICE_CFG.get("framing", "bare")  # bare|newline|length32|length16
        self.frame_mode = DEVICE_CFG.get("stream", {}).get("frame_delimiter", "mjpg_eoi")

    # ---------------- transport ----------------
    def connect(self):
        self.log(f"connect {self.host}:{self.port} ...")
        self.sock = socket.create_connection((self.host, self.port), timeout=self.timeout)
        self.sock.setsockopt(socket.IPPROTO_TCP, socket.TCP_NODELAY, 1)
        self.log("connected")

    def close(self):
        if self.sock: self.sock.close(); self.sock = None

    # ---------------- low-level I/O ----------------
    def _send(self, data: bytes):
        self.sock.sendall(data)

    def _recv_exact(self, n):
        buf = b""
        while len(buf) < n:
            c = self.sock.recv(n - len(buf))
            if not c:
                raise ConnectionError("closed while reading header")
            buf += c
        return buf

    def _send_json(self, obj: dict):
        b = json.dumps(obj, separators=(",", ":")).encode("utf-8")
        fr = self.framing
        if fr == "newline":     self._send(b + b"\n")
        elif fr == "length32":  self._send(struct.pack("<I", len(b)) + b)
        elif fr == "length16":  self._send(struct.pack("<H", len(b)) + b)
        else:                   self._send(b)   # bare

    def _read_json(self, timeout=3.0):
        """Framing-agnostic: read from the socket until a complete JSON object is
        available (brace-matching, skipping leading non-{ bytes). Handles
        bare-JSON / newline / multiple-objects-per-read framing."""
        self.sock.settimeout(timeout)
        deadline = time.time() + timeout
        depth = 0
        start = None
        while True:
            i = 0
            while i < len(self.buf):
                c = self.buf[i:i+1]
                if c == b"{" and start is None:
                    start = i; depth = 1; i += 1; continue
                if start is not None:
                    if c == b"{": depth += 1
                    elif c == b"}":
                        depth -= 1
                        if depth == 0:
                            obj = json.loads(self.buf[start:i+1].decode("utf-8"))
                            self.buf = self.buf[i+1:]
                            return obj
                i += 1
            if time.time() > deadline:
                raise TimeoutError("no complete JSON object within %.1fs (buf=%r)" %
                                   (timeout, self.buf[:80]))
            try:
                chunk = self.sock.recv(65536)
            except socket.timeout:
                if time.time() > deadline:
                    raise TimeoutError("recv timeout; partial buf=%r" % self.buf[:80])
                continue
            if not chunk:
                raise ConnectionError("socket closed by device")
            self.buf += chunk

    # ---------------- RPC ----------------
    def request(self, command, **params):
        """Send a command, return the parsed response dict.
        Envelope (confirmed): {"msgId":"<command>", ...command fields...}."""
        obj = {"msgId": command}
        obj.update(params)
        self._send_json(obj)
        self.log(f"  -> {json.dumps(obj, separators=(',',':'))}")
        rsp = self._read_json()
        self.log(f"  <- {json.dumps(rsp)[:200]}")
        return rsp

    # ---------------- command wrappers (the control surface) ----------------
    def query_cameras(self):        return self.request("queryCameras")
    def connect_cmd(self):          return self.request("connect")
    def init_driver(self):          return self.request("initDriver")
    def get_info(self):             return self.request("getInfo")
    def get_stream_infos(self):     return self.request("getStreamInfos")
    def start_stream(self, **kw):   return self.request("startStream", **kw)
    def stop_stream(self, **kw):    return self.request("stopStream", **kw)
    def get_property(self, propertyType, **kw):   return self.request("getProperty", propertyType=propertyType, **kw)
    def set_property(self, propertyType, **kw):   return self.request("setProperty", propertyType=propertyType, **kw)
    def get_property_range(self, propertyType):   return self.request("getPropertyRange", propertyType=propertyType)
    def get_property_ext(self, propertyType, **kw):return self.request("getPropertyExtension", propertyType=propertyType, **kw)
    def set_property_ext(self, propertyType, valLen=0, **kw):return self.request("setPropertyExtension", propertyType=propertyType, valLen=valLen, **kw)
    def get_intrinsics(self):       return self.request("getIntrinsics")
    def get_extrinsics(self):       return self.request("getExtrinsics")
    def get_distort(self):          return self.request("getDistort")
    def get_imu_data(self):         return self.request("getImuData")
    def disconnect(self):           return self.request("disconnect")

    # ---------------- depth frames (MJPG) ----------------
    def read_frames(self, n=1, outdir="."):
        """After startStream, pull MJPG depth frames. Delimiter comes from
        device.json stream.frame_delimiter: 'mjpg_eoi' (default) or
        'length_header' (4-byte little-endian length prefix)."""
        self.log(f"reading up to {n} frames (mode={self.frame_mode}) -> {outdir}/")
        self.sock.settimeout(self.timeout)
        for k in range(n):
            data = b""
            try:
                if self.frame_mode == "length_header":
                    hdr = self._recv_exact(4)
                    ln = struct.unpack("<I", hdr)[0]
                    if ln > (1 << 26): raise ConnectionError(f"bad frame len {ln}")
                    data = self._recv_exact(ln)
                else:  # mjpg_eoi: read until MJPG end-of-image (0xFFD9)
                    while b"\xff\xd9" not in data:
                        data += self.sock.recv(1 << 20)
                        if len(data) > (1 << 26): break
            except (socket.timeout, ConnectionError) as e:
                self.log(f"  frame stop: {e}"); break
            if not data: break
            # validate it inflates as zlib (the SDK inflates the payload)
            try:
                inflated = zlib.decompress(data)
            except Exception:
                inflated = data
            p = f"{outdir}/frame_{k:03d}.mjpg"
            open(p, "wb").write(inflated)
            self.log(f"  frame {k}: {len(inflated)} bytes -> {p}")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("host", nargs="?", default=DEVICE_CFG.get("host"))
    ap.add_argument("port", nargs="?", type=int, default=DEVICE_CFG.get("port"))
    ap.add_argument("--stream", action="store_true", help="startStream + read frames")
    ap.add_argument("--out", default="frames")
    ap.add_argument("--timeout", type=float,
                    default=float(DEVICE_CFG.get("response_timeout_ms", 5000)) / 1000.0)
    a = ap.parse_args()
    if not a.host or not a.port:
        sys.exit("need <host> <port> as args or in protocol/device.json "
                 "(see HUMAN-TODO.md / protocol/CAPTURE.md)")
    if PROPERTY_TYPES:
        print("propertyTypes:", PROPERTY_TYPES)

    r = MetroXRPC(a.host, a.port, a.timeout)
    try:
        r.connect()
        # handshake / discovery
        for fn in (r.query_cameras, r.connect_cmd, r.get_info, r.get_stream_infos):
            try:
                fn()
            except Exception as e:
                print(f"  ({fn.__name__} failed: {e})")
        if a.stream:
            r.start_stream()
            time.sleep(0.5)
            r.read_frames(n=5, outdir=a.out)
            r.stop_stream()
    finally:
        r.close()

if __name__ == "__main__":
    main()
