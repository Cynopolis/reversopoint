# MetroX USB Protocol — reverse-engineered from `3DCamera.dll`

This documents the **USB** control + data path (the primary path for the MetroX),
separate from the network/JSON-RPC path in `PROTOCOL.md`. All findings below are from
static analysis (Ghidra) of `extract/app/3DCamera.dll` (Revopoint's closed "SDK 3.2.444",
class `cs::CameraDevice*`). Decompilation evidence is in `analysis/usb/`.

**Status:** architecture, discovery, I/O model, and the frame-header shape are **confirmed**.
A handful of byte-level details (report framing, command encoding, exact interface/endpoint
assignment, VID:PID value) are behind **virtual dispatch + stripped symbols** and are
**not recoverable by pure static analysis** — they're marked **CONFIRM** and each has a 1-2
minute way to grab it on the real device (see `protocol/CAPTURE.md`, USB section).

---

## 1. Device architecture (CONFIRMED)

The MetroX is a **composite USB device** with at least two interfaces:

| Interface | Role | Evidence |
|-----------|------|----------|
| **Control (HID)** | commands, properties, IMU, calibration | every `get*/set*` "successful **from hid**"; `hid read head in TRANS_CMD`; `HID get InternalData Type`; `hid write get_IMUData cmd` |
| **Data (WinUSB / 2nd interface)** | the depth/RGB frame stream | `deviceDataComUsbWin[recv]: thread ... totalBytes`; `hid_read head: head, magic, type, buflen`; `get device env temperature (USB)` |

- Discovered by **enumerating the WinUSB class** `6bdd1fc6-810f-11d0-bec7-08002be2092f`
  (`u_1812cef50.c`) and matching **VID:PID** (`find revo devices` / `find zx devices`).
- It is a **HID-style** device: reads strip a **leading report-id byte (0x00)** from every
  report (`io_1812bfff0.c`: `if (*_Src == 0) memcpy(dst, _Src+1, ...)`).

### 1.1 Device discovery (CONFIRMED — `one_1812d0200.c`)
The SDK takes the Windows USB **instance id** `USB\VID_xxxx&PID_xxxx&MI_xx\...` and parses:
- **VID** = 4 hex digits after `VID_`
- **PID** = 4 hex digits after `PID_`
- **MI** = 2 hex digits after `MI_` → the **USB interface number** (this is how it picks
  control vs data interface)
- **serial** = the remainder (used to filter the "2nd interface")

> For a Python/libusb client you don't need the string — just match `idVendor`/`idProduct`
> and use the interface numbers. **VID:PID = CONFIRM via `lsusb`.**

## 2. Low-level I/O (CONFIRMED — `io_1812bfff0.c` read, `io_1812c0310.c` write)
The bundled **hidapi Win32 backend** opens the device handle (`CreateFileW` on the symbolic
link) and uses **overlapped (async) `ReadFile`/`WriteFile`**:
- **Read**: `ResetEvent → ReadFile(handle, buf, maxInputLen, &got, &ovl)`; if pending,
  `WaitForSingleObject(evt, timeout)` then `GetOverlappedResult`; on error `CancelIo`.
  On success the **first byte (report id 0x00) is stripped** and the rest returned.
- **Write**: buffer is **padded to `maxOutputReportLength`** with zeros, then
  `WriteFile → (if pending) WaitForSingleObject(5000) → GetOverlappedResult`.

> Python equivalent: `pyusb` `dev.read(ep, len, timeout)` / `dev.write(ep, data, timeout)`.
> Keep the **report-id byte** handling: send `0x00 + payload`, receive and drop the first byte.

## 3. Report framing (CONFIRM)
Each data report carries a small header. The SDK logs it as
`hid_read head: head, magic, type, buflen` and validates a **byte-wise XOR checksum**
(`[deviceDataParser] xor mismatch at off=%d got=0x%02x exp=0x%02x hdr_len=%u`).
So a report = `[header: head | magic | type | buflen | … | xor] + payload`.
**Exact field widths + XOR byte order/seed = CONFIRM** (one `--dump` session + the SDK TRACE log).

## 4. Per-frame header (CONFIRMED shape — 40 bytes)
The SDK validates the frame payload field-by-field (`frame data len error, …` strings).
Field **sizes** are confirmed from the min-length checks; **order** is the natural order and
should be CONFIRMED once:

