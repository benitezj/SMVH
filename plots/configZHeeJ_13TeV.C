#include "configZHllJ_13TeV.C"

bool configZHeeJ_13TeV(Plotter * analysis, TString inpath){  
  if(!analysis) return 0;
  
  if(!configZHllJ_13TeV(analysis,"ZHeeJ",inpath)) return 0;

  ////Z
  analysis->defineBackground("ZeeL","",colorZl,titleZl);
  if(!analysis->loadBackgroundSamples("ZeeL","Zee*CVetoBVeto",inpath)) return 0;
  analysis->defineBackground("ZeeC","",colorZc,titleZc);
  if(!analysis->loadBackgroundSamples("ZeeC","Zee*CFilterBVeto",inpath)) return 0;
  analysis->defineBackground("ZeeB","",colorZb,titleZb);
  if(!analysis->loadBackgroundSamples("ZeeB","Zee*BFilter",inpath)) return 0;


  return 1;
}

