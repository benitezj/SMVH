

void QCDMbb0Lepton(){
  gROOT->ProcessLine(".x ./SMVH/plots/rootlogon.C");

  TString inputPath="NTUPLES/CxTupleSamples/0lep/March24_QCDSelection_SelQCDforMbbShape/input.root";

  TString region="2tag3jet_150ptv_SR";

  // TString variable="mBB";
  // float minMbb=80;
  // float maxMbb=160;
  // int rebin=8;
  

  TString variable="mva";
  float minMbb=0;
  float maxMbb=1;  
  int rebin=100;
  

  TString outdir=TString("/afs/cern.ch/user/b/benitezj/www/Moriond2017Studies/0lep/QCDMbb/")+region+"_"+variable;

  TFile input(inputPath,"read");
  TH1F * data = (TH1F*)input.Get(TString("data_")+region+"_"+variable); 


  TH1F * ttbar = (TH1F*)input.Get(TString("ttbar_")+region+"_"+variable); 

  TH1F * Z = (TH1F*)input.Get(TString("Zbb_")+region+"_"+variable); 
  Z->Add((TH1F*)input.Get(TString("Zbc_")+region+"_"+variable));
  Z->Add((TH1F*)input.Get(TString("Zcc_")+region+"_"+variable));
  Z->Add((TH1F*)input.Get(TString("Zbl_")+region+"_"+variable));
  Z->Add((TH1F*)input.Get(TString("Zcl_")+region+"_"+variable));
  Z->Add((TH1F*)input.Get(TString("Zl_")+region+"_"+variable));

  TH1F * W = (TH1F*)input.Get(TString("Wbb_")+region+"_"+variable); 
  W->Add((TH1F*)input.Get(TString("Wbc_")+region+"_"+variable));
  W->Add((TH1F*)input.Get(TString("Wcc_")+region+"_"+variable));
  W->Add((TH1F*)input.Get(TString("Wbl_")+region+"_"+variable));
  W->Add((TH1F*)input.Get(TString("Wcl_")+region+"_"+variable));
  W->Add((TH1F*)input.Get(TString("Wl_")+region+"_"+variable));

  TH1F * VV = (TH1F*)input.Get(TString("ZZ_")+region+"_"+variable);
  VV->Add((TH1F*)input.Get(TString("WW_")+region+"_"+variable)); 
  VV->Add((TH1F*)input.Get(TString("WZ_")+region+"_"+variable));
  VV->Add((TH1F*)input.Get(TString("stops_")+region+"_"+variable));
  VV->Add((TH1F*)input.Get(TString("stopt_")+region+"_"+variable));
  VV->Add((TH1F*)input.Get(TString("stopWt_")+region+"_"+variable));

  TH1F * Higgs = (TH1F*)input.Get(TString("qqZvvH125_")+region+"_"+variable); 
  Higgs->Add((TH1F*)input.Get(TString("ggZvvH125_")+region+"_"+variable));
  Higgs->Add((TH1F*)input.Get(TString("qqWlvH125_")+region+"_"+variable));


  // ////////////////////////// Now add the 2jet region
  // TString region2jet=region;
  // region2jet("3jet")="2jet";
  // outdir+=region2jet;

  // data->Add((TH1F*)input.Get(TString("data_")+region2jet+"_"+variable)); 

  // ttbar->Add((TH1F*)input.Get(TString("ttbar_")+region2jet+"_"+variable)); 
  
  // Z->Add((TH1F*)input.Get(TString("Zbb_")+region2jet+"_"+variable));
  // Z->Add((TH1F*)input.Get(TString("Zbc_")+region2jet+"_"+variable));
  // Z->Add((TH1F*)input.Get(TString("Zcc_")+region2jet+"_"+variable));
  // Z->Add((TH1F*)input.Get(TString("Zbl_")+region2jet+"_"+variable));
  // Z->Add((TH1F*)input.Get(TString("Zcl_")+region2jet+"_"+variable));
  // Z->Add((TH1F*)input.Get(TString("Zl_")+region2jet+"_"+variable));

  // W->Add((TH1F*)input.Get(TString("Wbb_")+region2jet+"_"+variable));
  // W->Add((TH1F*)input.Get(TString("Wbc_")+region2jet+"_"+variable));
  // W->Add((TH1F*)input.Get(TString("Wcc_")+region2jet+"_"+variable));
  // W->Add((TH1F*)input.Get(TString("Wbl_")+region2jet+"_"+variable));
  // W->Add((TH1F*)input.Get(TString("Wcl_")+region2jet+"_"+variable));
  // W->Add((TH1F*)input.Get(TString("Wl_")+region2jet+"_"+variable));

  // VV->Add((TH1F*)input.Get(TString("ZZ_")+region2jet+"_"+variable)); 
  // VV->Add((TH1F*)input.Get(TString("WW_")+region2jet+"_"+variable)); 
  // VV->Add((TH1F*)input.Get(TString("WZ_")+region2jet+"_"+variable));
  // VV->Add((TH1F*)input.Get(TString("stops_")+region2jet+"_"+variable));
  // VV->Add((TH1F*)input.Get(TString("stopt_")+region2jet+"_"+variable));
  // VV->Add((TH1F*)input.Get(TString("stopWt_")+region2jet+"_"+variable));

  // Higgs->Add((TH1F*)input.Get(TString("qqZvvH125_")+region2jet+"_"+variable));
  // Higgs->Add((TH1F*)input.Get(TString("ggZvvH125_")+region2jet+"_"+variable));
  // Higgs->Add((TH1F*)input.Get(TString("qqWlvH125_")+region2jet+"_"+variable));



  //////////////// rebin
  data->Rebin(rebin);
  Z->Rebin(rebin);
  W->Rebin(rebin);
  VV->Rebin(rebin);
  ttbar->Rebin(rebin);
  Higgs->Rebin(rebin);

  
  TCanvas C;
  system(TString("rm -rf ")+outdir);
  system(TString("mkdir -p ")+outdir);

  /////////////// plot
  C.Clear();
  data->SetTitle("");
  data->GetYaxis()->SetTitle(" events ");
  data->GetYaxis()->SetTitleOffset(1.5);
  data->GetXaxis()->SetTitle(variable);//"m(bb)    [GeV]");
  data->GetXaxis()->SetTitleSize(0.04);
  data->GetYaxis()->SetRangeUser(1,data->GetMaximum()*1.7);
  data->SetMarkerStyle(2);
  data->Draw();


  Z->SetFillColor(kAzure + 2);
  W->SetFillColor(kGreen + 3);
  VV->SetFillColor(kGray);
  ttbar->SetFillColor(kOrange);

  THStack backgrounds;
  backgrounds.Add(Z,"f");
  backgrounds.Add(W,"f");
  backgrounds.Add(VV,"f");
  backgrounds.Add(ttbar,"f");
  backgrounds.Draw("histsame");

  TLegend leg(0.6,0.6,0.8,0.85);
  leg.AddEntry(Z,"Z","f");
  leg.AddEntry(W,"W","f");
  leg.AddEntry(VV,"VV+stop","f");
  leg.AddEntry(ttbar,"ttbar","f");
  leg.AddEntry(data,"data","lp");
  leg.Draw();
	  
  C.Print(outdir+"/QCDData_"+variable+".png");
  C.Print(outdir+"/QCDData_"+variable+".eps");



  /////////////////Subtract MC from data
  TH1F*MC=(TH1F*)Z->Clone("MC");
  MC->Add(W);
  MC->Add(VV);
  MC->Add(ttbar);
  TH1F*QCD=(TH1F*)data->Clone("QCD");
  QCD->Add(MC,-1);
  QCD->Scale(1./QCD->Integral());
  Higgs->Scale(1./Higgs->Integral());

  C.Clear();
  QCD->GetYaxis()->SetTitle(" unit norm ");
  QCD->GetYaxis()->SetRangeUser(0,Higgs->GetMaximum()*1.2);
  QCD->Draw("pe");
  Higgs->Draw("histsame");
  TLine line;
  line.SetLineColor(2);
  line.DrawLine(minMbb,0.,minMbb,QCD->GetMaximum());
  line.DrawLine(maxMbb,0.,maxMbb,QCD->GetMaximum());

  TLegend QCDLeg(0.6,0.8,0.8,0.9);
  QCDLeg.AddEntry(QCD,"multijet","lp");
  QCDLeg.AddEntry(Higgs,"H->bb","lp");
  QCDLeg.Draw();
  C.Print(outdir+"/QCDShape_"+variable+".png");
  C.Print(outdir+"/QCDShape_"+variable+".eps");


  ///////Print yields
  float QCDfrac=0.;
  float Higgsfrac=0.;
  for(int b=1;b<=QCD->GetNbinsX();b++){
    if(QCD->GetXaxis()->GetBinCenter(b)<minMbb
       ||maxMbb<QCD->GetXaxis()->GetBinCenter(b)) 
      continue;
    QCDfrac+=QCD->GetBinContent(b);
    Higgsfrac+=Higgs->GetBinContent(b);
  }
  QCDfrac=QCDfrac/QCD->Integral();
  Higgsfrac=Higgsfrac/Higgs->Integral();
  

  ofstream res;
  res.open(outdir+"/results.txt");
  res<<"MJ Signal fraction: "<<QCDfrac<<endl;
  res<<"Higgs fraction: "<<Higgsfrac<<endl;
  res.close();


  //////Compare the mBB shape to other backgrounds
  TH1F*MCBkg=(TH1F*)Z->Clone("MCBkg");
  MCBkg->Add(W);
  MCBkg->Add(ttbar);
  MCBkg->Scale(1./MCBkg->Integral());
  MCBkg->SetFillStyle(0);
  MCBkg->SetLineColor(4);
  MCBkg->SetLineWidth(4);
  C.Clear();
  QCD->GetYaxis()->SetRangeUser(0,MCBkg->GetMaximum()*1.4);
  QCD->Draw("histpe");
  MCBkg->Draw("histsame");
  TLegend ShapeLeg(0.6,0.8,0.8,0.9);
  ShapeLeg.AddEntry(QCD,"multijet","lp");
  ShapeLeg.AddEntry(MCBkg,"Z+W+ttbar","l");
  ShapeLeg.Draw();
  C.Print(outdir+"/QCDShapeCompare_"+variable+".png");
  C.Print(outdir+"/QCDShapeCompare_"+variable+".eps");


  //////Compare the mBB shape to other backgrounds (Including Fit scale factors)
  TH1F*MCBkgPostfit=(TH1F*)Z->Clone("MCBkgPostfit");
  MCBkgPostfit->Scale(1.5);
  MCBkgPostfit->Add(W,1.2);
  MCBkgPostfit->Add(ttbar,0.94);
  MCBkgPostfit->Scale(1./MCBkgPostfit->Integral());
  MCBkgPostfit->SetFillStyle(0);
  MCBkgPostfit->SetLineColor(4);
  MCBkgPostfit->SetLineStyle(2);
  MCBkgPostfit->SetLineWidth(2);

  Higgs->Scale(1./Higgs->Integral());
  Higgs->SetLineColor(2);

  TH1F*ZWPostfit=(TH1F*)Z->Clone("ZWPostfit");
  ZWPostfit->Scale(1.5);
  ZWPostfit->Add(W,1.2);
  ZWPostfit->Scale(1./ZWPostfit->Integral());
  ZWPostfit->SetFillColor(0);
  ZWPostfit->SetFillStyle(0);
  ZWPostfit->SetLineColor(3);
  ZWPostfit->SetLineWidth(2);

  TH1F*ttbarPostfit=(TH1F*)ttbar->Clone("ttbarPostfit");
  ttbarPostfit->Scale(1./ttbarPostfit->Integral());
  ttbarPostfit->SetFillColor(0);
  ttbarPostfit->SetFillStyle(0);
  ttbarPostfit->SetLineColor(kOrange);
  ttbarPostfit->SetLineWidth(2);


  C.Clear();
  QCD->GetYaxis()->SetRangeUser(0,MCBkgPostfit->GetMaximum()*2.2);
  QCD->Draw("histpe");
  MCBkg->Draw("histsame");
  MCBkgPostfit->Draw("histsame");
  Higgs->Draw("histsame");
  ZWPostfit->Draw("histsame");
  ttbarPostfit->Draw("histsame");
  TLegend ShapeLegPostfit(0.38,0.7,0.62,0.9);
  ShapeLegPostfit.AddEntry(Higgs,"Vh","l");
  ShapeLegPostfit.AddEntry(QCD,"multijet","lp");
  ShapeLegPostfit.AddEntry(ZWPostfit,"Z+W","l");
  ShapeLegPostfit.AddEntry(ttbarPostfit,"ttbar","l");
  ShapeLegPostfit.AddEntry(MCBkg,"Z+W+ttbar(prefit)","l");
  ShapeLegPostfit.AddEntry(MCBkgPostfit,"Z+W+ttbar(postfit)","l");
  ShapeLegPostfit.Draw();
  C.Print(outdir+"/QCDShapeCompare_"+variable+"_postfit.png");
  C.Print(outdir+"/QCDShapeCompare_"+variable+"_postfit.eps");


  gROOT->ProcessLine(".q");
}
