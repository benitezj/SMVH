#ifndef configZll_13TeV_C
#define configZll_13TeV_C

#include "plotterGlobals.h"

bool configZll_13TeV(Plotter * analysis, TString channel, TString inpath){  
  if(!analysis) return 0;

  //analysis->setSamplesPath(inpath);
  analysis->SetTitle(atlasInternal13TeV);
  analysis->setLumisFile(lumisfile13TeV);
  analysis->setCrossectionsFile(crossectionsfile13TeV);
  analysis->eventWeight_="(eve_mc_w*eve_mc_puw[3])";

  TString TrigCut="(eve_passTrig==1)*(eve_passTrigMatch==1)";

  TString LepPTcut="";
  if(channel.CompareTo("Zmm")==0)LepPTcut="(muo_pt[zll_l1]>60000)";
  else if(channel.CompareTo("Zee")==0)LepPTcut="(ele_pt[zll_l1]>60000)";
  else if(channel.CompareTo("Zem")==0)LepPTcut="1";
  else{cout<<" Wrong channel."<<endl;return 0;}

  TString DYcut="";
  if(channel.CompareTo("Zmm")==0)DYcut="(50000.<mm_m[zll_ll])"; 
  else if(channel.CompareTo("Zee")==0)DYcut="(50000.<ee_m[zll_ll])"; 
  else if(channel.CompareTo("Zem")==0)DYcut="1";
  else{cout<<" Wrong channel."<<endl;return 0;}

  TString Zcut="";
  if(channel.CompareTo("Zmm")==0)Zcut="(60000.<mm_m[zll_ll]&&mm_m[zll_ll]<120000.)";
  else if(channel.CompareTo("Zee")==0)Zcut="(60000.<ee_m[zll_ll]&&ee_m[zll_ll]<120000.)"; 
  else if(channel.CompareTo("Zem")==0)Zcut="1";
  else{cout<<" Wrong channel."<<endl;return 0;}


  ///Event selection
  TString BaseCut=TrigCut+"*"+LepPTcut+"*"+DYcut+"*"+Zcut;
  analysis->setSelection(BaseCut);
  //////////////////////////////////////////////////////////////////////


  //////////////Data
  //analysis->setFakeLumi(1000);
  analysis->addAllData(inpath); 
  
  
  /////////////////////////////////////////////////////////////////////////////
  ///Z->e-e,mu-mu,tau-tau
  analysis->defineBackground("ZL","",colorZl,titleZl);
  if(!analysis->loadBackgroundSamples("ZL","Zee*CVetoBVeto",inpath)
     && !analysis->loadBackgroundSamples("ZL","Zmumu*CVetoBVeto",inpath)
     && !analysis->loadBackgroundSamples("ZL","Ztautau*CVetoBVeto",inpath) 
     ) return 0;

  analysis->defineBackground("ZC","",colorZc,titleZc);
  if(!analysis->loadBackgroundSamples("ZC","Zee*CFilterBVeto",inpath)
     && !analysis->loadBackgroundSamples("ZC","Zmumu*CFilterBVeto",inpath)
     && !analysis->loadBackgroundSamples("ZC","Ztautau*CFilterBVeto",inpath)
     ) return 0;

  analysis->defineBackground("ZB","",colorZb,titleZb);
  if(!analysis->loadBackgroundSamples("ZB","Zee*BFilter",inpath)
     && !analysis->loadBackgroundSamples("ZB","Zmumu*BFilter",inpath)
     && !analysis->loadBackgroundSamples("ZB","Ztautau*BFilter",inpath)
     ) return 0;
  

  /////////////Add ttbar
  analysis->defineBackground("ttbar","",colorTTbar,titleTTbar);
  if(!analysis->loadBackgroundSamples("ttbar","ttbar*nonallhad",inpath)) return 0;
  //////////////////////////////////////////////////////////////////////////////
  

  return 1;
}

#endif
