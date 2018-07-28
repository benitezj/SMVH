
#include "/nfs/home/benitezj/Notes/atlasstyle/AtlasStyle.C"
#include "/nfs/home/benitezj/Notes/atlasstyle/AtlasUtils.C"
#include "/nfs/home/benitezj/Notes/atlasstyle/AtlasLabels.C"

#define ColorsT kOrange-1
#define ColorQCD kViolet-9
#define ColorTT kOrange
#define ColorZ kAzure+2
#define ColorW kGreen+3
#define ColorVV kGray+1


TH1F* makeHistRatio(TH1* HDenom,TH1* HNum,float maxerr=0.5){
  if(HNum==NULL || HDenom == NULL){
    cout<<"Histograms are NULL"<<endl;
    return 0;
  }
  if(HNum->GetNbinsX() != HDenom->GetNbinsX()){
    cout<<"Histograms bins don't match"<<endl;
    return 0;
  }

  TH1F* HRatio=(TH1F*)HNum->Clone("HRatio");
  for(int b=0;b<=HNum->GetNbinsX()+1;b++){
    if(HDenom->GetBinContent(b)>0. &&
       HNum->GetBinContent(b)>0. &&
       HNum->GetBinError(b)/HDenom->GetBinContent(b)<(maxerr>0?maxerr:1)
       ){
      float ratio=HNum->GetBinContent(b)/HDenom->GetBinContent(b);
      // if(ratio>1+maxerr) HRatio->SetBinContent(b,1+maxerr-maxerr/100);
      // else if(ratio<1-maxerr) HRatio->SetBinContent(b,1-maxerr+maxerr/100);
      // else
      HRatio->SetBinContent(b,ratio);

      HRatio->SetBinError(b,HNum->GetBinError(b)/HDenom->GetBinContent(b));
    }else {
      HRatio->SetBinContent(b,0.);
      HRatio->SetBinError(b,0.);
    }

  }

  return HRatio;
}


TH1F* transformDeg(TH1F*h){
  TH1F* H=new TH1F(TString("HDeg")+h->GetName(),"",20,0,180);
  H->Sumw2();

  float trans=180/3.14159;

  for(int i=1;i<=H->GetNbinsX();i++){
    for(int b=1;b<=h->GetNbinsX();b++){
      if(H->GetBinLowEdge(i)<trans*h->GetBinCenter(b)&&trans*h->GetBinCenter(b)<H->GetBinLowEdge(i)+H->GetBinWidth(i))
	H->AddBinContent(i,h->GetBinContent(b));
    }
  }

  for(int i=1;i<=H->GetNbinsX();i++){
    H->SetBinError(i,sqrt(H->GetBinContent(i)));
  }

  return H;
}


