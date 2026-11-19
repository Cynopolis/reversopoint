import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSpace;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class CamDiag extends GhidraScript {
  long[] MARKERS = {
    0x180028564L, 0x1800299ECL, 0x1800027ECL, 0x18000688CL, 0x18002474CL,
    0x180025FA4L, 0x180035678L, 0x1800319BCL,
  };
  public void run() throws Exception {
    AddressSpace as = currentProgram.getImageBase().getAddressSpace();
    ReferenceManager rm = currentProgram.getReferenceManager();
    for(long m : MARKERS){
      Address ma = as.getAddress(m);
      byte[] b = new byte[44];
      boolean ok = false; try { currentProgram.getMemory().getBlock(ma).getBytes(ma, b); ok=true; } catch(Exception ex){}
      ReferenceIterator ri = rm.getReferencesTo(ma);
      int cnt=0; Address first=null;
      while(ri.hasNext()){ if(cnt==0) first=ri.next().getFromAddress(); else ri.next(); cnt++; }
      String s = new String(b, java.nio.charset.StandardCharsets.US_ASCII).replace("\n"," ");
      println("DIAG 0x"+Long.toHexString(m)+" loaded="+ok+" refs="+cnt+" first="+(first!=null?first.toString():"null")+" s="+s);
    }
  }
}
