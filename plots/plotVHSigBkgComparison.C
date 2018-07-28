
void overlap(TH1* H1,TH1* H2){
  if(!H1 || !H2)
    return;
  
  if(H1->GetNbinsX() != H2->GetNbinsX())
    return;
  
  float overlap=0.;
  float error=0.;
  for(int b=1;b<=H1->GetNbinsX();b++){
    overlap += H1->GetBinContent(b)*H2->GetBinContent(b);
    error += H1->GetBinContent(b)*H2->GetBinError(b) * H1->GetBinContent(b)*H2->GetBinError(b) 
      + H2->GetBinContent(b)*H1->GetBinError(b) * H2->GetBinContent(b)*H1->GetBinError(b);
  }
  
  cout<<"Overlap = "<<overlap<<" +- "<<sqrt(error)<<endl;
}

void compareSigBkgShapes(Plotter * analysis,TString outpath,TString tag){
  TString sig="HVT1500";
  TH1D*HS=NULL;
  TH1D*HB=NULL;

  TCanvas C;

  HS=analysis->getSample(sig);
  HB=analysis->getBackground("Zl");
  TH1D*Hc=analysis->getBackground("Zc");
  TH1D*Hb=analysis->getBackground("Zb");
  HB->Add(Hc);delete Hc;
  HB->Add(Hb);delete Hb;
  HS->Scale(1./HS->Integral());
  HB->Scale(1./HB->Integral());
  HS->GetXaxis()->SetTitle("ZH mass  [GeV]");
  HS->SetTitle("");
  C.Clear();
  HS->Draw("hist");
  HB->Draw("histsame");
  C.Print(outpath+"/ShapeComparison_"+sig+"_Z_"+tag+".png");
  cout<<"Signal: Mean="<<HS->GetMean()<<"  RMS="<<HS->GetRMS()<<endl;
  cout<<"Bkg: Mean="<<HB->GetMean()<<"  RMS="<<HB->GetRMS()<<endl;
  //cout<<"separation: |MeanS-MeanB|/sqrt(RMSsig*RMSsig+RMSbkg*RMSbkg)="
  //<<fabs(HS->GetMean()-HB->GetMean())/sqrt(HS->GetRMS()*HS->GetRMS()+HB->GetRMS()*HB->GetRMS())<<endl;
  overlap(HS,HB);
  delete HS,HB;

  HS=analysis->getSample(sig);
  HB=analysis->getBackground("TTbar");
  HS->Scale(1./HS->Integral());
  HB->Scale(1./HB->Integral());
  HS->GetXaxis()->SetTitle("ZH mass  [GeV]");
  HS->SetTitle("");
  C.Clear();
  HS->Draw("hist");
  HB->Draw("histsame");
  C.Print(outpath+"/ShapeComparison_"+sig+"_ttbar_"+tag+".png");
  cout<<"Signal: Mean="<<HS->GetMean()<<"  RMS="<<HS->GetRMS()<<endl;
  cout<<"Bkg: Mean="<<HB->GetMean()<<"  RMS="<<HB->GetRMS()<<endl;
  //cout<<"separation: |MeanS-MeanB|/sqrt(RMSsig*RMSsig+RMSbkg*RMSbkg)="
  //<<fabs(HS->GetMean()-HB->GetMean())/sqrt(HS->GetRMS()*HS->GetRMS()+HB->GetRMS()*HB->GetRMS())<<endl;
  overlap(HS,HB);
  delete HS,HB;

}

void plotVHSigBkgComparison(Plotter*analysis,TString outpath){

  ////No corrections 
  analysis->setBinning("vh_m1[vh]/1000",25,0,5000);
  compareSigBkgShapes(analysis,outpath,"VHmassNOcorr");

  //only H correction
  analysis->setBinning("vh_m2[vh]/1000",25,0,5000);
  compareSigBkgShapes(analysis,outpath,"VHmassHcorr");

  ///only Z correction
  analysis->setBinning("vh_m3[vh]/1000",25,0,5000);
  compareSigBkgShapes(analysis,outpath,"VHmasZcorr");

}
