
void plotComparisonWithRatio(TH1*H1, TH1*H2, TString outfile){

  ///compare puw and nopuw
  TCanvas C;
  C.Clear();
  H1->GetXaxis()->SetTitle("ZH mass  [GeV]");
  H1->GetYaxis()->SetTitle("");
  H1->SetTitle("");
  H1->SetMarkerColor(1);
  H1->SetLineColor(1);
  H1->Draw("histpe");
  H2->SetMarkerColor(2);
  H2->SetLineColor(2);
  H2->Draw("histpesame");
  C.Print(outfile+".png");

  //plot the ratio
  for(int b=1;b<=H1->GetNbinsX();b++){
    if(H1->GetBinContent(b)>0)
      H1->SetBinContent(b,H1->GetBinError(b)/H1->GetBinContent(b));
    else H1->SetBinContent(b,0);
    H1->SetBinError(b,0);

    if(H2->GetBinContent(b)>0)
      H2->SetBinContent(b,H2->GetBinError(b)/H2->GetBinContent(b));
    else H2->SetBinContent(b,0);
    H2->SetBinError(b,0);
  }

  C.Clear();
  H1->SetFillColor(0);
  H1->GetYaxis()->SetRangeUser(0,1);
  H1->Draw("hist");
  H2->SetFillColor(0);
  H2->Draw("histsame");
  C.Print(outfile+"_ratio.png");

}


void plotZHllJNoPileupTemplates(Plotter * analysis,TString outpath,TString Bkg){


  analysis->setBinning("vh_m[vh]/1000",25,0,5000);

  //With pu weight
  analysis->eventWeight_="(eve_mc_w*eve_mc_puw[6])";
  TH1D*H1=analysis->getBackground(Bkg.Data()); 
  H1->SetName("Zpuw");
  H1->Scale(1./H1->Integral());


  //Without pu weight
  analysis->eventWeight_="(eve_mc_w)";
  TH1D*H2=analysis->getBackground(Bkg.Data()); 
  H2->SetName("Znopuw");
  H2->Scale(1./H2->Integral());


  plotComparisonWithRatio(H1,H2,outpath+"/NoPileupTemplates_"+Bkg);
  delete H1,H2;

}

void plotZHllJTemplates(Plotter*analysis,TString outpath){

  plotZHllJNoPileupTemplates(analysis,outpath,"Zl");
  plotZHllJNoPileupTemplates(analysis,outpath,"Zc");
  plotZHllJNoPileupTemplates(analysis,outpath,"Zb");
  plotZHllJNoPileupTemplates(analysis,outpath,"ttbar");
  plotZHllJNoPileupTemplates(analysis,outpath,"stop");
  plotZHllJNoPileupTemplates(analysis,outpath,"VV");

}
