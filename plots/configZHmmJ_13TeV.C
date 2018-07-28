#include "configZHllJ_13TeV.C"

bool configZHmmJ_13TeV(Plotter * analysis, TString inpath){  
  if(!analysis) return 0;
  
  if(!configZHllJ_13TeV(analysis,"ZHmmJ",inpath)) return 0;

  ////Z
  analysis->defineBackground("ZmumuL","",colorZl,titleZl);
  if(!analysis->loadBackgroundSamples("ZmumuL","Zmumu*CVetoBVeto",inpath)) return 0;
  analysis->defineBackground("ZmumuC","",colorZc,titleZc);
  if(!analysis->loadBackgroundSamples("ZmumuC","Zmumu*CFilterBVeto",inpath)) return 0;
  analysis->defineBackground("ZmumuB","",colorZb,titleZb);
  if(!analysis->loadBackgroundSamples("ZmumuB","Zmumu*BFilter",inpath)) return 0;


  return 1;
}

