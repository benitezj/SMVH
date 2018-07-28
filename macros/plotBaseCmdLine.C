#include "plotCmdLineGlobals.C"

void plotBaseCmdLine(TString file=""){

  TFile F((const char*)file);
  gROOT->cd();
  TTree*T=(TTree*)F.Get("tuple");
  
  //Event info
  TH1F hNVtx("hNInteractions","N Interactions",30,0,30);
  T->Draw("eve_mu>>hNInteractions");
  plotOnCmdLine(&hNInteractions);

  TH1F hNVtx("hNVtx","N Vtx",30,0,30);
  T->Draw("nvtx>>hNVtx");
  plotOnCmdLine(&hNVtx);

  TH1F hVtxZ("hVtxZ","Prim Vtx Z",40,-200,200);
  T->Draw("vtx_z[0]>>hVtxZ");
  plotOnCmdLine(&hVtxZ);

  ///Electrons
  plotPtEtaPhi(T,"ele");
    
  //Muons
  plotPtEtaPhi(T,"muo");
  TH1F hMuoZ0("hMuoZ0","Muon Z0",40,-50,50);
  T->Draw("muo_z0[0]>>hMuoZ0");
  plotOnCmdLine(&hMuoZ0);

  //Jets
  plotPtEtaPhi(T,"jet");
  TH1F hJVF("hJVF","JVF",40,0,1);
  T->Draw("jet_jvf[0]>>hJVF");
  plotOnCmdLine(&hJVF);

  ///MET
  plotPtEtaPhi(T,"met");

  gROOT->ProcessLine(".q");
}
