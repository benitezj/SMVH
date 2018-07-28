#include "Sample.h"
#include "plottingTools.C"

void runSampleDiff(TString channel, TString TAG1,TString TAG2){

  TString sampleName="mc14_13TeV.161827.Pythia8_AU2CTEQ6L1_ZH125_llbb.merge.AOD.e3292_s1982_s2008_r5787_r5853";

  //TString channel="reco";
  //TString channel="ZHmmbb";


  TString inpath1=inputDir_+"/CxTupleSamples/"+channel+"/"+TAG1;
  TString inpath2=inputDir_+"/CxTupleSamples/"+channel+"/"+TAG2;


  TString outpath=outputDir_+"/DC14Studies/"+channel+"/Diff_"+sampleName+"_"+TAG1+"_"+TAG2;
  system(TString("rm -rf ")+outpath);
  system(TString("mkdir -p ")+outpath);

  Sample sample1("sample1",sampleName,inpath1);
  Sample sample2("sample2",sampleName,inpath2);

  compareSamples(&sample1,&sample2,"jet_pt/1000",100,0,200,outpath,"jet_pt");
  compareSamples(&sample1,&sample2,"jet_eta",100,-5,5,outpath,"jet_eta");
  //compareSamples(&sample1,&sample2,"jet_jvf",100,0,1,outpath,"jet_jvf");
  //compareSamples(&sample1,&sample2,"jet_m/1000",100,0,100,outpath,"jet_m");

  gROOT->ProcessLine(".q");
}
