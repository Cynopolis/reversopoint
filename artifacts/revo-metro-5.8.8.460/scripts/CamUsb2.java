import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class CamUsb2 extends GhidraScript {
  String OUT="/config/workspace/test/rea-revopoint/artifacts/revo-metro-5.8.8.460/analysis/usb";
  String[] PAT={"hid_read","hid_write","hid_init","hid_open","hid_enumerate","hid_close","hid_detailed",
               "hid_get_","hid_free","HidD_","SetupDi","CM_Get","CM_Locate"};
  public void run() throws Exception {
    SymbolTable st=currentProgram.getSymbolTable();
    FunctionManager fm=currentProgram.getFunctionManager();
    Map<Address,Set<String>> funcs=new LinkedHashMap<>();
    Map<String,Integer> symcount=new TreeMap<>();
    SymbolIterator sit=st.getAllSymbols(true);
    while(sit.hasNext()){
      Symbol sym=sit.next(); if(!sym.isExternal()) continue;
      String n=sym.getName(); String tag=null;
      for(String p:PAT) if(n.contains(p)){tag=n;break;}
      if(tag==null) continue;
      symcount.merge(tag,1,Integer::sum);
      for(Reference r:sym.getReferences()){
        Address cs=r.getFromAddress();
        Function f=fm.getFunctionContaining(cs);
        if(f!=null) funcs.computeIfAbsent(f.getEntryPoint(),k->new LinkedHashSet<>()).add(tag+" @"+cs);
      }
    }
    println("=== import symbols matched ===");
    for(Map.Entry<String,Integer> e:symcount.entrySet()) println("  "+e.getKey()+"  x"+e.getValue());
    println("=== funcs: "+funcs.size()+" ===");

    File out=new File(OUT); out.mkdirs();
    DecompInterface decomp=new DecompInterface(); decomp.openProgram(prog0());
    PrintWriter iw=new PrintWriter(new FileWriter(new File(out,"INDEX.txt")));
    int n=0;
    for(Map.Entry<Address,Set<String>> e:funcs.entrySet()){
      Function f=fm.getFunctionContaining(e.getKey()); if(f==null) continue; n++;
      DecompileResults res=decomp.decompileFunction(f,90,monitor);
      String c=(res!=null&&res.decompileCompleted())?res.getDecompiledFunction().getC():"// fail";
      String fn="u_"+Long.toHexString(f.getEntryPoint().getOffset())+".c";
      PrintWriter pw=new PrintWriter(new FileWriter(new File(out,fn)));
      pw.println("/* 0x"+Long.toHexString(f.getEntryPoint().getOffset())+" size=0x"+Long.toHexString(f.getBody().getNumAddresses()));
      for(String s:e.getValue()) pw.println("   "+s);
      pw.println("*/\n"); pw.println(c); pw.close();
      iw.println(fn+"  0x"+Long.toHexString(f.getEntryPoint().getOffset())+"  size=0x"+Long.toHexString(f.getBody().getNumAddresses())+"  "+e.getValue());
      println("decompiled "+fn);
    }
    iw.close(); println("TOTAL: "+n); decomp.dispose();
  }
  Program prog0(){ return currentProgram; }
}
