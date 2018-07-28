#include "configZHllJ_13TeV.C"

bool configZHemJ_13TeV(Plotter * analysis, TString inpath){  
  if(!analysis) return 0;
  
  if(!configZHllJ_13TeV(analysis,"ZHemJ",inpath)) return 0;

  ////Z
  analysis->defineBackground("ZL","",colorZl,titleZl);
  if(!analysis->loadBackgroundSamples("ZL","Zee*CVetoBVeto",inpath)) return 0;
  if(!analysis->loadBackgroundSamples("ZL","Zmumu*CVetoBVeto",inpath)) return 0;

  analysis->defineBackground("ZC","",colorZc,titleZc);
  if(!analysis->loadBackgroundSamples("ZC","Zee*CFilterBVeto",inpath)) return 0;
  if(!analysis->loadBackgroundSamples("ZC","Zmumu*CFilterBVeto",inpath)) return 0;

  analysis->defineBackground("ZB","",colorZb,titleZb);
  if(!analysis->loadBackgroundSamples("ZB","Zee*BFilter",inpath)) return 0;
  if(!analysis->loadBackgroundSamples("ZB","Zmumu*BFilter",inpath)) return 0;


  return 1;
}

