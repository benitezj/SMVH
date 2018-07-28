#ifndef configZHllJ_13TeV_50ns_C
#define configZHllJ_13TeV_50ns_C

#include "plotterGlobals.h"


bool configZHllJ_13TeV_50ns(Plotter * analysis, TString channel, TString inpath){  
  if(!analysis) return 0;

///Override 25ns settings:
  lumisfile13TeV="SMVH/data/data15_13TeV.periodAllYear_DetStatus-v64-pro19_DQDefects-00-01-02_PHYS_StandardGRL_All_Good_Plusv63.csv";

  analysis->SetTitle(atlasInternal13TeV);
  analysis->setLumisFile(lumisfile13TeV);
  analysis->setCrossectionsFile(crossectionsfile13TeV);
  analysis->eventWeight_="(eve_mc_w*eve_mc_puw[3])";

  /////////////Add the data sets
  analysis->setFakeLumi(5000);
  //analysis->addAllData(inpath); 

  
  //NOTE: order of backgrounds below determines order on plot
  
  /////////////Add ttbar
  analysis->defineBackground("ttbar","",colorTTbar,titleTTbar);
  analysis->loadBackgroundSamples("ttbar","ttbar*nonallhad",inpath);

  ///Z+jets
  analysis->defineBackground("Zl","",colorZl,titleZl);
  analysis->loadBackgroundSamples("Zl","Z*CVetoBVeto",inpath);

  analysis->defineBackground("Zc","",colorZc,titleZc);
  analysis->loadBackgroundSamples("Zc","Z*CFilterBVeto",inpath);

  analysis->defineBackground("Zb","",colorZb,titleZb);
  analysis->loadBackgroundSamples("Zb","Z*BFilter",inpath);
  

  //////////Add signals
  float crossection=0.01;
  for(long M=1000;M<5000;M+=100){
    std::string samp=findMatchInDir(inpath.Data(),TString("VzZH_llqq_m")+M);
    if(samp.compare("")!=0){
      char MTeV[10];
      sprintf(MTeV,"%.1f",M/1000.);

      TString name=TString("HVT")+M;//data card needs this name
      analysis->addSample(new Sample(name,samp.c_str(),inpath));
      analysis->findSample(name)->setCrossection(crossection);

      ////define which signal will be shown on plots
      if(M==1500)
	analysis->defineSignal(name,name,kRed,TString("HVT_{")+MTeV+"TeV}",1);
    }

  }



  return 1;
}

#endif
