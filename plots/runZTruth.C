#include "Sample.h"
#include "plotTruth.C"

void runTruth_Z(TString intag="",TString outtag=""){
  
  //TString sampleName="mc14_8TeV.147807.PowhegPythia8_AU2CT10_Zmumu.merge.AOD.e1852_s1896_s1912_r5591_r5625";
  TString sampleName="mc14_8TeV.167754.Sherpa_CT10_ZmumuMassiveCBPt0_CVetoBVeto.merge.AOD.e1585_s1933_s1911_r5591_r5625";
  //TString sampleName="mc14_8TeV.167753.Sherpa_CT10_ZmumuMassiveCBPt0_CFilterBVeto.merge.AOD.e1585_s1933_s1911_r5591_r5625";
  //TString sampleName="mc14_8TeV.167752.Sherpa_CT10_ZmumuMassiveCBPt0_BFilter.merge.AOD.e1585_s1933_s1911_r5591_r5625";

  TString indir=getenv("OUTPUTDIR");
  TString outdir=getenv("WWWDIR");
  TString CXTAG=getenv("CXTAG");//Version of the CxAOD's
    
  TString inpath=indir+"/CxTupleSamples/Zmm/"+CXTAG;
  if(intag.CompareTo("")!=0)inpath+="_"+intag;//version of the ntuples

  TString outpath=outdir+"/DC14Studies/Zmm_Truth/"+CXTAG;
  if(intag.CompareTo("")!=0)outpath+="_"+intag; // no need to tag the output plots
  if(outtag.CompareTo("")!=0)outpath+="_"+outtag; 

  system(TString("rm -rf ")+outpath);
  system(TString("mkdir ")+outpath);


  Sample* Zmm = new Sample("Zmm",sampleName,inpath);

  //////////////////////////////
  //these get the histograms filled when looping over the CxAOD's (i.e. no selections)
  /////////////////////////////
  plotGenTruth_MPtEtaPhi(Zmm,"Zmm",outpath+"/Zmm");
  plotGenTruth_MPtEtaPhi(Zmm,"Zmm_m1",outpath+"/Zmm_m1");
  plotGenTruth_MPtEtaPhi(Zmm,"Zmm_m2",outpath+"/Zmm_m2");

  /////////////////////////////////
  //this will give the generator distributions after the selections applied for the ntuples
  /////////////////////////////////
  //plotTruth_MPtEtaPhi(Zmm,"truth_Zmm","(truth_Zmm>=0)",outpath+"/Zmm");
  //plotTruth_MPtEtaPhi(Zmm,"truth_Zmm_m1","(truth_Zmm_m1>=0)",outpath+"/Zmm_leadMu");
  //plotTruth_MPtEtaPhi(Zmm,"truth_Zmm_m2","(truth_Zmm_m2>=0)",outpath+"/Zmm_subleadMu");
  
  gROOT->ProcessLine(".q");
}
