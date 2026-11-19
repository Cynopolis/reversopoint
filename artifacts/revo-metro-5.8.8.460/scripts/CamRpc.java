// Ghidra headless (3DCamera.dll): decompile the RPC client.
// Targets: (a) functions calling socket APIs, (b) functions referencing key protocol strings.
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;
public class CamRpc extends GhidraScript {
  String OUT = "/config/workspace/test/rea-revopoint/artifacts/revo-metro-5.8.8.460/analysis/cam_protocol";
  String[] socketImps = {"socket","connect","send","recv","sendto","recvfrom","bind","htons","htonl","inet_addr","inet_pton","setsockopt","closesocket","ioctlsocket"};
  String[] protoStrs = {"msgId","sendAndWaitRsp","initDevice","reconnectRpcServer","startStream","getStreamInfos","processDepthMjpg","streamType","propertyType","setProperty","getExtrinsics","connectRsp","startStreamRsp","frameData","dataLen"};
  @Override
  public void run() throws Exception {
    File outdir=new File(OUT); if(!outdir.exists()) outdir.mkdirs();
    FunctionManager fm=currentProgram.getFunctionManager();
    SymbolTable st=currentProgram.getSymbolTable();
    Map<Address,String> targets=new LinkedHashMap<>();
    // build function list for containment scanning
    List<Function> funcs=new ArrayList<>(); for(Function f:fm.getFunctions(true)) funcs.add(f);

    // (a) socket API call-sites
    SymbolIterator sit=st.getAllSymbols(true);
    while(sit.hasNext()){
      Symbol sym=sit.next(); if(!sym.isExternal()) continue;
      String n=sym.getName(); String tag=null;
      for(String w:socketImps) if(n.equalsIgnoreCase(w)) { tag=w; break; }
      if(tag==null) continue;
      for(Reference r:sym.getReferences()){
        Function f=containing(funcs, r.getFromAddress());
        if(f!=null && f.getBody().getNumAddresses()>16) targets.putIfAbsent(f.getEntryPoint(),"socket:"+tag+"@"+r.getFromAddress());
      }
    }
    // (b) protocol strings -> direct + 2-hop refs -> containing functions
    for(String s:protoStrs){
      byte[] needle=s.getBytes("UTF-8");
      for(MemoryBlock mb:currentProgram.getMemory().getBlocks()){
        long len=mb.getSize(); if(len<=0||len>300_000_000) continue;
        byte[] buf=new byte[(int)len]; mb.getBytes(mb.getStart(),buf);
        int idx=find(buf,needle,0), g=0;
        while(idx>=0 && g++<40){
          Address a=mb.getStart().add(idx);
          Set<Address> frontier=new LinkedHashSet<>(); frontier.add(a);
          int depth=0;
          while(!frontier.isEmpty() && depth<3){
            Set<Address> next=new LinkedHashSet<>();
            for(Address fa:frontier){
              ReferenceIterator it=currentProgram.getReferenceManager().getReferencesTo(fa);
              while(it.hasNext()){Reference r=it.next();
                Function f=containing(funcs, r.getFromAddress());
                if(f!=null && f.getBody().getNumAddresses()>16) targets.putIfAbsent(f.getEntryPoint(),"str:\""+s+"\"");
                next.add(r.getFromAddress());
              }
            }
            frontier=next; depth++;
          }
          idx=find(buf,needle,idx+1);
        }
      }
    }
    println("targets: "+targets.size());
    DecompInterface decomp=new DecompInterface(); decomp.openProgram(currentProgram);
    PrintWriter idx=new PrintWriter(new FileWriter(new File(outdir,"INDEX.txt")));
    idx.println("# "+targets.size()+" functions (socket I/O + protocol strings)");
    int saved=0;
    for(Map.Entry<Address,String> e:targets.entrySet()){
      if(saved>=100) break;
      Function f=fm.getFunctionAt(e.getKey()); if(f==null)continue;
      DecompileResults res=decomp.decompileFunction(f,240,monitor);
      if(!res.decompileCompleted())continue;
      File of=new File(outdir, e.getKey().toString().replaceAll("[^0-9a-fA-F]","")+".c");
      PrintWriter w=new PrintWriter(new FileWriter(of));
      w.println("// "+e.getKey()+"  size=0x"+Long.toHexString(f.getBody().getNumAddresses())+"  "+e.getValue());
      w.println(res.getDecompiledFunction().getC()); w.close();
      idx.println(e.getKey()+"  size=0x"+Long.toHexString(f.getBody().getNumAddresses())+"  "+e.getValue());
      saved++;
    }
    idx.close(); decomp.dispose();
    println("Saved "+saved+" functions to "+OUT);
  }
  Function containing(List<Function> funcs, Address cs){ for(Function f:funcs) if(f.getBody().contains(cs)) return f; return null; }
  int find(byte[] h,byte[] n,int from){outer:for(int i=from;i<=h.length-n.length;i++){for(int j=0;j<n.length;j++)if(h[i+j]!=n[j])continue outer;return i;}return -1;}
}
