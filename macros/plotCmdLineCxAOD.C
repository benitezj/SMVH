#include "plotCmdLineGlobals.C"

void plotCmdLineCxAOD(TString file=""){

  TFile F((const char*)file);
  gROOT->cd();
  TTree*T=(TTree*)F.Get("CollectionTree");

  //Event info
  TH1F hNVtx("hNVtx","N Vtx",25,0,25);
  T->Draw("EventInfo___NominalAuxDyn.averageInteractionsPerCrossing>>hNVtx");
  plotOnCmdLine(&hNVtx);

  TH1F hVtxZ("hVtxZ","Prim Vtx Z",40,-200,200);
  T->Draw("EventInfo___NominalAuxDyn.ZPV>>hVtxZ");
  plotOnCmdLine(&hVtxZ);
  
  //Muons
  TH1F hMuonPt("hMuonPt","Muon pT",50,0,100e3);
  T->Draw("Muons___NominalAuxDyn.pt>>hMuonPt");
  plotOnCmdLine(&hMuonPt);

  TH1F hMuonEta("hMuonEta","Muon Eta",40,-5,5);
  T->Draw("Muons___NominalAuxDyn.eta>>hMuonEta");
  plotOnCmdLine(&hMuonEta);
  
  ///Electrons
  TH1F hElectronPt("hElectronPt","Electron pT",50,0,100e3);
  T->Draw("Electrons___NominalAuxDyn.pt>>hElectronPt");
  plotOnCmdLine(&hElectronPt);

  TH1F hElectronEta("hElectronEta","Electron Eta",40,-5,5);
  T->Draw("Electrons___NominalAuxDyn.eta>>hElectronEta");
  plotOnCmdLine(&hElectronEta);

  ///MET 
  TH1F hMETPt("hMETPt","MET",50,0,1000e3);
  T->Draw("MET_Reference_AntiKt4EMTopo___NominalAuxDyn.sumet>>hMETPt");
  plotOnCmdLine(&hMETPt);
  
  //Jets
  TH1F hJetPt("hJetPt","Jet pT",50,0,100e3);
  T->Draw("AntiKt4EMTopoJets___NominalAuxDyn.pt>>hJetPt");
  plotOnCmdLine(&hJetPt);

  TH1F hJetEta("hJetEta","Jet Eta",40,-5,5);
  T->Draw("AntiKt4EMTopoJets___NominalAuxDyn.eta>>hJetEta");
  plotOnCmdLine(&hJetEta);


  //Fat Jets
  TH1F hFatJetPt("hFatJetPt","FatJet pT",50,0,1000e3);
  T->Draw("AntiKt10LCTopoTrimmedPtFrac5SmallR20Jets___NominalAuxDyn.pt>>hFatJetPt");
  plotOnCmdLine(&hFatJetPt);

  TH1F hFatJetEta("hFatJetEta","FatJet Eta",40,-5,5);
  T->Draw("AntiKt10LCTopoTrimmedPtFrac5SmallR20Jets___NominalAuxDyn.eta>>hFatJetEta");
  plotOnCmdLine(&hFatJetEta);

  
  ////////Isolation Discriminators
  // TH1F hElectronVeryLooseTrackOnly("hElectronVeryLooseTrackOnly","hElectronVeryLooseTrackOnly",40,-5,5);
  // T->Draw("ElectronCollection___NominalAuxDyn.eta>>hElectronVeryLooseTrackOnly");
  // plotOnCmdLine(&hElectronEta);

   
  gROOT->ProcessLine(".q");
}
