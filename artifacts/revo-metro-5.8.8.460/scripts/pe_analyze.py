#!/usr/bin/env python3
"""Local PE structural + string analyzer (no Ghidra dependency).

Per target binary: sections, imports, exports, resource types, CLR flag,
and classified strings (URLs, email, feature keywords).
Writes pe_analysis.json and prints a readable summary.
"""
import struct, sys, re, json

def u16(b,o): return struct.unpack_from('<H',b,o)[0]
def u32(b,o): return struct.unpack_from('<I',b,o)[0]
def u64(b,o): return struct.unpack_from('<Q',b,o)[0]

def rva2off(secs, rva):
    for _n, vsize, vaddr, rsize, rptr in secs:
        if vaddr <= rva < vaddr + max(rsize,1):
            return rptr + (rva - vaddr)
    return None

def cstr(b,o):
    if o is None: return ""
    e = b.find(b'\0', o)
    return b[o:e if e!=-1 else len(b)].decode('utf-8','replace')

RT_NAMES = {1:"CURSOR",2:"BITMAP",3:"ICON",4:"MENU",5:"DIALOG",6:"STRING",10:"RCDATA",
            14:"VXD",17:"ICONGROUP",24:"GROUP_ICON",25:"GROUP_CURSOR",26:"HTML",
            27:"MANIFEST",30:"VARIABLE",31:"VERSION"}

def parse_pe(fn):
    d = open(fn,'rb').read()
    out = {"file": fn, "size": len(d)}
    if d[:2] != b'MZ':
        out["error"]="not MZ"; return out, d, []
    pe = u32(d,0x3c)
    if d[pe:pe+4] != b'PE\0\0':
        out["error"]="no PE sig"; return out, d, []
    coff = pe+4
    machine, ns, ts, _sym, _nsym, soh, chars = struct.unpack_from('<HHIIIHH', d, coff)
    off = coff+20
    magic = u16(d, off)
    pe32p = (magic==0x20b)
    out.update(machine="0x%04x"%machine,
               pe="PE32+" if pe32p else ("PE32" if magic==0x10b else "0x%x"%magic),
               timestamp=ts, sections_n=ns,
               entry_rva="0x%x"%u32(d, off+16),
               subsystem=u16(d, off+68))
    out["imagebase"] = "0x%x" % (u64(d,off+24) if pe32p else u32(d,off+28))
    dd_off = off + (112 if pe32p else 96)
    ndd = u16(d, off + (108 if pe32p else 92))
    dds = [(u32(d,dd_off+i*8), u32(d,dd_off+i*8+4)) for i in range(ndd)]
    # sections
    secs=[]; so = off + soh   # section table follows the optional header
    for i in range(ns):
        name = d[so:so+8].rstrip(b'\0').decode('ascii','replace')
        vsize,vaddr,rsize,rptr = struct.unpack_from('<IIII', d, so+8)
        secs.append((name,vsize,vaddr,rsize,rptr)); so+=40
    out["sections"] = [{"name":n,"vaddr":"0x%x"%va,"vsize":vs,"raddr":"0x%x"%rp,"rsize":rs}
                       for n,vs,va,rs,rp in secs]

    # imports dd[1]
    imports=[]
    irva,_ = dds[1]
    ioff = rva2off(secs, irva)
    if ioff:
        i=0
        while i<300:
            oft,ts2,fwc,name_rva,iat = struct.unpack_from('<IIIII', d, ioff+i*20)
            if not name_rva: break
            noff = rva2off(secs, name_rva)
            if noff is None: break
            funcs=[]
            src = oft if oft else iat   # OriginalFirstThunk (hint/name) else IAT
            fo = rva2off(secs, src)
            if fo:
                esz = 8 if pe32p else 4   # 64-bit thunk entries in PE32+
                j=0
                while j<30000:
                    hint = u32(d, fo+j*esz)
                    if hint==0: break
                    if hint & 0x80000000: funcs.append("ord_%d"%(hint&0xffff))
                    else:
                        hn = rva2off(secs, hint)
                        funcs.append(cstr(d, hn+2) if hn is not None else "?")
                    j+=1
            imports.append({"dll":cstr(d,noff),"count":len(funcs),"funcs":funcs})
            i+=1
    out["imports"]=imports
    out["import_dlls"]=[x["dll"] for x in imports]

    # exports dd[0]
    erva,_ = dds[0]
    eoff = rva2off(secs, erva)
    if eoff:
        _ts,nm,_dl,_nt,na,nf,er,dr,fr = struct.unpack_from('<IIIIIIIII', d, eoff)
        out["export_name"]=cstr(d, rva2off(secs,nm))
        fo=rva2off(secs,fr); nr=rva2off(secs, u32(d,eoff+24))
        ex=[]
        def su(o): return u32(d,o) if o is not None and 0<=o+4<=len(d) else 0
        for i in range(nf):
            er_rva=su(fo+i*4) if fo is not None else 0
            nm_rva=su(nr+i*4) if nr is not None else 0
            no=rva2off(secs,nm_rva)
            ex.append(cstr(d,no) if no is not None else "ord_%d"%er_rva)
        out["exports_n"]=nf; out["exports"]=ex

    # resources dd[2]
    rrva,rsz = dds[2]
    roff = rva2off(secs, rrva)
    rtypes={}
    if roff and rrva:
        try:
            nNamed=u16(d,roff+12); nId=u16(d,roff+14)
            id_off=roff+16+nNamed*16
            for i in range(nId):
                tid=u32(d,id_off+i*16)&0x7fffffff
                nm=RT_NAMES.get(tid,"T%d"%tid)
                rtypes[nm]=rtypes.get(nm,0)+1
        except Exception as e:
            rtypes={"err":str(e)}
    out["resource_types"]=rtypes
    if len(dds)>14: out["clr_rva"]="0x%x"%dds[14][0]
    return out, d, secs

