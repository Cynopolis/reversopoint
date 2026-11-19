#!/usr/bin/env python3
"""Full extraction of the Revo Metro 5.8.8.460 Inno payload.

Reads each file from its solid chunk (A=LZMA, B=stored), reverses the
JMP/CALL optimization for floCallInstructionOptimized PE files, verifies
SHA-256 against meta.json, and writes to the resolved destination path.
"""
import json, os, sys, hashlib, time

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from transform_calls import de_transform

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)                            # .../revo-metro-5.8.8.460
EXTRACT = os.path.join(ROOT, "extract")
META = os.path.join(EXTRACT, "meta.json")
CHUNK_A = "/tmp/chunkA.bin"
CHUNK_B = "/tmp/chunkB.bin"

PREFIX = {
    "{app}": os.path.join(EXTRACT, "app"),
    "{tmp}": os.path.join(EXTRACT, "tmp"),
    "{localappdata}": os.path.join(EXTRACT, "localappdata"),
}


def resolve(dest):
    if not dest:
        return None
    for pfx, base in PREFIX.items():
        if dest.startswith(pfx):
            rel = dest[len(pfx):].lstrip("\\/")
            return os.path.join(base, rel.replace("\\", "/"))
    # unknown prefix -> mirror literally under extract/misc
    base = os.path.join(EXTRACT, "misc")
    return os.path.join(base, dest.replace("\\", "/"))


def main():
    m = json.load(open(META))
    files, locs = m["files"], m["file_locations"]
    A = open(CHUNK_A, "rb")
    B = open(CHUNK_B, "rb")

    t0 = time.time()
    ok = bad = skipped = 0
    badlist = []
    total_bytes = 0
    for fi, f in enumerate(files):
        dest = f["DestName"]
        path = resolve(dest)
        if path is None:
            skipped += 1
            continue
        L = locs[f["LocationEntry"]]
        src = A if L["StartOffset"] == 0 else B
        src.seek(L["ChunkSuboffset"])
        raw = src.read(L["OriginalSize"])
        if L["Flags"] & 4:  # floCallInstructionOptimized
            data = de_transform(raw)
        else:
            data = raw
        if L["SHA256"] and hashlib.sha256(data).hexdigest() != L["SHA256"]:
            bad += 1
            badlist.append(dest)
        os.makedirs(os.path.dirname(path), exist_ok=True)
        with open(path, "wb") as out:
            out.write(data)
        ok += 1
        total_bytes += len(data)

    print("files written: %d (sha-verified %d, mismatch %d, skipped %d)"
          % (ok, ok - bad, bad, skipped))
    print("total bytes: %d (%.2f GB)" % (total_bytes, total_bytes / 1e9))
    print("elapsed: %.1fs" % (time.time() - t0))
    if badlist:
        print("SHA mismatches (%d):" % len(badlist))
        for b in badlist[:20]:
            print("  " + b)
    json.dump({"written": ok, "sha_ok": ok - bad,
               "sha_mismatch": bad, "skipped": skipped,
               "total_bytes": total_bytes, "bad": badlist},
              open(os.path.join(EXTRACT, "extraction_report.json"), "w"), indent=2)


if __name__ == "__main__":
    main()
