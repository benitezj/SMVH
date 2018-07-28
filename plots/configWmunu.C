#include "plotterGlobals.h"
#include "WmunuPlotter.h"

void configWmunu(WmunuPlotter * analysis, TString inpath,TString outpath){  
  if(!analysis) return;

  analysis->setOutputPath(outpath);
  analysis->setLumisFile(lumisfile);
  analysis->setCrossectionsFile(crossectionsfile);


  analysis->addAllData(inpath);

  //////////W->mu nu
  analysis->defineBackground("Wmunu","Wmunu_l,Wmunu_c,Wmunu_b",colorWmunu,titleWmunu);
  analysis->addSample(new Sample("Wmunu_l","mc14_8TeV.167745.Sherpa_CT10_WmunuMassiveCBPt0_CJetVetoBVeto.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath));
  analysis->addSample(new Sample("Wmunu_c","mc14_8TeV.167744.Sherpa_CT10_WmunuMassiveCBPt0_CJetFilterBVeto.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath));
  analysis->addSample(new Sample("Wmunu_b","mc14_8TeV.167743.Sherpa_CT10_WmunuMassiveCBPt0_BFilter.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath));

  //Z-->mu mu
  analysis->defineBackground("Zmm","Zmm",colorZmm,titleZmm);
  analysis->addSample(new Sample("Zmm","mc14_8TeV.147807.PowhegPythia8_AU2CT10_Zmumu.merge.AOD.e1852_s1896_s1912_r5591_r5625",inpath));
  
  //t-tbar
  analysis->defineBackground("ttbar","ttbar",colorTTbar,titleTTbar);
  analysis->addSample(new Sample("ttbar","mc14_8TeV.117050.PowhegPythia_P2011C_ttbar.merge.AOD.e1727_s1933_s1911_r5591_r5625",inpath));


  /////////////////
  analysis->eventWeight_="eve_mc_w*eve_mc_puw[0]";
  if(!analysis->scaleSamplesLumi()){ 
    cout<<"Failed scaling the MC samles."<<endl; 
  }
}

