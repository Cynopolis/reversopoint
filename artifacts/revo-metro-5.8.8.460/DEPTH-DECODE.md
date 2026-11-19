# DEPTH-DECODE — MetroX depth → point-cloud pipeline

Reverse-engineered from `3DCamera.dll` (the SDK, 66 MB). Decompiled artifacts in
`analysis/depth/` (Ghidra 12.1.4). This documents the **reconstruction stage**
(depth frame → 3-D points), which is TODO #1 / the critical path for a client that
turns raw USB frames into a point cloud.

## Status

| Stage | Status | Evidence |
|-------|--------|----------|
| Device → depth frame (MJPG, zlib) | SOLVED (strings) | `processDepthMjpgToCpair`, `pmczDataInflaterCallbackBuf` |
| Depth format enum | SOLVED (strings) | `Z16 GRAY PAIR CPAIR PMCZ PMLD PPLD PSLD PRCZ XYZS XZ32 Z16Y8Y8 Z16Y8Y8P I8DS` |
| **Reprojection math (depth → XYZ)** | **SOLVED (decompiled)** | `FUN_181325650` — a 4×4 projective back-projection |
| **Batch reconstruct loop** | **SOLVED (decompiled)** | `FUN_18131fcf0` (`featureReconstruct` body) |
| Depth data model (floats + baseline) | SOLVED (decompiled) | CPAIR = base + per-pixel delta |
| Point storage format | SOLVED (decompiled) | (X, Y, Z) floats |
| Frame header field names / min-sizes | SOLVED (strings) | `frame data len error, <field> must large than N` |
| **CPAIR / PMCZ pixel byte-packing** | **CONFIRM** | decoders are thunk-gated; best finalized from a live capture |
| Q matrix + intrinsics source | CONFIRM (device) | `getIntrinsics` / `get Q mat` — pulled from device |

**Bottom line:** the depth→XYZ math is a *single 4×4 matrix multiply + perspective
divide* (not a per-pixel iterative solver). Once you have the Q matrix (from the
device) and the CPAIR/PMCZ unpacked depth floats (packing to be confirmed by capture),
the point cloud is a few lines of numpy.

---

## 1. Pipeline

```
USB bulk  ─►  frame (40-B header) + payload
              payload is a MJPG depth frame (or maskIR)
                 │
                 ▼  processDepthMjpgToCpair / processDepthMjpgToPmcz
              MJPG decode → CPAIR / PMCZ
                 │  (PMCZ is zlib: pmczDataInflaterCallbackBuf inflates it)
                 ▼  CPAIR/PMCZ decoder  ──►  float depth arrays indexed by (x, y)
                 │                          (base value + per-pixel delta)
                 ▼  cs::recdCamera::featureReconstruct   [L1 = FUN_18131fcf0]
              loop over valid pixels:
                 z = depth[x][y] - baseline          (CPAIR base+delta)
                 (X,Y,Z) = reproject(u, v, z)        [seed = FUN_181325650]
                 store (X,Y,Z); drop if depth invalid (NaN)
                 ▼
              point cloud  (saved by RevoMetro.exe as fuse*.ply / mesh.ply)
```

Call chain (via thunks, found by `E8`/`E9` byte-scan):
`L3 public wrapper (recdCamera::featureReconstruct)` → `L2` → `L1 FUN_18131fcf0`
(batch loop) → `FUN_181325340` (per-point) → `FUN_181325650` (reprojection math).

---

## 2. The reprojection (THE key result) — `FUN_181325650`

Decompiled (`analysis/depth/seed_181325650.c`). Inputs: a context pointer, a **4×4
float matrix `M`** (the "Q matrix", 16 floats, row-major), and three normalized
coordinates. It computes the world point via a projective transform:

```c
// x,y,z are the raw inputs divided by 3 context scalars:
x = u / ctx[0xcc];   y = v / ctx[0xd0];   z = depth / ctx[0xd4];

w  = M[12]*x + M[13]*y + M[14]*z + M[15];                 // 1.0 / w below (DAT_183239460 = 1.0)
X  = (M[0]*x  + M[1]*y  + M[2]*z  + M[3])  / w;
Y  = (M[4]*x  + M[5]*y  + M[6]*z  + M[7])  / w;
Z  = (M[8]*x  + M[9]*y  + M[10]*z + M[11]) / w;

// depth-window validity gate (NaNs the point => caller drops it):
if ( (z - DAT_183257718) <= DAT_183257680 )  Z = -NAN;    // out-of-window depth
```

