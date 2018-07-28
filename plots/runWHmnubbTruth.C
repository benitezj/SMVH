#include "Sample.h"
#include "plotTruth.C"

void runWHmnubbTruth(TString intag=""){
  
  TString sampleName="mc14_8TeV.189421.PowhegPythia8_AU2CT10_WpH125J_MINLO_munubb_VpT_Weighted.merge.AOD.e2698_s1933_s1911_r5591_r5625";
    
  TString inpath=inputDir_+"/CxTupleSamples/WHmnubb/"+CXTAG;
  if(intag.CompareTo("")!=0)inpath+="_"+intag;//version of the ntuples

  TString outpath=outputDir_+"/DC14Studies/WHmnubbTruth/"+CXTAG;
  if(intag.CompareTo("")!=0)outpath+="_"+intag; 
  outpath+="_"+sampleName; 
  system(TString("rm -rf ")+outpath);
  system(TString("mkdir ")+outpath);


  Sample* sample = new Sample("sample",sampleName.Data(),inpath);

  //////////////////////////////
  //these get the histograms filled when looping over the CxAOD's (no selections)
  /////////////////////////////
  plotGenTruth(sample,"HGen_WH_m",100,0,1000,"WH gen. Mass (GeV)",outpath+"/WH_m");
  plotGenTruth_PtEtaPhi(sample,"WH",outpath+"/WH");

  plotGenTruth(sample,"HGen_Wmv_m",100,0,200,"Wmunu gen. Mass (GeV)",outpath+"/Wmv_m");
  plotGenTruth_PtEtaPhi(sample,"Wmv",outpath+"/Wmv");

  plotGenTruth(sample,"HGen_H0bb_m",100,0,200,"Hbb gen. Mass (GeV)",outpath+"/H0bb_m");
  plotGenTruth_PtEtaPhi(sample,"H0bb",outpath+"/H0bb");

  plotGenTruth_PtEtaPhi(sample,"Wmv_m",outpath+"/Wmv_m");
  plotGenTruth_PtEtaPhi(sample,"Wmv_v",outpath+"/Wmv_v");
  
  plotGenTruth_PtEtaPhi(sample,"H0bb_b1",outpath+"/H0bb_b1");
  plotGenTruth_PtEtaPhi(sample,"H0bb_b2",outpath+"/H0bb_b2");


  ////////////////////////////
  ///Resolution
  ////////////////////////////
  plotTruthResolution(sample,"vh_m[vh]/1000","truth_m[truth_WHmvbb]/1000",100,-500,500,
		      "eve_mc_w","WH Reco. Mass - Gen. Mass (GeV)",outpath+"/WH_mres");

  //For the transverse mass resolution we need the decay products of the W: mT^2 = (Pt_l + Pt_v)^2 - (Pt_W)^2
  //but these are not always in the CxAOD truth block, for now take difference w.r.t W mass
  plotTruthResolution(sample,"muMet_mT[vh_v[vh]]/1000","truth_m[truth_Wmv]/1000",100,-200,100,
		      "eve_mc_w","Wmunu Reco. Mass - Gen. Mass (GeV)",outpath+"/Wmv_mres");
  
  plotTruthResolution(sample,"jj_m[vh_h[vh]]/1000","truth_m[truth_H0bb]/1000",100,-100,100,
		      "eve_mc_w","Hbb Reco. Mass - Gen. Mass (GeV)",outpath+"/H0bb_mres");


  ////////////////////////////
  ////Efficiency 
  ////////////////////////////
  plotTruthEfficiency(sample,"HGen_WH_m","truth_m[truth_WHmvbb]/1000",25,0,1000,
		      "eve_mc_w","WH Gen. Mass (GeV)",0.3,outpath+"/WH_m_eff");
  

  gROOT->ProcessLine(".q");
}
