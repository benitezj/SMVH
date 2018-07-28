#include "plotterGlobals.h"

#include "plotRToVHTruth.C"

void runRToZHllbbTruth(TString channel, TString intag){



  TString inpath=inputDir_+"/"+channel+"/"+intag;
  std::string sampleName = findMatchInDir(inpath.Data(),TString("VzZH_llqq_m1500"));
  cout<<"Sample :"<<sampleName<<endl;
  Sample* sample = new Sample("sample",sampleName.c_str(),inpath);


  TString outpath=outputDir_+"/"+channel+"/"+intag+"_TruthEffRes";
  system(TString("rm -rf ")+outpath);
  system(TString("mkdir ")+outpath);


  // sample->addRootFiles("mc14_13TeV.203917.MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_1000GeV_126.merge.AOD.e3318_s1982_s2008_r5787_r5853",inpath);



  ///////////////////////////////////////////////////////////
  //For Resolution and Efficiency need to apply final cuts
  ///////////////////////////////////////////////////////////

  ////Can't call sample->skim() because that gets rid of TChain which contains the Gen histograms
  //TString skim="1";

  //fat jet pT (last cut applied in TupleMaker is fat jet pT)
  sample->addSkim("pt(H)","(fatjet_pt[vh_h[vh]]>250000)");

  ///Trig
  sample->addSkim("Trigger","(eve_passTrig==1)");

  ///Trig match
  sample->addSkim("TrigMatch","(eve_passTrigMatch==1)");

  //Multi-lepton veto
  sample->addSkim("MultiLepVeto","(eve_passVHMultiLepVeto==1)");
  
  ///m(ll)
  if(channel.CompareTo("ZHmmJ")==0)
    sample->addSkim("m(ll)","(60000.<mm_m[vh_v[vh]]&&mm_m[vh_v[vh]]<120000.)");
  else if(channel.CompareTo("ZHeeJ")==0)
    sample->addSkim("m(ll)","(60000.<ee_m[vh_v[vh]]&&ee_m[vh_v[vh]]<120000.)");
  else {cout<<"Wrong channel."<<endl; return;}

  
  //Xbb higgs tag (includes mass cut)
  //sample->addSkim("HiggsTag","(fatjet_btag[vh_h[vh]]==1)");

  
  sample->runSkims();
  TString selection="1";
  plotRToVHTruth(sample,outpath,selection);


  gROOT->ProcessLine(".q");
}
