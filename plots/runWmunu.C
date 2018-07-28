#include "WmunuPlotter.C"
#include "configWmunu.C"
#include "plotWmunu.C"

void runWmunu(TString intag="",TString outtag=""){  

  gROOT->ProcessLine(".L ./SMVHIowa/plots/WmunuPlotter.C+");

  TString inpath=inputDir_+"/CxTupleSamples/Wmunu/"+CXTAG;
  if(intag.CompareTo("")!=0)inpath+="_"+intag;//version of the ntuples

  TString outpath=outputDir_+"/DC14Studies/Wmunu/"+CXTAG;
  if(intag.CompareTo("")!=0)outpath+="_"+intag;
  if(outtag.CompareTo("")!=0)outpath+="_"+outtag;//version of the plots

  system(TString("rm -rf ")+outpath);
  system(TString("mkdir ")+outpath);

  WmunuPlotter * analysis= new WmunuPlotter("analysis",atlasInternal8TeV);
  configWmunu(analysis,inpath,outpath);
  
  plotWmunu(analysis);
  
  gROOT->ProcessLine(".q");
}
