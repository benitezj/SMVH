#include "configZHllbb_13TeV.C"

bool configZHeebb_13TeV(Plotter * analysis, TString inpath){  
  if(!analysis) return 0;

  if(!configZHllbb_13TeV(analysis,inpath)) return 0;

  analysis->eventWeight_+="*(60000.<ee_m[vh_v[vh]]&&ee_m[vh_v[vh]]<120000.)";


  ////Z
  analysis->defineBackground("Z_l","",colorZl,titleZl);
  if(!analysis->loadBackgroundSamples("Z_l","Zee*CVetoBVeto",inpath)) return 0;
  analysis->defineBackground("Z_c","",colorZc,titleZc);
  if(!analysis->loadBackgroundSamples("Z_c","Zee*CFilterBVeto",inpath)) return 0;
  analysis->defineBackground("Z_b","",colorZb,titleZb);
  if(!analysis->loadBackgroundSamples("Z_b","Zee*BFilter",inpath)) return 0;


  return 1;
}

