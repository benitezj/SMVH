#include "configZHllbb_13TeV.C"

bool configZHmmbb_13TeV(Plotter * analysis, TString inpath){  
  if(!analysis) return 0;
  
  if(!configZHllbb_13TeV(analysis,inpath)) return 0;

  analysis->eventWeight_+="*(60000.<mm_m[vh_v[vh]]&&mm_m[vh_v[vh]]<120000.)";

  ////Z
  analysis->defineBackground("Z_l","",colorZl,titleZl);
  if(!analysis->loadBackgroundSamples("Z_l","Zmumu*CVetoBVeto",inpath)) return 0;
  analysis->defineBackground("Z_c","",colorZc,titleZc);
  if(!analysis->loadBackgroundSamples("Z_c","Zmumu*CFilterBVeto",inpath)) return 0;
  analysis->defineBackground("Z_b","",colorZb,titleZb);
  if(!analysis->loadBackgroundSamples("Z_b","Zmumu*BFilter",inpath)) return 0;


  return 1;
}