i.e. `world = (M · [x, y, z, 1]^T) / w` — a standard **homogeneous/projective
back-projection**. `M` is the back-projection (inverse-projection) matrix; it encodes
intrinsics + the depth-to-world scale. It is fetched from the device
(`getIntrinsics`, and `featureReconstruct: get Q mat failed` when absent).

### numpy equivalent (pending only the device's `M` + the 3 scalars + the packing)

```python
import numpy as np
def reproject(M4x4, ctx_u, ctx_v, ctx_z, pts_u, pts_v, depth):
    # pts_u/pts_v/depth: arrays of valid pixels; depth in the CPAIR-unpacked units
    x = pts_u / ctx_u;  y = pts_v / ctx_v;  z = depth / ctx_z
    P = np.stack([x, y, z, np.ones_like(x)], axis=-1)      # (N, 4)
    H = P @ M4x4.T                                          # (N, 4)  [row-major M]
    w = H[:, 3:4]
    xyz = H[:, :3] / w                                      # (N, 3) world
    bad = ((z - OFFSET) <= 0.25)                            # validity gate (constants below)
    xyz[bad] = np.nan
    return xyz
```

---

## 3. Batch reconstruct — `FUN_18131fcf0` (`featureReconstruct`)

Decompiled (`analysis/depth/L1_18131fcf0.c`, 2733 B). Per valid pixel:

```c
z = depthArr[x] - baseline[x];                 // CPAIR base + delta  (fVar26)
reproject(ctx, ctx+0x8c /* M ptr */, x, y, z, &X, &Y, &Z);   // FUN_181325650
store (X, Y, Z) as 3 floats;                    // CONCAT44(X,Y) ; Z
d = sqrt((X-bx)^2 + (Y-by)^2 + (Z-bz)^2);      // distance from a reference point
if (d >= FAR /* DAT_1832224d8 */) { X/=d; Y/=d; Z/=d; }   // normalize direction
else { X = Y = 0; Z = NEAR /* DAT_1832224ec */; }
```

So `featureReconstruct` produces **normalized direction vectors** (feature-based,
for pose/registration), not just a raw dense cloud — the dense cloud is the same
reprojection without the normalization step. Points live in a red-black tree keyed
by pixel x (offset 0x1c = x, 0x19 = red flag).

---

## 4. Data model (from the decompiles)

- **Depth** is stored as **float arrays indexed by x and y** (`*param_2 + x*8`,
  `*param_3 + y*8`), each element a `[float, float]` pair (value + baseline/delta).
  This is the **CPAIR** "pair" format: a base value plus a per-pixel adjustment.
- **Point** = three `float`s (X, Y, Z), stored as `CONCAT44(X, Y)` (8 B) + `Z` (4 B).
- The per-frame valid-pixel set is a **red-black tree** (key = pixel x, `0x1c`).

## 5. Constants (extracted from `.rdata`, Ghidra base `0x180000000`)

| Addr | Value | Role |
|------|-------|------|
| `DAT_183239460` | `1.0` (double) | numerator of the 1/w divide |
| `DAT_183257680` | `0.25` (double) | depth-window compare |
| `DAT_183257718` | `0x47fffff0e0000000` (double) | depth-window offset (exact semantics CONFIRM) |
| `ctx[0xcc]`,`ctx[0xd0]`,`ctx[0xd4]` | runtime floats | normalize u / v / z (from device intrinsics) |
| `DAT_1832224ec`, `DAT_1832224d8` | runtime floats | NEAR / FAR direction-normalize thresholds |

## 6. Frame header (from the `frame data len error, <field> must large than N` strings)

The `frameData` message the decoder validates has these fields (order = a
CONFIRM item; names + min-sizes are from the strings):

`msgId · streamType · dataLen · format · width · height · timestamp · extraInfoLen · tc · md5 · originalFormat`

plus per-field min-size guards (`width > 2`, `frame id > 4`, `data length == <n>`,
`extension data reserved`, …). The 40-byte USB frame header parsed in
`protocol/metrox_usb.py` is `<IIHHIIQQI>` (id, type, width, height, streamFormat,
frameFlag, timestamp, factTimestamp, dataLen).

## 7. Format enum

