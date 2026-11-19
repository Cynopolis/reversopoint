#!/usr/bin/env python3
"""
metrox_usb.py — Revopoint MetroX USB control library (pyusb-based).

Reverse-engineered from `3DCamera.dll` (Revopoint closed SDK "3.2.444").
See PROTOCOL-USB.md for the full map and what is confirmed vs. to-confirm.

CONFIRMED from decompilation:
  * The MetroX is a composite USB device found by its Windows instance id
    `USB\\VID_xxxx&PID_xxxx&MI_xx`. The SDK enumerates the WinUSB class
    (GUID 6bdd1fc6-810f-11d0-bec7-08002be2092f), parses each device id string
    for VID/PID/MI, and matches. `MI` is the USB interface number.
  * Data + control travel over HID-style reports: the bundled hidapi Win32
    backend reads/writes the device handle with overlapped ReadFile/WriteFile,
    and STRIPS the first byte (HID report id = 0x00) from every report it reads.
  * A per-frame header exists (validated field-by-field in the SDK):
      id(u32) type(u32) width(u16) height(u16) streamFormat(u32) frameFlag(u32)
      timestamp(u64) factTimestamp(u64) dataLen(u32)  [+ IMU/gyro extension]
    Depth payloads are MJPG (formats CPAIR / PMCZ / PMLD / PPLD / PSLD), zlib
    inflated then decoded; RGB is MJPG -> RGB8/RGBA.

TO CONFIRM on the real device (see protocol/CAPTURE.md, USB section):
  * VID:PID            -> `lsusb`
  * interface numbers  -> `lsusb -v` (which MI = control HID, which = data)
  * report header layout (head/magic/type/buflen) + XOR byte order
  * the exact command/property report encoding (getProperty/setProperty/stream)
  * endpoint addresses
  The `--dump` mode below records every raw report so you can derive the above
  in one session.
"""
import argparse, json, os, struct, sys, time

try:
    import usb.core, usb.util
except ImportError:
    print("pip install pyusb   (and libusb: sudo apt install libusb-1.0-0)")
    raise

HERE = os.path.dirname(os.path.abspath(__file__))
def _cfg():
    p = os.path.join(HERE, "device.json")
    if os.path.exists(p):
        try: return json.load(open(p))
        except Exception as e: print(f"[warn] bad device.json: {e}")
    return {}
CFG = _cfg()
USB = CFG.get("usb", {})

# ---- stream formats seen in the SDK (values are the SDK's enum; confirm order) ----
FORMATS = {"CPAIR": 0, "PMCZ": 0, "PMLD": 0, "PPLD": 0, "PSLD": 0, "PAIR": 0}  # TODO(confirm)


