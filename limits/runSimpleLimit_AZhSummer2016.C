#include "../plots/plotterGlobals.h"
//#include "../SMVH/tools.h"

// ////2Lepton,Moriond,Jose
// #define channel "_llJ"
// #define SignalName "HVTZHllqq"
// std::vector<std::string> BKGS={"Zl","Zc","Zb","TTbar","STop","Diboson","SMZh"};
// std::vector<std::string> REGIONS={"_0addtag_SR_mVH"};

 
////2Lepton,Moriond,Stephen
//std::vector<std::string> BKGS={"Zl","Zc","Zb","TTbar","stopWt","Diboson"};
//std::vector<std::string> REGIONS={"_0addtag_unblind_SR_mVH"};


/// 1Lepton,Moriond,Kristian
#define channel "_lvJ"
#define SignalName "HVTWHlvqq"
std::vector<std::string> BKGS={"Diboson","TTbar","Wb","Wc","Wl","Zb","Zc","Zl","qqWlvH125","stopWt","stopt"};
std::vector<std::string> REGIONS={"_0addtag_unblind_SR_mVH"};


// ///1Lepton,ICHEP2016,Stephen
// #define channel ""
// #define SignalName "HVTWHlvqq"
// std::vector<std::string> BKGS={"Wv22bb","Wv22bc","Wv22bl","Wv22cc","Wv22cl","Wv22l","Zv22bb","Zv22bc","Zv22bl","Zv22cc","Zv22cl","Zv22l","ttbar","WW","WZ","ZZ","stopWt","stops","stopt","qqWlvH125"};
// std::vector<std::string> REGIONS={"1pfat0pjet_0_500ptv_SR_noaddbjetsr_mVH","1pfat0pjet_500ptv_SR_noaddbjetsr_mVH"};


///Binninng: 
#define NXBINS 15 
float xBins[NXBINS+1]={0,200,400,600,800,1000,1200,1400,1600,1800,2000,2400,2800,3400,4000,5000};

TH1F * rebinHisto(TH1* H,TString tag=""){
  
  TH1F * h=new TH1F(TString(H->GetName())+"_"+tag,"",NXBINS,xBins);
  for(int k=1;k<=NXBINS;k++){
    float integral=0.;
    float error=0.;
    for(int b=1;b<=H->GetNbinsX();b++){
      if(h->GetBinLowEdge(k)<H->GetBinCenter(b)
	 && H->GetBinCenter(b)<(h->GetBinLowEdge(k)+h->GetBinWidth(k))){
	integral+=H->GetBinContent(b);
	error+=H->GetBinError(b)*H->GetBinError(b);
      }
    }
    h->SetBinContent(k,integral);
    h->SetBinError(k,sqrt(error));
  }
  
  return h;
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


TH1F * getSignal(TString input, TString tag, long mass){

  TFile FSig(input+"/"+SignalName+mass+channel+"_"+tag+".root","read");
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
  //cout<<"M = "<<mass<<" "<<tag<<" "<<HSig->Integral()<<endl;
  //return (TH1F*)HSig->Rebin(REBIN,TString(channel)+"_"+tag+"_Sig");
  return rebinHisto(HSig,TString(channel)+"_"+tag+"_Sig"+mass);
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



void runSimpleLimit_AZhSummer2016(TString input, TString tag){
  
  //cout<<"input: "<<inpath<<"/"<<input<<endl;

  ofstream fout;
  std::string fname((TString("./runSimpleLimit_")+tag+".txt").Data());
  fout.open(fname.c_str());

  //Assumme inputs were normalized to sigma = 1pb
  //float scale = 1./(2.*0.03366); //account for Z->ll BF
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

  for(long m=0;m<NMASS;m++){

    if(MassPoint[m]<700||MassPoint[m]>4000) continue;
    
    ///////////////////////////////
    /// Get all the signals
    ///////////////////////////////
    std::vector<TH1F*> sigs;  
    if(tag.Contains("1tag")){
      std::vector<TH1F*> cat1tag;  
      for(std::vector<std::string>::iterator it=REGIONS.begin(); it!=REGIONS.end(); it++)
	cat1tag.push_back(getSignal(input,TString("1tag")+(*it).c_str(),MassPoint[m]));
      sigs.push_back(getTotalHisto(cat1tag,1));
    }    
    if(tag.Contains("2tag")){
      std::vector<TH1F*> cat2tag;  
      for(std::vector<std::string>::iterator it=REGIONS.begin(); it!=REGIONS.end(); it++)
	cat2tag.push_back(getSignal(input,TString("2tag")+(*it).c_str(),MassPoint[m]));
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
    int bkgbin=int(HTotBkg->GetXaxis()->GetNbins() * (HTotSignal->GetMean() - HTotBkg->GetXaxis()->GetXmin()) / (HTotBkg->GetXaxis()->GetXmax() - HTotBkg->GetXaxis()->GetXmin())) + 1;

    ///
    fout<<MassPoint[m]<<" "<<HTotSignal->Integral()<<" "<<HTotBkg->GetBinContent(bkgbin)<<" "<<scale*limit<<endl;
  }  

  fout.close();
  cout<<"Limits: "<<fname.c_str()<<endl;

  gROOT->ProcessLine(".q");
}


