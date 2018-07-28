TString inputPath="NTUPLES/CxTupleSamples/0lep/March24_QCDSelection_SelQCDforMbbShape/input.root";

// TString variable="mBB";
// float minMbb=80;
// float maxMbb=160;
// int rebin=8;
  
TString variable="mva";
float minMbb=0;
float maxMbb=1;  
int rebin=100;


TString region="2tag3jet_150ptv_SR";

TFile * input=0;

TH1F * data =0;
TH1F * ttbar =0;
TH1F * Z = 0;
TH1F * W = 0;
TH1F * VV = 0;
TH1F * Higgs = 0;
TH1F * MC = 0;
TH1F * QCD = 0;

TH1F * ttbarShape =0;
TH1F * ZShape = 0;
TH1F * WShape = 0;
TH1F * VVShape = 0;
TH1F * HiggsShape = 0;
TH1F * MCShape = 0;
TH1F * QCDShape = 0;


void loadHistos(bool postfit=1){

  input=new TFile(inputPath,"read");
  gROOT->cd();

  data = (TH1F*)input->Get(TString("data_")+region+"_"+variable); 

  ttbar = (TH1F*)input->Get(TString("ttbar_")+region+"_"+variable); 

  Z = (TH1F*)input->Get(TString("Zbb_")+region+"_"+variable); 
  Z->Add((TH1F*)input->Get(TString("Zbc_")+region+"_"+variable));
  Z->Add((TH1F*)input->Get(TString("Zcc_")+region+"_"+variable));
  Z->Add((TH1F*)input->Get(TString("Zbl_")+region+"_"+variable));
  Z->Add((TH1F*)input->Get(TString("Zcl_")+region+"_"+variable));
  Z->Add((TH1F*)input->Get(TString("Zl_")+region+"_"+variable));

  W = (TH1F*)input->Get(TString("Wbb_")+region+"_"+variable); 
  W->Add((TH1F*)input->Get(TString("Wbc_")+region+"_"+variable));
  W->Add((TH1F*)input->Get(TString("Wcc_")+region+"_"+variable));
  W->Add((TH1F*)input->Get(TString("Wbl_")+region+"_"+variable));
  W->Add((TH1F*)input->Get(TString("Wcl_")+region+"_"+variable));
  W->Add((TH1F*)input->Get(TString("Wl_")+region+"_"+variable));

  VV = (TH1F*)input->Get(TString("ZZ_")+region+"_"+variable);
  VV->Add((TH1F*)input->Get(TString("WW_")+region+"_"+variable)); 
  VV->Add((TH1F*)input->Get(TString("WZ_")+region+"_"+variable));
  VV->Add((TH1F*)input->Get(TString("stops_")+region+"_"+variable));
  VV->Add((TH1F*)input->Get(TString("stopt_")+region+"_"+variable));
  VV->Add((TH1F*)input->Get(TString("stopWt_")+region+"_"+variable));

  Higgs = (TH1F*)input->Get(TString("qqZvvH125_")+region+"_"+variable); 
  Higgs->Add((TH1F*)input->Get(TString("ggZvvH125_")+region+"_"+variable));
  Higgs->Add((TH1F*)input->Get(TString("qqWlvH125_")+region+"_"+variable));


  // ////////////////////////// Now add the 2jet region
  // TString region2jet=region;
  // region2jet("3jet")="2jet";
  // outdir+=region2jet;

  // data->Add((TH1F*)input->Get(TString("data_")+region2jet+"_"+variable)); 

  // ttbar->Add((TH1F*)input->Get(TString("ttbar_")+region2jet+"_"+variable)); 
  
  // Z->Add((TH1F*)input->Get(TString("Zbb_")+region2jet+"_"+variable));
  // Z->Add((TH1F*)input->Get(TString("Zbc_")+region2jet+"_"+variable));
  // Z->Add((TH1F*)input->Get(TString("Zcc_")+region2jet+"_"+variable));
  // Z->Add((TH1F*)input->Get(TString("Zbl_")+region2jet+"_"+variable));
  // Z->Add((TH1F*)input->Get(TString("Zcl_")+region2jet+"_"+variable));
  // Z->Add((TH1F*)input->Get(TString("Zl_")+region2jet+"_"+variable));

  // W->Add((TH1F*)input->Get(TString("Wbb_")+region2jet+"_"+variable));
  // W->Add((TH1F*)input->Get(TString("Wbc_")+region2jet+"_"+variable));
  // W->Add((TH1F*)input->Get(TString("Wcc_")+region2jet+"_"+variable));
  // W->Add((TH1F*)input->Get(TString("Wbl_")+region2jet+"_"+variable));
  // W->Add((TH1F*)input->Get(TString("Wcl_")+region2jet+"_"+variable));
  // W->Add((TH1F*)input->Get(TString("Wl_")+region2jet+"_"+variable));

  // VV->Add((TH1F*)input->Get(TString("ZZ_")+region2jet+"_"+variable)); 
  // VV->Add((TH1F*)input->Get(TString("WW_")+region2jet+"_"+variable)); 
  // VV->Add((TH1F*)input->Get(TString("WZ_")+region2jet+"_"+variable));
  // VV->Add((TH1F*)input->Get(TString("stops_")+region2jet+"_"+variable));
  // VV->Add((TH1F*)input->Get(TString("stopt_")+region2jet+"_"+variable));
  // VV->Add((TH1F*)input->Get(TString("stopWt_")+region2jet+"_"+variable));

  // Higgs->Add((TH1F*)input->Get(TString("qqZvvH125_")+region2jet+"_"+variable));
  // Higgs->Add((TH1F*)input->Get(TString("ggZvvH125_")+region2jet+"_"+variable));
  // Higgs->Add((TH1F*)input->Get(TString("qqWlvH125_")+region2jet+"_"+variable));



  ////////////////////////////
  /// apply postfit scale factors
  if(postfit){
    Z->Scale(1.5);
    W->Scale(1.2);
    ttbar->Scale(0.94);    
  }


  ////////////////
  ///////// rebin
  data->Rebin(rebin);
  Z->Rebin(rebin);
  W->Rebin(rebin);
  VV->Rebin(rebin);
  ttbar->Rebin(rebin);
  Higgs->Rebin(rebin);


  ////////////////////
  //// Compute total background 
  MC=(TH1F*)Z->Clone("MC");
  MC->Add(W);
  MC->Add(VV);
  MC->Add(ttbar);


  //////////////////////////
  /// Compute QCD
  QCD=(TH1F*)data->Clone("QCD");
  QCD->Add(MC,-1);


  ////////////////////////////
  /// make shapes as independent histograms
  ZShape=(TH1F*)Z->Clone("ZShape"); ZShape->Scale(1./ZShape->Integral());
  WShape=(TH1F*)W->Clone("WShape"); WShape->Scale(1./WShape->Integral());
  VVShape=(TH1F*)VV->Clone("VVShape"); VVShape->Scale(1./VVShape->Integral());
  ttbarShape=(TH1F*)ttbar->Clone("ttbarShape"); ttbarShape->Scale(1./ttbarShape->Integral());
  HiggsShape=(TH1F*)Higgs->Clone("HiggsShape"); HiggsShape->Scale(1./HiggsShape->Integral());
  MCShape=(TH1F*)MC->Clone("MCShape"); MCShape->Scale(1./MCShape->Integral());
  QCDShape=(TH1F*)QCD->Clone("QCDShape"); QCDShape->Scale(1./QCDShape->Integral());
 

}


