#include "../plots/plotterGlobals.h"

#define channel "_llJ"
#define SignalName "SMZh"
std::vector<std::string> BKGS={"Zl","Zc","Zb","TTbar","STop","Diboson"};
std::vector<std::string> REGIONS={"_0addtag_MH_mJ"};

///Binninng: 
#define NXBINS 12 
float xBins[NXBINS+1]={0,40,80,90,100,110,120,130,140,150,160,200,300};

TH1F * rebinHisto(TH1* H,TString tag=""){
  if(!H){
    cout<<"rebinHisto H=NULL"<<endl;
    exit(0);
  }

  // TH1F * h=new TH1F(TString(H->GetName())+"_"+tag,"",NXBINS,xBins);
  // for(int k=1;k<=NXBINS;k++){
  //   float integral=0.;
  //   float error=0.;
  //   for(int b=1;b<=H->GetNbinsX();b++){
  //     if(h->GetBinLowEdge(k)<H->GetBinCenter(b)
  // 	 && H->GetBinCenter(b)<(h->GetBinLowEdge(k)+h->GetBinWidth(k))){
  // 	integral+=H->GetBinContent(b);
  // 	error+=H->GetBinError(b)*H->GetBinError(b);
  //     }
  //   }
  //   h->SetBinContent(k,integral);
  //   h->SetBinError(k,sqrt(error));
  // }
  
  //return h;
  
  return (TH1F*)(((TH1F*)H)->Rebin(1,TString("Rebin")+H->GetName()));
}


double calculateLimit(TH1F*HB,TH1F*HS){//This works for one signal region
  if(HS==NULL || HB==NULL){
    cout<<" calculateLimit() Error: HS==NULL || HB==NULL"<<endl;
    return 0.;
  }

  if(HS->Integral()<=0 || HB->Integral()<=0){
    cout<<" calculateLimit() Error HS->Integral()<=0 || HB->Integral()<=0"<<endl;
    return 0.;
  }

  //cout<<"calculateLimit: "<<HB->Integral()<<" "<<HS->Integral()<<endl;
  
  double NBkg=0.;
  double NBkgErr=0.;
  double NSig=0.;
  for(int i=1; i<=HS->GetNbinsX();i++){
    if(HS->GetBinContent(i)/HS->Integral() > 0.05){//~90% signal region
      NSig += HS->GetBinContent(i);
      NBkg += HB->GetBinContent(i);
      NBkgErr += HB->GetBinError(i) * HB->GetBinError(i);
    }
  }
  if(NBkg<=0 || NSig<=0){
    cout<<"calculateLimit() Error: NBkg="<<NBkg<<"+/-"<<sqrt(NBkgErr)<<", NSig="<<NSig<<endl;
    return 0.;
  }

  double limit=estimateLimit(NBkg + sqrt(NBkgErr));

  //cout<<"calculateLimit: Bkg="<<NBkg<<"+/-"<<sqrt(NBkgErr)<<" -> limit="<<limit<<endl;
  return  limit / NSig;//If signals were normalized to a crosection of 1pb then this limit is in pb 
}


float calculateSmallestLimit(std::vector<TH1F*> bkgs, std::vector<TH1F*> sigs){
  //input vectors contain the different event categories
  //this function returns the smallest limit of all categories

  if(bkgs.size()!=sigs.size() || bkgs.size()==0){
    cout<<"calculateSmallestLimit() Error: bkgs.size()!=sigs.size() || bkgs.size(): "<<sigs.size()<<" "<<bkgs.size()<<endl;
    return 0.;
  }

  float limit=99999999;
  for(int index=0;index<bkgs.size();index++){
    TH1F*HS=sigs[index];
    TH1F*HB=bkgs[index];
   
    if(HS->Integral()<=0 || HB->Integral()<=0) 
      continue;//      return 0.;
    
    float l=calculateLimit(HB,HS);
    if(l<limit)limit=l;
    //cout<<index<<"/"<<bkgs.size()<<" "<<HS->Integral()<<" "<<HB->Integral()<<" "<<limit<<endl;
  }

  return  limit;
}



TH1F * getTotalBackground(TString input, TString tag){

  TH1F * HTOT=NULL;
  for(std::vector<std::string>::iterator it=BKGS.begin(); it!=BKGS.end(); it++){
    
    TFile FBkg(input+"/"+(*it).c_str()+channel+"_"+tag+".root","read");
    if(FBkg.IsZombie()){
      cout<<"File is Zombie: "<<FBkg.GetName()<<endl;
      continue;
    }
    gROOT->cd();

    //Get histogram
    TH1F * HBkg=(TH1F*)FBkg.Get("nominal");
    if(!HBkg){
      cout<<"No histogram found in "<<FBkg.GetName()<<endl;
      FBkg.ls();
      continue;
    }
    //cout<<file<<" "<<HBkg->Integral()<<endl;

    ////Sum backgrounds
    if(!HTOT){
      HTOT=(TH1F*)HBkg->Clone("HTOT");
      HTOT->Scale(0);
    }
    HTOT->Add(HBkg);
    
  }
  if(!HTOT){
    cout<<" getTotalBackground() returning NULL for "<<input<<" "<<tag<<endl;
    return NULL;
  }

  ///REBIN the total histogram
  //return (TH1F*)HTOT->Rebin(REBIN,TString(channel)+"_"+tag+"_Bkg");
  return rebinHisto(HTOT,TString(channel)+"_"+tag+"_Bkg");
}


