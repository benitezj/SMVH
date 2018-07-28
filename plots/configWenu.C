#include "plotterGlobals.h"
#include "WenuPlotter.h"


void configWenu(WenuPlotter * analysis, TString inpath,TString outpath){  
  if(!analysis) return;

  analysis->setOutputPath(outpath);
  analysis->setLumisFile(lumisfile);
  analysis->setCrossectionsFile(crossectionsfile);
  
  analysis->addAllData(inpath);

  
  ///W->e nu
  analysis->defineBackground("Wenu","Wenu_l,Wenu_c,Wenu_b",colorWenu,titleWenu);
  analysis->addSample(new Sample("Wenu_l","mc14_8TeV.167742.Sherpa_CT10_WenuMassiveCBPt0_CJetVetoBVeto.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath));
  analysis->addSample(new Sample("Wenu_c","mc14_8TeV.167741.Sherpa_CT10_WenuMassiveCBPt0_CJetFilterBVeto.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath));
  analysis->addSample(new Sample("Wenu_b","mc14_8TeV.167740.Sherpa_CT10_WenuMassiveCBPt0_BFilter.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath));

  //Z-->e e
  analysis->defineBackground("Zee","Zee",colorZee,titleZee);
  analysis->addSample(new Sample("Zee","mc14_8TeV.147806.PowhegPythia8_AU2CT10_Zee.merge.AOD.e1169_s1896_s1912_r5591_r5625",inpath));

  //t-tbar
  analysis->defineBackground("ttbar","ttbar",colorTTbar,titleTTbar);
  analysis->addSample(new Sample("ttbar","mc14_8TeV.117050.PowhegPythia_P2011C_ttbar.merge.AOD.e1727_s1933_s1911_r5591_r5625",inpath));

  /////////////////
  analysis->eventWeight_="eve_mc_w*eve_mc_puw[0]";
  if(!analysis->scaleSamplesLumi()){ 
    cout<<"Failed scaling the MC samles."<<endl; 
  }
}

