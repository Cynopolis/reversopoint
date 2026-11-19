import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSpace;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
public class CamConn extends GhidraScript {
  @Override
  public void run() throws Exception {
    FunctionManager fm=currentProgram.getFunctionManager();
    AddressSpace sp=currentProgram.getAddressFactory().getDefaultAddressSpace();
    // TCP start() is at 0x1812846f0; also dump refs to it
    Address start=sp.getAddress(0x1812846f0L);
    PrintWriter p=new PrintWriter(new FileWriter("/tmp/camconn.txt"));
    p.println("refs to DeviceDataComTcp::start (0x1812846f0):");
    ReferenceIterator it=currentProgram.getReferenceManager().getReferencesTo(start);
    while(it.hasNext()){Reference r=it.next(); p.println("  from "+r.getFromAddress()+" type="+r.getReferenceType());}
    p.flush(); println("done refs");
    // decompile the start func's likely caller: find function containing each ref
    DecompInterface de=new DecompInterface(); de.openProgram(currentProgram);
    for(Address ra : new Address[]{start}) {
      ReferenceIterator ri=currentProgram.getReferenceManager().getReferencesTo(ra);
      while(ri.hasNext()){Reference r=ri.next();
        Function f=fm.getFunctionAt(r.getFromAddress());
        if(f==null) continue;
        DecompileResults res=de.decompileFunction(f,180,monitor);
        if(!res.decompileCompleted()) continue;
        p.println("\n\n===== caller func "+f.getEntryPoint()+" =====\n"+res.getDecompiledFunction().getC());
      }
    }
    p.close(); de.dispose(); println("wrote /tmp/camconn.txt");
  }
}
