#include "plottingTools.C"

TH1D* getZNominal(Plotter * analysis){
  TH1D* hZl  = analysis->getBackground("Zl"); hZl->SetName("hZl");
  TH1D* hZc  = analysis->getBackground("Zc"); hZc->SetName("hZc");
  TH1D* hZb  = analysis->getBackground("Zb"); hZb->SetName("hZb");
  
  TH1D* h = (TH1D*)hZl->Clone("hZNominal");
  h->Add(hZc);
  h->Add(hZb);
  delete hZl; delete hZc; delete hZb;
  return h;
}


void compareZHllJZModel(Plotter * analysis, TString channel, TString PRODTAG, TString outpath ){  
    
  TString inpath=inputDir_+"/"+channel+"/"+PRODTAG+"_Systs";

  ////MadGraph Z+jets
  analysis->defineBackground("ZMG","",colorZl,titleZl);
  analysis->loadBackgroundSamples("ZMG","MadGraphPythia8EvtGen_A14NNPDF23LO_Z*_Np",inpath);

  /////////////////////////////////////////////////////
  ///need to scale samples again because just added samples above
  /////////////////////////////////////////////////////
  if(!analysis->scaleSamplesLumi()){ 
    cout<<"Failed scaling the MC samles."<<endl; 
    return;
  }

  
  /////////////////////////////////////////////////////
  ///Set the binning
  //analysis->setBinning("vh_m[vh]/1000",10,0,5000);

  //Float_t xbinsValues[18]={0,100,200,300,400,500,600,700,800,900,1000,1200,1400,1600,2000,3000,4000,5000};
  //analysis->setBinning("vh_m[vh]/1000",17,xbinsValues);

  Float_t xbinsValues[16]={0,100,200,300,400,500,600,700,800,900,1000,1200,1400,1600,2000,5000};
  analysis->setBinning("vh_m[vh]/1000",15,xbinsValues);


 
  /////////////////////////////////////////////////////
  ///Z distributions at preselection
  /////////////////////////////////////////////////////
  analysis->setSelection(getSelection(channel,"presel"));
  TH1D* hZSh_presel = getZNominal(analysis);  hZSh_presel->SetName("hZSh_presel");
  TH1D* hZMG_presel = analysis->getBackground("ZMG"); hZMG_presel->SetName("hZMG_presel");

  analysis->setSelection(getSelection(channel,"0btag"));
  TH1D* hZSh_0btag = getZNominal(analysis);  hZSh_0btag->SetName("hZSh_0btag");
  TH1D* hZMG_0btag = analysis->getBackground("ZMG"); hZMG_0btag->SetName("hZMG_0btag");

  analysis->setSelection(getSelection(channel,"1btag"));
  TH1D* hZSh_1btag = getZNominal(analysis);  hZSh_1btag->SetName("hZSh_1btag");
  TH1D* hZMG_1btag = analysis->getBackground("ZMG"); hZMG_1btag->SetName("hZMG_1btag");

  analysis->setSelection(getSelection(channel,"2btag"));
  TH1D* hZSh_2btag = getZNominal(analysis);  hZSh_2btag->SetName("hZSh_2btag");
  TH1D* hZMG_2btag = analysis->getBackground("ZMG"); hZMG_2btag->SetName("hZMG_2btag");


  //Write the histograms and fit later 
  TFile FOut(outpath+"/Histograms.root","recreate");
  hZSh_presel->Write();
  hZSh_0btag->Write();
  hZSh_1btag->Write();
  hZSh_2btag->Write();
  hZMG_presel->Write();
  hZMG_0btag->Write();
  hZMG_1btag->Write();
  hZMG_2btag->Write();

  std::cout<<FOut.GetName()<<std::endl;
  FOut.ls();


  ///Exit ROOT
  gROOT->ProcessLine(".q");
}


