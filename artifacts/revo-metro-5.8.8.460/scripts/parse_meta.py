#!/usr/bin/env python3
"""Inno Setup 6.5.2 metadata parser — full sections, position-tracked.
Output: JSON with header, files (dest + location ref), file_locations, icons, registry.
"""
import json, struct, sys
D = "/config/workspace/test/rea-revopoint/artifacts/revo-metro-5.8.8.460/extract/"
data = open(D+"meta.bin","rb").read()
OUT = D+"meta.json"
pos=0; N=len(data)
def take(n):
    global pos
    b=data[pos:pos+n]
    if len(b)!=n: raise SystemExit(f"take({n}) failed at {pos:#x} (end {N:#x})")
    pos+=n; return b
u8 = lambda: take(1)[0]
i16=lambda: struct.unpack("<h",take(2))[0]
u16=lambda: struct.unpack("<H",take(2))[0]
i32=lambda: struct.unpack("<i",take(4))[0]
u32=lambda: struct.unpack("<I",take(4))[0]
i64=lambda: struct.unpack("<q",take(8))[0]
def ustr():
    n=i32()
    if n> (N-pos): raise SystemExit(f"ustr len {n} @ {pos-4:#x} OOB")
    s=take(n).decode("utf-16-le"); return s
def astr():
    n=i32()
    if n> (N-pos): raise SystemExit(f"astr len {n} @ {pos-4:#x} OOB")
    return take(n).decode("latin1")
def ver(): u32();u32();u16()

HDR_USTR=["AppName","AppVerName","AppId","AppCopyright","AppPublisher","AppPublisherURL",
"AppSupportPhone","AppSupportURL","AppUpdatesURL","AppVersion","DefaultDirName","DefaultGroupName",
"BaseFilename","UninstallFilesDir","UninstallDisplayName","UninstallDisplayIcon","AppMutex",
"DefaultUserInfoName","DefaultUserInfoOrg","DefaultUserInfoSerial","AppReadmeFile","AppContact",
"AppComments","AppModifyPath","CreateUninstallRegKey","Uninstallable","CloseApplicationsFilter",
"SetupMutex","ChangesEnvironment","ChangesAssociations","ArchitecturesAllowed",
"ArchitecturesInstallIn64BitMode","CloseApplicationsFilterExcludes","SevenZipLibraryName"]
HDR_ASTR=["LicenseText","InfoBeforeText","InfoAfterText","CompiledCodeText"]
COUNTS=["NumLanguageEntries","NumCustomMessageEntries","NumPermissionEntries","NumTypeEntries",
"NumComponentEntries","NumTaskEntries","NumDirEntries","NumISSigKeyEntries","NumFileEntries",
"NumFileLocationEntries","NumIconEntries","NumIniEntries","NumRegistryEntries",
"NumInstallDeleteEntries","NumUninstallDeleteEntries","NumRunEntries","NumUninstallRunEntries"]

hdr={}
for n in HDR_USTR: hdr[n]=ustr()
for n in HDR_ASTR: hdr[n]=astr()
for n in COUNTS: hdr[n]=i32()
hdr["MinVersion"]=ver(); hdr["OnlyBelowVersion"]=ver()
hdr["WizardStyle"]=u8()
hdr["WizardSizePercentX"]=i32(); hdr["WizardSizePercentY"]=i32()
hdr["WizardImageAlphaFormat"]=u8()
hdr["WizardImageBackColor"]=i32(); hdr["WizardSmallImageBackColor"]=i32()
hdr["ExtraDiskSpaceRequired"]=i64()
hdr["SlicesPerDisk"]=i32()
hdr["UninstallLogMode"]=u8(); hdr["DirExistsWarning"]=u8(); hdr["PrivilegesRequired"]=u8()
hdr["PrivilegesRequiredOverridesAllowed"]=u8()
hdr["ShowLanguageDialog"]=u8(); hdr["LanguageDetectionMethod"]=u8()
CM={0:"stored",1:"zip",2:"bzip",3:"lzma",4:"lzma2",5:"zstd"}
hdr["CompressMethod"]=CM.get(u8(),"?%d"%u8() if False else "?")
# NOTE: CompressMethod consumed once above via .get? re-do cleanly:
# (re-parse safe: we already consumed it) 
hdr["DisableDirPage"]=u8(); hdr["DisableProgramGroupPage"]=u8()
hdr["UninstallDisplaySize"]=i64()
hdr["Options"]=take(6)  # 43 flags -> 6 bytes
HEND=pos
print("header end:", hex(HEND), file=sys.stderr)

