TFile * input=NULL;
TString REGION="";
float total=0.;
float totalerr=0.;

void printYield(TH1F*h,TString name){
  h->Rebin(h->GetNbinsX());
  printf(name+" & %.2f $\\pm$ %.2f \n",h->GetBinContent(1),h->GetBinError(1));
  total+=h->GetBinContent(1);
  totalerr+=h->GetBinError(1)*h->GetBinError(1);
}

TH1F * getHisto(TString name){
  TH1F * h=(TH1F*)input->Get(name+"_"+REGION);
  if(!h) {
    cout<<" Histo not found : "<<name<<"  REGION : "<<REGION<<endl;
    exit(0);
  }
  return h;
}


void printPrefitYields(TString inputpath, TString region="2tag2jet_150ptv_SR_mva"){
    
  input =new TFile(inputpath,"read");
  if(input->IsZombie()){
    cout<<"File is Zombie"<<endl;
    exit(0);
  }
  gROOT->cd();

  REGION=region;


  TH1F* htemplate=getHisto("ttbar");
  htemplate=(TH1F*)htemplate->Clone("hTemplate");
  htemplate->Clear();
  htemplate->Reset();
  for(int b=0;b<=htemplate->GetNbinsX();b++){
    htemplate->SetBinContent(b,0.);
    htemplate->SetBinError(b,0.);
  }
  
  ////signal add all channels
  printYield(getHisto("qqZvvH125"),"qqZvvH");
  printYield(getHisto("qqZllH125"),"qqZllH");
  printYield(getHisto("ggZvvH125"),"ggZvvH");
  printYield(getHisto("ggZllH125"),"ggZllH");
  printYield(getHisto("qqWlvH125"),"qqWH");
  

  ///W+jets
  TH1F* hWl=(TH1F*)htemplate->Clone("hWl");
  hWl->Add(getHisto("Wl"));
  printYield(hWl,"Wl");

  TH1F* hWcl=(TH1F*)htemplate->Clone("hWcl");
  hWcl->Add(getHisto("Wcl"));
  printYield(hWcl,"Wcl");

  TH1F* hWhf=(TH1F*)htemplate->Clone("hWhf");
  hWhf->Add(getHisto("Wbb"));
  hWhf->Add(getHisto("Wbc"));
  hWhf->Add(getHisto("Wbl"));
  hWhf->Add(getHisto("Wcc"));
  printYield(hWhf,"Whf");


  //Z+jets
  TH1F* hZl=(TH1F*)htemplate->Clone("hZl");
  hZl->Add(getHisto("Zl"));
  printYield(hZl,"Zl");

  TH1F* hZcl=(TH1F*)htemplate->Clone("hZcl");
  hZcl->Add(getHisto("Zcl"));
  printYield(hZcl,"Zcl");

  TH1F* hZhf=(TH1F*)htemplate->Clone("hZhf");
  hZhf->Add(getHisto("Zbb"));
  hZhf->Add(getHisto("Zbc"));
  hZhf->Add(getHisto("Zbl"));
  hZhf->Add(getHisto("Zcc"));
  printYield(hZhf,"Zhf");


  ///top
  TH1F* httbar=(TH1F*)htemplate->Clone("httbar");
  httbar->Add(getHisto("ttbar"));
  printYield(httbar,"ttbar");

  TH1F* hstop=(TH1F*)htemplate->Clone("hstop");
  hstop->Add(getHisto("stopWt"));
  hstop->Add(getHisto("stops"));
  hstop->Add(getHisto("stopt"));
  printYield(hstop,"stop");

  //diboson
  TH1F* hVV=(TH1F*)htemplate->Clone("hVV");
  hVV->Add(getHisto("WW"));
  hVV->Add(getHisto("WZ"));
  hVV->Add(getHisto("ZZ"));
  printYield(hVV,"diboson");


  ///Total background at this point:
  printf("Total Bkg & %0.2f $\\pm$ %0.2f \n",total,sqrt(totalerr));


  //data (NOTE: must be printed here otherwise will be added to total bkg)
  TH1F* hdata=(TH1F*)htemplate->Clone("hdata");
  hdata->Add(getHisto("data"));
  printYield(hdata,"data");
  return;
}
