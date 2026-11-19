#!/usr/bin/env python3
"""Save a clean demangled import map for target PE(s) to JSON + readable txt."""
import sys, os, json, subprocess
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from pe_analyze import parse_pe
from msdemangle import demangle_ms

def demangle(n):
    if n.startswith('?'):
        d = demangle_ms(n)
        return d if d != n else n
    if n.startswith('_Z'):
        r = subprocess.run(['c++filt', n], capture_output=True, text=True)
        d = r.stdout.strip()
        return d if d and d != n else n
    return n

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
out = {}
for fn in sys.argv[1:]:
    r, d, secs = parse_pe(fn)
    if "error" in r: continue
    m = {}
    for imp in r["imports"]:
        m[imp["dll"]] = [demangle(x) for x in imp["funcs"]]
    out[os.path.basename(fn)] = m

base = os.path.join(ROOT, "analysis")
json.dump(out, open(os.path.join(base, "import_map.json"), "w"), indent=1)

# readable
lines = []
for fn, m in out.items():
    lines.append("="*90); lines.append(fn)
    for dll in sorted(m, key=lambda k: -len(m[k])):
        funcs = m[dll]
        lines.append("  %-38s %4d"%(dll, len(funcs)))
        for f in funcs[:25]:
            lines.append("      "+f)
        if len(funcs) > 25: lines.append("      ... +%d more"%(len(funcs)-25))
open(os.path.join(base, "import_map.txt"), "w").write("\n".join(lines))
print("\n".join(lines))
