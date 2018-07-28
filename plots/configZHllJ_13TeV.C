#ifndef configZHllJ_13TeV_C
#define configZHllJ_13TeV_C

#include "plotterGlobals.h"

bool configZHllJ_13TeV(Plotter * analysis, TString channel, TString inpath){  
  if(!analysis) return 0;

  analysis->eventWeight_ = "(eve_mc_w*eve_trig_w*ele_reco_w*ele_id_w*ele_iso_w*muo_ttv_w*muo_id_w*muo_iso_w*eve_btag_w)";
  analysis->SetTitle(atlasInternal13TeV);
  analysis->setLumisFile(lumisfile13TeV);
  analysis->setCrossectionsFile(crossectionsfile13TeV);
  analysis->setSystNames(kinSysts);
  float crossection=0.01; ///for signals in plots, Note: for limit inputs this is divided out so effectively set to 1pb

  
  /////////////Add the data sets
  //analysis->setFakeLumi(3210);///in case no data was processed, should be enabled
  analysis->addAllData(inpath); 

  
  //NOTE: order of backgrounds below determines order on plot

  //SM VH 
  analysis->defineBackground("SMZh","",colorVHSM,titleVHSM);
  analysis->loadBackgroundSamples("SMZh","ZllH125_bb",inpath,puWeightMC15a);
  
  ///single top
  analysis->defineBackground("STop","",colorStop,titleStop);
  analysis->loadBackgroundSamples("STop","_top",inpath,puWeight);
  analysis->loadBackgroundSamples("STop","_antitop",inpath,puWeight);
  
  ////VV
  analysis->defineBackground("Diboson","",colorVV,titleVV);
  analysis->loadBackgroundSamples("Diboson","36108*.Sherpa_CT10_W",inpath,puWeight);
  analysis->loadBackgroundSamples("Diboson","36108*.Sherpa_CT10_Z",inpath,puWeight);
  
  ////ttbar
  analysis->defineBackground("TTbar","",colorTTbar,titleTTbar);
  analysis->loadBackgroundSamples("TTbar","ttbar*nonallhad",inpath,puWeight);
  
  ////Z+jets
  analysis->defineBackground("Zl","",colorZl,titleZl);
  analysis->loadBackgroundSamples("Zl","Z*CVetoBVeto",inpath,puWeight);
  
  analysis->defineBackground("Zc","",colorZc,titleZc);
  analysis->loadBackgroundSamples("Zc","Z*CFilterBVeto",inpath,puWeight);
  
  analysis->defineBackground("Zb","",colorZb,titleZb);
  analysis->loadBackgroundSamples("Zb","Z*BFilter",inpath,puWeight);
  
  
  //////////Add signals
  for(long m=0;m<NMASS;m++){
  
    std::string samp;
    if(MassPoint[m]<1000)
      samp=findMatchInDir(inpath.Data(),TString("VzZH_llqq_m0")+MassPoint[m]);
    else 
      samp=findMatchInDir(inpath.Data(),TString("VzZH_llqq_m")+MassPoint[m]);
  
    if(samp.compare("")!=0){
      char MTeV[10];
      sprintf(MTeV,"%.1f",MassPoint[m]/1000.);
  
      TString name=TString("HVT")+MassPoint[m];//data card needs this name
      Sample* S=new Sample(name,samp.c_str(),inpath,kinSysts);
      S->setEventWeight(puWeightMC15a);
      S->setCrossection(crossection);
      analysis->addSample(S);

  
      ////define which signal will be shown on plots
      if(MassPoint[m]==1500)
   	analysis->defineSignal(name,name,kRed,TString("HVT_{")+MTeV+"TeV}",1);
    }
  
  }
  
  
  //AZh signals
  for(long m=0;m<NMASSHIGG;m++){
    std::string samp=findMatchInDir(inpath.Data(),TString("A14NNPDF23LO_ggA")+MassPointHIGG[m]);
  
    if(samp.compare("")!=0){
      char MTeV[10];
      sprintf(MTeV,"%.1f",MassPointHIGG[m]/1000.);
  
      TString name=TString("ggA")+MassPointHIGG[m];//data card needs this name
      Sample* S=new Sample(name,samp.c_str(),inpath,kinSysts);  
      S->setEventWeight(puWeightMC15a);
      S->setCrossection(crossection);
      analysis->addSample(S);
  
      ////define which signal will be shown on plots
      //if(MassPointHIGG[m]==1500)
      //analysis->defineSignal(name,name,kRed,TString("ggA_{")+MTeV+"TeV}",1);
    }
  
  }


  return 1;
}

#endif
