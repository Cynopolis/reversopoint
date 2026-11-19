# Revo Metro 5.8.8.460 — Application Analysis

Companion to `README.md` (installer RE + extraction). This file covers the
**extracted application** itself.

## Identity
- **Product:** Revo Metro / RevoScan 5.8.8.460 — 3D metrology (laser) scanner software.
- **Vendor:** inFly3D (Shenzhen inFly3D Technology) — brand "Revo" / "Revopoint".
  Domains: `revopoint3d.com` (.cn/.jp), `infly3d.com`, `chishine3d.com`.
- **Binary:** `app/RevoMetro.exe` — PE32+ x86-64, 29.6 MB, 9 sections, entry `0x1402d77c`,
  subsystem GUI(2), no .NET. SHA256 `66ad2593399e…`. Build timestamp `1789104350`.

## High-level architecture
Qt5 GUI front-end driving a stack of proprietary 3D/scan libraries ("rpalgo" =
*Revo Point Algorithm*, "GPP" = *Geometry Point Processing*, "cs" = camera system),
with OpenSceneGraph for 3D rendering and OpenCV/Assimp for vision & models.

| Layer | Components |
|-------|-----------|
| UI | Qt5 Core/Gui/Widgets, Qt WebEngine (HTML help), WebChannel, Network, Concurrent |
| 3D rendering | OpenSceneGraph 3.6.5 (`osg161-*`), OpenThreads |
| Computer vision | OpenCV 4.8.0 (`opencv_world480`), Assimp (`assimp-vc142-mt`) |
| Geometry / recon (proprietary) | `GPP`, `rpalgo::geometry`, `rpalgo::meshrecon`, `rpalgo::meshproc`, `rpalgo::bridge` |
| Laser / scan (proprietary) | `rpalgo::laser_recon` (GPU multi-laser pipeline), `rpalgo::calib_laser`, `rpalgo::laserautoexposure`, `rpalgo::fusiontracker` |
| Camera (proprietary) | `cs::getCameraPtr`, `cs::getAutoExposure`, `3DCamera.dll`, `cspcpp`, `cscalibration`, `aeSharpnessFineAlgorithm` |
| Texture (proprietary) | `rpalgo::texture` (`RPTScene::generateTexture`), SLAM texturing (`AS::SLAM::TextureUtils`) |
| Registration (proprietary) | `rpalgo::landmark::registration::RegisterLandmark::align` (Eigen + nanoflann KD-tree) |
| Calibration | `rpalgo::calibrationqr::CalibrationQR`, `rpalgo::algokit::FinalInspect` (dumb-gauge final inspection) |
| Hardware | `SimpleBLE` (Bluetooth LE), `SETUPAPI` (USB device enum), `IPHLPAPI` |
| QR | `qzxing` (`QZXing::encodeData`) |
| Export | `export_format` (`rv::IModelExport`) — STL/OBJ/etc. |
| File transfer | in-app file server (error codes `RVE_FS_*`) |
| Network | `libcurl`, `WS2_32`, Qt Network, `SmtpMime` (email) |
| Math / parallel | Eigen, nanoflann, OpenMP (`VCOMP140`/`omp_get_max_threads`) |

Full demangled import map: `analysis/import_map.txt` / `import_map.json`.

## Endpoints (from strings)
| Purpose | URL |
|---------|-----|
| **Device activation / registration** | `https://deviceregistration.chishine3d.com/device/active` |
| OTA (firmware) update check | `https://api.infly3d.com/ota/version/info` |
| Software version / update check | `https://api.infly3d.com/software/version/info` |
| 3D model downloads | `https://download.revopoint3d.com/model/` |
| Device resource downloads (`imgdata.zip`) | `https://ssrstatic.infly3d.com/video/resource_download/device/` |
| Support / docs | `revopedia.revopoint3d.com`, `support.revopoint3d.com`, `forum.revopoint3d.com`, `www.revopoint3d.com(.cn/.jp)` |
| Product/marketing shortlinks | `revo.ink/…` |

## Licensing / activation
- Device identity fields: `sw_sn` (software serial), `sn_code`, `guid`, `activationDeviceSerial`.
- **`config/activationDeviceSerial.json`** and **`config/supportedDeviceSerial.json`**
  store the device serial **obfuscated** (custom byte transform — see below); not plain JSON.
- `expiredTime` string present → trial / expiry handling.
- Activation POSTs to `deviceregistration.chishine3d.com/device/active`.
- Telemetry: `AppTrack` / `Analytics` classes (`AppTrack::~AppTrack`).

### Config obfuscation
Every `config/*.json` + `sdkConfig_win.ini` is obfuscated with the same custom
byte transform. Structural prefix (`{\r\n `) is left intact; the key/value bytes are
permuted (readable fragments survive, e.g. `left`, `param`, `texture`-like tokens),
indicating a byte-substitution scheme rather than plain XOR. The key/schedule is
implemented in the decompiled code (see `analysis/decompiled/`).

## Feature surface (from `RVE_*` error codes, 120+)
- **Scanner control:** connect/disconnect, WiFi mode & params, serial-number (SN) read,
  driver init, stream start/stop/pause, data timeout, version check.
- **OTA firmware update:** A/B slots, recovery mode enter/leave, package MD5 verify,
  network dependency, upgrade start/progress.
- **Scan pipeline:** capture, fuse, mesh, undo/redo, texture (color/UV/SLAM), remove.
- **Geometry:** point-cloud normals, alignment (global registration, overlap rate),
  meshing, hole detection.
- **Calibration:** laser-plane calibration, brightness check, gyro, pitch limits.
- **Projects (`RVE_PRJ_*`):** create/open/save/load/delete/move/convert project files.
- **File server (`RVE_FS_*`):** net connect, server state, transfer session, verify code.

## Hardware / models referenced
- Scanner models in config: `MetroX`, `MetroXPro`, `MetroY`, `MetroYPro`, `MetroYUltra`,
  `Inspire2`, `0L7`, `POP 3`; dual-axis turntable; handheld stabilizer; gyro calibration.
- Brightness/gain/exposure calibration maps per model (`brightnessGainMap_*.json`,
  `gainExposureMap_*.json`, `laser_param_config.json`, `crosswire_param.json`, etc.).

## Analysis artifacts
- `analysis/RevoMetro.exe.txt` — full PE structure + imports + strings of the main exe.
- `analysis/import_map.{txt,json}` — demangled import map (main exe + key DLLs).
- `analysis/intel.{txt,json}` — URLs, RVE codes, licensing/activation/OTA/telemetry strings.
- `analysis/decompiled/` — Ghidra decompilation of the network/OTA/activation layer (60
  functions, `cs_*.c`) + `all_functions.txt` (70,714 functions). Full write-up: **`DECOMPILED.md`**.

## Notes / limitations
- Symbols are stripped (functions named `FUN_<addr>`); activation/OTA code was reached
  by **Qt-network import call-sites** and decompiled headlessly (see `DECOMPILED.md`).
  The exact activation POST body-builder is not cleanly resolved under headless analysis
  (virtual dispatch + partial call-graph) — fully naming it needs interactive Ghidra.
