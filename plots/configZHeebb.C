#include "ZHeebbPlotter.h"
#include "plotterGlobals.h"

bool configZHeebb(ZHeebbPlotter * analysis, TString inpath, TString outpath){  
  if(!analysis) return;

  analysis->setOutputPath(outpath);
  analysis->setLumisFile(lumisfile);
  analysis->setCrossectionsFile(crossectionsfile);
  analysis->eventWeight_="eve_mc_w*eve_mc_puw[0]";
   
  analysis->addAllData(inpath);

  ////Z-->ll Sherpa samples
  analysis->defineBackground("Zee_l","Zee_l",colorZl,titleZl);
  analysis->addSample(new Sample("Zee_l","mc14_8TeV.167751.Sherpa_CT10_ZeeMassiveCBPt0_CVetoBVeto.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath));
  analysis->defineBackground("Zee_c","Zee_c",colorZc,titleZc);
  analysis->addSample(new Sample("Zee_c","mc14_8TeV.167750.Sherpa_CT10_ZeeMassiveCBPt0_CFilterBVeto.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath));
  analysis->defineBackground("Zee_b","Zee_b",colorZb,titleZb);
  analysis->addSample(new Sample("Zee_b","mc14_8TeV.167749.Sherpa_CT10_ZeeMassiveCBPt0_BFilter.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath));

  /////////////ttbar
  analysis->defineBackground("ttbar","ttbar",colorTTbar,titleTTbar);
  analysis->addSample(new Sample("ttbar","mc14_8TeV.117050.PowhegPythia_P2011C_ttbar.merge.AOD.e1727_s1933_s1911_r5591_r5625",inpath));

  /////////////signal
  analysis->defineSignal("ZH","ZH",kRed,"ZH125",10);
  analysis->addSample(new Sample("ZH","mc14_8TeV.189426.PowhegPythia8_AU2CT10_ZH125J_MINLO_eebb_VpT_Weighted.merge.AOD.e2698_s1933_s1911_r5591_r5625",inpath));

  ///////////////////////////////////////////
  TString skim="";
  skim+="83000<ee_m[vh_v[vh]]&&ee_m[vh_v[vh]]<99000";
  skim+="&&met_pt<60000";
  skim+="&&70000<jj_m[vh_h[vh]]&&jj_m[vh_h[vh]]<150000";
  skim+="&&ee_pt[vh_v[vh]]>(0.4*vh_m[vh]-100000)";
  if(skim.CompareTo("")!=0 && !(analysis->skimSamples(skim.Data())))
    return 0;

  if(!(analysis->scaleSamplesLumi()))
    return 0;

  return 1;
}