void QCDFitMindPhi0Lepton(){

  TString inputPath="NTUPLES/CxTupleSamples/0lep/March24_QCDSelection/input.root";
  
  TString region="2tag3jet_150ptv_SR";
  //TString region="2tag2jet_150ptv_SR";
  TString outdir=TString("/afs/cern.ch/user/b/benitezj/www/Moriond2017Studies/0lep/QCDFit/")+region;


  ///////////////////
  TFile input(inputPath,"read");
  TH1F * data = (TH1F*)input.Get(TString("data_")+region+"_MindPhiMETJet"); 


  TH1F * TT = (TH1F*)input.Get(TString("ttbar_")+region+"_MindPhiMETJet"); 

  TH1F * Z = (TH1F*)input.Get(TString("Zbb_")+region+"_MindPhiMETJet"); 
  Z->Add((TH1F*)input.Get(TString("Zbc_")+region+"_MindPhiMETJet"));
  Z->Add((TH1F*)input.Get(TString("Zcc_")+region+"_MindPhiMETJet"));
  Z->Add((TH1F*)input.Get(TString("Zbl_")+region+"_MindPhiMETJet"));
  Z->Add((TH1F*)input.Get(TString("Zcl_")+region+"_MindPhiMETJet"));
  Z->Add((TH1F*)input.Get(TString("Zl_")+region+"_MindPhiMETJet"));

  TH1F * W = (TH1F*)input.Get(TString("Wbb_")+region+"_MindPhiMETJet"); 
  W->Add((TH1F*)input.Get(TString("Wbc_")+region+"_MindPhiMETJet"));
  W->Add((TH1F*)input.Get(TString("Wcc_")+region+"_MindPhiMETJet"));
  W->Add((TH1F*)input.Get(TString("Wbl_")+region+"_MindPhiMETJet"));
  //W->Add((TH1F*)input.Get(TString("Wcl_")+region+"_MindPhiMETJet"));//has a high weight event
  W->Add((TH1F*)input.Get(TString("Wl_")+region+"_MindPhiMETJet"));

  TH1F * VV = (TH1F*)input.Get(TString("ZZ_")+region+"_MindPhiMETJet");
  VV->Add((TH1F*)input.Get(TString("WW_")+region+"_MindPhiMETJet")); 
  VV->Add((TH1F*)input.Get(TString("WZ_")+region+"_MindPhiMETJet"));

  TH1F * sT = (TH1F*)input.Get(TString("stops_")+region+"_MindPhiMETJet");
  sT->Add((TH1F*)input.Get(TString("stopt_")+region+"_MindPhiMETJet"));
  sT->Add((TH1F*)input.Get(TString("stopWt_")+region+"_MindPhiMETJet"));
  
  TH1F * Higgs = (TH1F*)input.Get(TString("qqZvvH125_")+region+"_MindPhiMETJet"); 
  Higgs->Add((TH1F*)input.Get(TString("ggZvvH125_")+region+"_MindPhiMETJet"));
  Higgs->Add((TH1F*)input.Get(TString("qqWlvH125_")+region+"_MindPhiMETJet"));


  // ////////////////////////// Now add the 2jet region
  // TString region2jet=region;
  // region2jet("3jet")="2jet";
  // outdir+=region2jet;

  // data->Add((TH1F*)input.Get(TString("data_")+region2jet+"_MindPhiMETJet")); 

  // TT->Add((TH1F*)input.Get(TString("ttbar_")+region2jet+"_MindPhiMETJet")); 
  
  // Z->Add((TH1F*)input.Get(TString("Zbb_")+region2jet+"_MindPhiMETJet"));
  // Z->Add((TH1F*)input.Get(TString("Zbc_")+region2jet+"_MindPhiMETJet"));
  // Z->Add((TH1F*)input.Get(TString("Zcc_")+region2jet+"_MindPhiMETJet"));
  // Z->Add((TH1F*)input.Get(TString("Zbl_")+region2jet+"_MindPhiMETJet"));
  // Z->Add((TH1F*)input.Get(TString("Zcl_")+region2jet+"_MindPhiMETJet"));
  // Z->Add((TH1F*)input.Get(TString("Zl_")+region2jet+"_MindPhiMETJet"));

  // W->Add((TH1F*)input.Get(TString("Wbb_")+region2jet+"_MindPhiMETJet"));
  // W->Add((TH1F*)input.Get(TString("Wbc_")+region2jet+"_MindPhiMETJet"));
  // W->Add((TH1F*)input.Get(TString("Wcc_")+region2jet+"_MindPhiMETJet"));
  // W->Add((TH1F*)input.Get(TString("Wbl_")+region2jet+"_MindPhiMETJet"));
  // W->Add((TH1F*)input.Get(TString("Wcl_")+region2jet+"_MindPhiMETJet"));
  // W->Add((TH1F*)input.Get(TString("Wl_")+region2jet+"_MindPhiMETJet"));

  // VV->Add((TH1F*)input.Get(TString("ZZ_")+region2jet+"_MindPhiMETJet")); 
  // VV->Add((TH1F*)input.Get(TString("WW_")+region2jet+"_MindPhiMETJet")); 
  // VV->Add((TH1F*)input.Get(TString("WZ_")+region2jet+"_MindPhiMETJet"));
  // VV->Add((TH1F*)input.Get(TString("stops_")+region2jet+"_MindPhiMETJet"));
  // VV->Add((TH1F*)input.Get(TString("stopt_")+region2jet+"_MindPhiMETJet"));
  // VV->Add((TH1F*)input.Get(TString("stopWt_")+region2jet+"_MindPhiMETJet"));

  // Higgs->Add((TH1F*)input.Get(TString("qqZvvH125_")+region2jet+"_MindPhiMETJet"));
  // Higgs->Add((TH1F*)input.Get(TString("ggZvvH125_")+region2jet+"_MindPhiMETJet"));
  // Higgs->Add((TH1F*)input.Get(TString("qqWlvH125_")+region2jet+"_MindPhiMETJet"));



  //int rebin=4;
  // //////////////// rebin
  // data->Rebin(rebin);
  // TT->Rebin(rebin);
  // Z->Rebin(rebin);
  // W->Rebin(rebin);
  // VV->Rebin(rebin);
  // sT->Rebin(rebin);
  // Higgs->Rebin(rebin);


  ////Transform to degrees
  data=transformDeg(data);
  TT=transformDeg(TT);
  Z=transformDeg(Z);
  W=transformDeg(W);
  VV=transformDeg(VV);
  sT=transformDeg(sT);
  Higgs=transformDeg(Higgs);

  /////////
  float mindPhiCut=20 ; //* TMath::Pi()/180;
  float xmin=data->GetXaxis()->GetXmin();


  // /////////////////////////////////////////////////////////
  // //////For systematic remove bin contents of first bin 
  // /////////////////////////////////////////////////////////
  // outdir+="Systematic";
  // xmin=data->GetXaxis()->GetBinLowEdge(1)+data->GetXaxis()->GetBinWidth(1);
  // data->SetBinContent(1,0); data->SetBinError(1,0);
  // TT->SetBinContent(1,0);
  // Z->SetBinContent(1,0);
  // W->SetBinContent(1,0);
  // VV->SetBinContent(1,0);


  /////////////PDF's
  RooRealVar x("x","min-dPhi",xmin,data->GetXaxis()->GetXmax());
  x.setBins(data->GetNbinsX());
  
  //RooRealVar width("width","width",0.001,1);
  RooRealVar width("width","width",0.001,50);
  RooGenericPdf QCDPdf("QCDPdf","exp(-x/width)",RooArgSet(x,width));
  RooRealVar yieldQCD("yieldQCD","yieldQCD",0.0001,0.5);

  RooDataHist ZDataHist("ZDataHist","",RooArgList(x),Z);
  RooHistPdf ZPdf("ZPdf","",RooArgSet(x),ZDataHist);
  RooRealVar yieldZ("yieldZ","yieldZ",0.01,0.8);//Z->Integral()/data->Integral());//

  RooDataHist WDataHist("WDataHist","",RooArgList(x),W);
  RooHistPdf WPdf("WPdf","",RooArgSet(x),WDataHist);
  RooRealVar yieldW("yieldW","yieldW",0.01,0.8);//W->Integral()/data->Integral());

  RooDataHist VVDataHist("VVDataHist","",RooArgList(x),VV);
  RooHistPdf VVPdf("VVPdf","",RooArgSet(x),VVDataHist);
  RooRealVar yieldVV("yieldVV","yieldVV",VV->Integral()/data->Integral());

  RooDataHist sTDataHist("sTDataHist","",RooArgList(x),sT);
  RooHistPdf sTPdf("sTPdf","",RooArgSet(x),sTDataHist);
  RooRealVar yieldsT("yieldsT","yieldsT",sT->Integral()/data->Integral());

  RooDataHist HiggsDataHist("HiggsDataHist","",RooArgList(x),Higgs);
  RooHistPdf HiggsPdf("HiggsPdf","",RooArgSet(x),HiggsDataHist);
  RooRealVar yieldHiggs("yieldHiggs","yieldHiggs",Higgs->Integral()/data->Integral());

  //RooDataHist HiggsDataHist("HiggsDataHist","",RooArgList(x),Higgs);
  //RooHistPdf HiggsPdf("HiggsPdf","",RooArgSet(x),HiggsDataHist);


  RooDataHist TTDataHist("TTDataHist","",RooArgList(x),TT);
  RooHistPdf TTPdf("TTPdf","",RooArgSet(x),TTDataHist);
  RooFormulaVar yieldTT("yieldTT","yieldTT","1-yieldZ-yieldW-yieldVV-yieldsT-yieldHiggs-yieldQCD",
			RooArgList(yieldZ,yieldW,yieldVV,yieldsT,yieldHiggs,yieldQCD));//does not enter in fit pdf
  
  RooAddPdf PDF("PDF","PDF",RooArgList(QCDPdf,ZPdf,WPdf,VVPdf,sTPdf,HiggsPdf,TTPdf),
		RooArgList(yieldQCD,yieldZ,yieldW,yieldVV,yieldsT,yieldHiggs));



  ////////////Fit
  RooDataHist Data("data","data",RooArgSet(x),data);
  RooHistPdf DataPdf("DataPdf","",RooArgSet(x),Data);
  RooChi2Var chi2("chi","chi",PDF,Data,RooFit::DataError(RooAbsData::SumW2));
  RooMinuit minuit(chi2);
  minuit.migrad();
  
  ///////////////// define plot
  RooPlot* plot=x.frame();
  Data.plotOn(plot,RooFit::DataError(RooAbsData::Poisson),RooFit::DrawOption("e"),RooFit::LineColor(0),RooFit::LineWidth(0));

  PDF.plotOn(plot,RooFit::Components(ZPdf),RooFit::FillColor(ColorZ),RooFit::DrawOption("F"),RooFit::MoveToBack());
  PDF.plotOn(plot,RooFit::Components(RooArgSet(ZPdf,WPdf)),RooFit::FillColor(ColorW),RooFit::DrawOption("F"),RooFit::MoveToBack());
  PDF.plotOn(plot,RooFit::Components(RooArgSet(ZPdf,WPdf,sTPdf)),RooFit::FillColor(ColorsT),RooFit::DrawOption("F"),RooFit::MoveToBack());
  PDF.plotOn(plot,RooFit::Components(RooArgSet(ZPdf,WPdf,sTPdf,TTPdf)),RooFit::FillColor(ColorTT),RooFit::DrawOption("F"),RooFit::MoveToBack());  
  PDF.plotOn(plot,RooFit::Components(RooArgSet(ZPdf,WPdf,sTPdf,TTPdf,VVPdf)),RooFit::FillColor(ColorVV),RooFit::DrawOption("F"),RooFit::MoveToBack());
  //PDF.plotOn(plot,RooFit::Components(RooArgSet(ZPdf,WPdf,sTPdf,TTPdf,VVPdf,HiggsPdf)),RooFit::FillColor(kRed),RooFit::DrawOption("F"),RooFit::MoveToBack());


  ////This shows the MJ as a smooth function
  //PDF.plotOn(plot,RooFit::Components(RooArgSet(ZPdf,WPdf,sTPdf,TTPdf,VVPdf,HiggsPdf,QCDPdf)),RooFit::FillColor(ColorQCD),RooFit::DrawOption("F"),RooFit::MoveToBack());  


  RooDataHist QCDDataHist("QCDDataHist","",RooArgList(x),PDF.createHistogram("QCDDataHist",x)); 
  RooHistPdf QCDHistPdf("QCDHistPdf","",RooArgSet(x),QCDDataHist);
  QCDHistPdf.plotOn(plot,RooFit::FillColor(ColorQCD),RooFit::DrawOption("F"),RooFit::MoveToBack());


  //////////// Legend
  TLegend leg(0.65,0.55,0.80,0.88);
  leg.SetFillStyle (0);
  leg.SetFillColor (0);
  leg.SetBorderSize(0);
  leg.SetTextSize(.035);
 
  char txt[100];

  data->SetMarkerStyle(8);
  data->SetMarkerSize(1);
  data->SetLineColor(1);
  data->SetLineWidth(2);
  leg.AddEntry(data,"Data","lp");

  TH1F*HQCD=(TH1F*)data->Clone("QCD");
  HQCD->SetFillColor(ColorQCD);
  HQCD->SetLineColor(ColorQCD);
  leg.AddEntry(HQCD,"Multijet","f");

  VV->SetFillColor(ColorVV);
  VV->SetLineColor(ColorVV);
  float VVSF=yieldVV.getVal()*data->Integral()/VV->Integral();
  leg.AddEntry(VV,TString("Diboson"),"f");

  TT->SetFillColor(ColorTT);
  TT->SetLineColor(ColorTT);
  float TTSF=yieldTT.getVal()*data->Integral()/TT->Integral();
  leg.AddEntry(TT,TString("t#bar{t}"),"f");

  sT->SetFillColor(ColorsT);
  sT->SetLineColor(ColorsT);
  float sTSF=yieldsT.getVal()*data->Integral()/sT->Integral();
  leg.AddEntry(sT,TString("Single top"),"f");

  W->SetFillColor(ColorW);
  W->SetLineColor(ColorW);
  float WSF=yieldW.getVal()*data->Integral()/W->Integral();
  leg.AddEntry(W,TString("W+(bb,bc,cc,bl)"),"f");

  Z->SetFillColor(ColorZ);
  Z->SetLineColor(ColorZ);
  float ZSF=yieldZ.getVal()*data->Integral()/Z->Integral();
  leg.AddEntry(Z,TString("Z+(bb,bc,cc,bl)"),"f");

  TH1F*HiggsPlot=(TH1F*)Higgs->Clone("HiggsPlot");
  HiggsPlot->Scale(40);
  HiggsPlot->SetFillColor(0);
  HiggsPlot->SetFillStyle(0);
  HiggsPlot->SetLineColor(kRed);
  HiggsPlot->SetLineWidth(2);
  leg.AddEntry(HiggsPlot,TString("SM VH#rightarrowVbb x 40"),"l");

  system(TString("rm -rf ")+outdir);
  system(TString("mkdir -p ")+outdir);


  /////////////// plot
  plot->SetTitle("");
  plot->GetYaxis()->SetRangeUser(1,1400);
  plot->GetYaxis()->SetTitle("Events / 9 deg");
  plot->GetYaxis()->SetTitleOffset(1.25);
  plot->GetYaxis()->SetTitleSize(0.05);
  plot->GetYaxis()->SetLabelSize(0.035);
  //plot->GetYaxis()->SetNdivisions(8);
  plot->GetXaxis()->SetTitle("");  
  plot->GetXaxis()->SetTitleSize(0.045);
  plot->GetXaxis()->SetLabelSize(0);//0.035);
  //plot->GetXaxis()->SetNdivisions(6);



  x.setRange("sigRegion",mindPhiCut,data->GetXaxis()->GetXmax());
  RooAbsReal * QCDSigY=QCDPdf.createIntegral(x,RooFit::NormSet(x),RooFit::Range("sigRegion"));
  RooAbsReal * HiggsSigY=HiggsPdf.createIntegral(x,RooFit::NormSet(x),RooFit::Range("sigRegion"));

  x.setRange("30degRegion",30 ,data->GetXaxis()->GetXmax());//* TMath::Pi()/180
  RooAbsReal * QCD30degCut=QCDPdf.createIntegral(x,RooFit::NormSet(x),RooFit::Range("30degRegion"));
  RooAbsReal * QCD30degCutData=DataPdf.createIntegral(x,RooFit::NormSet(x),RooFit::Range("30degRegion"));



  TLine line; 

  TCanvas C("C","",700,820);
  TPad pad1("pad1","",0,0.27,1,1);
  TPad pad2("pad2","",0,0,1,0.27);

  pad1.SetBottomMargin(0.01);
  pad2.SetTopMargin(0.05);
  pad2.SetBottomMargin(0.35);

  pad1.SetLeftMargin(0.12);
  pad2.SetLeftMargin(0.12);
  pad1.SetRightMargin(0.05);
  pad2.SetRightMargin(0.05);

  pad1.cd();
  pad1.SetTickx();
  pad1.SetTicky();
  plot->Draw("same");
  data->Draw("histpesame");
  HiggsPlot->Draw("histsame");

  leg.Draw();
	  

  ATLASLabel(0.16,0.84,"",1);//Preliminary, internal

  TLatex latex; 
  latex.SetTextSize(0.032);
  latex.DrawLatexNDC(0.16,0.80,"#sqrt{s} = 13 TeV, 36.1 fb^{-1}");
  latex.DrawLatexNDC(0.16,0.76,"0 lepton, 3 jets, 2 b-tags");
  latex.DrawLatexNDC(0.16,0.72,"p_{T}^{V} #geq 150 GeV");


  latex.SetTextSize(0.032);
  float txtXPos=0.16;
  //latex.DrawLatexNDC(txtXPos,0.60,"Multijet model: e^{-x/c}");
  //sprintf(txt," c=%0.1f#pm%0.1f deg",width.getVal(),width.getError());
  //latex.DrawLatexNDC(txtXPos,0.57,txt);

  latex.DrawLatexNDC(txtXPos,0.65,"Multijet:");

  sprintf(txt," Yield = %.1f#pm%.1f%%",100*yieldQCD.getVal(),100*yieldQCD.getError());
  latex.DrawLatexNDC(txtXPos,0.60,txt);

  sprintf(txt," Yield (#Delta#phi>30^{o}) = %.2f#pm%0.2f%%",
	  100*QCD30degCut->getVal()*yieldQCD.getVal()/QCD30degCutData->getVal(),
	  100*QCD30degCut->getVal()*yieldQCD.getError()/QCD30degCutData->getVal());
  latex.DrawLatexNDC(txtXPos,0.55,txt);


  // latex.DrawLatexNDC(txtXPos,0.46,"Scale factors:");
  // sprintf(txt,"%.2f#pm%.2f",yieldTT.getVal()*data->Integral()/TT->Integral(),
  //   sqrt(yieldW.getError()*yieldW.getError()+yieldZ.getError()*yieldZ.getError())*data->Integral()/TT->Integral());
  // latex.DrawLatexNDC(txtXPos,0.43,TString(" t#bar{t} : ")+txt);
  // sprintf(txt,"%.2f#pm%.2f",yieldW.getVal()*data->Integral()/W->Integral(),yieldW.getError()*data->Integral()/W->Integral());
  // latex.DrawLatexNDC(txtXPos,0.40,TString(" W : ")+txt);
  // sprintf(txt,"%.2f#pm%.2f",yieldZ.getVal()*data->Integral()/Z->Integral(),yieldZ.getError()*data->Integral()/Z->Integral());
  // latex.DrawLatexNDC(txtXPos,0.37,TString(" Z : ")+txt);
  


  pad2.cd();
  TH1F * HFit=(TH1F*)data->Clone("HFit");
  HFit->Scale(0);
  HFit=(TH1F*)PDF.fillHistogram(HFit,RooArgList(x),data->Integral());
  // const RooArgSet* projectedVars = 0, Bool_t scaling = kTRUE, const RooArgSet* condObs = 0, Bool_t setError = kTRUE) const
  TH1F* hratio= makeHistRatio(HFit,data,0.5);
  hratio->SetTitle("");
  hratio->SetLineColor(1);
  hratio->SetLineWidth(2);
  hratio->SetStats(0);
  hratio->GetYaxis()->SetRangeUser(0.4,1.6);
  hratio->GetYaxis()->SetTitle("Data/Pred.");
  hratio->GetYaxis()->SetTitleOffset(0.65);
  hratio->GetYaxis()->SetTitleSize(0.10);
  hratio->GetYaxis()->SetLabelSize(0.08);
  hratio->GetYaxis()->SetNdivisions(503);
  hratio->GetXaxis()->SetTitle("min[#Delta#phi(E_{T}^{miss},jets)]  [deg]");
  hratio->GetXaxis()->SetTitleOffset(1.1);
  hratio->GetXaxis()->SetTitleSize(0.10);
  hratio->GetXaxis()->SetLabelSize(0.08);
  hratio->GetXaxis()->SetNdivisions(505);
  pad2.SetTickx();
  pad2.SetTicky();
  hratio->Draw("p");
  line.DrawLine(0,1.0,data->GetXaxis()->GetXmax(),1.0);

  C.Clear();
  pad1.Draw();
  pad2.Draw();
  C.Print(outdir+"/QCDFit.png");
  C.Print(outdir+"/QCDFit.eps");
  C.Print(outdir+"/QCDFit.pdf");
  C.Print(outdir+"/QCDFit.C");



  //line.DrawLine(mindPhiCut,0.,mindPhiCut,data->GetMaximum());



  ///////////////////////////////////////////////
  ///////Print yields
  ///////////////////////////////////////////////

  ofstream res;
  res.open(outdir+"/results.txt");

  res.precision(3); 

  res<<"Data Yield: "<<data->Integral()<<endl;


  ///the fit scale factors
  res<<"preZ = "<<Z->Integral()<<", postZ="<<yieldZ.getVal()*data->Integral()<<"+/-"<<yieldZ.getError()*data->Integral()<<", SF="<<yieldZ.getVal()*data->Integral()/Z->Integral()<<endl;
  res<<"preW = "<<W->Integral()<<", postW="<<yieldW.getVal()*data->Integral()<<"+/-"<<yieldW.getError()*data->Integral()<<", SF="<<yieldW.getVal()*data->Integral()/W->Integral()<<endl;
  res<<"preVV = "<<VV->Integral()<<", postVV="<<yieldVV.getVal()*data->Integral()<<"+/-"<<yieldVV.getError()*data->Integral()<<", SF="<<yieldVV.getVal()*data->Integral()/VV->Integral()<<endl;
  res<<"preTT = "<<TT->Integral()<<", postTT="<<yieldTT.getVal()*data->Integral()<<"+/-?, SF="<<yieldTT.getVal()*data->Integral()/TT->Integral()<<endl;

  res<<"MJ Fit fraction: "<<yieldQCD.getVal()<<endl;
  res<<"MJ Yield: "<<yieldQCD.getVal()*data->Integral()
     <<" +/- "<<yieldQCD.getError()*data->Integral()<<endl;
  
  res<<"Higgs Yield: "<<Higgs->Integral()<<endl;

  res<<" min(dPhi) cut: "<<mindPhiCut<<endl;

  res<<"MJ Signal fraction: "<<QCDSigY->getVal()<<endl;
  res<<"MJ Signal Yield: "<<QCDSigY->getVal()*yieldQCD.getVal()*data->Integral()
     <<" +/- "<<QCDSigY->getVal()*yieldQCD.getError()*data->Integral()<<endl;
  
  res<<"Higgs Signal fraction: "<<HiggsSigY->getVal()<<endl;
  res<<"Higgs Signal Yield: "<<HiggsSigY->getVal()*Higgs->Integral()<<endl;
  

  
  ////////Table of signal and MJ yield as function of cut
  /////////////// plot
  C.Clear();
  plot->Draw();
  leg.Draw();	  


  res.precision(2); 
  res<<fixed;
  for(long cut=20;cut<=40;cut+=5){
    float CUT=cut*TMath::Pi()/180.;
    x.setRange(TString("Cut")+cut,CUT,data->GetXaxis()->GetXmax());
    RooAbsReal * QCDYieldCut=QCDPdf.createIntegral(x,RooFit::NormSet(x),RooFit::Range(TString("Cut")+cut));
    RooAbsReal * HiggsYieldCut=HiggsPdf.createIntegral(x,RooFit::NormSet(x),RooFit::Range(TString("Cut")+cut));
    res<<"Cut = "<<cut<<" deg "
       <<",  VH = "<<HiggsYieldCut->getVal()*Higgs->Integral()
       <<",  MJ="<<QCDYieldCut->getVal()*yieldQCD.getVal()*data->Integral()
       <<",  MJ/VH = "<<  (QCDYieldCut->getVal()*yieldQCD.getVal()*data->Integral()) / (HiggsYieldCut->getVal()*Higgs->Integral())
       <<",  m(bb) MJ/VH = "<<  (0.37*QCDYieldCut->getVal()*yieldQCD.getVal()*data->Integral()) / (0.98*HiggsYieldCut->getVal()*Higgs->Integral())<<endl;

  line.DrawLine(CUT,0.,CUT,data->GetMaximum());
  latex.DrawLatexNDC(0.25,0.8,region);

  }
  C.Print(outdir+"/QCDFit_CutScan.png");
  C.Print(outdir+"/QCDFit_CutScan.eps");

  res.close();
  gROOT->ProcessLine(".q");
}
