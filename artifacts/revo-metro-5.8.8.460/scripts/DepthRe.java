import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceManager;
import ghidra.util.task.TaskMonitorAdapter;
import java.io.PrintWriter;
import java.util.LinkedHashSet;
import java.util.Set;

public class DepthRe extends GhidraScript {
  String OUT_DIR = "/config/workspace/test/rea-revopoint/artifacts/revo-metro-5.8.8.460/analysis/depth";

  String[] MARKERS = {
    "recdCamera::featureReconstruct failed",
    "featureReconstruct: get Q mat failed",
    "featureReconstruct: invalid frame data, only support: Z16Y8Y8",
    "ReconstructPoint failed",
    "reconstructing block",
    "matchedFeatureReconstruct",
    "prepare feature points reconstruct",
    "frame data len error,width must large than 2",
    "frame data len error, frame id must large than 4",
    "frame data len error,data length must = than",
    "frame data len is invalidate min requestment",
    "frame data len error,extension data reserved",
    "CPAIR decoder not initialized for streamType",
    "Invalid JPEG data for CPAIR decode",
    "failed to get camera info for CPAIR stream",
    "transform into STREAM_FORMAT_CPAIR",
    "start pair data inflater thread",
    "PMCZ decoder not initialized for streamType",
    "pmcz frame data head info incorrect",
    "start IR PMCZ proccessing",
    "depth data compress rate",
    "getIntrinsics",
    "change to STREAM_FORMAT_PMLD",
    "changeDepStreamFormat",
  };

  String catOf(String m) {
    if (m.contains("Reconstruct") || m.contains("reconstruct")) return "recon";
    if (m.contains("frame data len")) return "framehdr";
    if (m.contains("CPAIR") || m.contains("pair data inflater")) return "cpair";
    if (m.contains("PMCZ") || m.contains("pmcz") || m.contains("IR PMCZ")) return "pmcz";
    if (m.contains("compress rate")) return "inflate";
    if (m.contains("getIntrinsics")) return "intr";
    return "fmt";
  }

  // find all occurrences of needle in hay
  java.util.List<Long> indexOf(byte[] hay, byte[] needle) {
    java.util.List<Long> out = new java.util.ArrayList<Long>();
    if (needle.length == 0 || hay.length < needle.length) return out;
    for (int i = 0; i + needle.length <= hay.length; i++) {
      boolean ok = true;
      for (int j = 0; j < needle.length; j++) { if (hay[i+j] != needle[j]) { ok = false; break; } }
      if (ok) { out.add((long) i); i += needle.length - 1; }
    }
    return out;
  }

  public void run() throws Exception {
    FunctionManager fm = currentProgram.getFunctionManager();
    ReferenceManager refman = currentProgram.getReferenceManager();
    Memory mem = currentProgram.getMemory();
    TaskMonitorAdapter mon = new TaskMonitorAdapter();
    DecompInterface decomp = new DecompInterface();
    decomp.openProgram(currentProgram);

    Set<String> done = new LinkedHashSet<String>();
    PrintWriter index = new PrintWriter(OUT_DIR + "/INDEX.txt");
    index.println("address\tcategory\tbytes\tslug\tmarker");

    MemoryBlock[] blocks = mem.getBlocks();
    // read each readable block once
    byte[][] blockBytes = new byte[blocks.length][];
    Address[] blockStart = new Address[blocks.length];
    int nread = 0;
    for (int b = 0; b < blocks.length; b++) {
      MemoryBlock blk = blocks[b];
      if (!blk.isRead()) continue;
      long sz = blk.getSize();
      if (sz > 64*1024*1024) continue;
      byte[] buf = new byte[(int) sz];
      int got;
      try { got = blk.getBytes(blk.getStart(), buf, 0, (int) sz); } catch (Exception e) { continue; }
      if (got > 0) { blockBytes[b] = java.util.Arrays.copyOf(buf, got); blockStart[b] = blk.getStart(); nread++; }
    }
    println("read " + nread + " blocks");

    for (String marker : MARKERS) {
      byte[] needle = marker.getBytes("UTF-8");
      boolean foundAny = false;
      for (int b = 0; b < blocks.length; b++) {
        if (blockBytes[b] == null) continue;
        for (Long off : indexOf(blockBytes[b], needle)) {
          foundAny = true;
          Address strAddr = blockStart[b].add(off);
          for (Reference r : refman.getReferencesFrom(strAddr)) {
            Address site = r.getFromAddress();
            Function f = fm.getFunctionContaining(site);
            if (f == null) continue;
            String key = f.getEntryPoint().toString();
            if (done.contains(key)) continue;
            done.add(key);
            DecompileResults res = decomp.decompileFunction(f, 180, mon);
            String c = (res != null && res.decompileCompleted()) ? res.getDecompiledFunction().getC() : "// decompile failed";
            String slug = catOf(marker) + "_" + f.getEntryPoint().toString().replace(':', '_') + ".c";
            PrintWriter pw = new PrintWriter(OUT_DIR + "/" + slug);
            pw.println("// " + f.getName() + " @ " + f.getEntryPoint() + "  size=" + f.getBody().getNumAddresses());
            pw.println("// marker: " + marker + "  (string @ " + strAddr + ")");
            pw.println(c);
            pw.close();
            index.println(f.getEntryPoint() + "\t" + catOf(marker) + "\t" + f.getBody().getNumAddresses() + "\t" + slug + "\t" + marker);
            println("  [" + catOf(marker) + "] " + f.getName() + " @ " + f.getEntryPoint() + " (" + f.getBody().getNumAddresses() + " B) <- " + marker);
          }
        }
      }
      if (!foundAny) println("  (no string bytes found for: " + marker + ")");
    }
    index.close();
    println("DONE: " + done.size() + " unique functions -> " + OUT_DIR);
    decomp.dispose();
  }
}
