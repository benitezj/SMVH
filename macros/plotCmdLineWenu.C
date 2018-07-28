
#include "plotCmdLineGlobals.C"

void plotCmdLineWenu(TString file=""){

  TFile F((const char*)file);
  gROOT->cd();
  TTree*T=(TTree*)F.Get("tuple");

  TCut selLeg1="";
  TCut selLeg2="";
  TCut selLegs=selLeg1+selLeg2;
  TCut selMass="";

  TH1F hMMMass("hMMMass","MM mass",100,50e3,150e3);
  T->Draw("eMet_m[wlnu_lMet]>>hMMMass",selLegs);
  plotOnCmdLine(&hMMMass);

  TH1F hNjet("hNjet","# of Jets",40,0,5);
  T->Draw("wlnu_njet>>hNjet",selLegs);
  plotOnCmdLine(&hNjet);
  
  //electron
  plotPtEtaPhi(T,"ele",selLegs+selMass,"wlnu_lMet");

  //Jets
  plotPtEtaPhi(T,"jet",selLegs+selMass+TCut("wlnu_njet>0"),"wlnu_j1");

  ///MET
  plotPtEtaPhi(T,"met",selLegs+selMass);

  
  gROOT->ProcessLine(".q");
}
