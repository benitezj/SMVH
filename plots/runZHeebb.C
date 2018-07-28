#include "../reader/ZHeebbPlotter.C"
#include "configZHeebb_13TeV.C"
#include "plotZHeebb.C"


void runZHeebb(TString intag="",TString outtag=""){  
    
  TString inpath=inputDir_+"/CxTupleSamples/ZHeebb/"+intag;

  TString outpath=outputDir_+"/DC14Studies/ZHeebb/"+intag;
  if(outtag.CompareTo("")!=0)outpath+="_"+outtag;//version of the plots

  system(TString("rm -rf ")+outpath);
  system(TString("mkdir ")+outpath);

  ZHeebbPlotter * analysis = new ZHeebbPlotter("analysis",atlasInternal8TeV);
  analysis->setOutputPath(outpath);

  if(!(configZHeebb_13TeV(analysis,inpath))){
    cout<<"Config failed"<<endl;
    return;
  }

  plotZHeebb(analysis);
  gROOT->ProcessLine(".q");
}