def sec(name, p): print(f"  [{name}] start {p:#x}", file=sys.stderr)

# Language (2)
for i in range(hdr["NumLanguageEntries"]):
    nm=ustr(); ln=ustr(); df=ustr(); tf=ustr(); wf=ustr(); cf=ustr()
    dat=astr(); lt=astr(); ib=astr(); ia=astr()
    lid=u32(); dfont=i32(); tfont=i32(); wfont=i32(); cfont=i32(); rtl=u8()
print("lang done:", hex(pos), file=sys.stderr)
# CustomMessage (52): 2 ustr + i32
for i in range(hdr["NumCustomMessageEntries"]): ustr();ustr();i32()
print("custommsg done:", hex(pos), file=sys.stderr)
# Permission (0)
for i in range(hdr["NumPermissionEntries"]): astr()
# Type (0)
for i in range(hdr["NumTypeEntries"]): ustr();ustr();ustr();ustr();ver();ver();u8();u8();i64()
# Component (0)
for i in range(hdr["NumComponentEntries"]):
    ustr();ustr();ustr();ustr();ustr();i64();i32();u8();ver();ver();u8();i64()
# Task (1): 6 ustr + i32 + bool + 2ver + 1B
for i in range(hdr["NumTaskEntries"]):
    ustr();ustr();ustr();ustr();ustr();ustr();i32();u8();ver();ver();u8()
print("task done:", hex(pos), file=sys.stderr)
# Dir (17): 7 ustr + i32 + 2ver + i16 + 1B
for i in range(hdr["NumDirEntries"]):
    ustr();ustr();ustr();ustr();ustr();ustr();ustr();i32();ver();ver();i16();u8()
print("dir done:", hex(pos), file=sys.stderr)
# ISSigKey (0)
for i in range(hdr["NumISSigKeyEntries"]): ustr();ustr();ustr()

# File (1258)
files=[]
for i in range(hdr["NumFileEntries"]):
    f={"SourceFilename":ustr(),"DestName":ustr(),"InstallFontName":ustr(),
       "StrongAssemblyName":ustr(),"Components":ustr(),"Tasks":ustr(),"Languages":ustr(),
       "Check":ustr(),"AfterInstall":ustr(),"BeforeInstall":ustr(),"Excludes":ustr(),
       "DownloadISSigSource":ustr(),"DownloadUserName":ustr(),"DownloadPassword":ustr(),
       "ExtractArchivePassword":ustr()}
    f["Verification"]= {"ISSigAllowedKeys":astr(), "Hash":take(32).hex(), "Typ":u8()}
    f["MinVersion"]=ver(); f["OnlyBelowVersion"]=ver()
    f["LocationEntry"]=i32(); f["Attribs"]=i32(); f["ExternalSize"]=i64()
    f["PermissionsEntry"]=i16(); f["Options"]=take(5); f["FileType"]=u8()
    files.append(f)
