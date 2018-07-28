#include "ZeePlotter.C"
#include "configZee.C"
#include "plotZee.C"

void runZee(TString intag="",TString outtag=""){  
  gROOT->ProcessLine(".L ./SMVHIowa/plots/ZeePlotter.C+");

  TString inpath=inputDir_+"/CxTupleSamples/Zee/"+CXTAG;
  if(intag.CompareTo("")!=0)inpath+="_"+intag;//version of the ntuples

  TString outpath=outputDir_+"/DC14Studies/Zee/"+CXTAG;
  if(intag.CompareTo("")!=0)outpath+="_"+intag;
  if(outtag.CompareTo("")!=0)outpath+="_"+outtag;//version of the plots

  system(TString("rm -rf ")+outpath);
  system(TString("mkdir ")+outpath);


  ZeePlotter*analysis=new ZeePlotter("analysis",atlasInternal8TeV);
  configZee(analysis,inpath,outpath);

  plotZee(analysis);
  
  gROOT->ProcessLine(".q");
}
