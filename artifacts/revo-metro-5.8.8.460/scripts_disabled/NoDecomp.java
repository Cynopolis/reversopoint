// PreScript: disable the decompiler auto-analyzers so the heavy per-function
// decompilation does NOT run during auto-analysis (it OOMs on 3DCamera.dll with
// low free RAM). My postScript decompiles only the target functions itself.
import ghidra.app.services.Analyzer;
import ghidra.app.services.AutoAnalysisManager;
import ghidra.app.script.GhidraScript;

public class NoDecomp extends GhidraScript {
  public void run() throws Exception {
    AutoAnalysisManager aam = currentProgram.getAutoAnalysisManager();
    int n = 0;
    for (Analyzer a : aam.getInstalledAnalyzers()) {
      String cn = a.getClass().getName();
      if (cn.contains("Decompiler")) {
        a.setEnabled(false);
        println("disabled analyzer: " + cn);
        n++;
      }
    }
    println("NoDecomp: disabled " + n + " decompiler analyzers");
  }
}