print("file done:", hex(pos), "count", len(files), file=sys.stderr)
sec("icon", pos)
# Icon (2): 13 ustr + 16B guid + 2ver + i32 IconIndex + i32 ShowCmd + u8 CloseOnExit + u16 HotKey + 1B opts
icons=[]
for i in range(hdr["NumIconEntries"]):
    ic=[ustr() for _ in range(13)]
    g=take(16); ver(); ver(); iconindex=i32(); showcmd=i32(); closeonexit=u8(); hotkey=u16(); opts=u8()
    icons.append({"fields":ic,"guid":g.hex(),"showcmd":showcmd,"iconindex":iconindex,"hotkey":hotkey})
print("icon done:", hex(pos), file=sys.stderr)
# Ini (0)
for i in range(hdr["NumIniEntries"]):
    [ustr() for _ in range(10)]; ver(); ver(); u8()
# Registry (14): 3 ustr + 6 ustr + 2ver + i32 + i16 + u8 + 2B opts
regs=[]
for i in range(hdr["NumRegistryEntries"]):
    r=[ustr() for _ in range(9)]
    ver(); ver(); root=i32(); perm=i16(); typ=u8(); opts=u16()
    regs.append({"fields":r,"root":root,"typ":typ})
print("registry done:", hex(pos), file=sys.stderr)
# InstallDelete(0) UninstallDelete(0) Run(0) UninstallRun(0)
for i in range(hdr["NumInstallDeleteEntries"]): [ustr() for _ in range(7)];ver();ver();u8()
for i in range(hdr["NumUninstallDeleteEntries"]): [ustr() for _ in range(7)];ver();ver();u8()
for i in range(hdr["NumRunEntries"]): [ustr() for _ in range(13)];ver();ver();i32();u8();u16()
for i in range(hdr["NumUninstallRunEntries"]): [ustr() for _ in range(13)];ver();ver();i32();u8();u16()

print("primary sections (through runs) end:", hex(pos), "(wizard images fill gap to file-loc)", file=sys.stderr)

# File locations live in the SECONDARY stream = last (NumFileLocationEntries * 89) bytes of meta.bin
FLO = 89  # 6.5.2: 4+4+8+8+8+8+32+8+4+4+1
fl_start = N - hdr["NumFileLocationEntries"]*FLO
print("file-location start:", hex(fl_start), "(gap for wizard images:", hex(fl_start-pos), "bytes)", file=sys.stderr)
pos = fl_start
locs=[]
for i in range(hdr["NumFileLocationEntries"]):
    L={"FirstSlice":i32(),"LastSlice":i32(),"StartOffset":i64(),"ChunkSuboffset":i64(),
       "OriginalSize":i64(),"ChunkCompressedSize":i64(),"SHA256":take(32).hex(),
       "SourceTimeStamp":(u32(),u32()),"FileVersionMS":u32(),"FileVersionLS":u32(),"Flags":u8()}
    locs.append(L)
print("fileloc done:", hex(pos), "count", len(locs), file=sys.stderr)
assert pos==N, "file locations should end exactly at EOF"

def _b(o): return o.hex() if isinstance(o,bytes) else (list(o) if isinstance(o,tuple) else o)
def _clean(o):
    if isinstance(o,dict): return {k:_clean(v) for k,v in o.items()}
    if isinstance(o,list): return [_clean(v) for v in o]
    return _b(o)
json.dump(_clean({"header":hdr,"header_end":HEND,"fileloc_start":fl_start,"consumed":pos,"total":N,
           "files":files,"file_locations":locs,"icons":icons,"registry":regs}),
          open(OUT,"w"), indent=1)
print("wrote", OUT)
# summary
import collections
ext=collections.Counter()
for f in files:
    dn=f["DestName"]
    ext[dn.rsplit("\\",1)[-1].rsplit(".",1)[-1].lower() if "." in dn.rsplit("\\",1)[-1] else '']+=1
print("file count:", len(files), " top ext:", ext.most_common(12), file=sys.stderr)
maxend=max(l["ChunkSuboffset"]+l["OriginalSize"] for l in locs)
print("solid block decompressed size:", maxend, "sum OrigSize:", sum(l["OriginalSize"] for l in locs), file=sys.stderr)
