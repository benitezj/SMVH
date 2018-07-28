#include "WHmnubbPlotter.h"
#include "plotterGlobals.h"

bool configWHmnubb(WHmnubbPlotter * analysis, TString inpath, TString outpath){  
  if(!analysis) return 0;

  analysis->setOutputPath(outpath);
  analysis->setLumisFile(lumisfile);
  analysis->setCrossectionsFile(crossectionsfile);
  analysis->eventWeight_="eve_mc_w*eve_mc_puw[0]";

  analysis->addAllData(inpath);

  ////Sherpa
  analysis->defineBackground("Wmunu_l","Wmunu_l",colorWl,titleWl);
  analysis->addSample(new Sample("Wmunu_l","mc14_8TeV.167745.Sherpa_CT10_WmunuMassiveCBPt0_CJetVetoBVeto.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath));
  analysis->defineBackground("Wmunu_c","Wmunu_c",colorWc,titleWc);
  analysis->addSample(new Sample("Wmunu_c","mc14_8TeV.167744.Sherpa_CT10_WmunuMassiveCBPt0_CJetFilterBVeto.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath));
  analysis->defineBackground("Wmunu_b","Wmunu_b",colorWb,titleWb);
  analysis->addSample(new Sample("Wmunu_b","mc14_8TeV.167743.Sherpa_CT10_WmunuMassiveCBPt0_BFilter.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath));

  /////////////ttbar
  analysis->defineBackground("ttbar","ttbar",colorTTbar,titleTTbar);
  analysis->addSample(new Sample("ttbar","mc14_8TeV.117050.PowhegPythia_P2011C_ttbar.merge.AOD.e1727_s1933_s1911_r5591_r5625",inpath));

  /////////////signal
  analysis->defineSignal("WH","WpH,WmH",kRed,"WH125",10);
  analysis->addSample(new Sample("WpH","mc14_8TeV.189421.PowhegPythia8_AU2CT10_WpH125J_MINLO_munubb_VpT_Weighted.merge.AOD.e2698_s1933_s1911_r5591_r5625",inpath));
  analysis->addSample(new Sample("WmH","mc14_8TeV.189424.PowhegPythia8_AU2CT10_WmH125J_MINLO_munubb_VpT_Weighted.merge.AOD.e2698_s1933_s1911_r5591_r5625",inpath));

  ///////////////////////////////////////////
  TString skim="";
  skim+="muMet_mT[vh_v[vh]]>20000";
  skim+="&&met_pt>30000";
  skim+="&&70000<jj_m[vh_h[vh]]&&jj_m[vh_h[vh]]<150000";
  skim+="&&muMet_pt[vh_v[vh]]>0.4*vh_m[vh]";
  skim+="&&vh_dPhiHMET[vh]>1.0";  
  if(skim.CompareTo("")!=0 && !(analysis->skimSamples(skim.Data())))
    return 0;

  if(!analysis->scaleSamplesLumi())
    return 0;

  return 1;
}