void printYields(){

  // ///////Print yields
  // float QCDfrac=0.;
  // float Higgsfrac=0.;
  // for(int b=1;b<=QCD->GetNbinsX();b++){
  //   if(QCD->GetXaxis()->GetBinCenter(b)<minMbb
  //      ||maxMbb<QCD->GetXaxis()->GetBinCenter(b)) 
  //     continue;
  //   QCDfrac+=QCD->GetBinContent(b);
  //   Higgsfrac+=Higgs->GetBinContent(b);
  // }
  // QCDfrac=QCDfrac/QCD->Integral();
  // Higgsfrac=Higgsfrac/Higgs->Integral();
  

  // ofstream res;
  // res.open(outdir+"/results.txt");
  // res<<"MJ Signal fraction: "<<QCDfrac<<endl;
  // res<<"Higgs fraction: "<<Higgsfrac<<endl;
  // res.close();


}



void QCD0LeptonShapes(){

  gROOT->ProcessLine(".x ./SMVH/plots/rootlogon.C");

  //TString outdir=TString("/afs/cern.ch/user/b/benitezj/www/Moriond2017Studies/0lep/QCDMbb/")+region+"_"+variable;
  TString outdir=TString("/afs/cern.ch/user/b/benitezj/www/Moriond2017Studies/0lep/QCD0LeptonShapes");
  system(TString("rm -rf ")+outdir);
  system(TString("mkdir -p ")+outdir);


  ///get the distributions
  loadHistos();

  ////Print the yields 
  printYields();


  TCanvas C;  

  //////////////////////////////////////////////
  /// Show the data distribution from where the MJ template comes from
  //////////////////////////////////////////////
  C.Clear();
  data->SetTitle("");
  data->GetYaxis()->SetTitle(" events ");
  data->GetYaxis()->SetTitleOffset(1.5);
  data->GetXaxis()->SetTitle(variable);//"m(bb)    [GeV]");
  data->GetXaxis()->SetTitleSize(0.04);
  data->GetYaxis()->SetRangeUser(1,data->GetMaximum()*1.7);
  data->SetMarkerStyle(8);
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



  //////////////////////////////////////////////
  /// Compare the QCD shape to the Higgs shape
  //////////////////////////////////////////////
  C.Clear();
  QCDShape->SetTitle(" ");
  QCDShape->GetYaxis()->SetTitle(" unit norm ");
  QCDShape->GetYaxis()->SetRangeUser(0,HiggsShape->GetMaximum()*1.2);
  QCDShape->GetXaxis()->SetTitle(variable);  
  QCDShape->SetMarkerStyle(8);
  QCDShape->Draw("pe");
  HiggsShape->Draw("histsame");

  TLegend QCDLeg(0.6,0.8,0.8,0.9);
  QCDLeg.AddEntry(QCDShape,"multijet","lp");
  QCDLeg.AddEntry(HiggsShape,"Vh","l");
  QCDLeg.Draw();

  C.Print(outdir+"/QCDShapeHiggsShape_"+variable+".png");
  C.Print(outdir+"/QCDShapeHiggsShape_"+variable+".eps");



  //////////////////////////////////////////////////////////////////////////////
  //////Compare the mBB shape to other backgrounds (Including Fit scale factors)
  //////////////////////////////////////////////////////////////////////////
  MCShape->SetFillStyle(0);
  MCShape->SetLineColor(4);
  MCShape->SetLineStyle(2);
  MCShape->SetLineWidth(2);

  HiggsShape->SetLineColor(2);

  TH1F*ZWShape=(TH1F*)Z->Clone("ZWShape");
  ZWShape->Add(W);
  ZWShape->Scale(1./ZWShape->Integral());
  ZWShape->SetFillColor(0);
  ZWShape->SetFillStyle(0);
  ZWShape->SetLineColor(3);
  ZWShape->SetLineWidth(2);

  ttbarShape->SetFillColor(0);
  ttbarShape->SetFillStyle(0);
  ttbarShape->SetLineColor(kOrange);
  ttbarShape->SetLineWidth(2);


  C.Clear();
  QCDShape->GetYaxis()->SetRangeUser(0,MCShape->GetMaximum()*2.2);
  QCDShape->GetXaxis()->SetTitle(variable);
  QCDShape->Draw("histpe");
  MCShape->Draw("histsame");
  HiggsShape->Draw("histsame");
  ZWShape->Draw("histsame");
  ttbarShape->Draw("histsame");
  TLegend ShapeLegPostfit(0.38,0.7,0.62,0.9);
  ShapeLegPostfit.AddEntry(HiggsShape,"Vh","l");
  ShapeLegPostfit.AddEntry(QCDShape,"multijet","lp");
  ShapeLegPostfit.AddEntry(ZWShape,"Z+W","l");
  ShapeLegPostfit.AddEntry(ttbarShape,"ttbar","l");
  ShapeLegPostfit.AddEntry(MCShape,"Z+W+ttbar(postfit)","l");
  ShapeLegPostfit.Draw();
  C.Print(outdir+"/QCDShapeCompare_"+variable+".png");
  C.Print(outdir+"/QCDShapeCompare_"+variable+".eps");


  gROOT->ProcessLine(".q");
}





  // //////Compare the mBB shape to other backgrounds
  // TH1F*MCBkg=(TH1F*)Z->Clone("MCBkg");
  // MCBkg->Add(W);
  // MCBkg->Add(ttbar);
  // MCBkg->Scale(1./MCBkg->Integral());
  // MCBkg->SetFillStyle(0);
  // MCBkg->SetLineColor(4);
  // MCBkg->SetLineWidth(4);
  // C.Clear();
  // QCD->GetYaxis()->SetRangeUser(0,MCBkg->GetMaximum()*1.4);
  // QCD->Draw("histpe");
  // MCBkg->Draw("histsame");
  // TLegend ShapeLeg(0.6,0.8,0.8,0.9);
  // ShapeLeg.AddEntry(QCD,"multijet","lp");
  // ShapeLeg.AddEntry(MCBkg,"Z+W+ttbar","l");
  // ShapeLeg.Draw();
  // C.Print(outdir+"/QCDShapeCompare_"+variable+".png");
  // C.Print(outdir+"/QCDShapeCompare_"+variable+".eps");
