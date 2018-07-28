#include "ZHmmbbPlotter.h"
#include "plotterGlobals.h"

bool configZHmmbb(ZHmmbbPlotter * analysis, TString inpath, TString outpath){  
  if(!analysis) return;

  analysis->setOutputPath(outpath);
  analysis->setLumisFile(lumisfile);
  analysis->setCrossectionsFile(crossectionsfile);
  analysis->eventWeight_="eve_mc_w*eve_mc_puw[0]";
   
  analysis->addAllData(inpath);
  // analysis->addData(inpath,"data12_8TeV.00204633.physics_Muons.merge.AOD.r5724_p1751");
  // analysis->addData(inpath,"data12_8TeV.00204726.physics_Muons.merge.AOD.r5724_p1751");
  // analysis->addData(inpath,"data12_8TeV.00204769.physics_Muons.merge.AOD.r5724_p1751");
  // analysis->addData(inpath,"data12_8TeV.00204772.physics_Muons.merge.AOD.r5724_p1751");
  // analysis->addData(inpath,"data12_8TeV.00204796.physics_Muons.merge.AOD.r5724_p1751");
  // analysis->addData(inpath,"data12_8TeV.00204857.physics_Muons.merge.AOD.r5724_p1751");
  // analysis->addData(inpath,"data12_8TeV.00205010.physics_Muons.merge.AOD.r5724_p1751");
  // analysis->addData(inpath,"data12_8TeV.00205016.physics_Muons.merge.AOD.r5724_p1751");
  

  ////Sherpa
  analysis->defineBackground("Zmm_l","Zmm_l",colorZl,titleZl);
  analysis->addSample(new Sample("Zmm_l","mc14_8TeV.167754.Sherpa_CT10_ZmumuMassiveCBPt0_CVetoBVeto.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath));
  analysis->defineBackground("Zmm_c","Zmm_c",colorZc,titleZc);
  analysis->addSample(new Sample("Zmm_c","mc14_8TeV.167753.Sherpa_CT10_ZmumuMassiveCBPt0_CFilterBVeto.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath));
  analysis->defineBackground("Zmm_b","Zmm_b",colorZb,titleZb);
  analysis->addSample(new Sample("Zmm_b","mc14_8TeV.167752.Sherpa_CT10_ZmumuMassiveCBPt0_BFilter.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath));

  /////////////ttbar
  analysis->defineBackground("ttbar","ttbar",colorTTbar,titleTTbar);
  analysis->addSample(new Sample("ttbar","mc14_8TeV.117050.PowhegPythia_P2011C_ttbar.merge.AOD.e1727_s1933_s1911_r5591_r5625",inpath));

  /////////////signal
  analysis->defineSignal("ZH","ZH",kRed,"ZH125",10);
  analysis->addSample(new Sample("ZH","mc14_8TeV.189427.PowhegPythia8_AU2CT10_ZH125J_MINLO_mumubb_VpT_Weighted.merge.AOD.e2698_s1933_s1911_r5591_r5625",inpath));
  //analysis->addSample(new Sample("ZH","mc14_8TeV.189341.PowhegPythia8_AU2CT10_ggZH125_mumubb.merge.AOD.e2617_s1933_s1911_r5591_r5625",inpath));

  ///////////////////////////////////////////
  TString skim="";
  skim+="83000<mm_m[vh_v[vh]]&&mm_m[vh_v[vh]]<99000";
  skim+="&&met_pt<60000";
  skim+="&&70000<jj_m[vh_h[vh]]&&jj_m[vh_h[vh]]<150000";
  skim+="&&mm_pt[vh_v[vh]]>(0.4*vh_m[vh]-100000)";
  if(skim.CompareTo("")!=0 && !(analysis->skimSamples(skim.Data())))
    return 0;
  
  if(!(analysis->scaleSamplesLumi()))
    return 0;

  return 1;
}