URL = re.compile(rb'https?://[^\x00"\x27<>\\]{4,200}', re.I)
EMAIL = re.compile(rb'[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Za-z]{2,}')
KW = {
 "licensing": rb'licen[sc]\w*|activat\w*|trial\w*|serial|register\w*|product\s?key|license\s?key|unlock|premium|subscription|\btoken\b|expir\w*|deactivat\w*',
 "cloud":     rb'\bcloud\b|revo(?:point|scan|metro)?\.(?:com|cn|net|io)|\baccount\b|login|sign[\s_-]?in|password|\bserver\b|\bsync\b',
 "update":    rb'\bupdate\b|upgrade|check[\s_-]?for|new\s+version|\bpatch\b',
 "crypto":    rb'sha256|\bmd5\b|\baes\b|\brsa\b|encrypt\w*|decrypt\w*|\bdigest\b|\bhash\w*|\bhmac\b|certificate|\bsign\w*|\bverify\w*',
 "hw":        rb'\bble\b|bluetooth|\busb\b|scanner|camera|laser|hardware|\bserial\s?port\b|\bhid\b|\bdriver\b',
 "security":  rb'admin|elevat|privilege|\buac\b|antivirus|defend|\bhook\b|\bpatch\b|keygen|bypass',
 "api":       rb'/api/|endpoint|\btelemetry\b|beacon|upload|download',
}

def strings(d, minlen=5):
    a = re.findall(rb'[\x20-\x7e]{%d,}'%minlen, d)
    u = [s.decode('utf-16le','replace') for s in re.findall(rb'(?:[\x20-\x7e]\x00){%d,}'%minlen, d)]
    return a, u

def main():
    for fn in sys.argv[1:]:
        r, d, secs = parse_pe(fn)
        if "error" in r:
            print("%s ERROR %s"%(fn,r["error"])); continue
        a,u = strings(d,5)
        flat = b"\n".join(a) + b"\n" + b"".join(s.encode('utf-16le') for s in u)
        kw={}
        for k,pat in KW.items():
            found=re.findall(pat, flat, re.I)
            found=[f[0] if isinstance(f,tuple) else f for f in found]
            hits=sorted(set((x.decode('utf-16le') if b'\x00' in x else x.decode('utf-8','replace')).strip()
                            for x in found))
            kw[k]=hits[:200]
        r["n_ascii"]=len(a); r["n_utf16"]=len(u)
        r["urls"]=sorted(set(x.decode() for x in URL.findall(flat)))[:400]
        r["emails"]=sorted(set(x.decode() for x in EMAIL.findall(flat)))[:200]
        r["kw_counts"]={k:len(v) for k,v in kw.items()}
        r["keywords"]=kw
        json.dump(r, open(os.path.join(os.path.dirname(fn)+"/../analysis", os.path.basename(fn)+".json"),"w"), indent=1, default=str) if False else None
        # print summary
        print("="*90)
        print(fn, "  (%d bytes)"%r["size"])
        print("  %s machine=%s imgbase=%s entry=%s subsys=%d sections=%d ts=%d clr=%s"%(
            r["pe"],r["machine"],r["imagebase"],r["entry_rva"],r["subsystem"],r["sections_n"],r["timestamp"],r.get("clr_rva","-")))
        print("  SECTIONS:")
        for s in r["sections"]:
            print("    %-10s vaddr=%-12s vsize=%-10d raddr=%-12s rsize=%d"%(s["name"],s["vaddr"],s["vsize"],s["raddr"],s["rsize"]))
        print("  IMPORTS (%d dlls):"%len(r["import_dlls"]))
        for x in r["imports"]:
            print("    %-42s %-4d  %s"%(x["dll"],x["count"],(", ".join(x["funcs"][:12]))+(" ..." if x["count"]>12 else "")))
        if r.get("exports_n"):
            print("  EXPORTS %s (%d): %s"%(r.get("export_name"),r["exports_n"],", ".join(r["exports"][:50])))
        print("  RESOURCES:", r["resource_types"])
        print("  STRINGS: ascii=%d utf16=%d  kw=%s"%(r["n_ascii"],r["n_utf16"],r["kw_counts"]))
        if r["urls"]:
            print("  URLs (%d):"%len(r["urls"]))
            for x in r["urls"][:60]: print("    "+x)
        if r["emails"]: print("  EMAILS:", r["emails"])

import os
if __name__=="__main__":
    main()
