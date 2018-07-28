#include "../plots/plottingTools.C"

void runCxAODDiff(TString InputPath, TString PROD1, TString PROD2){

  //make sure it is the exact same sample
  //TString sampleName="mc15_13TeV.302401.MadGraphPythia8EvtGen_A14NNPDF23LO_HVT_Agv1_VzZH_llqq_m1500.merge.DAOD_EXOT12.e4069_s2608_r6765_r6282_p2375";
  //TString sampleName="mc15_13TeV.302401.MadGraphPythia8EvtGen_A14NNPDF23LO_HVT_Agv1_VzZH_llqq_m1500.merge.DAOD_EXOT12.e4069_s2608_r6765_r6282_p2406";
  TString sampleName="mc15_13TeV.302401.MadGraphPythia8EvtGen_A14NNPDF23LO_HVT_Agv1_VzZH_llqq_m1500.merge.DAOD_EXOT12.e4069_s2608_r6765_r6282_p2419";

  TString inpath1=InputPath+"/"+PROD1;
  TString inpath2=InputPath+"/"+PROD2;

  TString sampleName1 = findMatchInDir(inpath1.Data(),sampleName.Data());
  TString sampleName2 = findMatchInDir(inpath2.Data(),sampleName.Data());

  cout<<"="<<inpath1<<"="<<endl;
  cout<<"="<<sampleName1<<"="<<endl;
  cout<<endl;
  cout<<"="<<inpath2<<"="<<endl;
  cout<<"="<<sampleName2<<"="<<endl;

  TString rootFileName="CxAOD";

  Sample sample1(PROD1,sampleName1,inpath1);
  sample1.setFileName(rootFileName);//Sample class is looking for "tuple_X.root"
  sample1.setNtupleName("CollectionTree");

  Sample sample2(PROD2,sampleName2,inpath2);
  sample2.setFileName(rootFileName);
  sample2.setNtupleName("CollectionTree");

  TString outpath=outputDir_+"/CxAOD/TagDiff_"+sampleName+"_"+PROD1+"-"+PROD2;
  system((TString("rm -rf ")+outpath).Data());
  system((TString("mkdir ")+outpath).Data());



  TString Electron="Electrons___NominalAuxDyn";
  compareSamples(&sample1,&sample2,Electron+".pt/1000",100,0,500,outpath,Electron+"_pt");
  compareSamples(&sample1,&sample2,Electron+".eta",120,-3,3,outpath,Electron+"_eta");

  TString Muon="Muons___NominalAuxDyn";
  compareSamples(&sample1,&sample2,Muon+".pt/1000",100,0,500,outpath,Muon+"_pt");
  compareSamples(&sample1,&sample2,Muon+".eta",120,-3,3,outpath,Muon+"_eta");

  TString Jet="AntiKt4EMTopoJets___NominalAuxDyn";
  compareSamples(&sample1,&sample2,Jet+".pt/1000",100,0,500,outpath,Jet+"_pt");
  compareSamples(&sample1,&sample2,Jet+".eta",100,-5,5,outpath,Jet+"_eta");

  TString fatJet="AntiKt10LCTopoTrimmedPtFrac5SmallR20Jets___NominalAuxDyn";
  compareSamples(&sample1,&sample2,fatJet+".pt/1000",100,0,1000,outpath,fatJet+"_pt");
  compareSamples(&sample1,&sample2,fatJet+".eta",120,-3,3,outpath,fatJet+"_eta");
  compareSamples(&sample1,&sample2,fatJet+".m/1000",50,0,500,outpath,fatJet+"_m");

  TString MET="MET_Reference_AntiKt4EMTopo___NominalAuxDyn";
  compareSamples(&sample1,&sample2,MET+".sumet/1000",50,0,1000,outpath,MET+"_sumet");

  gROOT->ProcessLine(".q");
}
