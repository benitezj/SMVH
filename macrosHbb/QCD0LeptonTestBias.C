#include "QCD0LeptonShapes.C"

TString inputPathSR="./LimitHistograms.VH.vvbb.13TeV.LAL.v28.root";

TFile * inputSR=0;

TH1F * dataSR =0;
TH1F * ttbarSR =0;
TH1F * ZSR = 0;
TH1F * WSR = 0;
TH1F * VVSR = 0;
TH1F * HiggsSR = 0;
TH1F * MCSR = 0;
TH1F * QCDSR = 0;


TH1F * ttbarSRShape =0;
TH1F * ZSRShape = 0;
TH1F * WSRShape = 0;
TH1F * VVSRShape = 0;
TH1F * HiggsSRShape = 0;
TH1F * MCSRShape = 0;


void loadHistosSR(bool postfit=1){

  inputSR=new TFile(inputPathSR,"read");
  gROOT->cd();

  dataSR = (TH1F*)inputSR->Get(TString("data_")+region+"_"+variable); 

  ttbarSR = (TH1F*)inputSR->Get(TString("ttbar_")+region+"_"+variable); 

  ZSR = (TH1F*)inputSR->Get(TString("Zbb_")+region+"_"+variable); 
  ZSR->Add((TH1F*)inputSR->Get(TString("Zbc_")+region+"_"+variable));
  ZSR->Add((TH1F*)inputSR->Get(TString("Zcc_")+region+"_"+variable));
  ZSR->Add((TH1F*)inputSR->Get(TString("Zbl_")+region+"_"+variable));
  ZSR->Add((TH1F*)inputSR->Get(TString("Zcl_")+region+"_"+variable));
  ZSR->Add((TH1F*)inputSR->Get(TString("Zl_")+region+"_"+variable));

  WSR = (TH1F*)inputSR->Get(TString("Wbb_")+region+"_"+variable); 
  WSR->Add((TH1F*)inputSR->Get(TString("Wbc_")+region+"_"+variable));
  WSR->Add((TH1F*)inputSR->Get(TString("Wcc_")+region+"_"+variable));
  WSR->Add((TH1F*)inputSR->Get(TString("Wbl_")+region+"_"+variable));
  WSR->Add((TH1F*)inputSR->Get(TString("Wcl_")+region+"_"+variable));
  WSR->Add((TH1F*)inputSR->Get(TString("Wl_")+region+"_"+variable));

  VVSR = (TH1F*)inputSR->Get(TString("ZZ_")+region+"_"+variable);
  VVSR->Add((TH1F*)inputSR->Get(TString("WW_")+region+"_"+variable)); 
  VVSR->Add((TH1F*)inputSR->Get(TString("WZ_")+region+"_"+variable));
  VVSR->Add((TH1F*)inputSR->Get(TString("stops_")+region+"_"+variable));
  VVSR->Add((TH1F*)inputSR->Get(TString("stopt_")+region+"_"+variable));
  VVSR->Add((TH1F*)inputSR->Get(TString("stopWt_")+region+"_"+variable));

  HiggsSR = (TH1F*)inputSR->Get(TString("qqZvvH125_")+region+"_"+variable); 
  HiggsSR->Add((TH1F*)inputSR->Get(TString("ggZvvH125_")+region+"_"+variable));
  HiggsSR->Add((TH1F*)inputSR->Get(TString("qqWlvH125_")+region+"_"+variable));



  ////////////////////////////
  /// apply postfit scale factors
  if(postfit){
    ZSR->Scale(1.5);
    WSR->Scale(1.2);
    ttbarSR->Scale(0.94);    
  }


  ////////////////
  ///////// rebin
  dataSR->Rebin(rebin);
  ZSR->Rebin(rebin);
  WSR->Rebin(rebin);
  VVSR->Rebin(rebin);
  ttbarSR->Rebin(rebin);
  HiggsSR->Rebin(rebin);


  ////////////////////
  //// Compute total background 
  MCSR=(TH1F*)ZSR->Clone("MCSR");
  MCSR->Add(WSR);
  MCSR->Add(VVSR);
  MCSR->Add(ttbarSR);


  /////////////////////
  /// Estimate the QCD in the signal region
  /////////////////////
  QCDSR = (TH1F*)QCD->Clone("QCDSR");
  QCDSR->Scale(16.9/QCDSR->Integral());


  ////////////////////////////
  /// make shapes as independent histograms
  ZSRShape=(TH1F*)ZSR->Clone("ZSRShape"); ZSRShape->Scale(1./ZSRShape->Integral());
  WSRShape=(TH1F*)WSR->Clone("WSRShape"); WSRShape->Scale(1./WSRShape->Integral());
  VVSRShape=(TH1F*)VVSR->Clone("VVSRShape"); VVSRShape->Scale(1./VVSRShape->Integral());
  ttbarSRShape=(TH1F*)ttbarSR->Clone("ttbarSRShape"); ttbarSRShape->Scale(1./ttbarSRShape->Integral());
  HiggsSRShape=(TH1F*)HiggsSR->Clone("HiggsSRShape"); HiggsSRShape->Scale(1./HiggsSRShape->Integral());
  MCSRShape=(TH1F*)MCSR->Clone("MCSRShape"); MCSRShape->Scale(1./MCSRShape->Integral());
 

}



