#include "Sample.h"
#include "plotterGlobals.h"

void runRToZHeebbCutFlow(TString intag=""){

  // TString sampleName="mc14_13TeV.203921.MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_500GeV_126.merge.AOD.e3318_s1982_s2008_r5787_r5853";
  // TString sampleName="mc14_13TeV.203917.MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_1000GeV_126.merge.AOD.e3318_s1982_s2008_r5787_r5853";
  // TString sampleName="mc14_13TeV.203918.MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_1500GeV_126.merge.AOD.e3318_s1982_s2008_r5787_r5853";
  // TString sampleName="mc14_13TeV.203919.MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_2000GeV_126.merge.AOD.e3318_s1982_s2008_r5787_r5853";
  TString sampleName="mc14_13TeV.203920.MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_2500GeV_126.merge.AOD.e3318_s1982_s2008_r5787_r5853";



  TString inpath=inputDir_+"/CxTupleSamples/ZHeebb/"+CXTAG;
  if(intag.CompareTo("")!=0)inpath+="_"+intag;//version of the ntuples

  TString outpath=outputDir_+"/DC14Studies/RToZHeebbTruth/"+CXTAG;
  if(intag.CompareTo("")!=0) outpath+="_"+intag; 
  outpath+="_"+sampleName; 



  Sample* sample = new Sample("sample",sampleName.Data(),inpath);
  sample->addSkim("m(ll)","83000<ee_m[vh_v[vh]]&&ee_m[vh_v[vh]]<99000");
  sample->addSkim("MET","met_pt<60000");
  sample->addSkim("pT(V)","ee_pt[vh_v[vh]]>(0.4*vh_mass[vh]-100000)");
  //sample->addSkim("","");
  
  TGraph* cutFlow =sample->getCutFlow();

  TCanvas C;
  cutFlow->GetYaxis()->SetRangeUser(0,1);
  cutFlow->Draw("ape");
  C.Print(outpath+"_cutFlow.png");

  cutFlow->GetYaxis()->SetRangeUser(1e-2,1);
  C.SetLogy(1);
  C.Print(outpath+"_cutFlow.log.png");
  C.SetLogy(0);

  gROOT->ProcessLine(".q");
}
