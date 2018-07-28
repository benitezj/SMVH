#include "plotTruth.C"

void plotRToVHTruth(Sample* sample, TString outpath, TString skim){

  //////////////////////////////
  //Gen. Distributions before any selections
  /////////////////////////////
  plotGenTruth_PtEtaPhi(sample,"RToVH",outpath+"/RToVH");
  plotGenTruth(sample,"HGen_RToVH_m",300,0,3000,"Gen. Mass [GeV]",outpath+"/RToVH_m");

  plotGenTruth_PtEtaPhi(sample,"RToVH_V",outpath+"/RToVH_V",2000);
  plotGenTruth(sample,"HGen_RToVH_V_m",100,0,200,"V gen. Mass [GeV]",outpath+"/RToVH_V_m");

  plotGenTruth_PtEtaPhi(sample,"RToVH_H",outpath+"/RToVH_H",2000);
  plotGenTruth(sample,"HGen_RToVH_H_m",100,0,200,"H gen. Mass [GeV]",outpath+"/RToVH_H_m");
  plotGenTruth(sample,"HGen_RToVH_H_pt",100,0,2000,"H pT [GeV]",outpath+"/RToVH_H_pt");//overwrite
  //plotGenTruth(sample,"HGen_RToVH_H_p",100,0,5000,"H p [GeV]",outpath+"/RToVH_H_p");
  plotGenTruth(sample,"HGen_RToVH_H_dR",50,0,5,"H deltaR(bb)",outpath+"/RToVH_H_dR");

  plotGenTruth_PtEtaPhi(sample,"RToVH_H_b1",outpath+"/RToVH_H_b1",1000);
  //plotGenTruth(sample,"HGen_RToVH_H_b1_pt",100,0,1000,"H b1 pT [GeV]",outpath+"/RToVH_H_b1_pt");//overwrite
  plotGenTruth_PtEtaPhi(sample,"RToVH_H_b2",outpath+"/RToVH_H_b2",1000);
  //plotGenTruth(sample,"HGen_RToVH_H_b2_pt",100,0,1000,"H b2 pT [GeV]",outpath+"/RToVH_H_b2_pt");//overwrite


  ////////////////////////////
  //// Efficiency plots
  ////////////////////////////
  float effmax=0.50;
  plotTruthEfficiency(sample,"HGen_RToVH_m","truth_m[truth_RToVH]/1000",25,0,5000,
  		      skim+"*(truth_RToVH>0)","Gen. Mass [GeV]",effmax,outpath+"/RToVH_m_eff");
  plotTruthEfficiency(sample,"HGen_RToVH_V_pt","truth_pt[truth_RToVH_V]/1000",20,0,2000,
  		      skim+"*(truth_RToVH_V>0)","V Gen. pT [GeV]",effmax,outpath+"/RToVH_V_pt_eff");
  plotTruthEfficiency(sample,"HGen_RToVH_H_pt","truth_pt[truth_RToVH_H]/1000",20,0,2000,
  		      skim+"*(truth_RToVH_H>0)","H Gen. pT [GeV]",effmax,outpath+"/RToVH_H_pt_eff");
  plotTruthEfficiency(sample,"HGen_RToVH_H_p","truth_p[truth_RToVH_H]/1000",15,0,3000,
  		      skim+"*(truth_RToVH_H>0)","H Gen. p [GeV]",effmax,outpath+"/RToVH_H_p_eff");
  plotTruthEfficiency(sample,"HGen_RToVH_H_dR","truth_RToVH_H_dR",25,0,5,
  		      skim+"*(truth_RToVH_H>0)","H Gen. deltaR(bb) [GeV]",effmax,outpath+"/RToVH_H_dR_eff");
    

  
  ////////////////////////////
  //// Resolution plots 
  ////////////////////////////
  plotTruthResolution(sample,"vh_m[vh]/1000","truth_m[truth_RToVH]/1000",100,-1000,1000,
  		      skim+"*(truth_RToVH>0)","Reco. Mass - Gen. Mass [GeV]",outpath+"/RToVH_mres");


  ////////////////////////////////////////
  ///comparisons of gen. vs reco distributions
  ////////////////////////////////////////
  plotTruthEfficiency(sample,"HGen_RToVH_m","truth_m[truth_RToVH]/1000",250,0,5000,
  		      skim+"*(truth_RToVH>0)","Mass [GeV]",effmax,outpath+"/RToVH_GenMassVsGenMass");
  plotTruthEfficiency(sample,"HGen_RToVH_m","vh_m[vh]/1000",250,0,5000,
  		      skim+"*(truth_RToVH>0)","Mass [GeV]",effmax,outpath+"/RToVH_RecoMassVsGenMass");
  

}
