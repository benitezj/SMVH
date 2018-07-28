#include "WenuPlotter.C"
#include "configWenu.C"
#include "plotWenu.C"

void runWenu(TString intag="", TString outtag=""){  
  gROOT->ProcessLine(".L ./SMVHIowa/plots/WenuPlotter.C+");

  TString inpath=inputDir_+"/CxTupleSamples/Wenu/"+CXTAG;
  if(intag.CompareTo("")!=0)inpath+="_"+intag;//version of the ntuples

  TString outpath=outputDir_+"/DC14Studies/Wenu/"+CXTAG;
  if(intag.CompareTo("")!=0)outpath+="_"+intag;
  if(outtag.CompareTo("")!=0)outpath+="_"+outtag;//version of the plots

  system(TString("rm -rf ")+outpath);
  system(TString("mkdir ")+outpath);

  WenuPlotter*analysis=new WenuPlotter("analysis",atlasInternal8TeV);
  configWenu(analysis,inpath,outpath);

  plotWenu(analysis);
  
  gROOT->ProcessLine(".q");
}