void QCD0LeptonTestBias(){

  gROOT->ProcessLine(".x ./SMVH/plots/rootlogon.C");

  TString outdir=TString("/afs/cern.ch/user/b/benitezj/www/Moriond2017Studies/0lep/QCD0LeptonTestBias");
  system(TString("rm -rf ")+outdir);
  system(TString("mkdir -p ")+outdir);


  ///get the distributions
  loadHistos();
  loadHistosSR();

  TCanvas C;  


  //////////////////////////////////////////////
  /// Compare SR bkg to the sideband
  //////////////////////////////////////////////
  C.Clear();

  TLegend LegBkgSRvsSide(0.6,0.8,0.8,0.9);
  LegBkgSRvsSide.AddEntry(MCSR,"signal region","lp");
  LegBkgSRvsSide.AddEntry(MC,"side band","l");
  LegBkgSRvsSide.Draw();

  MCSR->GetYaxis()->SetRangeUser(0,MCSR->GetMaximum()*1.3);
  MCSR->SetMarkerStyle(8);
  MCSR->SetTitle("");
  MCSR->GetXaxis()->SetTitle(variable);
  MCSR->Draw("histpe");
  MC->Draw("histsame");

  LegBkgSRvsSide.Draw();

  C.Print(outdir+"/QCD0LeptonTestBias_BkgSRvsSide.png");
  //C.Print(outdir+"/QCD0LeptonTestBias_BkgSRvsSide.eps");


  //////////////////////////////////////////////
  /// Compare SR bkg to the sideband (shapes)
  //////////////////////////////////////////////
  TLegend LegBkgSRvsSideShape(0.6,0.8,0.8,0.9);
  LegBkgSRvsSideShape.AddEntry(MCSRShape,"signal region","lp");
  LegBkgSRvsSideShape.AddEntry(MCShape,"side band","f");
  C.Clear();
  MCShape->GetYaxis()->SetRangeUser(0,MCShape->GetMaximum()*1.3);
  MCShape->SetFillColor(3);
  MCShape->SetTitle("");
  MCShape->GetXaxis()->SetTitle(variable);
  MCShape->Draw("histpe2");
  MCSRShape->SetMarkerStyle(8);
  MCSRShape->Draw("histpesame");
  LegBkgSRvsSideShape.Draw();
  C.Print(outdir+"/QCD0LeptonTestBias_BkgSRvsSideShape.png");
  //C.Print(outdir+"/QCD0LeptonTestBias_BkgSRvsSideShape.eps");



  //////////////////////////////////////////////
  /// Compare MC in SR with MC+MJ
  //////////////////////////////////////////////
  TH1F* MCSRAndMJ=(TH1F*)MCSR->Clone("MCSRAndMJ");
  MCSRAndMJ->Add(QCDSR);
  MCSRAndMJ->SetLineColor(1);
  MCSRAndMJ->SetMarkerStyle(8);

  TH1F* MCSRAndMJAndHiggs=(TH1F*)MCSR->Clone("MCSRAndMJAndHiggs");
  MCSRAndMJAndHiggs->Add(QCDSR);
  MCSRAndMJAndHiggs->Add(HiggsSR);
  MCSRAndMJAndHiggs->SetLineColor(1);
  MCSRAndMJAndHiggs->SetMarkerStyle(8);

  // TH1F* HiggsSRx10=(TH1F*)HiggsSR->Clone("HiggsSRx10");
  // //HiggsSRx10->Scale(50);
  // HiggsSRx10->SetLineColor(2);

  TLegend LegBkgSRvsBkgMJ(0.6,0.8,0.9,0.95);
  LegBkgSRvsBkgMJ.AddEntry(MCSR,"MC","l");
  LegBkgSRvsBkgMJ.AddEntry(QCDSR,"MJ","l");
  LegBkgSRvsBkgMJ.AddEntry(HiggsSR,"Vh","l");
  LegBkgSRvsBkgMJ.AddEntry(MCSRAndMJAndHiggs,"MC+MJ+Vh","p");

  C.Clear();
  MCSR->GetYaxis()->SetRangeUser(0.1,MCSR->GetMaximum()*2);
  MCSR->GetYaxis()->SetTitle("Events (36.1/fb)");
  MCSR->SetTitle("");
  MCSR->GetXaxis()->SetTitle(variable);
  MCSR->SetLineColor(4);
  MCSR->Draw("hist");

  QCDSR->SetLineColor(1);
  QCDSR->Draw("histsame");
  HiggsSR->SetLineColor(2);
  HiggsSR->Draw("histsame");
  MCSRAndMJAndHiggs->Draw("histpsame");

  LegBkgSRvsBkgMJ.Draw();

  C.SetLogy(1);
  C.Print(outdir+"/QCD0LeptonTestBias_BkgSRAndBkgMJAndVh.png");
  C.SetLogy(0);


  //////////////
  /// Write the root file with the Asimov: MC+MC+Vh
  //////////////
  TFile OutFile("QCD0LeptonTestBias.root","recreate");
  MCSRAndMJAndHiggs->SetName("data");
  MCSRAndMJAndHiggs->Write();
  ZSR->SetName("Z"); ZSR->Write();
  WSR->SetName("W"); WSR->Write();
  ttbarSR->SetName("ttbar"); ttbarSR->Write();
  VVSR->SetName("VV"); VVSR->Write();
  HiggsSR->SetName("Vh"); HiggsSR->Write();
  OutFile.Close();

  gROOT->ProcessLine(".q");
}




