#!/usr/bin/env python3
"""Parse Inno Setup 6.5.x block-reader region (header area).

Region: file offsets [BLOCK_START, REGION_END)
Block frame (Inno >= 4.0.9):
  u32 crc32(stored_size_bytes)   # covers the following 5 header bytes
  u32 stored_size                # size of the data area BELOW (incl. sub-chunk CRCs)
  u8  compressed                 # 0=stored, 1=LZMA1 (6.5.x)
  data: stored_size bytes, laid out as sub-chunks: [u32 crc32][<=4096 data]...
Output: concatenated decoded streams per block + JSON manifest.
"""
import json, struct, sys, zlib

SRC = "/config/workspace/test/rea-revopoint/RevoMetro-5.8.8.460-windows-x86_64.exe"
BLOCK_START = 0x2BB892A8   # offset0(0x2bb89233)+64(SetupID)+4(encCRC)+49(encHdr)
REGION_END = 0x2BB9E224    # offset_exe
OUT = "/config/workspace/test/rea-revopoint/artifacts/revo-metro-5.8.8.460/extract"

data = open(SRC, "rb").read()
region = data[BLOCK_START:REGION_END]
print(f"region: {len(region)} bytes at {BLOCK_START:#x}")

off = 0
blocks = []
while off < len(region):
    hdr = region[off:off+9]
    if len(hdr) < 9:
        print(f"trailing {len(hdr)} bytes, stopping"); break
    crc, stored_size, comp = struct.unpack_from("<IIB", hdr)
    calc = zlib.crc32(hdr[4:9]) & 0xFFFFFFFF
    ok = (calc == crc)
    area = region[off+9:off+9+stored_size]
    # strip sub-chunk CRCs (4096-byte sub-chunks)
    stream = bytearray()
    i = 0
    sub_ok = True
    while i < len(area):
        n = min(4096, len(area) - i - 4)
        if i + 4 + n > len(area):
            sub_ok = False; break
        scrc, = struct.unpack_from("<I", area, i)
        chunk = area[i+4:i+4+n]
        if (zlib.crc32(chunk) & 0xFFFFFFFF) != scrc:
            sub_ok = False
        stream += chunk
        i += 4 + n
    blocks.append({
        "offset": hex(BLOCK_START + off),
        "header_crc_ok": ok,
        "stored_size": stored_size,
        "compressed": comp,
        "stream_bytes": len(stream),
        "subchunk_crc_ok": sub_ok,
    })
    # write per-block stream
    with open(f"{OUT}/block_{len(blocks)-1}.bin", "wb") as f:
        f.write(bytes(stream))
    off += 9 + stored_size
    if comp == 0 and len(blocks) > 20:
        print("too many blocks, aborting"); sys.exit(1)

with open(f"{OUT}/blocks.json", "w") as f:
    json.dump({"block_start": hex(BLOCK_START), "region_end": hex(REGION_END),
               "blocks": blocks, "remaining_bytes": len(region) - off}, f, indent=1)
print(json.dumps(blocks, indent=1))
print("remaining:", len(region) - off)
