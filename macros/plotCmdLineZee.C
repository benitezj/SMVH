
#include "plotCmdLineGlobals.C"

void plotCmdLineZee(TString file=""){

  TFile F((const char*)file);
  gROOT->cd();
  TTree*T=(TTree*)F.Get("tuple");

  TCut selLeg1="";//muo_pt[mm_leg1[zmm_mm]]>20000";
  TCut selLeg2="";//muo_pt[mm_leg2[zmm_mm]]>20000";
  TCut selLegs=selLeg1+selLeg2;
  TCut selMass="";//70000<mm_m[zmm_mm]&&mm_m[zmm_mm]<110000";

  TH1F hEEMass("hEEMass","EE mass",100,50e3,150e3);
  T->Draw("ee_m[zll_ll]>>hEEMass",selLegs);
  plotOnCmdLine(&hEEMass);

  TH1F hNjet("hNjet","# of Jets",40,0,5);
  T->Draw("zll_njet>>hNjet",selLegs);
  plotOnCmdLine(&hNjet);
  
  //Muons
  plotPtEtaPhi(T,"ele",selLegs+selMass,"zll_l1");

  //Jets
  plotPtEtaPhi(T,"jet",selLegs+selMass+TCut("zll_njet>0"),"zll_j1");

  ///MET
  plotPtEtaPhi(T,"met",selLegs+selMass);
  
  gROOT->ProcessLine(".q");
}
