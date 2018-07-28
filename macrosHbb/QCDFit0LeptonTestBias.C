
#include "/nfs/home/benitezj/Notes/atlasstyle/AtlasStyle.C"
#include "/nfs/home/benitezj/Notes/atlasstyle/AtlasUtils.C"
#include "/nfs/home/benitezj/Notes/atlasstyle/AtlasLabels.C"

#define ColorsT kOrange-1
#define ColorQCD kPink+1
#define ColorTT kOrange
#define ColorZ kAzure+2
#define ColorW kGreen+3
#define ColorVV kGray


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


void QCDFit0LeptonTestBias(){

  TString inputPath="./QCD0LeptonTestBias.root";
  TString outdir=TString("/afs/cern.ch/user/b/benitezj/www/Moriond2017Studies/0lep/QCDFit0LeptonTestBias");


  ///////////////////
  TFile input(inputPath,"read");
  gROOT->cd();

  TH1F * data = (TH1F*)input.Get("data");
  TH1F * TT = (TH1F*)input.Get("ttbar");
  TH1F * Z = (TH1F*)input.Get("Z");
  TH1F * W = (TH1F*)input.Get("W");
  TH1F * VV = (TH1F*)input.Get("VV");
  TH1F * Higgs = (TH1F*)input.Get("Vh");

  ////Set data errors
  for(int b=1;b<=data->GetNbinsX();b++)
    data->SetBinError(b,sqrt(data->GetBinContent(b)));


  /////////////PDF's
  RooRealVar x("x","mva",data->GetXaxis()->GetXmin(),data->GetXaxis()->GetXmax());


  RooDataHist HiggsDataHist("HiggsDataHist","",RooArgList(x),Higgs);
  RooHistPdf HiggsPdf("HiggsPdf","",RooArgSet(x),HiggsDataHist);
  RooRealVar yieldHiggs("yieldHiggs","yieldHiggs",0,0.1);//Higgs->Integral()/data->Integral());

  RooDataHist ZDataHist("ZDataHist","",RooArgList(x),Z);
  RooHistPdf ZPdf("ZPdf","",RooArgSet(x),ZDataHist);
  RooRealVar yieldZ("yieldZ","yieldZ",0.01,0.5);//Z->Integral()/data->Integral());//

  RooDataHist WDataHist("WDataHist","",RooArgList(x),W);
  RooHistPdf WPdf("WPdf","",RooArgSet(x),WDataHist);
  RooRealVar yieldW("yieldW","yieldW",0.01,0.5);//W->Integral()/data->Integral());

  RooDataHist VVDataHist("VVDataHist","",RooArgList(x),VV);
  RooHistPdf VVPdf("VVPdf","",RooArgSet(x),VVDataHist);
  RooRealVar yieldVV("yieldVV","yieldVV",0.001,0.2);//VV->Integral()/data->Integral());

  RooDataHist TTDataHist("TTDataHist","",RooArgList(x),TT);
  RooHistPdf TTPdf("TTPdf","",RooArgSet(x),TTDataHist);

  
  RooAddPdf PDF("PDF","PDF",RooArgList(ZPdf,WPdf,VVPdf,HiggsPdf,TTPdf),
		RooArgList(yieldZ,yieldW,yieldVV,yieldHiggs));
  


  ////////////Fit
  RooDataHist Data("data","data",RooArgSet(x),data);
  RooHistPdf DataPdf("DataPdf","",RooArgSet(x),Data);
  RooChi2Var chi2("chi","chi",PDF,Data,RooFit::DataError(RooAbsData::SumW2));
  RooMinuit minuit(chi2);
  minuit.migrad();
  
  ///////////////// define plot
  RooPlot* plot=x.frame();
  Data.plotOn(plot);
  PDF.plotOn(plot,RooFit::Components(ZPdf),RooFit::FillColor(ColorZ),RooFit::DrawOption("F"),RooFit::MoveToBack());
  PDF.plotOn(plot,RooFit::Components(RooArgSet(ZPdf,WPdf)),RooFit::FillColor(ColorW),RooFit::DrawOption("F"),RooFit::MoveToBack());
  PDF.plotOn(plot,RooFit::Components(RooArgSet(ZPdf,WPdf,VVPdf)),RooFit::FillColor(ColorVV),RooFit::DrawOption("F"),RooFit::MoveToBack());
  PDF.plotOn(plot,RooFit::Components(RooArgSet(ZPdf,WPdf,VVPdf,TTPdf)),RooFit::FillColor(ColorTT),RooFit::DrawOption("F"),RooFit::MoveToBack());
  PDF.plotOn(plot,RooFit::Components(RooArgSet(ZPdf,WPdf,VVPdf,TTPdf,HiggsPdf)),RooFit::FillColor(kRed),RooFit::DrawOption("F"),RooFit::MoveToBack());

  //////////// Legend
  TLegend leg(0.58,0.55,0.75,0.88);
  leg.SetFillStyle (0);
  leg.SetFillColor (0);
  leg.SetBorderSize(0);
  leg.SetTextSize(.04);
 
  char txt[100];

  data->SetMarkerStyle(8);
  data->SetMarkerSize(1);
  leg.AddEntry(data,"Data","lp");

  Higgs->SetFillColor(kRed);
  leg.AddEntry(Higgs,TString("Vh"),"f");

  TT->SetFillColor(ColorTT);
  leg.AddEntry(TT,TString("t#bar{t}"),"f");

  VV->SetFillColor(ColorVV);
  leg.AddEntry(VV,TString("VV + single top"),"f");

  W->SetFillColor(ColorW);
  leg.AddEntry(W,TString("W+(bb,bc,cc,bl)"),"f");

  Z->SetFillColor(ColorZ);
  leg.AddEntry(Z,TString("Z+(bb,bc,cc,bl)"),"f");


  system(TString("rm -rf ")+outdir);
  system(TString("mkdir -p ")+outdir);


  /////////////// plot
  plot->SetTitle("");
  plot->GetYaxis()->SetRangeUser(1,data->GetMaximum()*20);
  plot->GetYaxis()->SetTitle("Events");
  plot->GetYaxis()->SetTitleOffset(1.3);
  plot->GetYaxis()->SetTitleSize(0.042);
  plot->GetYaxis()->SetLabelSize(0.035);
  plot->GetYaxis()->SetNdivisions(8);
  plot->GetXaxis()->SetTitle("mva");
  plot->GetXaxis()->SetTitleSize(0.045);
  //plot->GetXaxis()->SetLabelSize(0);//0.035);
  plot->GetXaxis()->SetNdivisions(8);


  TLine line; 

  TCanvas C("C","",700,800);
  TPad pad1("pad1","",0,0.2,1,1);
  TPad pad2("pad2","",0,0,1,0.2);

  pad1.SetBottomMargin(0.01);
  pad2.SetTopMargin(0.05);
  pad2.SetBottomMargin(0.5);


  pad1.cd();
  pad1.SetLogy(1);
  plot->Draw();

  leg.Draw();
	  
  ATLASLabel(0.13,0.84,"internal",1);

  TLatex latex; 
  latex.SetTextSize(0.030);
  latex.DrawLatexNDC(0.13,0.80,"#sqrt{s} = 13 TeV, 36.1 fb^{-1}");
  latex.DrawLatexNDC(0.13,0.76,"0 lep., 3 jets, 2 tags");
  latex.DrawLatexNDC(0.13,0.72,"p_{T}^{V} #geq 150 GeV");


  pad2.cd();
  TH1F * HFit=(TH1F*)data->Clone("HFit");
  HFit->Scale(0);
  HFit=(TH1F*)PDF.fillHistogram(HFit,RooArgList(x),data->Integral());
  // const RooArgSet* projectedVars = 0, Bool_t scaling = kTRUE, const RooArgSet* condObs = 0, Bool_t setError = kTRUE) const
  TH1F* hratio= makeHistRatio(HFit,data,0.5);
  hratio->SetTitle("");
  hratio->SetStats(0);
  hratio->GetYaxis()->SetRangeUser(0.998,1.002);
  hratio->GetYaxis()->SetTitle("Data/Pred.");
  hratio->GetYaxis()->SetTitleOffset(0.4);
  hratio->GetYaxis()->SetTitleSize(0.12);
  hratio->GetYaxis()->SetLabelSize(0.12);
  hratio->GetYaxis()->SetNdivisions(5);
  hratio->GetXaxis()->SetTitle("mva");
  hratio->GetXaxis()->SetTitleOffset(1.1);
  hratio->GetXaxis()->SetTitleSize(0.18);
  hratio->GetXaxis()->SetLabelSize(0.17);
  hratio->GetXaxis()->SetNdivisions(8);
  hratio->Draw("p");
  line.DrawLine(0,1.0,data->GetXaxis()->GetXmax(),1.0);

  C.Clear();
  pad1.Draw();
  pad2.Draw();
  C.Print(outdir+"/QCDFit0LeptonTestBias.png");
  //C.Print(outdir+"/QCDFit.eps");
  //C.Print(outdir+"/QCDFit.pdf");



  // ///////////////////////////////////////////////
  // ///////Print yields
  // ///////////////////////////////////////////////

  ofstream res;
  res.open(outdir+"/results.txt");

  res.precision(4); 

  res<<"Data Yield: "<<data->Integral()<<endl;

  res<<"background, prefit yield, postfit yield, scale factor "<<endl;

  res<<"Vh : "<<Higgs->Integral()
     <<" , "<<yieldHiggs.getVal()*data->Integral()<<"+/-"<<yieldHiggs.getError()*data->Integral()
     <<" , SF = "<<yieldHiggs.getVal()*data->Integral()/Higgs->Integral()<<"+/-"<<yieldHiggs.getError()*data->Integral()/Higgs->Integral()<<endl;

  res<<"Z : "<<Z->Integral()
     <<" , "<<yieldZ.getVal()*data->Integral()<<"+/-"<<yieldZ.getError()*data->Integral()
     <<" , SF = "<<yieldZ.getVal()*data->Integral()/Z->Integral()<<"+/-"<<yieldZ.getError()*data->Integral()/Z->Integral()<<endl;

  res<<"W : "<<W->Integral()
     <<" , "<<yieldW.getVal()*data->Integral()<<"+/-"<<yieldW.getError()*data->Integral()
     <<" , SF = "<<yieldW.getVal()*data->Integral()/W->Integral()<<"+/-"<<yieldW.getError()*data->Integral()/W->Integral()<<endl;

  res<<"VV + single-top : "
     <<VV->Integral()<<" , "<<yieldVV.getVal()*data->Integral()<<"+/-"<<yieldVV.getError()*data->Integral()
     <<" , SF = "<<yieldVV.getVal()*data->Integral()/VV->Integral()<<"+/-"<<yieldVV.getError()*data->Integral()/VV->Integral()<<endl;


  RooFormulaVar yieldTT("yieldTT","yieldTT","1-yieldZ-yieldW-yieldVV-yieldHiggs",
			RooArgList(yieldZ,yieldW,yieldVV,yieldHiggs));
  
  float TTErr=sqrt(pow(yieldHiggs.getError()*data->Integral(),2)+
		   pow(yieldZ.getError()*data->Integral(),2)+
		   pow(yieldW.getError()*data->Integral(),2)+
		   pow(yieldVV.getError()*data->Integral(),2));
  
  res<<"TT : "<<TT->Integral()
     <<" , "<<yieldTT.getVal()*data->Integral()<<"+/-"<<TTErr
     <<" , SF = "<<yieldTT.getVal()*data->Integral()/TT->Integral()<<"+/-"<<TTErr/TT->Integral()<<endl;


  res.close();
  gROOT->ProcessLine(".q");
}
