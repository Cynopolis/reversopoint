# Confirming the MetroX protocol against the real device

Static analysis nailed the command set, the JSON envelope, and the transport, but three
things are best confirmed with a **live capture** (you have the scanner; this takes a few
minutes). Once confirmed, `metrox_rpc.py` should connect and talk to the device.

## 0. Find the RPC host + port (the main unknown)
The device is an Android box running a WiFi AP. The PC's `DeviceDataComTcp` connects to
`<device_ip>:<port>`.

**Fastest — over ADB (USB):**
```bash
adb devices                      # confirm the scanner shows up
adb -s <serial> shell netstat -tlnp     # LISTEN sockets = the RPC server port(s)
adb -s <serial> shell ip addr            # the AP's IP (e.g. 192.168.3.x)
adb -s <serial> shell ps -A              # the daemon exposing the stream
```
The LISTEN port on the scanner that the PC connects to = the RPC **port**. The AP IP =
**host**.

**Or over the network (no USB):** connect your PC to the scanner's WiFi AP, then:
```bash
# from the PC, watch what RevoScan (3DCamera.dll) connects to:
strace -f -e trace=network -p $(pidof RevoMetro.exe) 2>&1 | grep -iE "connect|sendto"
# or just nmap the AP subnet while the app is running:
nmap -sT 192.168.3.0/24
```

## 1. Capture the exact wire bytes (confirm envelope + framing)
Run the stock Revo Metro app once (so the device is active), and capture the TCP stream:

**Option A — Wireshark (cleanest):**
1. PC joins the scanner's WiFi AP.
2. Wireshark → capture on that interface, filter `tcp.port == <port>`.
3. In RevoScan: connect to the device, then press **Start**.
4. You'll see the JSON requests (`{"msgId":"connect",...}`, `startStream`, ...) and the
   MJPG frame bytes. Confirm:
   - the exact request fields (we have `msgId`+command; check for a version/magic header),
   - the **framing** (newline? 4-byte length prefix? bare JSON?),
   - how **frames** are delimited after `startStream` (length header vs MJPG `FFD8`…`FFD9`).

**Option B — `tcpdump` on the PC:**
```bash
sudo tcpdump -i <ap_iface> -w metrox.pcap 'tcp port <port>'
# ... run the app, then open metrox.pcap in Wireshark
```

**Option C — `strace` the SDK (no packet capture):**
```bash
strace -f -s 4096 -e trace=send,sendto,recv,recvfrom -p $(pidof RevoMetro.exe) 2>&1 \
  | grep -aE "send|recv" | head
```
`send`/`sendto` payloads show the exact request bytes (the JSON), `recv` the responses.

## 2. Enumerate the `propertyType` IDs (control knobs)
`getProperty`/`setProperty` take an integer `propertyType`. To map them:
- With the app running, `strace`/Wireshark the `{"msgId":"getProperty","propertyType":N}`
  exchanges and note which N is used for exposure, gain, resolution, trigger, etc.
- Or call `getPropertyRange` over a range of N and see which return valid results.

## 3. Pull the camera params (for reprojection / point cloud)
Over ADB, no protocol work needed:
```bash
adb -s <serial> pull /data/camparam/ ./camparam/   # Q.bin, Pl.bin, Prgb.bin, Distort.bin,
                                                   # mapparamL.bin, mapparamR.bin, camparam.yaml
adb -s <serial> pull /data/camparam/camparamLR/Q.bin
```
These are the intrinsics/extrinsics/distortion the SDK also fetches via
`getIntrinsics`/`getExtrinsics`/`getDistort`.

## 4. Run the reference client
```bash
python3 protocol/metrox_rpc.py <device_ip> <port>
python3 protocol/metrox_rpc.py <device_ip> <port> --stream --out frames
```
If connect works but the first command fails, the framing or a missing handshake field is
the only thing to fix — the capture from step 1 will show exactly what to change (one line
in `MetroXRPC._send_json` / `_read_json`).

## USB capture (primary path — do this first)
The USB path is where the real data lives. Everything below is fast and needs only the device + USB.

### 1. VID:PID + interface/endpoint map
```bash
lsusb                                  # find the MetroX ->  vid / pid
lsusb -v -d <vid>:<pid> 2>/dev/null | sed -n '/Bus .*Device/,/Device Status/p'
# or:  usbview / lsusb -t   (tree view)
```
Record in `device.json.usb`: `vid`, `pid`, `control_iface` (HID interface, class 3),
`data_iface` (data/WinUSB interface), and the endpoint addresses (`ctrl_ep_in/out`, `data_ep_in`).
Endpoint `bmAttributes`: **2 = interrupt, 3 = bulk**. The data interface is usually bulk; the
control interface is HID/interrupt.

### 2. Raw report dump (pins the framing + command encoding)
```bash
pip install pyusb                # + libusb-1.0-0
# plug in the device, open the stock Revo Metro app, connect + start a scan:
python3 protocol/metrox_usb.py open
python3 protocol/metrox_usb.py dump        # re-run a few times during a scan
python3 protocol/metrox_usb.py frames --n 5 --out frames   # save raw data frames
```
From the `dump` output:
- **Data reports**: the first bytes are the report header (`head, magic, type, buflen`). Find the
  trailing XOR byte(s): for candidate offsets, XOR the header and check it matches the stored byte
  (the SDK logs `xor mismatch ... got=.. exp=..` — same check). Set `usb.f_head/xor_offset/xor_len`.
- **Control reports** (while you change a property / press start in the app): the exact request
  bytes are your command encoding. Mirror them in `metrox_usb.py:command()` (`TRANS_CMD` /
  `GET_COMMON_PARAM`).

### 3. Cross-check with the SDK's own log (no USB analyzer needed)
Enable the SDK TRACE log and it prints the same values:
`hid_read head: head, magic, type, buflen`, `vid=0x.. pid=0x..`, `frame data len error, ...`.
The log can be pulled via the app's log-download UI (the `zxmain`/`cgi`/`dmesg` checkboxes) or
over ADB (`adb pull` of the log dir).

### 4. Depth decode
`frames` saves raw reports; strip the 40-byte frame header, zlib-inflate, decode the MJPG, then
apply the CPAIR/PMCZ packing (depth format `Z16Y8Y8`) to get points. Verify against the stock app's
point cloud. Fix the decode in `metrox_usb.py`.

---

## Security / risk notes
- You're talking to a device you own; the protocol has **no visible auth** on the RPC
  channel (the activation is a separate device-registration step, stored at
  `/data/deviceactive/activation` on the device).
- `upgradeFirmware` / `upgradeFirmwareProgress` are in the command set — do **not** issue
  those in a client unless you intend to flash firmware (a bad image bricks the A/B slot).
- Keep a known-good firmware image and the stock app available in case you need to
  re-provision.
