#ifndef configZHllbb_13TeV_C
#define configZHllbb_13TeV_C

#include "plotterGlobals.h"

bool configZHllbb_13TeV(Plotter * analysis, TString inpath){  
  if(!analysis) return 0;

  analysis->SetTitle(atlasInternal13TeV);
  analysis->setLumisFile(lumisfile13TeV);
  analysis->setCrossectionsFile(crossectionsfile13TeV);
  analysis->eventWeight_="eve_mc_w*eve_mc_puw[1]";
  analysis->eventWeight_+="*(jj_m[vh_h[vh]]<200000)";
  // analysis->eventWeight_+="*(70000<jj_m[vh_h[vh]]&&jj_m[vh_h[vh]]<150000)";
  // analysis->eventWeight_+="*(met_pt/sqrt(met_sumet)<4000)";
  // analysis->eventWeight_+="*(mm_pt[vh_v[vh]]>(0.4*vh_mass[vh]-100000))";
  // analysis->eventWeight_+="*()";


  //analysis->setFakeLumi(5000);
  analysis->addAllData(inpath); 


  /////////////ttbar
  analysis->defineBackground("ttbar","",colorTTbar,titleTTbar);
  if(!analysis->loadBackgroundSamples("ttbar","ttbar*nonallhad",inpath)) return 0;


  /////////////signal
  analysis->defineSignal("Signal2000","Signal2000",kRed,"ZH_{2.0TeV}",1);
  analysis->addSample(new Sample("Signal2000","mc15_13TeV.301395.MadGraphPythia8EvtGen_A14NNPDF23LO_HVT_Agv1_VzZH_llqq_m2000.merge.DAOD_EXOT12.e3814_s2608_s2183_r6630_r6264_p2375",inpath));
  analysis->findSample("Signal2000")->setCrossection(200);


  return 1;
}

#endif
