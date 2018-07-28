#include "../plots/plotterGlobals.h"
#include "../plots/plottingTools.C"

void runTupleDiff(TString channel, TString TAG1, TString TAG2){

  ////sample names may be different across productions due to renaming in derivations
  TString sampleName="mc15_13TeV.302401.MadGraphPythia8EvtGen_A14NNPDF23LO_HVT_Agv1_VzZH_llqq_m1500.merge.DAOD_EXOT12.e4069_s2608_r6765_r6282_p2419";


  TString inpath1=inputDir_+"/"+channel+"/"+TAG1;
  TString inpath2=inputDir_+"/"+channel+"/"+TAG2;

  TString sampleName1 = findMatchInDir(inpath1.Data(),sampleName.Data());
  TString sampleName2 = findMatchInDir(inpath2.Data(),sampleName.Data());
  cout<<"="<<sampleName1<<"="<<endl;
  cout<<"="<<sampleName2<<"="<<endl;

  TString outpath=outputDir_+"/"+channel+"/TagDiff_"+sampleName+"_"+TAG1+"_"+TAG2;
  system((TString("rm -rf ")+outpath).Data());
  system((TString("mkdir -p ")+outpath).Data());

  Sample sample1(TAG1.Data(),sampleName1,inpath1);
  Sample sample2(TAG2.Data(),sampleName2,inpath2);


  ///vertices
  compareSamples(&sample1,&sample2,"eve_mu",50,0,50,outpath,"eve_mu","");
  compareSamples(&sample1,&sample2,"nvtx",50,0,50,outpath,"nvtx","");
  compareSamples(&sample1,&sample2,"nvtx-eve_mu",40,-30,10,outpath,"nvtx_minus_mu","");


  ////MET
  compareSamples(&sample1,&sample2,"met_pt/1000",100,0,500,outpath,"met","");


  ////Muons
  compareSamples(&sample1,&sample2,"muo_pt[mm_leg1[vh_v[vh]]]/1000",50,0,1000,outpath,"muon1_pt","");
  compareSamples(&sample1,&sample2,"muo_eta[mm_leg1[vh_v[vh]]]",100,-5,5,outpath,"muon1_eta","");
  compareSamples(&sample1,&sample2,"muo_pt[mm_leg2[vh_v[vh]]]/1000",50,0,1000,outpath,"muon2_pt","");
  compareSamples(&sample1,&sample2,"muo_eta[mm_leg2[vh_v[vh]]]",100,-5,5,outpath,"muon2_eta","");

  ////Electrons
  compareSamples(&sample1,&sample2,"ele_pt[ee_leg1[vh_v[vh]]]/1000",50,0,1000,outpath,"ele1_pt","");
  compareSamples(&sample1,&sample2,"ele_eta[ee_leg1[vh_v[vh]]]",100,-5,5,outpath,"ele1_eta","");
  compareSamples(&sample1,&sample2,"ele_pt[ee_leg2[vh_v[vh]]]/1000",50,0,1000,outpath,"ele2_pt","");
  compareSamples(&sample1,&sample2,"ele_eta[ee_leg2[vh_v[vh]]]",100,-5,5,outpath,"ele2_eta","");

  ////jet
  compareSamples(&sample1,&sample2,"jet_pt/1000",100,0,1000,outpath,"jet_pt","");
  compareSamples(&sample1,&sample2,"jet_eta",100,-5,5,outpath,"jet_eta","");

  ////fat jet
  compareSamples(&sample1,&sample2,"fatjet_pt[vh_h[vh]]/1000",100,0,1000,outpath,"fatjet_pt","");
  compareSamples(&sample1,&sample2,"fatjet_eta[vh_h[vh]]",100,-5,5,outpath,"fatjet_eta","");
  compareSamples(&sample1,&sample2,"fatjet_m[vh_h[vh]]/1000",100,0,500,outpath,"fatjet_m","");


  ////Z 
  compareSamples(&sample1,&sample2,"mm_m[vh_v[vh]]/1000",100,60,120,outpath,"mm_m","");
  compareSamples(&sample1,&sample2,"mm_pt[vh_v[vh]]/1000",100,0,500,outpath,"mm_pt","");

  compareSamples(&sample1,&sample2,"ee_m[vh_v[vh]]/1000",100,60,120,outpath,"ee_m","");
  compareSamples(&sample1,&sample2,"ee_pt[vh_v[vh]]/1000",100,0,500,outpath,"ee_pt","");

  ////VH
  compareSamples(&sample1,&sample2,"vh_m[vh]/1000",60,0,3000,outpath,"vh_m","");
  


  //Weights:*******
  compareSamples(&sample1,&sample2,"eve_mc_w",100,0,2,outpath,"eve_mc_w","");
  compareSamples(&sample1,&sample2,"eve_trig_w",100,0,2,outpath,"eve_trig_w","");
  compareSamples(&sample1,&sample2,"ele_reco_w",100,0,2,outpath,"ele_reco_w","");
  compareSamples(&sample1,&sample2,"ele_id_w",100,0,2,outpath,"ele_id_w","");
  compareSamples(&sample1,&sample2,"ele_iso_w",100,0,2,outpath,"ele_iso_w","");
  compareSamples(&sample1,&sample2,"muo_id_w",100,0,2,outpath,"muo_id_w","");
  compareSamples(&sample1,&sample2,"muo_iso_w",100,0,2,outpath,"muo_iso_w","");
  compareSamples(&sample1,&sample2,"eve_btag_w",100,0,2,outpath,"eve_btag_w","");
  


  gROOT->ProcessLine(".q");
}
