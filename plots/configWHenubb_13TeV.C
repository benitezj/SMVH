#include "plotterGlobals.h"

bool configWHenubb_13TeV(Plotter * analysis, TString inpath){  
  if(!analysis) return 0;

  analysis->SetTitle(atlasInternal13TeV);
  analysis->setLumisFile(lumisfile13TeV);
  analysis->setCrossectionsFile(crossectionsfile13TeV);
  analysis->eventWeight_="eve_mc_w*eve_mc_puw[0]";
   
  //analysis->addAllData(inpath); 
  analysis->setFakeLumi(5000);


  // ///ttbar
  analysis->defineBackground("top","",colorTOP,titleTOP);
  if(!analysis->loadBackgroundSamples("top","P2012*ttbar*nonallhad",inpath)) return 0;
  //if(!analysis->loadBackgroundSamples("top","P2012*singletop",inpath)) return 0;
  //if(!analysis->loadBackgroundSamples("top","P2012*st",inpath)) return 0;


  ////Z
  analysis->defineBackground("Z_l","",colorZl,titleZl);
  if(!analysis->loadBackgroundSamples("Z_l","ZeeMassiveCB*CVetoBVeto",inpath)) return 0;
  //if(!analysis->loadBackgroundSamples("Z_l","ZtautauMassiveCBPt0*CVetoBVeto",inpath)) return 0;
  analysis->defineBackground("Z_c","",colorZc,titleZc);
  if(!analysis->loadBackgroundSamples("Z_c","ZeeMassiveCB*CFilterBVeto",inpath)) return 0;
  //if(!analysis->loadBackgroundSamples("Z_c","ZtautauMassiveCBPt0*CFilterBVeto",inpath)) return 0;
  analysis->defineBackground("Z_b","",colorZb,titleZb);
  if(!analysis->loadBackgroundSamples("Z_b","ZeeMassiveCB*BFilter",inpath)) return 0;
  //if(!analysis->loadBackgroundSamples("Z_b","ZtautauMassiveCBPt0*BFilter",inpath)) return 0;


  ////W
  analysis->defineBackground("W_l","",colorWl,titleWl);
  if(!analysis->loadBackgroundSamples("W_l","WenuMassiveCBP*CJetVetoBVeto",inpath)) return 0;
  //if(!analysis->loadBackgroundSamples("W_l","WtaunuMassiveCB*CJetVetoBVeto",inpath)) return 0;
  analysis->defineBackground("W_c","",colorWc,titleWc);
  if(!analysis->loadBackgroundSamples("W_c","WenuMassiveCB*CJetFilterBVeto",inpath)) return 0;
  //if(!analysis->loadBackgroundSamples("W_c","WtaunuMassiveCB*CJetFilterBVeto",inpath)) return 0;
  analysis->defineBackground("W_b","",colorWb,titleWb);
  if(!analysis->loadBackgroundSamples("W_b","WenuMassiveCB*BFilter",inpath)) return 0;
  //if(!analysis->loadBackgroundSamples("W_b","WtaunuMassiveCB*BFilter",inpath)) return 0;



  /////////////signal
  analysis->defineSignal("Signal500","Signal500",kRed,"WH_{0.5TeV}",1);
  analysis->addSample(new Sample("Signal500","mc14_13TeV.203926.MadgraphPythia8_AU2MSTW2008LO_HVT_Wh_lvbb_500GeV_126.merge.DAOD_HIGG5D2.e3318_s1982_s2008_r5787_r5853_p1845",inpath));
  analysis->findSample("Signal500")->setCrossection(10);
  analysis->defineSignal("Signal1000","Signal1000",kRed,"WH_{1TeV}",1);
  analysis->addSample(new Sample("Signal1000","mc14_13TeV.203922.MadgraphPythia8_AU2MSTW2008LO_HVT_Wh_lvbb_1000GeV_126.merge.DAOD_HIGG5D2.e3318_s1982_s2008_r5787_r5853_p1845",inpath));
  analysis->findSample("Signal1000")->setCrossection(10);
  analysis->defineSignal("Signal2000","Signal2000",kRed,"WH_{2TeV}",1);
  analysis->addSample(new Sample("Signal2000","mc14_13TeV.203924.MadgraphPythia8_AU2MSTW2008LO_HVT_Wh_lvbb_2000GeV_126.merge.DAOD_HIGG5D2.e3318_s1982_s2008_r5787_r5853_p1845",inpath));
  analysis->findSample("Signal2000")->setCrossection(10);



  TString skim="1";
  skim+="&&eMet_mT[vh_v[vh]]>20000";
  //skim+="&&70000<jj_m[vh_h[vh]]&&jj_m[vh_h[vh]]<150000";
  //skim+="&&met_pt>30000";
  //skim+="&&vh_dPhiHMET[vh]>1.0";
  skim+="&&eMet_pt[vh_v[vh]]>0.4*vh_m[vh]";
  if(skim.CompareTo("")!=0 && !(analysis->skimSamples(skim.Data())))
    return 0;

  if(!(analysis->scaleSamplesLumi())){
    cout<<"Failed to scale samples to lumi"<<endl;
    return 0;
  }

  analysis->plot("vh_m[vh]/1000",25,0,2500,""," VH mass [GeV]","",c2,"vh_mass",1);
  
  return 0;
}

