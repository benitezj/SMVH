#include "plotCmdLineGlobals.C"

void plotCmdLineWmunu(TString file=""){

  TFile F((const char*)file);
  gROOT->cd();
  TTree*T=(TTree*)F.Get("tuple");

  TCut selLeg1="";
  TCut selLeg2="";
  TCut selLegs=selLeg1+selLeg2;
  TCut selMass="";

  TH1F hMass("hMass"," mass",100,0e3,200e3);
  T->Draw("muMet_m[wlnu_lMet]>>hMass",selLegs);
  plotOnCmdLine(&hMass);
  
  //Muons
  plotPtEtaPhi(T,"muo",selLegs+selMass,"wlnu_lMet");//notet the muon index is the same as the muMet index

  ///MET
  plotPtEtaPhi(T,"met",selLegs+selMass);

  //Jets
  TH1F hNjet("hNjet","# of Jets",40,0,5);
  T->Draw("wlnu_njet>>hNjet",selLegs);
  plotOnCmdLine(&hNjet);

  plotPtEtaPhi(T,"jet",selLegs+selMass+TCut("wlnu_njet>0"),"wlnu_j1");//plot the first jet

  
  gROOT->ProcessLine(".q");
}