```
offset  size  field           (min-check in the SDK)
0       4    frame id         "frame id must large than 4"
4       4    frame type       "frame type must large than 4"
8       2    width            "width must large than 2"
10      2    height           "height must large than 2"
12      4    stream format    "stream format must large than 4"
16      4    frame flag       "frame flag must large than 4"
20      8    timestamp        "timestamp must large than 8"
28      8    fact timestamp   "fact timestamp must large than 8"
36      4    data length      "data length …"
(= 40)  +    [IMU/gyro extension, when present]:
             ax/ay/az, gx/gy/gz, mx/my/mz, q0..q3, score,
             key(level,num,reserved,time), timestamp
```
`<IIHHIIQQI` = 40 bytes (used by `metrox_usb.py:parse_frame_header`).

## 5. Depth / RGB data (CONFIRMED shape)
- **Depth** arrives as **MJPG**, zlib-inflated, in one of the SDK's packed formats
  `CPAIR`, `PMCZ`, `PMLD`, `PPLD`, `PSLD` (`processDepthMjpgToCpair`,
  `start IR PMCZ proccessing`, `transform into STREAM_FORMAT_CPAIR`). Feature reconstruction
  expects **`Z16Y8Y8`** (16-bit depth + two 8-bit planes).
- **RGB** is MJPG → `start mpeg decode to RGB8 thread` / RGBA.
- The exact CPAIR/PMCZ pixel packing = **CONFIRM** (decode one captured frame and diff against
  the SDK's output, or decompile the CPAIR decoder with the device's data present).

## 6. Commands / properties (surface CONFIRMED; report encoding CONFIRM)
The 34-command surface (in `PROTOCOL.md`) is reachable over USB. On the wire it's HID reports;
the SDK logs e.g. `HID EXE hidInteraction TRANS_CMD: %s`, `hid write get_IMUData cmd`,
`hid write start_IMUCalibration cmd`, and `set PROPERTY_EXT_WRITE_READ_HID`. Property getters
are per-property HID feature/property reads (`hidGetProperty (N)` / `setHidData (N-…)`).
**The exact per-command report byte layout = CONFIRM** via a `--dump` capture of the stock app.

## 7. What the Python client (`protocol/metrox_usb.py`) does today
- **Works now (confirmed logic):** find by VID:PID, detach kernel driver, claim interfaces,
  auto-pick interrupt/bulk endpoints, read/write reports **with report-id handling**, parse the
  40-byte frame header, read+save raw data frames, and a **`--dump` capture mode**.
- **Placeholder (needs the capture):** the per-command report encoding (`command()`), the
  report framing XOR, and the CPAIR/PMCZ pixel decode. These are isolated to a few clearly-
  marked functions.

## 8. Close the gap (the CONFIRM items) — `protocol/CAPTURE.md` USB section
1. `lsusb` → **VID:PID**. `lsusb -v` → **interface numbers (MI)** + endpoint addresses +
   classes (which interface is HID vs WinUSB/bulk).
2. Fill `device.json["usb"]` (vid, pid, control_iface, data_iface, endpoints).
3. `python3 protocol/metrox_usb.py dump` **while the stock app streams** → log the exact
   control requests + data reports. From that, pin: report framing (head/magic/type/buflen +
   XOR) and the command/property encoding. The SDK's own `[SDK TRACE]` log
   (`hid_read head: head, magic, type, buflen`, `vid=0x.. pid=0x..`) prints the same values —
   enable SDK tracing (see CAPTURE.md) for a cross-check without a USB analyzer.
4. Update `metrox_usb.py` (`command()`, framing, depth decode) with the captured bytes.

## 9. Safety
- The USB path exposes `upgradeFirmware` / `readBuffer` / `writeBuffer` / `writeReadHid`.
  **Do not** issue firmware-upgrade or raw buffer-write commands from a client unless you mean
  to (a bad image bricks the A/B slot). Keep the stock app + a known-good image available.
- Detaching the kernel driver (`detach_kernel_driver`) on Windows may need the stock app closed
  and, for WinUSB, the `libusb-win32` filter driver installed for the device (Linux is fine).