class MetroXUSB:
    def __init__(self, vid=None, pid=None, log=print):
        self.vid = int(vid or USB.get("vid", 0x0000))
        self.pid = int(pid or USB.get("pid", 0x0000))
        self.log = log
        self.dev = None
        self.ctrl_iface = int(USB.get("control_iface", 0))
        self.data_iface = int(USB.get("data_iface", 1))
        self.report_id = int(USB.get("report_id", 0))   # first byte stripped on read
        self.ctrl_ep_in  = USB.get("ctrl_ep_in")
        self.ctrl_ep_out = USB.get("ctrl_ep_out")
        self.data_ep_in  = USB.get("data_ep_in")
        # report framing constants (CONFIRM with --dump / USBPcap)
        self.f_head   = USB.get("frame_head")      # magic/head bytes
        self.f_xoroff = int(USB.get("xor_offset", 0))
        self.f_xorlen = USB.get("xor_len")

    # ---------------- discovery + open ----------------
    def find(self):
        if not self.vid or not self.pid:
            raise SystemExit("need vid/pid in device.json['usb'] or args (see `lsusb`)")
        d = usb.core.find(idVendor=self.vid, idProduct=self.pid)
        if d is None:
            raise SystemExit(f"no device {self.vid:#06x}:{self.pid:#06x} (check it's plugged in; run `lsusb`)")
        self.log(f"found {d.manufacturer}:{d.product} {self.vid:#06x}:{self.pid:#06x} bus={d.bus} addr={d.address}")
        return d

    def open(self, detach=True):
        self.dev = self.find()
        if self.dev.is_kernel_driver_active(self.ctrl_iface): self.dev.detach_kernel_driver(self.ctrl_iface)
        if self.dev.is_kernel_driver_active(self.data_iface): self.dev.detach_kernel_driver(self.data_iface)
        self.dev.set_configuration()
        self.dev.claim_interface(self.ctrl_iface)
        self.dev.claim_interface(self.data_iface)
        self._autofind_endpoints()
        self.log(f"opened; control iface={self.ctrl_iface} data iface={self.data_iface} "
                 f"eps in/out={self.data_ep_in}/{self.ctrl_ep_out}")

    def _autofind_endpoints(self):
        """Pick interrupt/bulk endpoints if not configured. TODO: confirm which is control vs data."""
        def eps(iface, typ):
            return [e.address for e in usb.util.iter_endpoints(self.dev.get_interface(iface))
                    if usb.util.endpoint_type(e.bEndpointAddress) == typ]
        if not self.data_ep_in:  self.data_ep_in  = (eps(self.data_iface, usb.util.ENDPOINT_INTR) or eps(self.data_iface, usb.util.ENDPOINT_BULK) or [0])[0]
        if not self.ctrl_ep_in:  self.ctrl_ep_in  = (eps(self.ctrl_iface, usb.util.ENDPOINT_INTR) or [0])[0]
        if not self.ctrl_ep_out: self.ctrl_ep_out = (eps(self.ctrl_iface, usb.util.ENDPOINT_INTR) or [0])[0]

    def close(self):
        if self.dev:
            try: self.dev.release_interface(self.ctrl_iface); self.dev.release_interface(self.data_iface)
            except Exception: pass
            self.dev = None

    # ---------------- raw report I/O (CONFIRMED shape) ----------------
    def read_report(self, iface=None, ep_in=None, bufsize=0x488, timeout=1000, with_id=False):
        """Read one HID report. The device prefixes each report with a report id
        byte (0x00) which the SDK strips — default returns payload WITHOUT it."""
        iface = self.ctrl_iface if iface is None else iface
        ep_in = self.ctrl_ep_in if ep_in is None else ep_in
        data = self.dev.read(ep_in, bufsize, timeout=timeout)
        data = bytes(data)
        if data and not with_id:
            # strip leading report-id byte (SDK: `if (*_Src == 0) copy from _Src+1`)
            data = data[1:]
        return data

    def write_report(self, payload, iface=None, ep_out=None, timeout=5000):
        """Write one HID report. Prepend the report id byte (0x00)."""
        iface = self.ctrl_iface if iface is None else iface
        ep_out = self.ctrl_ep_out if ep_out is None else ep_out
        data = bytes([self.report_id]) + bytes(payload)
        n = self.dev.write(ep_out, data, timeout)
        return n

    # ---------------- control commands ----------------
    # The exact per-command report encoding was NOT fully recoverable statically
    # (virtual dispatch + stripped symbols). Use --dump to capture real requests.
    def command(self, cmd, **fields):
        """Send a control command as a HID report and read the response.
        `cmd`/`fields` encoding is a placeholder until confirmed (see PROTOCOL-USB.md)."""
        # TODO(confirm): build the real report from cmd+fields.
        # The SDK logs e.g. "HID EXE hidInteraction TRANS_CMD: %s" and
        # "hid read head: head, magic, type, buflen" — mirror that once known.
        raise NotImplementedError(
            "command report encoding not yet confirmed — run `--dump` with the stock "
            "app to capture the exact bytes, then implement here (PROTOCOL-USB.md §Commands)")

    def get_info(self):    return self.command("getInfo")
    def get_stream_infos(self): return self.command("getStreamInfos")
    def start_stream(self, **kw): return self.command("startStream", **kw)
    def stop_stream(self, **kw):  return self.command("stopStream", **kw)
    def get_property(self, ptype):  return self.command("getProperty", propertyType=ptype)
    def set_property(self, ptype, v): return self.command("setProperty", propertyType=ptype, value=v)

    # ---------------- data frames ----------------
    def read_frame_raw(self, bufsize=1 << 20, timeout=2000):
        """Read one raw data report from the data interface (report id stripped)."""
        iface, ep = self.data_iface, self.data_ep_in
        data = self.dev.read(ep, bufsize, timeout=timeout)
        return bytes(data[1:]) if data else b""

    def parse_frame_header(self, buf):
        """Parse the per-frame header. Field order/sizes from the SDK's validation
        error strings — CONFIRM order on device. Returns (dict, payload_offset)."""
        fmt = "<IIHHIIQQI"   # id u32, type u32, width u16, height u16,
        #                  # streamFormat u32, frameFlag u32,
        #                  # timestamp u64, factTimestamp u64, dataLen u32
        sz = struct.calcsize(fmt)
        if len(buf) < sz:
            return None, 0
        (fid, ftype, w, h, sfmt, fflag, ts, facts, dlen) = struct.unpack_from(fmt, buf)
        hdr = dict(id=fid, type=ftype, width=w, height=h, streamFormat=sfmt,
                   frameFlag=fflag, timestamp=ts, factTimestamp=facts, dataLen=dlen)
        return hdr, sz

    def frames(self, n=1, outdir="."):
        self.log(f"reading {n} data frames -> {outdir}/")
        os.makedirs(outdir, exist_ok=True)
        for k in range(n):
            raw = self.read_frame_raw()
            if not raw:
                self.log("  no frame (timeout)"); break
            hdr, off = self.parse_frame_header(raw)
            self.log(f"  frame {k}: len={len(raw)} hdr={hdr}")
            open(os.path.join(outdir, f"frame_{k:03d}.bin"), "wb").write(raw[off:] if hdr else raw)


def dump(device):
    """Capture mode: log every raw control+data report (hex) so the exact
    framing/encoding can be derived. Run the stock app to generate traffic."""
    d = device
    d.log("DUMP: reading raw reports for 15s (run the stock app now to generate traffic)...")
    deadline = time.time() + 15
    n = 0
    while time.time() < deadline:
        for label, iface, ep, sz in (
            ("CTRL", d.ctrl_iface, d.ctrl_ep_in, 0x488),
            ("DATA", d.data_iface, d.data_ep_in, 1 << 20),
        ):
            try:
                r = d.dev.read(ep, sz, timeout=120)
            except usb.core.USBTimeoutError:
                continue
            r = bytes(r)
            n += 1
            d.log(f"[{label} #{n}] {len(r)}B: {r[:48].hex()}{'...' if len(r) > 48 else ''}")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("cmd", choices=["dump", "open", "getinfo", "start", "frames"])
    ap.add_argument("--vid", type=lambda s: int(s, 0))
    ap.add_argument("--pid", type=lambda s: int(s, 0))
    ap.add_argument("--n", type=int, default=5)
    ap.add_argument("--out", default="frames")
    a = ap.parse_args()
    m = MetroXUSB(a.vid, a.pid)
    m.open()
    try:
        if a.cmd == "dump":    dump(m)
        elif a.cmd == "frames": m.frames(a.n, a.out)
        elif a.cmd == "getinfo": m.get_info()
        elif a.cmd == "start":   m.start_stream()
    finally:
        m.close()


if __name__ == "__main__":
    main()
