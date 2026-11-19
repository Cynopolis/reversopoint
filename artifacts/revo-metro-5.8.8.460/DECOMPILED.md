# RevoMetro.exe — Ghidra Decompilation (network / OTA / activation layer)

Companion to `ANALYSIS.md`. This file documents **Ghidra 12.1.4 decompilation** of the
main executable's network, OTA, and activation code.

## Method
- The 29.6 MB PE32+ `RevoMetro.exe` was imported and fully auto-analyzed headlessly
  (Ghidra `analyzeHeadless`); ~**70,714 functions** defined (`all_functions.txt`).
- Local C++ symbols are **stripped** (functions are `FUN_<addr>`), so targeting is done
  by **import call-sites**: the addresses in `.text` that call the Qt network imports
  (`QNetworkAccessManager::get/post`, `QNetworkRequest`, `QUrl`) are located, their
  containing functions are decompiled (`cs_*.c`).
- Some functions still carry the original **source path + signature** (recovered from
  embedded comment nodes, e.g. `ui\ota\download\HttpDownload.cpp`).

## The network layer
The app uses **Qt 5 `QNetworkAccessManager`** with a small set of helpers. All outbound
HTTP goes through these (all decompiled, see `cs_*.c`):

| Function | Qt call | Endpoint / role | Source |
|----------|---------|-----------------|--------|
| `FUN_140753740` | `QNetworkAccessManager::post` | **Generic JSON POST** — sets `Content-Type: application/json`, `Accept-Encoding: gzip, deflate, br`, `Accept-Language: zh-CN`, ensures network accessible, wires `finished()`. URL + JSON body passed by the caller. **This is the path the device-activation / telemetry POSTs take** (to `deviceregistration.chishine3d.com/device/active`). | — |
| `FUN_140752580` | `QNetworkAccessManager::get` | **OTA firmware download** handler. Validates URL (`QUrl::isValid`, error `"Error:URL has specify a invalid name."`), processes the reply, drives the A/B-slot firmware download. | `ui\ota\download\HttpDownload.cpp` |
| `FUN_1403ce3a0` | `QNetworkAccessManager::get` | **Device resource download** — `https://ssrstatic.infly3d.com/video/resource_download/device/` (per-device `imgdata.zip`, calibration maps). | — |
| `FUN_1403ce5d0` | `QNetworkAccessManager::get` | **3D model download** — `https://download.revopoint3d.com/model/`. | — |
| `FUN_1403c7c30` | (constructs `QNetworkAccessManager`) | `StartPageWidget` constructor — instantiates the `QNetworkAccessManager`, wires signals; the start page that boots networking/telemetry. | (RTTI: `StartPageWidget::vftable`) |

### Activation (device registration)
- The device-activation request is a **JSON `POST`** to
  `https://deviceregistration.chishine3d.com/device/active` (string in `.rdata`).
- It is issued through the generic POST helper `FUN_140753740` above (the caller sets
  the URL and the JSON body containing the device identity: `sw_sn`, `sn_code`, `guid`,
  `sw_version`, etc.).
- The device serial is persisted obfuscated in `config/activationDeviceSerial.json` /
  `config/supportedDeviceSerial.json` (byte-substitution scheme — see `ANALYSIS.md`).
- Because the app links the network helpers virtually and the binary's call-graph
  resolution is partial under headless analysis, the exact body-builder for the
  activation POST is reached by call-site, not by name; the POST mechanism itself is
  fully captured in `cs_140753740.c`.

### OTA (firmware) update
- Firmware check: `GET https://api.infly3d.com/ota/version/info`.
- Firmware download: `FUN_140752580` (`HttpDownload.cpp`) with **A/B-slot + recovery**
  handling (matches the `RVE_OTA_*` error codes: `package_md5_error`, `a/b slot
  recovery`, `no_network`, upgrade progress).
- Software update check: `GET https://api.infly3d.com/software/version/info`.

## Artifacts
- `cs_*.c` — 60 decompiled functions that make the Qt-network calls (network layer,
  OTA, downloads, plus UI functions that own the managers). Each file has a header
  comment with the function address, size, and the import call-site.
- `all_functions.txt` — all 70,714 function entry points + names.
- `CALLSITE_FUNCS.txt` — index of the 60 functions (address, size, which import called).
- Ghidra scripts: `scripts/RevoDecompile.java`, `RevoCallSites.java` (reusable).

## Limitations
- Symbols stripped → `FUN_<addr>` names; the activation **body-builder** and the exact
  caller of the POST helper are not cleanly resolved under headless analysis (virtual
  dispatch + partial call-graph). Fully naming these requires interactive Ghidra
  navigation (set a breakpoint on `QNetworkAccessManager::post`, watch the URL arg).
- Decompiled code uses Ghidra's default types (`undefined8`, `void **`); pointer
  semantics for the JSON body are inferable but not fully type-recovered.
