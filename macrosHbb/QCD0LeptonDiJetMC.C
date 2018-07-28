

void QCD0LeptonDiJetMC(){
  gROOT->ProcessLine(".x ./SMVH/plots/rootlogon.C");

  TString inputPath="/afs/cern.ch/user/c/cdelport/public/forJose/inputsFile_MJ_studies.root";

  TString region="150ptv_set0";

  TString variable="MindPhiMETJet";
  int rebin=2;
  
  TString outdir=TString("/afs/cern.ch/user/b/benitezj/www/Moriond2017Studies/0lep/QCDDiJetMC/")+region+"_"+variable;

  TFile input(inputPath,"read");

  // KEY: TH1F	dijetJZW_3ptag3jet_150ptv_set0_MindPhiMETJet;1	dijetJZW_3ptag3jet_150ptv_set0_MindPhiMETJet
  // KEY: TH1F	dijetJZW_1tag2jet_150ptv_set0_MindPhiMETJet;1	dijetJZW_1tag2jet_150ptv_set0_MindPhiMETJet
  // KEY: TH1F	dijetJZW_3ptag5pjet_150ptv_set0_MindPhiMETJet;1	dijetJZW_3ptag5pjet_150ptv_set0_MindPhiMETJet
  // KEY: TH1F	dijetJZW_1tag3jet_150ptv_set0_MindPhiMETJet;1	dijetJZW_1tag3jet_150ptv_set0_MindPhiMETJet
  // KEY: TH1F	dijetJZW_0ptag3jet_150ptv_set0_MindPhiMETJet;1	dijetJZW_0ptag3jet_150ptv_set0_MindPhiMETJet
  // KEY: TH1F	dijetJZW_0tag3jet_150ptv_set0_MindPhiMETJet;1	dijetJZW_0tag3jet_150ptv_set0_MindPhiMETJet
  // KEY: TH1F	dijetJZW_0tag5pjet_150ptv_set0_MindPhiMETJet;1	dijetJZW_0tag5pjet_150ptv_set0_MindPhiMETJet
  // KEY: TH1F	dijetJZW_0tag2jet_150ptv_set0_MindPhiMETJet;1	dijetJZW_0tag2jet_150ptv_set0_MindPhiMETJet
  // KEY: TH1F	dijetJZW_2tag5pjet_150ptv_set0_MindPhiMETJet;1	dijetJZW_2tag5pjet_150ptv_set0_MindPhiMETJet
  // KEY: TH1F	dijetJZW_2tag4jet_150ptv_set0_MindPhiMETJet;1	dijetJZW_2tag4jet_150ptv_set0_MindPhiMETJet
  // KEY: TH1F	dijetJZW_0tag4jet_150ptv_set0_MindPhiMETJet;1	dijetJZW_0tag4jet_150ptv_set0_MindPhiMETJet
  // KEY: TH1F	dijetJZW_0ptag4jet_150ptv_set0_MindPhiMETJet;1	dijetJZW_0ptag4jet_150ptv_set0_MindPhiMETJet
  // KEY: TH1F	dijetJZW_1tag5pjet_150ptv_set0_MindPhiMETJet;1	dijetJZW_1tag5pjet_150ptv_set0_MindPhiMETJet
  // KEY: TH1F	dijetJZW_0ptag5pjet_150ptv_set0_MindPhiMETJet;1	dijetJZW_0ptag5pjet_150ptv_set0_MindPhiMETJet
  // KEY: TH1F	dijetJZW_1tag4jet_150ptv_set0_MindPhiMETJet;1	dijetJZW_1tag4jet_150ptv_set0_MindPhiMETJet
  // KEY: TH1F	dijetJZW_0ptag2jet_150ptv_set0_MindPhiMETJet;1	dijetJZW_0ptag2jet_150ptv_set0_MindPhiMETJet
  // KEY: TH1F	dijetJZW_3ptag4jet_150ptv_set0_MindPhiMETJet;1	dijetJZW_3ptag4jet_150ptv_set0_MindPhiMETJet
  // KEY: TH1F	dijetJZW_2tag3jet_150ptv_set0_MindPhiMETJet;1	dijetJZW_2tag3jet_150ptv_set0_MindPhiMETJet
  // KEY: TH1F	dijetJZW_2tag2jet_150ptv_set0_MindPhiMETJet;1	dijetJZW_2tag2jet_150ptv_set0_MindPhiMETJet


  TH1F * QCD3jet = (TH1F*)input.Get(TString("dijetJZW_0tag3jet_")+region+"_"+variable); 
  QCD3jet->Add((TH1F*)input.Get(TString("dijetJZW_1tag3jet_")+region+"_"+variable));
  QCD3jet->Add((TH1F*)input.Get(TString("dijetJZW_2tag3jet_")+region+"_"+variable));
  QCD3jet->Add((TH1F*)input.Get(TString("dijetJZW_3ptag3jet_")+region+"_"+variable));
  QCD3jet->Rebin(rebin);
  QCD3jet->Scale(1./QCD3jet->Integral());


  TH1F * QCD2jet = (TH1F*)input.Get(TString("dijetJZW_0tag2jet_")+region+"_"+variable); 

  ///// 2jet for 0+tag
  QCD2jet->Add((TH1F*)input.Get(TString("dijetJZW_1tag2jet_")+region+"_"+variable));
  QCD2jet->Add((TH1F*)input.Get(TString("dijetJZW_2tag2jet_")+region+"_"+variable));
  QCD2jet->Add((TH1F*)input.Get(TString("dijetJZW_3ptag2jet_")+region+"_"+variable));

  // ///0tag for 2+jets
  // QCD2jet->Add((TH1F*)input.Get(TString("dijetJZW_0tag3jet_")+region+"_"+variable));
  // QCD2jet->Add((TH1F*)input.Get(TString("dijetJZW_0tag4jet_")+region+"_"+variable));
  // QCD2jet->Add((TH1F*)input.Get(TString("dijetJZW_0tag5pjet_")+region+"_"+variable));

  QCD2jet->Rebin(rebin);
  QCD2jet->Scale(1./QCD2jet->Integral());


  
  TCanvas C("C","",800,600);
  system(TString("rm -rf ")+outdir);
  system(TString("mkdir -p ")+outdir);

  /////////////// plot
  C.Clear();
  QCD3jet->SetTitle("");
  QCD3jet->GetYaxis()->SetTitle(" unit norm ");
  QCD3jet->GetYaxis()->SetTitleOffset(1.5);
  QCD3jet->GetXaxis()->SetTitle("min(#Delta#phi(MET,jet))");
  QCD3jet->GetXaxis()->SetTitleSize(0.04);
  QCD3jet->GetYaxis()->SetRangeUser(0.001,1);
  QCD3jet->GetXaxis()->SetRangeUser(0,1);
  QCD3jet->SetMarkerStyle(3);
  QCD3jet->SetLineColor(3);
  QCD3jet->SetMarkerColor(3);
  QCD3jet->Draw("histpe");

  QCD2jet->SetMarkerStyle(4);
  QCD2jet->SetLineColor(2);
  QCD2jet->SetMarkerColor(2);
  QCD2jet->Draw("histpesame");


  TLegend leg(0.5,0.6,0.85,0.85);
  leg.SetBorderSize(0);
  leg.SetLineColor(0);
  leg.AddEntry(QCD2jet,"Pythia8 dijet MC","");
  leg.AddEntry(QCD2jet,"2 jet, 0+ btag","pe");
  leg.AddEntry(QCD3jet,"3 jet, 0+ btag","pe");
  leg.Draw();

  C.SetLogy(1);
  C.Print(outdir+"/QCDShape_"+variable+".png");
  C.Print(outdir+"/QCDShape_"+variable+".eps");


  /////////////////Subtract MC from data
  gROOT->ProcessLine(".q");
}
