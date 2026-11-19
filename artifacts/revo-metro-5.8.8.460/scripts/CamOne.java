import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSpace;
import ghidra.program.model.listing.*;
import java.io.*;

public class CamOne extends GhidraScript {
  long[] VS = {0x1812fbb40L, 0x1812d0200L, 0x1812854a0L, 0x1812c0980L};
  String OUT="/config/workspace/test/rea-revopoint/artifacts/revo-metro-5.8.8.460/analysis/usb";
  public void run() throws Exception {
    FunctionManager fm=currentProgram.getFunctionManager();
    AddressSpace as=currentProgram.getImageBase().getAddressSpace();
    File out=new File(OUT); out.mkdirs();
    DecompInterface dc=new DecompInterface(); dc.openProgram(currentProgram);
    for(long v:VS){
      Function f=fm.getFunctionContaining(as.getAddress(v));
      if(f==null){ println("no fn at 0x"+Long.toHexString(v)); continue; }
      DecompileResults r=dc.decompileFunction(f,90,monitor);
      String c=(r!=null&&r.decompileCompleted())?r.getDecompiledFunction().getC():"// fail";
      String fn="one_"+Long.toHexString(f.getEntryPoint().getOffset())+".c";
      PrintWriter pw=new PrintWriter(new FileWriter(new File(out,fn)));
      pw.println("/* 0x"+Long.toHexString(f.getEntryPoint().getOffset())+" size=0x"+Long.toHexString(f.getBody().getNumAddresses())+" */\n");
      pw.println(c); pw.close();
      println("wrote "+fn);
    }
    dc.dispose();
  }
}
