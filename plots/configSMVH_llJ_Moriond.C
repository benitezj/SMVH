#ifndef configSMVH_llJ_Moriond_C
#define configSMVH_llJ_Moriond_C

#include "plotterGlobals.h"

bool configSMVH_llJ_Moriond(Plotter * analysis, TString channel, TString inpath){  
  if(!analysis) return 0;

  analysis->eventWeight_ = puWeight+"*(eve_mc_w*eve_trig_w*ele_reco_w*ele_id_w*ele_iso_w*muo_ttv_w*muo_id_w*muo_iso_w*eve_btag_w)";
  analysis->SetTitle(atlasInternal13TeV);
  analysis->setLumisFile(lumisfile);
  analysis->setCrossectionsFile(crossectionsfile);
  analysis->setSystNames(kinSysts);

  
  /////////////Add the data sets
  analysis->setFakeLumi(40000); ///in case no data was processed, should be enabled
  //analysis->addAllData(inpath); 

  
  //NOTE: order of backgrounds below determines order on plot

  //SM VH 
  Sample* SM=new Sample("SMZh",findMatchInDir(inpath.Data(),"ZllH125_bb").c_str(),inpath,kinSysts);
  analysis->addSample(SM);
  analysis->defineSignal("SMZh","SMZh",colorVHSM,titleVHSM,5);
  
  ///single top
  analysis->defineBackground("STop","",colorStop,titleStop);
  analysis->loadBackgroundSamples("STop","_top",inpath);
  analysis->loadBackgroundSamples("STop","_antitop",inpath);
  
  ////VV
  analysis->defineBackground("Diboson","",colorVV,titleVV);
  analysis->loadBackgroundSamples("Diboson","Sh_*_SHv21_improved",inpath);
  
  ////ttbar
  analysis->defineBackground("TTbar","",colorTTbar,titleTTbar);
  analysis->loadBackgroundSamples("TTbar","ttbar*nonallhad",inpath);
  
  ////Z+jets
  analysis->defineBackground("Zl","",colorZl,titleZl);
  analysis->loadBackgroundSamples("Zl","Z*CVetoBVeto",inpath);
  
  analysis->defineBackground("Zc","",colorZc,titleZc);
  analysis->loadBackgroundSamples("Zc","Z*CFilterBVeto",inpath);
  
  analysis->defineBackground("Zb","",colorZb,titleZb);
  analysis->loadBackgroundSamples("Zb","Z*BFilter",inpath);
  
  
  // //////////Add signals
  // for(long m=0;m<NMASS;m++){
  
  //   std::string samp;
  //   if(MassPoint[m]<1000)
  //     samp=findMatchInDir(inpath.Data(),TString("VzZH_llqq_m0")+MassPoint[m]);
  //   else 
  //     samp=findMatchInDir(inpath.Data(),TString("VzZH_llqq_m")+MassPoint[m]);
  
  //   if(samp.compare("")!=0){
  //     char MTeV[10];
  //     sprintf(MTeV,"%.1f",MassPoint[m]/1000.);
  
  //     TString name=TString("HVT")+MassPoint[m];//data card needs this name
  //     Sample* S=new Sample(name,samp.c_str(),inpath,kinSysts);
  //     S->setCrossection(0.01);
  //     analysis->addSample(S);

  //     // ////define which signal will be shown on plots
  //     // if(MassPoint[m]==1500)
  //     // 	analysis->defineSignal(name,name,kRed,TString("HVT_{")+MTeV+"TeV}",1);
  //   }
  
  // }
  
  

  return 1;
}

#endif
