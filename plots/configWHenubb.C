#include "WHenubbPlotter.h"
#include "plotterGlobals.h"

bool configWHenubb(WHenubbPlotter * analysis, TString inpath, TString outpath){  
  if(!analysis) return 0;

  analysis->setOutputPath(outpath);
  analysis->setLumisFile(lumisfile);
  analysis->setCrossectionsFile(crossectionsfile);
  analysis->eventWeight_="eve_mc_w*eve_mc_puw[0]";
   
  analysis->addAllData(inpath);

  ////Sherpa
  analysis->defineBackground("Wenu_l","Wenu_l",colorWl,titleWl);
  analysis->addSample(new Sample("Wenu_l","mc14_8TeV.167742.Sherpa_CT10_WenuMassiveCBPt0_CJetVetoBVeto.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath));
  analysis->defineBackground("Wenu_c","Wenu_c",colorWc,titleWc);
  analysis->addSample(new Sample("Wenu_c","mc14_8TeV.167741.Sherpa_CT10_WenuMassiveCBPt0_CJetFilterBVeto.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath));
  analysis->defineBackground("Wenu_b","Wenu_b",colorWb,titleWb);
  analysis->addSample(new Sample("Wenu_b","mc14_8TeV.167740.Sherpa_CT10_WenuMassiveCBPt0_BFilter.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath));

  /////////////ttbar
  analysis->defineBackground("ttbar","ttbar",colorTTbar,titleTTbar);
  analysis->addSample(new Sample("ttbar","mc14_8TeV.117050.PowhegPythia_P2011C_ttbar.merge.AOD.e1727_s1933_s1911_r5591_r5625",inpath));

  /////////////signal
  analysis->defineSignal("WH","WpH,WmH",kRed,"WH125",10);
  analysis->addSample(new Sample("WpH","mc14_8TeV.189420.PowhegPythia8_AU2CT10_WpH125J_MINLO_enubb_VpT_Weighted.merge.AOD.e2698_s1933_s1911_r5591_r5625",inpath));
  analysis->addSample(new Sample("WmH","mc14_8TeV.189423.PowhegPythia8_AU2CT10_WmH125J_MINLO_enubb_VpT_Weighted.merge.AOD.e2698_s1933_s1911_r5591_r5625",inpath));

  ///////////////////////////////////////////
  TString skim="";
  skim+="eMet_mT[vh_v[vh]]>20000";
  skim+="&&met_pt>30000";
  skim+="&&70000<jj_m[vh_h[vh]]&&jj_m[vh_h[vh]]<150000";
  skim+="&&eMet_pt[vh_v[vh]]>0.4*vh_m[vh]";
  skim+="&&vh_dPhiHMET[vh]>1.0";

  if(skim.CompareTo("")!=0 && !(analysis->skimSamples(skim.Data())))
    return 0;

  if(!analysis->scaleSamplesLumi())
    return 0;

  return 1;
}

