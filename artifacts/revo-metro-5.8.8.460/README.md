# Revo Metro 5.8.8.460 — Installer Reverse-Engineering

## Target
- `RevoMetro-5.8.8.460-windows-x86_64.exe` (734,662,288 bytes)
- Inno Setup 6.5.2 SFX installer (Delphi, PE32 x86), payload appended.
- SHA256: `4d48dcf5e8c631d88731e974c8d96aa140ed244b2ce47981fd1c2a8eb9309b77`

## What it installs
- **Revo Metro 5.8.8.460** (RevoScan / Revo Metro — 3D metrology / scanner software)
- Target dir: `{commonpf64}\Revo Metro`, x64, requires admin.
- 1258 file entries → 1257 files extracted (1 empty-dest dir entry).
- ~1.35 GB uncompressed. Stack: Qt5/Qt WebEngine, OpenCV 4.8, OpenSceneGraph 3.6.5,
  CUDA (cufft64_11, cudart64_12), CERES, glog, libcurl, OpenSSL.

## Extraction method (innoextract NOT used)
Hand-rolled from the Inno 6.5.2 `Shared.Struct.pas` definitions + innoextract
reference for the solid-chunk model.

1. **Loader table** @ file `0xcc368` → OffsetEXE=0x2bb9e224, Offset0 (meta)=0x2bb89233,
   Offset1 (data slice base)=0xcd200.
2. **meta.bin** parsed (header, languages, files, file-locations, etc.) → `extract/meta.json`.
3. **Solid chunks** (base = Offset1 = 0xcd200, each prefixed by `zlb\x1a`):
   - **Chunk A** @ 0xcd200: LZMA1 (lc=3,lp=0,pb=2, dict=8MB), 1235 files, 1.345 GB.
   - **Chunk B** @ 0x2bb282c5: **stored** (uncompressed), 21 files, 388 KB.
4. **JMP/CALL optimization**: PE files carry the `floCallInstructionOptimized`
   (flag bit 2) marker. Inno rewrites CALL(0xE8)/JMP(0xE9) rel32 to the *target
   address* (lower 24 bits) + high-byte sign toggle, for better LZMA ratio.
   Reversed in `scripts/transform_calls.py` (DECODE of Inno `TransformCallInstructions`,
   per 64KB buffer, running offset). After reversal **every file's SHA-256 matches**
   the installer metadata (1257/1257).

## Layout
```
extract/
  meta.json               # full parsed installer metadata (files, paths, hashes, chunks)
  meta.bin                # raw Inno metadata block
  extraction_report.json  # per-run verification stats
  app/                    # {app}  -> 1235 files (RevoMetro.exe + all DLLs/resources)
  tmp/                    # {tmp}  -> 21 files (wizard background images)
  localappdata/           # {localappdata} -> revoscan.cfg.init
scripts/
  parse_meta.py           # meta.bin parser
  transform_calls.py      # JMP/CALL de-optimization
  extract_payload.py      # full extractor + SHA verification
```

## Key binaries (extracted, PE32+ x64, SHA-verified)
| file | size | notes |
|------|------|-------|
| app/RevoMetro.exe | 29.6 MB, 9 sec | main application |
| app/3DCamera.dll | 66.3 MB, 14 sec | camera / 3D engine |
| app/ConversionTool.exe | 2.6 MB | |
| app/ailookWin.exe | 40 KB | |
| app/cufft64_11.dll | 291.8 MB | NVIDIA cuFFT (largest file) |

## Driving the MetroX (live control)
`3DCamera.dll` in the app **is Revopoint's closed-source SDK** ("SDK 3.2.444", `cs::CameraDevice*`).
The MetroX talks to the PC over **USB (primary data path)** and a **network JSON-RPC channel (secondary)**.
Both are reverse-engineered:
- **`PROTOCOL-USB.md`** — **USB protocol (primary)**: WinUSB/HID composite device, discovery by
  VID:PID/MI, overlapped read/write with report-id strip, 40-byte frame header, MJPG/CPAIR depth.
- **`protocol/metrox_usb.py`** — USB Python client (**pyusb**): find/open/claim, report I/O,
  frame parsing, a `--dump` capture mode, and command/decode stubs to finish from a capture.
- **`PROTOCOL.md`** + **`protocol/metrox_rpc.py`** — the network/JSON-RPC path (34 commands, JSON envelope).
- **`protocol/CAPTURE.md`** — capture recipes for **both** paths (USB section first).
- **`HUMAN-TODO.md`** (project base) — the step-by-step runbook: **Track A (USB, primary)** then
  **Track B (network, optional)**, with every command, what to look for, and where to record it.
