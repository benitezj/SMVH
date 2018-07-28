#include "plotterGlobals.h"
#include "plotTruth.C"

void runZHmmbbTruth(TString intag){
  
  //TString sampleName="mc14_8TeV.189427.PowhegPythia8_AU2CT10_ZH125J_MINLO_mumubb_VpT_Weighted.merge.AOD.e2698_s1933_s1911_r5591_r5625";
  //TString sampleName="mc14_13TeV.161827.Pythia8_AU2CTEQ6L1_ZH125_llbb.merge.AOD.e3292_s1982_s2008_r5787_r5853";
  //TString sampleName="mc14_13TeV.203917.MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_1000GeV_126.merge.AOD.e3318_s1982_s2008_r5787_r5853";
  //TString sampleName="mc15_13TeV.301395.MadGraphPythia8EvtGen_A14NNPDF23LO_HVT_Agv1_VzZH_llqq_m2000.merge.AOD.e3814_s2608_s2183_r6630_r6264";
    
  //TString inpath=inputDir_+"/CxTupleSamples/ZHmmbb/";
  TString inpath=inputDir_+"/CxTupleSamples/Zmm/"+intag;

  TString outpath=outputDir_+"/DC14Studies/ZHmmbbTruth/"+intag+"_"+sampleName;
  system(TString("rm -rf ")+outpath);
  system(TString("mkdir ")+outpath);


  Sample* sample = new Sample("sample",sampleName.Data(),inpath);

  //sample->skim("");

  //////////////////////////////
  //these get the histograms filled when looping over the CxAOD's (no selections)
  /////////////////////////////
  plotGenTruth(sample,"HGen_ZH_m",100,0,1000,"ZH gen. Mass [GeV]",outpath+"/ZH_m");
  plotGenTruth_PtEtaPhi(sample,"ZH",outpath+"/ZH");
  plotGenTruth(sample,"HGen_Zmm_m",200,0,200,"Zmumu gen. Mass [GeV]",outpath+"/Zmm_m");
  plotGenTruth_PtEtaPhi(sample,"Zmm",outpath+"/Zmm");
  plotGenTruth(sample,"HGen_H0bb_m",200,0,200,"Hbb gen. Mass [GeV]",outpath+"/Hbb_m");
  plotGenTruth_PtEtaPhi(sample,"H0bb",outpath+"/Hbb");

  plotGenTruth_PtEtaPhi(sample,"Zmm_m1",outpath+"/Zmm_m1");
  plotGenTruth_PtEtaPhi(sample,"Zmm_m2",outpath+"/Zmm_m2");
  
  plotGenTruth_PtEtaPhi(sample,"H0bb_b1",outpath+"/Hbb_b1");
  plotGenTruth_PtEtaPhi(sample,"H0bb_b2",outpath+"/Hbb_b2");



  ////////////////////////////
  ////Efficiency 
  ////////////////////////////
  plotTruthEfficiency(sample,"HGen_ZH_m","truth_m[truth_ZHmmbb]/1000",30,0,3000,
  		      "eve_mc_w*(truth_ZHmmbb>0)","ZH Gen. Mass [GeV]",0.30,outpath+"/ZH_m_eff");


  ////////////////////////////
  ///Resolution: requires full vh selection
  ////////////////////////////
  plotTruthResolution(sample,"vh_m[vh]/1000","truth_m[truth_ZHmmbb]/1000",100,-500,500,
  		      "eve_mc_w*(truth_ZHmmbb>0)","VH Reco. Mass - Gen. Mass [GeV]",outpath+"/ZH_mres");
  plotTruthResolution(sample,"vh_mass[vh]/1000","truth_m[truth_ZHmmbb]/1000",100,-500,500,
  		      "eve_mc_w*(truth_ZHmmbb>0)","VH Reco. Mass - Gen. Mass [GeV]",outpath+"/ZH_mres_HmassConstrained");
  plotTruthResolution(sample,"mm_m[vh_v[vh]]/1000","truth_m[truth_Zmm]/1000",100,-10,10,
  		      "eve_mc_w*(truth_Zmm>0)","Zmm Reco. Mass - Gen. Mass [GeV]",outpath+"/Zmm_mres");
  plotTruthResolution(sample,"jj_m[vh_h[vh]]/1000","truth_m[truth_H0bb]/1000",100,-100,100,
  		      "eve_mc_w*(truth_H0bb>0)","Hbb Reco. Mass - Gen. Mass [GeV]",outpath+"/Hbb_mres");

  plotTruthResolution(sample,"jj_m[vh_h[vh]]/1000","0",50,0,200,
  		      "eve_mc_w","Hbb Reco. Mass  [GeV]",outpath+"/Hbb_mass");

  

  gROOT->ProcessLine(".q");
}
