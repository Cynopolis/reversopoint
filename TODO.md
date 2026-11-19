# TODO — next steps (beyond the on-device packet capture)

The on-device capture (USB reports / network) is the *gating* step but it's the mechanical half.
The hard, failure-prone half is **turning bytes into a point cloud**, and most of it is
reverse-engineerable **statically, now, without the device**. Run these alongside the capture.

Legend: **[S]** = static (do now, no device) · **[D]** = needs the device.
Confidence: what we know for sure vs. a hypothesis.

---

## 1. Reverse the depth → point-cloud pipeline  **[S] — START HERE**
The crux of "get scan data." Entirely in `3DCamera.dll`.
- **Why:** this is where projects silently die; get `decode_depth()` working on a reference before
  relying on the live device.
- **PROGRESS (Ghidra decompiles done → `DEPTH-DECODE.md` + `analysis/depth/` + `protocol/metrox_depth.py`):**
  - ✅ **Reprojection SOLVED** (`FUN_181325650`): depth→XYZ is a **4×4 projective back-projection**
    `world = (Q · [u/cu, v/cv, z/cz, 1]) / w` — not an iterative solver. `Q` = the "Q matrix" from
    the device. Validity gate NaNs out-of-window depth.
  - ✅ **Batch `featureReconstruct` decompiled** (`FUN_18131fcf0`): loop over valid pixels (RB tree),
    `z = depth[x] - baseline` (**CPAIR base+delta**), reproject, store (X,Y,Z) floats, optionally
    normalize direction (feature path).
  - ✅ Data model + point layout + frame-header field names + format enum documented.
  - ⬜ **Remaining CONFIRM:** CPAIR/PMCZ **byte-packing** (zlib→`[value,baseline]` float arrays) —
    decoders are thunk-gated; best finalized from a live frame vs. the app's PLY. + the Q matrix /
    intrinsics (device, `#6`).
- **Targets (strings/symbols already located):**
  - `processDepthMjpgToCpair`, `processDepthMjpgToPmcz` — MJPG → CPAIR/PMCZ
  - `pmczDataInflaterCallbackBuf` — the zlib inflate (PMCZ is compressed)
  - `featureReconstruct` — the geometry: input `Z16Y8Y8` / `Z16Y8Y8P` → XYZ points
  - depth formats: `CPAIR PMCZ PMLD PPLD PSLD Z16Y8Y8 Z16Y8Y8P`; "CPAIR decoder not
    initialized for streamType:%d"; "pmcz frame data head info incorrect"
  - "Initialize hard decoder for depth MJPG stream (will convert to CPAIR)" (the MJPG decode is a
    library call — standard libjpeg/ffmpeg — you don't need to reverse that part)
- **Also pin:** the per-frame header **field order** (I only have sizes from the `frame data len
  error, …` strings, not order) and what `Z16Y8Y8` (16-bit depth + 2×8-bit) actually is.
- **Confidence:** reprojection + batch loop + data model = SOLVED (decompiled, cross-checked).
  CPAIR/PMCZ byte-packing + Q matrix source = CONFIRM (statically thunk-gated; capture to finalize).
- **Deliverable:** `DEPTH-DECODE.md` spec + `protocol/metrox_depth.py` (`DepthDecoder`, reprojection
  implemented) + decompiled C in `analysis/depth/`.

## 2. Reverse the scan-save pipeline in `RevoMetro.exe`  **[S]**
- **Why:** a **validation oracle** (compare my reconstructed cloud to the app's own output) and a
  known-good **output format** for my library.
- **Targets:** `removeAndSaveFramePoint(Helper)`, `saveMultiFrameData`, and the writers for
  `fuse*.ply`, `fuse_mesh*.ply`, `mesh.ply`, `_mesh.ply`, `.obj`.
- **Payoff:** the app emits **standard PLY/OBJ** → my library can emit the same, and I get
  ground-truth data to validate #1 against.
- **Deliverable:** the intermediate frame/multi-frame data structures + confirm the PLY/OBJ layout
  (so I can both validate and write it).

## 3. Resolve the activation / authorization gate  **[S]**
- **Why:** feasibility risk — if the USB *data* path is gated, a bare client is blocked and the
  "bypass the app" goal may need the activation replicated.
- **Targets:** `cs::AuthorizerManager`, `cs::LicenseAuthorizer`, `cs::WhiteListAuthorizer`,
  `cs::InnerAuthorizer`. Find where `startStream`/the data path invokes the authorizer, and what
  `WhiteListAuthorizer` checks (plausibly the device-SN whitelist = `activationDeviceSerial.json`).
- **Confidence:** the classes exist (high). Whether they gate the USB data path specifically: medium.
- **Deliverable:** a verdict — "USB path is/gated-by X" + what (if anything) a raw client must
  present to pass.

## 4. Close the `propertyType` unknown statically  **[S]**
- **Why:** cut the on-device capture work (A4 / network unknown #3).
- **Targets:** the integer `propertyType` enum used by `getProperty`/`setProperty` (JSON-RPC) and
  the USB `hidGetProperty(N)`/`setHidData(N)` indices — check whether they share one table in the
  DLL. If so, enumerate the IDs statically (exposure, gain, resolution, trigger, …).
- **Confidence:** shared table is a hypothesis (low-medium).
- **Deliverable:** an ID → meaning table in `PROTOCOL.md` / `PROTOCOL-USB.md` (or a note that the
  two paths use different tables).

## 5. ADB as a *read-only* probe  **[D]**
- **Why:** the device is Android; ADB can read the **device-side SDK log** (prints the same
  `hid_read head: head, magic, type, buflen` values — a cross-check that partly replaces USBPcap),
  `netstat` (network path), and pull `/data/camparam/`.
- **Rule:** **read-only** — do not touch device-side control (risk of disturbing state).
- **Deliverable:** device-side trace log + `camparam/` pulled locally.

## 6. Intrinsics are a device dependency  **[D]**
- **Why:** `camparam` (Q.bin, Pl.bin, Distort.bin, mapparamL/R, camparam.yaml) is **not** in the
  app — it comes from the device or server. Needed for reprojection in #1.
- **Action:** `adb -s <serial> pull /data/camparam/ ./camparam/` (one-time).
- **Deliverable:** `camparam/` on disk; feed into the reprojection in #1.

---

## Scope guard — what NOT to do (for now)
- The **network/JSON-RPC** path (secondary — USB is the real data path).
- **Firmware / upgrade** tooling (dangerous, out of scope for "get scan data").
- Full **property-configuration UI** (secondary to getting data flowing first).

## Plan
Run **Track A (USB capture)** in parallel with **#1–#3 (static)**. Get `decode_depth()` working
against a **saved reference PLY** (app output, or a sample scan) before trusting the live device —
so when the capture lands, the only open question is "does the transport match," not "do I
understand the data."

## Status
- [x] (prior) installer extraction, app/USB/network mapping, clients, runbook, git repo
- [~] **#1 depth → point-cloud pipeline** — *reprojection + batch reconstruct SOLVED; CPAIR/PMCZ packing CONFIRM (→ capture)*
- [ ] #2 scan-save pipeline / PLY-OBJ oracle
- [ ] #3 authorization gate verdict
- [ ] #4 propertyType enum
- [ ] #5 ADB read-only probe (device)
- [ ] #6 pull `camparam/` (device)
