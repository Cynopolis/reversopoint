// Ghidra headless: collect all call-sites of Qt-network imports (COMPUTED_CALL/READ to IAT),
// find each call-site's containing function by scanning function bodies, decompile them.
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;
public class RevoCallSites extends GhidraScript {
  String OUT = "/config/workspace/test/rea-revopoint/artifacts/revo-metro-5.8.8.460/analysis/decompiled";
  String[] want = {"NetworkAccessManager","NetworkRequest","NetworkReply","QUrl"};
  @Override
  public void run() throws Exception {
    File outdir=new File(OUT); if(!outdir.exists()) outdir.mkdirs();
    FunctionManager fm=currentProgram.getFunctionManager();
    SymbolTable st=currentProgram.getSymbolTable();
    // 1) collect call-site addresses + which import
    Map<Address,String> callSites=new LinkedHashMap<>();
    SymbolIterator sit=st.getAllSymbols(true);
    while(sit.hasNext()){
      Symbol sym=sit.next(); if(!sym.isExternal()) continue;
      String n=sym.getName(); String tag=null;
      for(String w:want) if(n.contains(w)){tag=w;break;}
      if(tag==null) continue;
      for(Reference r:sym.getReferences()){
        Address cs=r.getFromAddress();  // the code address doing the call/read
        callSites.putIfAbsent(cs, n);
      }
    }
    println("call sites: "+callSites.size());
    // 2) build function list for containment scan
    List<Function> funcs=new ArrayList<>();
    for(Function f:fm.getFunctions(true)) funcs.add(f);
    // 3) for each call site, find containing function
    Map<Address,String> targets=new LinkedHashMap<>();
    int unmatched=0;
    for(Map.Entry<Address,String> e:callSites.entrySet()){
      Address cs=e.getKey(); Function hit=null;
      for(Function f:funcs){
        if (f.getBody().contains(cs)) { hit=f; break; }
      }
      if(hit!=null) targets.putIfAbsent(hit.getEntryPoint(), "calls "+e.getValue()+" (site "+cs+")");
      else unmatched++;
    }
    println("matched funcs: "+targets.size()+"  unmatched sites: "+unmatched);
    DecompInterface decomp=new DecompInterface(); decomp.openProgram(currentProgram);
    PrintWriter idx=new PrintWriter(new FileWriter(new File(outdir,"CALLSITE_FUNCS.txt")));
    idx.println("# "+targets.size()+" functions containing Qt-network call sites");
    int saved=0;
    for(Map.Entry<Address,String> te:targets.entrySet()){
      if(saved>=60) break;
      Function f=fm.getFunctionAt(te.getKey()); if(f==null)continue;
      DecompileResults res=decomp.decompileFunction(f,240,monitor);
      if(!res.decompileCompleted())continue;
      File of=new File(outdir,"cs_"+te.getKey().toString().replaceAll("[^0-9a-fA-F]","")+".c");
      PrintWriter w=new PrintWriter(new FileWriter(of));
      w.println("// "+te.getKey()+"  "+f.getName()+"  size=0x"+Long.toHexString(f.getBody().getNumAddresses())+"  "+te.getValue());
      w.println(res.getDecompiledFunction().getC()); w.close();
      idx.println(te.getKey()+"  size=0x"+Long.toHexString(f.getBody().getNumAddresses())+"  "+te.getValue());
      saved++;
    }
    idx.close(); decomp.dispose();
    println("Saved "+saved);
  }
}
