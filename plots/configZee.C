#include "plotterGlobals.h"
#include "ZeePlotter.h"


void configZee(ZeePlotter * analysis, TString inpath,TString outpath){  

  analysis->setOutputPath(outpath);
  analysis->setLumisFile(lumisfile);
  analysis->setCrossectionsFile(crossectionsfile);

  analysis->addAllData(inpath);

  /////////////Z->ee Powheg  
  //analysis->defineBackground("Zee","Zee",colorZee,titleZee);
  //analysis->addSample(new Sample("Zee","mc14_8TeV.147806.PowhegPythia8_AU2CT10_Zee.merge.AOD.e1169_s1896_s1912_r5591_r5625",inpath));

  ////////////Z->ee Sherpa
  analysis->defineBackground("Zee","Zee_l,Zee_c,Zee_b",colorZee,titleZee);
  analysis->addSample(new Sample("Zee_l","mc14_8TeV.167751.Sherpa_CT10_ZeeMassiveCBPt0_CVetoBVeto.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath));
  analysis->addSample(new Sample("Zee_c","mc14_8TeV.167750.Sherpa_CT10_ZeeMassiveCBPt0_CFilterBVeto.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath));
  analysis->addSample(new Sample("Zee_b","mc14_8TeV.167749.Sherpa_CT10_ZeeMassiveCBPt0_BFilter.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath));

  
  analysis->defineBackground("Wenu","Wenu_l,Wenu_c",colorWenu,titleWenu);
  analysis->addSample(new Sample("Wenu_l","mc14_8TeV.167742.Sherpa_CT10_WenuMassiveCBPt0_CJetVetoBVeto.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath));
  analysis->addSample(new Sample("Wenu_c","mc14_8TeV.167741.Sherpa_CT10_WenuMassiveCBPt0_CJetFilterBVeto.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath)); 


  analysis->defineBackground("ttbar","ttbar",colorTTbar,titleTTbar);
  analysis->addSample(new Sample("ttbar","mc14_8TeV.117050.PowhegPythia_P2011C_ttbar.merge.AOD.e1727_s1933_s1911_r5591_r5625",inpath));


  analysis->eventWeight_="eve_mc_w*eve_mc_puw[0]*(60000<ee_m[zll_ll]&&ee_m[zll_ll]<120000)";
  if(!analysis->scaleSamplesLumi()){ 
    cout<<"Failed scaling the MC samles."<<endl; 
  }

}