TH1F * getSignal(TString input, TString tag){
  
  TFile FSig(input+"/"+SignalName+channel+"_"+tag+".root","read");
  if(FSig.IsZombie()){
    cout<<"File is Zombie: "<<FSig.GetName()<<endl;
    return 0;
  }
  gROOT->cd();
  
  TH1F * HSig=(TH1F*)FSig.Get("nominal");
  if(!HSig){
    cout<<"No histogram found in "<<FSig.GetName()<<endl;
    return 0;
  }
  cout<<"Signal: "<<input+"/"+SignalName+channel+"_"+tag+".root"<<"  Integral="<<HSig->Integral()<<endl;
  return rebinHisto(HSig,TString(channel)+"_"+tag+"_Sig");
}


TH1F* getTotalHisto(std::vector<TH1F*> histos,bool clean=0){
  gROOT->cd();
  TH1F*H=NULL;
  for(std::vector<TH1F*>::iterator it=histos.begin(); it!=histos.end(); it++){
    if(H==NULL){
      H=(TH1F*)((*it)->Clone(TString("Htotal_")+(*it)->GetName()));
    }else{
      H->Add(*it);
    }
  }

  ///clean up the original histos
  if(clean)
    for(std::vector<TH1F*>::iterator it=histos.begin(); it!=histos.end(); it++)
      delete *it;
  
  return H;
}



void runSimpleLimit_SMZh(TString input, TString tag){
  // input: full path.
  // tag: 1tag or 2tag

  // ofstream fout;
  // std::string fname((TString("./runSimpleLimit_")+tag+".txt").Data());
  // fout.open(fname.c_str());

  //Assumme inputs were normalized SM x-section
  float scale=1.;

  ///////////////////////////////
  /// Get all the backgrounds
  ///////////////////////////////
  std::vector<TH1F*> bkgs;  
  if(tag.Contains("1tag")){
    //some regions must be merged before adding to list of categories which will be used for the limit
    std::vector<TH1F*> cat1tag;  
    for(std::vector<std::string>::iterator it=REGIONS.begin(); it!=REGIONS.end(); it++)
      cat1tag.push_back(getTotalBackground(input,TString("1tag")+(*it).c_str()));
    bkgs.push_back(getTotalHisto(cat1tag,1));
  } 
  if(tag.Contains("2tag")){ 
    std::vector<TH1F*> cat2tag;      
    for(std::vector<std::string>::iterator it=REGIONS.begin(); it!=REGIONS.end(); it++)
      cat2tag.push_back(getTotalBackground(input,TString("2tag")+(*it).c_str()));
    bkgs.push_back(getTotalHisto(cat2tag,1));
  }


  //this histo will be used later to check the background yield in the signal region
  TH1F*HTotBkg=getTotalHisto(bkgs);
  if(!HTotBkg){
    cout<<"Total Bkg histo is NULL"<<endl;
    return;
  }

    
  ///////////////////////////////
  /// Get all the signals
  ///////////////////////////////
  std::vector<TH1F*> sigs;  
  if(tag.Contains("1tag")){
    std::vector<TH1F*> cat1tag;  
    for(std::vector<std::string>::iterator it=REGIONS.begin(); it!=REGIONS.end(); it++)
      cat1tag.push_back(getSignal(input,TString("1tag")+(*it).c_str()));
    sigs.push_back(getTotalHisto(cat1tag,1));
  }    
  if(tag.Contains("2tag")){
    std::vector<TH1F*> cat2tag;  
    for(std::vector<std::string>::iterator it=REGIONS.begin(); it!=REGIONS.end(); it++)
      cat2tag.push_back(getSignal(input,TString("2tag")+(*it).c_str()));
    sigs.push_back(getTotalHisto(cat2tag,1));
  }
        
  TH1F*HTotSignal=getTotalHisto(sigs);
  if(!HTotSignal){
    cout<<"Total Signal histo is NULL"<<endl;
    return;
  }


  ///////////////////////////////
  ///Significance estimation:
  ///////////////////////////////
  //sig = getExpectedSignificance(bkgs[0],sigs[0],1);


  ///////////////////////////////
  ///Limit Estimation:
  // 1. estimate best limit per category
  // 2. estimate combined limit 
  ///////////////////////////////
  float sLimit = calculateSmallestLimit(bkgs,sigs);
  float limit = likelihoodLimit(bkgs,sigs,bkgs,2*sLimit);

  ///will print the background in the bin where the signal is centered
  //int bkgbin=int(HTotBkg->GetXaxis()->GetNbins() * (HTotSignal->GetMean() - HTotBkg->GetXaxis()->GetXmin()) / (HTotBkg->GetXaxis()->GetXmax() - HTotBkg->GetXaxis()->GetXmin())) + 1;

  ///
  cout<<"Total:  sig="<<HTotSignal->Integral()<<"  bkg="<<HTotBkg->Integral()<<"  limit="<<scale*limit<<endl;
  cout<<"SignalRegion:  sig="<<HTotSignal->Integral(8,15)<<"  bkg="<<HTotBkg->Integral(8,13)<<"  S/sqrt(B)="<<HTotSignal->Integral(8,13)/sqrt(HTotBkg->Integral(8,13))<<endl;


  //fout.close();
  //cout<<"Limits: "<<fname.c_str()<<endl;

  gROOT->ProcessLine(".q");
}


