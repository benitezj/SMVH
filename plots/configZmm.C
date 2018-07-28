#include "plotterGlobals.h"

bool configZmm(Plotter * analysis, TString inpath){  
  if(!analysis) return 0;

  analysis->SetTitle(atlasInternal13TeV);
  analysis->setLumisFile(lumisfile13TeV);
  analysis->setCrossectionsFile(crossectionsfile13TeV);
  analysis->eventWeight_="eve_mc_w*eve_mc_puw[0]";
   
  //analysis->addAllData(inpath); 
  analysis->setFakeLumi(5000);


  ////Z
  analysis->defineBackground("Z_l","",colorZl,titleZl);
  if(!analysis->loadBackgroundSamples("Z_l","Zmumu_*CVetoBVeto",inpath)) return 0;
  analysis->defineBackground("Z_c","",colorZc,titleZc);
  if(!analysis->loadBackgroundSamples("Z_c","Zmumu_*CFilterBVeto",inpath)) return 0;
  analysis->defineBackground("Z_b","",colorZb,titleZb);
  if(!analysis->loadBackgroundSamples("Z_b","BFilter",inpath)) return 0;


   //analysis->addAllData(inpath);
  // analysis->addData(inpath,"data12_8TeV.00204633.physics_Muons.merge.AOD.r5724_p1751");
  // analysis->addData(inpath,"data12_8TeV.00204726.physics_Muons.merge.AOD.r5724_p1751");
  // analysis->addData(inpath,"data12_8TeV.00204769.physics_Muons.merge.AOD.r5724_p1751");
  // analysis->addData(inpath,"data12_8TeV.00204772.physics_Muons.merge.AOD.r5724_p1751");
  // analysis->addData(inpath,"data12_8TeV.00204796.physics_Muons.merge.AOD.r5724_p1751");
  // analysis->addData(inpath,"data12_8TeV.00204857.physics_Muons.merge.AOD.r5724_p1751");
  // analysis->addData(inpath,"data12_8TeV.00205010.physics_Muons.merge.AOD.r5724_p1751");
  // analysis->addData(inpath,"data12_8TeV.00205016.physics_Muons.merge.AOD.r5724_p1751");
  

  /////Powheg
  // analysis->defineBackground("Zmm","Zmm",colorZmm,titleZmm);
  // analysis->addSample(new Sample("Zmm","mc14_8TeV.147807.PowhegPythia8_AU2CT10_Zmumu.merge.AOD.e1852_s1896_s1912_r5591_r5625",inpath));

  ////Sherpa
  // analysis->defineBackground("Zmm","Zmm_l,Zmm_c,Zmm_b",colorZmm,titleZmm);//,Zmm_c,Zmm_b
  // analysis->addSample(new Sample("Zmm_l","mc14_8TeV.167754.Sherpa_CT10_ZmumuMassiveCBPt0_CVetoBVeto.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath));
  // analysis->addSample(new Sample("Zmm_c","mc14_8TeV.167753.Sherpa_CT10_ZmumuMassiveCBPt0_CFilterBVeto.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath));
  // analysis->addSample(new Sample("Zmm_b","mc14_8TeV.167752.Sherpa_CT10_ZmumuMassiveCBPt0_BFilter.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath));

  /////////////W->mu 
  // analysis->defineBackground("Wmunu","Wmunu",colorWmunu,titleWmunu);
  // analysis->addSample(new Sample("Wmunu","mc14_8TeV.167745.Sherpa_CT10_WmunuMassiveCBPt0_CJetVetoBVeto.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath));

  /////////////ttbar
  // analysis->defineBackground("ttbar","ttbar",colorTTbar,titleTTbar);
  // analysis->addSample(new Sample("ttbar","mc14_8TeV.117050.PowhegPythia_P2011C_ttbar.merge.AOD.e1727_s1933_s1911_r5591_r5625",inpath));



  if(!analysis->scaleSamplesLumi()){ 
    cout<<"Failed scaling the MC samles."<<endl; 
    return 0;
  }

  return 1;
}

