#include "Sample.h"
#include "plottingTools.C"

void runCxAODCollectionDiff(TString TAG){

  //TString sampleName="mc14_13TeV.161827.Pythia8_AU2CTEQ6L1_ZH125_llbb.merge.AOD.e3292_s1982_s2008_r5787_r5853_Test";
  TString sampleName="mc14_13TeV.203917.MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_1000GeV_126.merge.DAOD_HIGG2D4.e3318_s1982_s2008_r5787_r5853_p1845";


  TString inpath=inputDir_+"/CxAODSamples/"+TAG;

  //TString collection1="AntiKt4LCTopoJetsSkimAux";
  //TString collection2="AntiKt4LCTopoJets___OriginalAuxDyn";

  TString collection1="AntiKt4LCTopoJets___OriginalAuxDyn";
  TString collection2="AntiKt4LCTopoJets___NominalAuxDyn";


  TString outpath=outputDir_+"/DC14Studies/CxAOD/CollectionDiff_"+sampleName+"_"+TAG;
  system(TString("rm -rf ")+outpath);
  system(TString("mkdir ")+outpath);

  Sample sample("sample1",sampleName,inpath);
  sample.setFileName("outputLabel");
  sample.setNtupleName("CollectionTree");


  compareCollections(&sample,collection1,collection2,"pt/1000",100,0,100,outpath,collection1+"_"+collection2+"_pt");
  compareCollections(&sample,collection1,collection2,"eta",100,-5,5,outpath,collection1+"_"+collection2+"_eta");

  gROOT->ProcessLine(".q");
}
