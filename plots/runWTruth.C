#include "Sample.h"
#include "plotTruth.C"

void runWTruth(TString intag=""){

  ////choose the sample to run on
  //TString sampleName="mc14_8TeV.167745.Sherpa_CT10_WmunuMassiveCBPt0_CJetVetoBVeto.merge.AOD.e1585_s1933_s1911_r5591_r5625";
  //TString sampleName="mc14_8TeV.167744.Sherpa_CT10_WmunuMassiveCBPt0_CJetFilterBVeto.merge.AOD.e1585_s1933_s1911_r5591_r5625";
  //TString sampleName="mc14_8TeV.167743.Sherpa_CT10_WmunuMassiveCBPt0_BFilter.merge.AOD.e1585_s1933_s1911_r5591_r5625";

    
  TString inpath=inputDir_+"/CxTupleSamples/Wmunu/"+CXTAG; //version of CxAOD's
  if(intag.CompareTo("")!=0)inpath+="_"+intag; //version of the ntuples

  TString outpath=outputDir_+"/DC14Studies/WTruth/"+CXTAG; //
  if(intag.CompareTo("")!=0)outpath+="_"+intag+"_"+sampleName; //tag with sample name

  system(TString("rm -rf ")+outpath);
  system(TString("mkdir ")+outpath);


  Sample* W = new Sample("W",sampleName,inpath);

  //////////////////////////////
  ////these use histograms filled when looping over the CxAOD's (no selections)
  /////////////////////////////
  plotGenTruth_MPtEtaPhi(W,"Wmv",outpath+"/Wmunu");//W->mu nu
  plotGenTruth_MPtEtaPhi(W,"Wmv_m",outpath+"/Wmunu_m");
  plotGenTruth_MPtEtaPhi(W,"Wmv_v",outpath+"/Wmunu_v");

  plotGenTruth_MPtEtaPhi(W,"Wev",outpath+"/Wenu");//W->e nu
  plotGenTruth_MPtEtaPhi(W,"Wev_e",outpath+"/Wenu_e");
  plotGenTruth_MPtEtaPhi(W,"Wev_v",outpath+"/Wenu_v");


  /////////////////////////////////
  //this will give the generator distributions after the selections applied for the ntuples
  /////////////////////////////////
  //plotTruth_MPtEtaPhi(W,"truth_Wmv","(truth_Wmv>=0)",outpath+"/Wmunu");
  //plotTruth_MPtEtaPhi(W,"truth_Wmv_m","(truth_Wmv_m>=0)",outpath+"/Wmunu_mu");
  //plotTruth_MPtEtaPhi(W,"truth_Wmv_v","(truth_Wmv_v>=0)",outpath+"/Wmunu_nu");
  
  gROOT->ProcessLine(".q");
}