`Z16, GRAY, PAIR, CPAIR, PMCZ, PMLD, PPLD, PSLD, PRCZ, XYZS, XZ32, Z16Y8Y8, Z16Y8Y8P, I8DS`
(enum values seen in strings: `0x02, 0x03, 0x04, 0x100+`).
`featureReconstruct` only accepts **Z16Y8Y8** (`invalid frame data, only support: Z16Y8Y8`).

## 8. Decompiled functions (`analysis/depth/`)

| File | Addr | Size | Role |
|------|------|------|------|
| `seed_181325650.c` | `0x181325650` | 450 | **reprojection math (4×4)** |
| `seed_181325340.c` | `0x181325340` | 618 | per-point reconstruct |
| `L1_18131fcf0.c` | `0x18131fcf0` | 2733 | **batch `featureReconstruct` loop** |
| `L1_181325900.c` | `0x181325900` | 1127 | alternate per-point variant |
| `L2_181324b80.c` / `L2_181325890.c` | … | 708 / 80 | mid pipeline |
| `L3_181241c30.c` / `L3_18122e020.c` | … | 332 / 338 | public API wrappers (stack cookies) |

## 9. CONFIRM items (next)

1. **CPAIR / PMCZ byte-packing** — how the zlib-inflated (PMCZ) / CPAIR payload bytes
   become the `[value, baseline]` float arrays. Decoders (`processDepthMjpgToCpair`,
   `processDepthMjpgToPmcz`) are thunk-gated. Two ways to close it:
   - *(static)* decompile the decoder by address — need its entry (string xrefs are
     table-indirected; would use a callee scan of the batch loop's data setup).
   - *(capture, preferred)* grab one raw frame via USBPcap, feed it, and match the
     app's saved PLY to pin the exact packing empirically.
2. **Q matrix / intrinsics** — pull from device (`getIntrinsics` + the Q-mat command)
   via the client; not in the app bundle (device-side `/data/camparam/`).
3. **Exact frame-header field order/types** and the **depth-validity window** constants.

---

## cs::recdCamera vtable (found, 2026-07-19)

The depth pipeline is the **`cs::recdCamera`** class. Its vtable (55 methods) was
located at Ghidra `0x18322cd98` by scanning resolved memory for pointer-tables
targeting `.text`. Every entry is a 5-byte `jmp` thunk → the real method.
**All 51 substantive methods are decompiled** → `analysis/depth/vtblNN_<addr>.c`
(index: `VTABLE_RESOLUTION.txt`).

The known reconstruct chain maps to these slots:
| slot | real addr | size | role |
|---|---|---|---|
| 35 | `0x18122e1d0` | 166 | reconstruct wrapper (small) |
| 36 | `0x181241c30` | 332 | reconstruct wrapper (stack cookie) |
| 53 | `0x18122e020` | 338 | reconstruct wrapper (stack cookie) |
| 54 | `0x18122dfa0` | 91  | helper |

## CPAIR/PMCZ decoder — static hunt endpoint

The decoders (`processDepthMjpgToCpair` / `processDepthMjpgToPmcz`) are **among
these 55 methods** but could **not be pinned statically**, via three independent
attempts:
1. **String xrefs** — the log strings ("transform into STREAM_FORMAT_CPAIR",
   "PMCZ decoder not initialized", …) are linked to functions through an **opaque
   integer message-ID catalog**, not address pointers. No 8-byte pointer to any of
   them exists in the image → no xref to build.
2. **Call-graph (up)** — the public entry points are vtable-dispatched; the static
   `featureReconstruct` chain has no direct (E8) callers beyond its own thunks.
3. **Table-entry xref** — the message catalog is indexed, so `getReferencesTo` on
   the string (and on any candidate table slot) yields nothing.

**Conclusion / how to close it:**
- **Reprojection + data model: SOLVED** (above) — this is the conceptually hard part.
- **Exact CPAIR/PMCZ byte-packing: confirm by capture** — grab one raw depth frame
  (USBPcap, Track A), and match it against the stock app's saved PLY. The packing
  (pair stride, baseline source, compression) falls out directly, and it validates
  the solved reprojection end-to-end.
- A data-flow angle remains (the decoder is the vtable method that *writes* the
  float `[value, baseline]` array that `featureReconstruct` *reads*) — doable by
  comparing the 51 decompiled methods, but low-yield vs. a single capture.
