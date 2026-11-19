#!/usr/bin/env python3
"""Pull high-value intel strings from the extracted binaries and save JSON + text.
Covers: URLs, RVE_* error codes, config/serial keys, licensing/activation,
OTA/update, telemetry, and demangled-namespace survey."""
import re, os, json, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))   # revo-metro-5.8.8.460
APP  = os.path.join(ROOT, "extract", "app")

def strings_of(path, minlen=4):
    try: d = open(path,'rb').read()
    except: return b""
    a = b"\n".join(re.findall(rb'[\x20-\x7e]{%d,}'%minlen, d))
    u = b"".join(s.encode('utf-16le') for s in
                 (x.decode('utf-16le','replace') for x in re.findall(rb'(?:[\x20-\x7e]\x00){%d,}'%minlen, d)))
    return a + b"\n" + u

URL   = re.compile(rb'[a-zA-Z][a-zA-Z0-9+.-]*://[^\x00"\'<>\\{}\s]{4,200}', re.I)
RVE   = re.compile(rb'RVE_[A-Z0-9_]{3,60}')
KEY   = re.compile(rb'\b(?:sw_sn|sw_version|sn_code|serial|device_serial|machine_code|hwid|hardware_id|guid|product_key|license_key|activation|activat\w*|trial\w*|expire\w*|token|auth\w*|license)\b', re.I)
OTA   = re.compile(rb'(?i)\bota\b|upgrade|update|version/info|slot|download.*complete|firmware')
TEL   = re.compile(rb'(?i)telemetry|beacon|apptrack|track|analytics|stat\b|upload|report')
ACT   = re.compile(rb'(?i)activat|register|device/active|bind|verify.*licen|trial|unlock|premium|subscription')

targets = sys.argv[1:] or [os.path.join(APP, f) for f in os.listdir(APP) if f.lower().endswith(('.exe','.dll'))]
intel = {}
for t in targets:
    fn = os.path.basename(t)
    blob = strings_of(t)
    if not blob: continue
    def grab(pat, limit=300, dec='utf-8'):
        return sorted(set((x.decode(dec,'replace') if isinstance(x,bytes) else x).strip() for x in pat.findall(blob)))
    intel[fn] = {
        "urls":   grab(URL),
        "rve_codes": grab(RVE),
        "licensing_keys": grab(KEY, 200),
        "activation": grab(ACT, 200),
        "ota_update": grab(OTA, 200),
        "telemetry": grab(TEL, 150),
    }

json.dump(intel, open(os.path.join(ROOT,"analysis","intel.json"),"w"), indent=1, ensure_ascii=False)

# curated text
out=[]
all_urls=set(); all_rve=set()
for fn,d in intel.items():
    all_urls|=set(d["urls"]); all_rve|=set(d["rve_codes"])
    if any(len(v) for v in d.values()):
        out.append("="*90); out.append(fn)
        for k in ("urls","activation","licensing_keys","ota_update","telemetry","rve_codes"):
            if d[k]:
                out.append("  %s (%d):"%(k,len(d[k])))
                for x in d[k][:60]: out.append("    "+x)
out.insert(0, "### ALL URLS across binaries ###")
for u in sorted(all_urls): out.append("  "+u)
out.append("\n### ALL RVE_ ERROR CODES ###")
for c in sorted(all_rve): out.append("  "+c)
open(os.path.join(ROOT,"analysis","intel.txt"),"w").write("\n".join(out))
print("\n".join(out[:200]))
