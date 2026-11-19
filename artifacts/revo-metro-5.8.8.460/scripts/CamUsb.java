import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSpace;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class CamUsb extends GhidraScript {
  long[] MARKERS = {
    0x18324962CL, 0x183247F04L, 0x183249AECL, 0x183249564L, 0x1832456DCL,
    0x183248F74L, 0x18324A9ECL, 0x18324B004L, 0x1832237ECL, 0x18322379CL,
    0x18322788CL, 0x18323CFFCL, 0x18324574CL, 0x183248C31L, 0x183248FDCL,
    0x183249A54L, 0x183256678L, 0x183256740L, 0x1832529BCL, 0x18323A7B4L,
    0x18324706CL, 0x18324D22CL, 0x183246FA4L, 0x183247D7CL, 0x18324B067L,
    0x18324E0DCL, 0x18323326CL, 0x1832551BCL,
  };
  String OUT = "/config/workspace/test/rea-revopoint/artifacts/revo-metro-5.8.8.460/analysis/usb";
  Program prog; AddressSpace as; ReferenceManager rm; FunctionManager fm;

  public void run() throws Exception {
    prog = currentProgram;
    as = prog.getImageBase().getAddressSpace();
    rm = prog.getReferenceManager();
    fm = prog.getFunctionManager();
    File out = new File(OUT); out.mkdirs();

    Map<Address,Set<String>> funcs = new LinkedHashMap<>();
    for(long m : MARKERS){
      Address ma = as.getAddress(m);
      ref1(ma, funcs);
    }

    DecompInterface decomp = new DecompInterface(); decomp.openProgram(prog);
    PrintWriter iw = new PrintWriter(new FileWriter(new File(out,"INDEX.txt")));
    int n=0;
    for(Map.Entry<Address,Set<String>> e : funcs.entrySet()){
      Function f = fm.getFunctionContaining(e.getKey());
      if(f==null) continue;
      n++;
      DecompileResults r = decomp.decompileFunction(f, 90, monitor);
      String c = (r!=null && r.decompileCompleted()) ? r.getDecompiledFunction().getC() : "// decompile failed";
      String fn = "f_"+Long.toHexString(f.getEntryPoint().getOffset())+".c";
      PrintWriter pw = new PrintWriter(new FileWriter(new File(out,fn)));
      pw.println("/* fn 0x"+Long.toHexString(f.getEntryPoint().getOffset())
                 +"  size=0x"+Long.toHexString(f.getBody().getNumAddresses()));
      for(String mk: e.getValue()) pw.println("   marker "+mk);
      pw.println("*/\n");
      pw.println(c); pw.close();
      iw.println(fn+"  0x"+Long.toHexString(f.getEntryPoint().getOffset())
                 +"  size=0x"+Long.toHexString(f.getBody().getNumAddresses())+"  "+e.getValue());
      println("decompiled "+fn);
    }
    iw.close();
    println("TOTAL functions: "+n);
    decomp.dispose();
  }

  void ref1(Address ma, Map<Address,Set<String>> funcs){
    ReferenceIterator ri = rm.getReferencesTo(ma);
    while(ri.hasNext()){
      Address src = ri.next().getFromAddress();
      Function f = fm.getFunctionContaining(src);
      if(f!=null) funcs.computeIfAbsent(f.getEntryPoint(),k->new LinkedHashSet<>())
                       .add("1:0x"+Long.toHexString(ma.getOffset()));
      ReferenceIterator ri2 = rm.getReferencesTo(src);
      while(ri2.hasNext()){
        Address s2 = ri2.next().getFromAddress();
        Function f2 = fm.getFunctionContaining(s2);
        if(f2!=null) funcs.computeIfAbsent(f2.getEntryPoint(),k->new LinkedHashSet<>())
                          .add("2:0x"+Long.toHexString(ma.getOffset()));
      }
    }
  }
}
