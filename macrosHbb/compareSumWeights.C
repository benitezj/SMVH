#include "SMVH/plots/plottingTools.C"

void compareSumWeights(){
  gROOT->ProcessLine(".x ./SMVH/plots/rootlogon.C");
  gStyle->SetCanvasDefH(600);
  gStyle->SetCanvasDefW(1000);

  ////Comparison w.r.t v24 production
  // TString file1="/data/CxAODSamples/CxAOD_00-28-01/yields.13TeV_sorted.txt";
  // TString file2="/data/CxAODSamples/CxAOD_00-24-07_HIGG5D1_MAXHTPTV/yields.13TeV_sorted.txt";
  // TString outdir="/afs/cern.ch/user/b/benitezj/www/Moriond2017Studies/0lep/compareSumWeights_v28_v24";

  // ////Comparison w.r.t. Charles
  // TString file1="/data/CxAODSamples/CxAOD_00-28-01/yields.13TeV_sorted.txt";
  // TString file2="/afs/cern.ch/user/c/cdelport/public/forJose/inputsV20Config/yields.13TeV_0Lep.txt";
  // TString outdir="/afs/cern.ch/user/b/benitezj/www/Moriond2017Studies/0lep/compareSumWeights_v28_Charles";

  ////Comparison of v28 with final samples
  TString file1="/data/CxAODSamples/CxAOD_00-28-01/yields.13TeV_sorted.txt_May1";
  TString file2="/data/CxAODSamples/CxAOD_00-28-01/yields.13TeV_sorted.txt";
  TString outdir="/afs/cern.ch/user/b/benitezj/www/Moriond2017Studies/0lep/compareSumWeights_v28Old_v28May1";


  ///////////////////////////////
  cout<<"File1:"<<file1<<endl;
  cout<<"File2:"<<file2<<endl;

  system(TString("rm -rf ")+outdir);
  system(TString("mkdir ")+outdir);

  compareFiles(file1,file2, 
	       outdir+"/physics_Main", 
	       3,"run number","Sum of weights",0,1,"physics_Main");

  compareFiles(file1,file2, 
	       outdir+"/Vjets", 
	       3,"MC id","Sum of weights",0,1,"Sh_221_NNPDF30NNLO");

  compareFiles(file1,file2, 
	       outdir+"/Diboson", 
	       3,"MC id","Sum of weights",0,1,"_improved");

  compareFiles(file1,file2, 
	       outdir+"/top", 
	       3,"MC id","Sum of weights",0,1,"PwPyEG_P2012");

  compareFiles(file1,file2, 
	       outdir+"/H125", 
	       3,"MC id","Sum of weights",0,1,"H125");
  


  gROOT->ProcessLine(".q");
}