TF1* drawZModel(TH1D* hModel, TH1D* hRef, TString outpath, TString tag){
  

  TCanvas C;
  TString xtitle="m(VH)   [GeV]";


  TString ModelTitle = hModel->GetTitle();
  TString RefTitle = hRef->GetTitle();

  TLegend legend;
  legend.SetFillStyle (0);
  legend.SetFillColor (0);
  legend.SetBorderSize(0);
  legend.SetTextSize(.04);
  
  legend.SetX1NDC(0.6);
  legend.SetY1NDC(0.6);
  legend.SetX2NDC(0.85);
  legend.SetY2NDC(0.87);
  legend.AddEntry(hModel,ModelTitle,"l");
  legend.AddEntry(hRef,RefTitle,"p");


  //calculate ratio of integrals 
  float scale=hModel->Integral()/hRef->Integral();
  float err=0.;
  for(int b=1;b<hModel->GetNbinsX();b++)
    err += hModel->GetBinError(b) * hModel->GetBinError(b);
  
  std::cout<<"Ratio "<<ModelTitle<<"/"<<RefTitle<<" = "<<scale<<" +/- "<<sqrt(err)/hRef->Integral()<<std::endl;



  C.Clear();
  hRef->GetYaxis()->SetRangeUser(0.01,hRef->GetMaximum()*10);
  hRef->SetTitle(tag);
  hRef->GetXaxis()->SetTitle(xtitle);
  hRef->SetFillColor(0);
  hRef->Draw("histpe");
  hModel->SetLineColor(1);
  hModel->SetFillColor(0);
  hModel->Draw("histsame");
  legend.Draw();
  C.SetLogy(1);
  C.Print(outpath+"/vh_m_"+tag+".png");
  C.Print(outpath+"/vh_m_"+tag+".eps");
  C.SetLogy(0);


  //////Make ratio and fit
  TGraphErrors * hZratio = makeGraphRatio(hModel,hRef);

  TLine line;
  
  TF1 * Fit= new TF1("FPol","[0]+[1]*x+[2]*x*x",0,5000);
  //TF1 * Fit= new TF1("FPol","[0]+[1]*x+[2]*x*x+[3]*x*x*x",0,5000);
  //TF1 * Fit= new TF1("FPol","[0] + [1] * log(x)",0,5000);
  Fit->SetLineColor(2);  

  Fit->SetParameter(0,1);
  Fit->SetParameter(1,-0.001);
  //Fit->SetParameter(2,0.1);
  //Fit->SetParLimits(2,1,3000);

  //hZratio->Fit(Fit,"","",0,5000);


  C.Clear();
  TH1F*hLine=(TH1F*)hRef->Clone("hLine");
  hLine->Clear();  hLine->Reset();
  hLine->SetFillColor(0);
  hLine->SetLineColor(4);
  hLine->GetYaxis()->SetRangeUser(0,2);
  hLine->GetYaxis()->SetTitle(ModelTitle+"/"+RefTitle);
  hLine->SetTitle("Ratio");
  hLine->GetXaxis()->SetTitle(xtitle);
  hLine->Draw("hist");
  line.DrawLine(hLine->GetXaxis()->GetXmin(),1,hLine->GetXaxis()->GetXmax(),1);

  hZratio->Draw("pesame");

  //Fit->Draw("lsame");
  C.Print(outpath+"/vh_m_"+tag+"_ratio.png");
  C.Print(outpath+"/vh_m_"+tag+"_ratio.eps");


  //printBinContents(hZratio);


  delete hZratio;
  delete hLine;
  return Fit;
}


void fitZHllJZModel(TString tag="DB00-06-01_presel_ZModel"){

  TString infile1=outputDir_+"/ZHmmJ/"+tag+"/Histograms.root";
  TFile InFile1(infile1,"read");
  TString infile2=outputDir_+"/ZHeeJ/"+tag+"/Histograms.root";
  TFile InFile2(infile2,"read");
  
  TString outpath=outputDir_+"/ZHllJZModel";
  system(TString("rm -rf ")+outpath);
  system(TString("mkdir ")+outpath);


  TH1D* hZSh_presel = (TH1D*)InFile1.Get("hZSh_presel");
  TH1D* hZSh_0btag = (TH1D*)InFile1.Get("hZSh_0btag");
  TH1D* hZSh_1btag = (TH1D*)InFile1.Get("hZSh_1btag");
  TH1D* hZSh_2btag = (TH1D*)InFile1.Get("hZSh_2btag");

  TH1D* hZMG_presel = (TH1D*)InFile1.Get("hZMG_presel");
  TH1D* hZMG_0btag = (TH1D*)InFile1.Get("hZMG_0btag");
  TH1D* hZMG_1btag = (TH1D*)InFile1.Get("hZMG_1btag");
  TH1D* hZMG_2btag = (TH1D*)InFile1.Get("hZMG_2btag");

  //Add the other channel
  hZSh_presel->Add((TH1D*)InFile2.Get("hZSh_presel"));
  hZSh_0btag->Add((TH1D*)InFile2.Get("hZSh_0btag"));
  hZSh_1btag->Add((TH1D*)InFile2.Get("hZSh_1btag"));
  hZSh_2btag->Add((TH1D*)InFile2.Get("hZSh_2btag"));

  hZMG_presel->Add((TH1D*)InFile2.Get("hZMG_presel"));
  hZMG_0btag->Add((TH1D*)InFile2.Get("hZMG_0btag"));
  hZMG_1btag->Add((TH1D*)InFile2.Get("hZMG_1btag"));
  hZMG_2btag->Add((TH1D*)InFile2.Get("hZMG_2btag"));


  //Set Titles for plot
  hZSh_presel->SetTitle("Sherpa");
  hZSh_0btag->SetTitle("Sherpa");
  hZSh_1btag->SetTitle("Sherpa");
  hZSh_2btag->SetTitle("Sherpa");

  hZMG_presel->SetTitle("MadGraph");
  hZMG_0btag->SetTitle("MadGraph");
  hZMG_1btag->SetTitle("MadGraph");
  hZMG_2btag->SetTitle("MadGraph");


  ///rescale the Madgraph to match integral at preselection
  float scale=hZSh_presel->Integral()/hZMG_presel->Integral();
  std::cout<<"Scale Factor Sherpa/MadGraph="<<scale<<std::endl;

  hZMG_presel->Scale(scale);
  hZMG_0btag->Scale(scale);
  hZMG_1btag->Scale(scale);
  hZMG_2btag->Scale(scale);

  drawZModel(hZMG_presel,hZSh_presel,outpath,"presel");
  drawZModel(hZMG_0btag,hZSh_0btag,outpath,"0btag");
  drawZModel(hZMG_1btag,hZSh_1btag,outpath,"1btag");
  drawZModel(hZMG_2btag,hZSh_2btag,outpath,"2btag");

}
