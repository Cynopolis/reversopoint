# HUMAN-TODO — Driving the MetroX: on-device testing + code updates

**Goal:** get live control of the MetroX. The **primary data path is USB** (depth/RGB frame
stream over a WinUSB/HID composite device); a secondary **network (JSON-RPC)** path also exists.
Confirm the remaining on-device values, record them in `device.json`, and finish the client.

This file is written to be executed by **a human** and/or **an AI agent**. Every step has the
exact command(s), what to look for, and where to record the result. Work top to bottom and tick
the boxes as you go. **Do Track A (USB) first** — it's the real data path.

> Read these first (short):
> - `artifacts/revo-metro-5.8.8.460/PROTOCOL-USB.md` — **the USB protocol (primary)**: device
>   discovery, I/O model, frame header, depth formats, and the CONFIRM list.
> - `artifacts/revo-metro-5.8.8.460/PROTOCOL.md` — the network/JSON-RPC path (secondary).
> - `artifacts/revo-metro-5.8.8.460/protocol/CAPTURE.md` — capture techniques (add USB section below).

---

## 0. Context / current state
- Reverse-engineering of the installer + app is **complete** (see `artifacts/revo-metro-5.8.8.460/`).
- The MetroX talks to the PC over **USB** (primary) and a **network/JSON-RPC** channel (secondary).
  `3DCamera.dll` is Revopoint's closed "SDK 3.2.444"; both paths are mapped. Evidence:
  `analysis/usb/` (USB) and `analysis/decompiled/` (network).
- Two clients exist: **`protocol/metrox_usb.py`** (USB, pyusb — primary) and
  **`protocol/metrox_rpc.py`** (network, JSON-RPC). Both read `protocol/device.json`.
- The USB **architecture is confirmed** (discovery by VID:PID/MI, overlapped read/write with
  report-id strip, 40-byte frame header, MJPG/CPAIR depth). A few **byte-level details are
  CONFIRM-only** (report framing + XOR, command encoding, interface/endpoint assignment, VID:PID)
  — each is a 1-2 min capture (Track A).

## 1. The unknowns to confirm
**Track A — USB (primary):**
| # | Unknown | Where it's used | How to get it |
|---|---------|-----------------|---------------|
| A1 | **VID:PID** | `device.json.usb.vid/pid` | `lsusb` (Step A1) |
| A2 | **interface numbers (MI) + endpoints** (control HID vs data) | `device.json.usb.*_iface/ep_*` | `lsusb -v` (Step A2) |
| A3 | **report framing** (head/magic/type/buflen + XOR) | `metrox_usb.py` framing | `metrox_usb.py dump` + SDK TRACE (Step A3) |
| A4 | **command/property report encoding** | `metrox_usb.py:command()` | `metrox_usb.py dump` of the stock app (Step A3) |
| A5 | **CPAIR/PMCZ depth pixel layout** | `metrox_usb.py` decode | decode one captured frame vs SDK output (Step A4) |

**Track B — network (secondary/optional):** RPC host+port, request framing, propertyType IDs,
frame delimiter (see Section 4). Only needed if you want the network path too.

## 2. Prerequisites
- [ ] Physical MetroX (or MetroX Pro/Ultra) + power + USB cable (USB 3.0).
- [ ] The **stock Revo Metro app** installed on a **Windows** PC — needed only to *generate
      traffic* for the passive capture in A3 and to cross-check results. The **client itself runs
      on Linux or Windows** (Linux is the cleanest target — no filter driver needed).
- [ ] This repo checked out (client + config):
      - `artifacts/revo-metro-5.8.8.460/protocol/metrox_usb.py`   (USB — primary)
      - `artifacts/revo-metro-5.8.8.460/protocol/metrox_rpc.py`   (network — secondary)
      - `artifacts/revo-metro-5.8.8.460/protocol/device.json`
