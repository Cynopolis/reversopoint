# MetroX scanner ↔ PC protocol (reverse-engineered)

Driver: `3DCamera.dll` in the Revo Metro app — **this is Revopoint's closed-source SDK**
(self-identified as **"SDK 3.2.444"** in its build path, with `[SDK TRACE]`/`[SDK ERROR]`
logging). Class: **`cs::CameraDeviceRpcClient`**.

> Status: command set (34 cmds), JSON envelope, transport and data pipeline are
> **confirmed from Ghidra decompilation of `3DCamera.dll`**. Only the concrete RPC **port**
> and message **framing** need a quick live capture to run the client (see `protocol/CAPTURE.md`).

## Device
- The MetroX is an **Android device** (Allwinner **A3568/H616** SoC —
  `/data/update_3568_ota.img`). It runs its own **WiFi AP** (`hostapd`/`wpa_supplicant`,
  default subnet `192.168.3.x`, e.g. `192.168.3.99`).
- Camera params live **on the device** at `/data/camparam/` (`Q.bin`, `Pl.bin`, `Prgb.bin`,
  `Distort.bin`, `mapparamL.bin`, `mapparamR.bin`, `camparam.yaml`, `LC_RT.bin`,
  `metroExtra.bin`, `calibTemperature.json`); device activation at
  `/data/deviceactive/activation`. All pullable via `adb pull`.

## Transports (PC → scanner)
1. **JSON-RPC over a TCP socket** — primary live-control + data channel
   (`reconnectRpcServer`, `sendAndWaitRsp`, `handleRequest`). This is the one to implement.
2. **USB HID** — `writeReadHid` (alternate/low-level channel; `hidReadHead` frames).
3. **ADB over USB** — `adb devices`/`adb shell`/`adb connect`; shell ops + firmware
   upgrade (`adbUpgrade`/`normalUpgrade`, `acUpgradePackage`).
4. **HTTP file channel** — chunked file transfer to/from the device (logs, files; gzip).

## Wire protocol (JSON-RPC) — envelope CONFIRMED
A request is a single **JSON object** sent on the socket. The **`msgId` field is the
command name** (the server's `RPCServerCamera::handleRequest` dispatches on it); there is no
separate `command` field. Confirmed example (from `setPropertyExtension` builder):
```c
snprintf(buf,0x400,"{\"msgId\":\"setPropertyExtension\",\"valLen\":%d,\"propertyType\":%d}", ...);
```
```
req:  {"msgId":"setPropertyExtension","valLen":1512,"propertyType":1512}
rsp:  {"result":...,"code":0}          // code==0 => ok (0x65646f63 == "code")
```
Other envelope/status fields seen: `result`, `code`, `ret`, `error`, `paramError`,
`message`, `status`, `state`, `dataLen`, `valLen`. `sendAndWaitRsp` sends the request and
blocks (~500 ms default) for the matching response. **Framing** (newline vs length prefix vs
bare JSON) is the one wire detail to confirm by capture.

### Command set — **complete, 34 commands** (dumped from the dispatch table at VA `0x183b9f530`)
```
queryCameras, connect, disconnect, getInfo, getStreamInfos,
startStream, stopStream, getPropertyRange, getProperty, setProperty,
setPropertyExtension, getPropertyExtension, getIntrinsics, getExtrinsics,
getDistort, setUserData, getUserData, upgradeFirmware,
getUpgradeFirmwareProgress, initDriver, readBuffer, writeBuffer,
startProbe, stopProbe, writeReadHid, startIMUCalibration,
getIMUCalibrationState, stopIMUCalibration, setIMUCalibrationDate,
getIMUCalibrationDate, getImuData, autoGetExpouseCtrl,
setInternalProperty, restartRpcService
```
Typical live-control flow: `queryCameras` → `connect` → `initDriver` → `getStreamInfos` →
`startStream` (depth+RGB MJPG begins) → `getImuData`/`getProperty`/`setProperty` (control) →
`getIntrinsics`/`getExtrinsics`/`getDistort` (for reprojection) → `stopStream`/`disconnect`.
**Do not call `upgradeFirmware`** from a client unless flashing firmware (A/B-slot brick risk).

### Property / data fields
`serial`, `firmwareVersion`, `algorithmVersion`, `version`, `cameraType`, `cameraSelect`,
`cameraConnected`, `cameras`, `cameraParam`, `propertyType`, `streamType`, `type`, `name`,
`width`, `height`, `fps`, `triggerMode`, `matchThreshold`, `historicalFrames`,
`frameTime`, `frameData`, `frameCount`, `dataLen`, `dataTooLarge`, `depth`, `parameters`,
`startTime`.

## Data pipeline (depth frames)
`pushFrameStream` → device sends **MJPG-compressed depth** (and RGB) frames →
`processDepthMjpgToCpair` / `processDepthMjpgToPmcz` → zlib **inflate**
(`pairDataInflaterCallbackBuf` / `pmczDataInflaterCallbackBuf`) → decode → point cloud.
(`cpair` = color pair; `pmcz` = point-cloud format.) So the live depth stream is
MJPG-in-a-JSON/binary payload, inflated and decoded on the PC.

## `cs::CameraDeviceRpcClient` client API (confirmed)
`initDevice`, `reconnectRpcServer`, `sendAndWaitRsp`, `handleRequest`, `startStream`,
`pushFrameStream`, `getProperty`, `setProperty`, `getPropertyRange`,
`getPropertyExtension`, `setPropertyExtension`, `getIntrinsics`, `getExtrinsics`,
`getDistort`, `getStreamInfos`, `processDepthMjpgToCpair`, `processDepthMjpgToPmcz`,
`writeReadHid`, `pairDataInflaterCallbackBuf`, `pmczDataInflaterCallbackBuf`.

## Confirmed vs. to-confirm
Confirmed (static): JSON-RPC transport, envelope (`msgId`=command), all 34 commands,
response fields, MJPG+zlib depth pipeline, camera-param paths on the device.
To confirm by a quick live capture (you have the device — `protocol/CAPTURE.md`):
- [ ] RPC **port** (a code constant behind a virtual call; `adb shell netstat -tlnp`).
- [ ] Message **framing** (newline / length prefix / bare JSON).
- [ ] **`propertyType` ID map** (which int = exposure/gain/resolution/trigger/...).
- [ ] How **frames** are delimited after `startStream` (length header vs `FFD8`…`FFD9`).

## Artifacts
- `protocol/metrox_rpc.py` — reference Python client (TCP + JSON-RPC, all 34 commands,
  framing-agnostic reader, MJPG frame reader). Plug in host+port and run.
- `protocol/CAPTURE.md` — step-by-step recipe to confirm port/framing/property IDs on the
  real device (ADB / Wireshark / strace) + pull the camera params.
