// Ghidra headless: two-hop xref resolution for seed strings (string <- data ptr <- code),
// decompile those functions, and dump all function names+addrs for review.
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.Reference;
import java.io.*;
import java.util.*;

public class RevoDecompile extends GhidraScript {
  String OUT = "/config/workspace/test/rea-revopoint/artifacts/revo-metro-5.8.8.460/analysis/decompiled";
  String[] seeds = {"device/active","deviceregistration","api.infly3d.com","infly3d.com",
    "sw_sn","sn_code","sw_version","activationDeviceSerial","download ota complete","OTA",
    "AppTrack","check upgrade","post server fail","expiredTime","snCode"};
  @Override
  public void run() throws Exception {
    File outdir = new File(OUT); if (!outdir.exists()) outdir.mkdirs();
    DecompInterface decomp = new DecompInterface(); decomp.openProgram(currentProgram);
    FunctionManager fm = currentProgram.getFunctionManager();
    Map<Address,String> targets = new LinkedHashMap<>();

    // dump all function names
    PrintWriter fd = new PrintWriter(new FileWriter(new File(OUT, "all_functions.txt")));
    for (Function f : fm.getFunctions(true))
      fd.println(f.getEntryPoint() + "\t" + f.getName());
    fd.close();

    // two-hop xref
    for (String s : seeds) {
      byte[] needle = s.getBytes("UTF-8");
      for (MemoryBlock mb : currentProgram.getMemory().getBlocks()) {
        long len = mb.getSize(); if (len <= 0 || len > 200_000_000) continue;
        byte[] buf = new byte[(int) len]; mb.getBytes(mb.getStart(), buf);
        int idx = find(buf, needle, 0), guard = 0;
        while (idx >= 0 && guard++ < 40) {
          Address a = mb.getStart().add(idx);
          // direct code refs
          for (Reference r : currentProgram.getReferenceManager().getReferencesTo(a)) {
            Function f = fm.getFunctionAt(r.getFromAddress());
            if (f != null) targets.putIfAbsent(f.getEntryPoint(), "xref\"" + s + "\"");
          }
          // two-hop: data pointer holders -> their code refs
          for (Reference r : currentProgram.getReferenceManager().getReferencesTo(a)) {
            Address dp = r.getFromAddress();
            for (Reference r2 : currentProgram.getReferenceManager().getReferencesTo(dp)) {
              Function f = fm.getFunctionAt(r2.getFromAddress());
              if (f != null) targets.putIfAbsent(f.getEntryPoint(), "2hop\"" + s + "\"");
            }
          }
          idx = find(buf, needle, idx + 1);
        }
      }
    }

    PrintWriter idxOut = new PrintWriter(new FileWriter(new File(outdir, "INDEX.txt")));
    idxOut.println("# decompiled " + targets.size() + " functions (two-hop string xrefs)");
    int saved = 0;
    for (Map.Entry<Address,String> e : targets.entrySet()) {
      Function f = fm.getFunctionAt(e.getKey()); if (f == null) continue;
      DecompileResults res = decomp.decompileFunction(f, 180, monitor);
      if (!res.decompileCompleted()) continue;
      String c = res.getDecompiledFunction().getC();
      File of = new File(outdir, f.getEntryPoint().toString().replaceAll("[^0-9a-fA-F]","") + "_" +
        f.getName().replaceAll("[^A-Za-z0-9_.]", "_") + ".c");
      PrintWriter w = new PrintWriter(new FileWriter(of));
      w.println("// " + f.getEntryPoint() + "  " + f.getName() + "   reason: " + e.getValue());
      w.println(c); w.close();
      idxOut.println(f.getEntryPoint() + "  " + f.getName() + "   " + e.getValue());
      saved++;
    }
    idxOut.close(); decomp.dispose();
    println("Saved " + saved + " decompiled functions; dumped all_functions.txt");
  }
  int find(byte[] h, byte[] n, int from){ outer: for(int i=from;i<=h.length-n.length;i++){ for(int j=0;j<n.length;j++) if(h[i+j]!=n[j]) continue outer; return i;} return -1; }
}