- [ ] **Client machine** (runs `metrox_usb.py`) — pick one:
      - **Linux (recommended):** `sudo apt install libusb-1.0-0` then `pip install pyusb`.
        No filter driver needed; `metrox_usb.py` detaches any bound kernel driver (hidraw/uvcvideo).
      - **Windows:** `pip install pyusb` + the libusb-1.0 DLL. The data interface is a **WinUSB**
        device, so libusb can only use it once a **libusb filter driver** is installed: run
        **Zadig** → *Options → List All Devices* → select the MetroX → install **"libusb-win32"**.
- [ ] **Passive USB capture** (A3 — to learn the stock app's command encoding):
      - Windows: **Wireshark + USBPcap** (`usbpcapdiag.exe`). Install the USBPcap driver for the
        MetroX, capture, and Wireshark decodes the HID reports for you.
      - Linux: `sudo modprobe usbmon` then capture the USB bus in Wireshark (or `usbcap`).
- [ ] (Optional, SDK cross-check log) the Revo Metro app's log-download / ADB log access.

## 3. TRACK A — USB (primary)
> Client: `artifacts/revo-metro-5.8.8.460/protocol/metrox_usb.py`. Config: `protocol/device.json` → the `"usb"` object.
> **Two phases:** (1) **passive** capture of the stock app's USB traffic to *learn* the encoding
> (you don't need to open the device yourself), then (2) **active** — drive the device with your
> client. The device is **exclusive** (one owner at a time), so you **cannot** run `metrox_usb.py`
> and the stock app at the same time.

### A1 — Find VID:PID  (fills `usb.vid`/`usb.pid`)
```bash
lsusb                                   # find the MetroX (a new/unknown vendor)
# e.g.  Bus 002 Device 005: ID 1234:abcd Revopoint ...   ->  vid=0x1234 pid=0xabcd
```
- [ ] `usb.vid` = ____  `usb.pid` = ____  (write into `device.json`)

### A2 — Interfaces + endpoints  (fills `usb.*_iface`/`ep_*`)
```bash
lsusb -v -d <vid>:<pid> 2>/dev/null | grep -A2 -E "I\d+:  (Interface|  Endpoint)"
# for each INTERFACE: bInterfaceNumber, bInterfaceClass (HID=3, Vendor/WinUSB=0xff/0x00),
# and each ENDPOINT: address, bmAttributes (2=interrupt, 3=bulk)
```
- [ ] `usb.control_iface` = ____  (the **HID** interface, class 3 — commands/properties/IMU)
- [ ] `usb.data_iface`    = ____  (the **data**/WinUSB interface — the frame stream)
- [ ] endpoint addresses → `usb.ctrl_ep_in/out`, `usb.data_ep_in`  (or leave `null` to auto-pick)

### A3 — Passive capture of the stock app  (THE KEY STEP — pins report framing + command encoding)
Do this on the **Windows** PC running the stock app, with **Wireshark + USBPcap**:
1. Install the USBPcap driver for the MetroX (`usbpcapdiag.exe`), then open Wireshark → start
   capturing on the USBPcap interface.
2. In the stock app: connect, start a scan, and change a property (exposure/gain). Stop the capture.
3. In the capture (filter by the device), Wireshark **decodes HID reports**. You will see:
   - **control transfers** = `HidD_SetFeature`/`GetFeature` = the app's **command/property requests**
     (`getInfo`, `startStream`, `getProperty`, `setProperty`, …). **Read these exact bytes — this is
     your command encoding** (the `TRANS_CMD`/`GET_COMMON_PARAM` layout) → implement `command()` in
     `metrox_usb.py`.
   - **data reports** = the frame stream. **Read the first bytes** = the report header
     (`head, magic, type, buflen`); locate the **XOR** byte(s) and verify `got==exp` over the header
     → set `usb.f_head`/`xor_offset`/`xor_len`.
4. (Cross-check, no analyzer needed) enable the SDK's `[SDK TRACE]` log — it prints
   `hid_read head: head, magic, type, buflen` and `vid=0x.. pid=0x..` (read the SDK log file; see
   CAPTURE.md §USB.3).
- [ ] Recorded command bytes for: `getInfo` = ____ ; `startStream` = ____ ; `getProperty` = ____
- [ ] Set `usb.f_head`/`xor_offset`/`xor_len` from the data reports.

### A4 — Active: drive with your client (verify)
**Close the stock app** (the device is exclusive). On your client machine (Linux recommended):
```bash
python3 protocol/metrox_usb.py open        # claims ifaces, auto-picks endpoints
python3 protocol/metrox_usb.py dump        # logs raw reports your client actually sees
```
- [ ] Your client sees the same data reports (report-id stripped) as the A3 capture.
- [ ] Implement the A3 command bytes in `command()`, then send `getInfo`/`getProperty` and confirm
      the response matches the stock app.

### A5 — Depth decode  (pins CPAIR/PMCZ layout)
```bash
python3 protocol/metrox_usb.py frames --n 5 --out frames
```
- [ ] Strip the 40-byte frame header, zlib-inflate, decode the MJPG, apply the CPAIR/PMCZ packing
      (depth `Z16Y8Y8`), and verify the point cloud matches the stock app's output. Fix the decode
      in `metrox_usb.py`.

### A6 — End-to-end (definition of done for USB)
- [ ] `open` + a `getProperty` round-trips a value that visibly changes in the app.
- [ ] `frames --n 10` saves 10 valid frames you can decode to a point cloud.

## 4. TRACK B — NETWORK (secondary) step-by-step

### Step A — Find the host + port (fills unknown #1)
Connect the scanner over USB, make sure Revo Metro can see it.

```bash
adb devices                       # expect: <serial>   device
adb -s <serial> shell ip addr      # the AP's IP  ->  HOST (e.g. 192.168.3.x)
adb -s <serial> shell netstat -tlnp   # LISTEN sockets -> candidate PORTS
```
- [ ] **HOST** = the scanner's IP (from `ip addr`).
- [ ] **PORT** = the LISTEN port the PC connects to for RPC.

**Disambiguate the port** (there may be a web server + RPC + others). The cleanest is to watch
what the *PC* actually connects to while you click "connect" in Revo Metro:
- Linux/macOS:
  ```bash
  strace -f -e trace=connect -p "$(pidof RevoMetro.exe)" 2>&1 | grep -a "htons\|sin_port"
  # the connect() to <HOST> with sin_port=htons(XXXX) is THE port
  ```
- Windows: use **`pktmon`** (`pktmon start --etw; ...; pktmon stop`) then read the ETL, or run
  **`api-monitor`** on `RevoMetro.exe` and filter `connect`. The destination port it opens to the
  scanner's IP is the RPC **PORT**.

- [ ] Record: host=________  port=________

### Step B — Confirm the request framing (fills unknown #2)
Capture the exact bytes the PC sends. Trigger it by clicking connect / a scan in Revo Metro.
- [ ] Open Wireshark → capture on the scanner-WiFi interface, filter `ip == <HOST>`.
- [ ] In the JSON TCP stream you'll see requests like `{"msgId":"connect"...}`, `getInfo`,
      `startStream`. Look at the **first bytes** of each request:
      - exactly `{"msgId"...` with nothing before → **`bare`** (most likely; the decompiled
        builder shows no prefix).
      - `{"msgId"...` followed by `0a` → **`newline`**.
      - 4 bytes before `{` → **`length32`**; 2 bytes → **`length16`**.
- Fallback without Wireshark: `strace -f -s 4096 -e trace=send,sendto -p "$(pidof RevoMetro.exe)"`
  prints the exact `sendto(..., "…", n)` payload — read the first bytes.
- [ ] Record framing = __________ (bare / newline / length32 / length16)

### Step C — Enumerate `propertyType` IDs (fills unknown #3)
`getProperty`/`setProperty` take an integer `propertyType`.
- [ ] In the same capture, note every `{"msgId":"getProperty","propertyType":N}` /
      `setProperty` and **what you changed in the UI** at that moment (exposure, gain,
      resolution, trigger mode, …). Map N → meaning.
- [ ] (Optional) probe gaps: run the client (Step F) and call `get_property_range(n)` over a
      range to see which N are valid.
- [ ] Record a few confirmed IDs, e.g. `exposure=____, gain=____, resolution=____`.

### Step D — Confirm the frame delimiter (fills unknown #4)
After `startStream` (press **Start** in the app), look at the data stream in Wireshark.
- [ ] If each frame begins with `FF D8` and ends with `FF D9` → **`mjpg_eoi`** (default).
- [ ] If each frame is preceded by a 4-byte length → **`length_header`**.
- [ ] Also note whether data is on the **same socket** as control or a **second** connection.
      (The client currently reads frames on the same socket; if it's a second socket, note the
      second port for a later enhancement.)
- [ ] Record frame_delimiter = __________ ; data socket = same / separate(port=____)

### Step E — Pull the camera params (for point-cloud reprojection)
```bash
adb -s <serial> pull /data/camparam/ ./camparam/
# contains Q.bin, Pl.bin, Prgb.bin, Distort.bin, mapparamL.bin, mapparamR.bin, camparam.yaml
```
- [ ] Pulled to `camparam/` next to this file (or your working dir).

### Step F — Run the client and iterate
```bash
cd artifacts/revo-metro-5.8.8.460
python3 protocol/metrox_rpc.py            # uses device.json
# or override: python3 protocol/metrox_rpc.py <HOST> <PORT> --stream --out frames
```
- [ ] `connect` / `getInfo` / `getStreamInfos` return `code:0`.
- [ ] `--stream` produces `frames/frame_*.mjpg` that are valid MJPG (open in an image viewer;
      or `ffprobe frames/frame_000.mjpg`).

## 5. RECORD THE RESULTS — `protocol/device.json` (this is the "update the code" step)
`metrox_usb.py` and `metrox_rpc.py` **both auto-load** `artifacts/revo-metro-5.8.8.460/protocol/device.json`.
**Editing this file is how results get applied — no code change needed** except the 3 USB stubs
in `metrox_usb.py` (`command()`, framing, depth decode) after the capture.

**USB (primary):**
```json
"usb": {
  "vid": 0x____, "pid": 0x____,
  "control_iface": ___, "data_iface": ___,
  "ctrl_ep_in": ___, "ctrl_ep_out": ___, "data_ep_in": ___,
  "report_id": 0,
  "f_head": null, "xor_offset": 0, "xor_len": null
}
```
- [ ] `vid`+`pid` set   - [ ] `control_iface`+`data_iface` set   - [ ] endpoints set (or `null`)
- [ ] `f_head`/`xor_offset`/`xor_len` set (from A3)   - [ ] `command()` implemented (from A3)

**Network (secondary):**
```json
{
  "host": "<HOST>", "port": <PORT>,
  "framing": "<bare|newline|length32|length16>",
  "response_timeout_ms": 5000,
  "propertyTypes": { "exposure": <N>, "gain": <N>, "resolution": <N> },
  "stream": { "frame_delimiter": "<mjpg_eoi|length_header>" }
}
```
- [ ] `host`+`port` set   - [ ] `framing` set   - [ ] ≥1 `propertyTypes` entry   - [ ] `stream.frame_delimiter` set

### If framing is NOT `bare` (only then, touch the code)
`metrox_rpc.py` already handles all four framings, driven by `device.json`. **No edit needed.**
The only manual code edit is if the wire uses a framing not in that set, or a second data socket:
- [ ] (only if needed) edit `MetroXRPC._send_json` / `_read_json` / `read_frames` in
      `protocol/metrox_rpc.py` to match, and note the change in the results below.

## 6. Acceptance criteria (definition of done)
**USB (primary):**
- [ ] `metrox_usb.py open` succeeds and a `getProperty` round-trips a value that changes in the app.
- [ ] `metrox_usb.py frames --n 10` saves 10 valid frames that decode to a point cloud.
**Network (secondary, if pursued):**
- [ ] `metrox_rpc.py` connects; `getInfo`/`getStreamInfos` return `code:0`.
- [ ] `--stream` saves ≥1 valid MJPG depth frame.
- [ ] (Stretch) depth frame decoded to XYZ points using `camparam/`.

## 7. Safety / do-not
- ⚠️ **Never** send `upgradeFirmware` / `getUpgradeFirmwareProgress` from a client unless you
  intend to flash. A bad image bricks the A/B slot. (Both are in the 34-command set.)
- ⚠️ Keep the stock app + a known-good firmware image handy in case you must re-provision.
- ⚠️ Don't leave the client holding `startStream` open for long — it ties up the scanner.

## 8. Results log (fill in as you go — human + agent)
```
Date: __________
Scanner SN / model: __________
RevoScan version: __________

USB (primary):
  vid:pid = __________ : __________
  control_iface = ____   data_iface = ____
  ctrl_ep_in/out = ____/____   data_ep_in = ____
  report head/magic/type/buflen = __________   xor(off=__,len=__) = ____
  command bytes  getInfo = ____   startStream = ____   getProperty = ____
  depth format = ____ (CPAIR/PMCZ)   decoded OK = y/n

Network (secondary):
  HOST = __________   PORT = __________
  framing = __________   frame_delimiter = __________
  propertyTypes = __________

Notes / anomalies:
  -
  -
Client run output (paste the last ~20 lines):
  -
```

## 9. For the AI agent — precise execution contract
1. **Do not** guess values. Run the real commands (Track A/B steps) and read actual output.
2. **USB first (Track A):** `lsusb` → vid/pid; `lsusb -v` → ifaces/endpoints; passive USBPcap
   capture of the stock app → command bytes + report framing. The device is **exclusive** — never
   run `metrox_usb.py` and the stock app simultaneously. On Windows install the libusb filter
   driver (Zadig) before `metrox_usb.py` can claim a WinUSB interface; on Linux just detach.
3. **Network port (Track B):** the destination port of the PC's `connect()` to the scanner's IP
   (Step A), cross-check `adb shell netstat -tlnp`. Prefer the strace/pktmon value.
4. **Framing**: read the first bytes of a real `sendto`/Wireshark JSON request (Step B). Default
   hypothesis `bare`; only change it if the bytes show otherwise.
5. **Write results** to `artifacts/revo-metro-5.8.8.460/protocol/device.json` (JSON, valid).
   Verify: `python3 -m py_compile protocol/metrox_usb.py` and
   `python3 -c "import json;json.load(open('protocol/device.json'))"`. Then run the client(s):
   `python3 protocol/metrox_usb.py open` (USB) and/or `python3 protocol/metrox_rpc.py <HOST> <PORT>`
   (network) and confirm success / `code:0` responses.
6. **Iterate**: if a command fails, capture the exact request/response bytes, decide the framing
   or a missing handshake field, update `device.json` (or `metrox_rpc.py` if the framing isn't in
   the supported set), and re-run. Log every attempt in Section 7.
7. **Never** issue `upgradeFirmware*`. Stop if the scanner stops responding and report back.
8. Keep edits minimal and scoped to `protocol/` (client + config) unless a finding requires more;
   document any extra edit in Section 7.

---
*Generated from the RE in `artifacts/revo-metro-5.8.8.460/`. Evidence: `analysis/usb/*.c`
(183 decompiled USB functions — device-id parser, I/O layer, WinUSB enumeration, CPAIR decoder)
+ `analysis/cam_protocol/*.c` (network `CameraDeviceRpcClient`/`DeviceDataComTcp`) + the
34-command dispatch table, all from `3DCamera.dll`. Docs: `PROTOCOL-USB.md` (primary) and
`PROTOCOL.md` (secondary).*
