#include "plotterGlobals.h"

void runZHllJCutFlow(TString channel, TString intag, TString match="VzZH_llqq_m1500",float ymax=1.0){
  gROOT->ProcessLine(".x ./SMVH/plots/rootlogon.C");

  ////Note:
  ///cutflow.txt must have been created for the sample

  TString inpath=inputDir_+"/"+channel+"/"+intag;
  std::string sampleName = findMatchInDir(inpath.Data(),match);
  cout<<"Sample :"<<sampleName<<endl;
  Sample* sample = new Sample("sample",sampleName.c_str(),inpath);


  TString outpath=outputDir_+"/"+channel+"/Cutflow_"+intag+"_"+match;
  //system(TString("rm -rf ")+outpath);
  //system(TString("mkdir ")+outpath);


  //Multi-lepton veto
  sample->addSkim("MultiLepVeto","(eve_passVHMultiLepVeto==1)");

  ///Trig
  sample->addSkim("Trigger","(eve_passTrig==1)");

  ///Trig match
  //sample->addSkim("TrigMatch","(eve_passTrigMatch==1)");//No longer separated

  ///m(ll)
  if(channel.CompareTo("ZHmmJ")==0)
    sample->addSkim("m(ll)","(55000.<mm_m[vh_v[vh]]&&mm_m[vh_v[vh]]<125000.)");
  else if(channel.CompareTo("ZHeeJ")==0)
    sample->addSkim("m(ll)","(70000.<ee_m[vh_v[vh]]&&ee_m[vh_v[vh]]<110000.)");
  else {cout<<"Wrong channel."<<endl; return;}

  //H mass window
  sample->addSkim("AtLeast1TrkJet","(fatjet_ntrkjet[vh_h[vh]]>=1)");
  sample->addSkim("HMass","(75000<fatjet_m_cor[vh_h[vh]]&&fatjet_m_cor[vh_h[vh]]<145000)");

  //B-tagging
  sample->addSkim("1BTag","((fatjet_ntrkjet[vh_h[vh]]==1&&trkjet_btag[fatjet_ltrkjet[vh_h[vh]]]==1)||(fatjet_ntrkjet[vh_h[vh]]>=2&&((trkjet_btag[fatjet_ltrkjet[vh_h[vh]]]==1&&trkjet_btag[fatjet_sltrkjet[vh_h[vh]]]==0)||(trkjet_btag[fatjet_ltrkjet[vh_h[vh]]]==0&&trkjet_btag[fatjet_sltrkjet[vh_h[vh]]]==1))))");
  //sample->addSkim("2BTag","(fatjet_ntrkjet[vh_h[vh]]>=2&&trkjet_btag[fatjet_ltrkjet[vh_h[vh]]]==1&&trkjet_btag[fatjet_sltrkjet[vh_h[vh]]]==1)");

  //additional b-jet veto
  sample->addSkim("AddtlBVeto","(vh_naddtrkbjet==0)");
  

  //
  //TCanvas C;
  
  ///
  //TGraph* cutFlow =sample->getCutFlow("eventCounter_inputCounter");
  TGraph* cutFlow =sample->getCutFlow("eventCounter_NoDiLepton",outpath,ymax);


  gROOT->ProcessLine(".q");
}
