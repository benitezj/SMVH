#include <TString.h>
#include <TFile.h>
#include <TH1F.h>
#include <TDirectory.h>

#include "../plots/plotterGlobals.h"
#include "../reader/ZHmmJPlotter.C"
#include "../reader/ZHeeJPlotter.C"
#include "../reader/ZHemJPlotter.C"
#include "../plots/configZHllJ_13TeV.C"
#include "../plots/configZHllJ_13TeV_50ns.C"

#define NCAT 9
#define NMASS 19
#define NXBINS 15

void fix0Bins(TH1* H){
  if(!H){
    cout<<"fix0Bins: H is NULL"<<endl; return;
  }

  for(int b=1;b<=H->GetNbinsX();b++)
    if(H->GetBinContent(b)<0.) 
      H->SetBinContent(b,0.);
}


void dataCardSMSummer15(TString channel, TString PRODTAG){

  TString inpath=inputDir_+"/"+channel+"/"+PRODTAG;
   
  //Category selection 
  TString region[NCAT];
  region[0]="0btag";
  region[1]="1btag";
  region[2]="2btag";
  region[3]="0btaghmassL";
  region[4]="0btaghmassH";
  region[5]="1btaghmassL";
  region[6]="1btaghmassH";
  region[7]="2btaghmassL";
  region[8]="2btaghmassH";

  //Mass points
  long Mass[NMASS]={1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2200,2400,2600,2800,3000,3500,4000,4500};

  //Binning
  Float_t xbinsValues[NXBINS+1]={0,200,400,600,800,1000,1250,1500,1750,2000,2250,2500,3000,3500,4000,5000};


  Plotter * analysis = 0;
  if(channel.CompareTo("ZHmmJ")==0){
    analysis = new ZHmmJPlotter("analysis","");
  }else if(channel.CompareTo("ZHeeJ")==0){
    analysis = new ZHeeJPlotter("analysis","");
  }else if(channel.CompareTo("ZHemJ")==0){
    analysis = new ZHemJPlotter("analysis","");
  }else{
    cout<<"Wrong channel"<<endl;
    exit(0);
  }

  //  if(!(configZHllJ_13TeV(analysis,channel,inpath))){
  if(!(configZHllJ_13TeV_50ns(analysis,channel,inpath))){
    cout<<"Failed to configure."<<endl; 
    exit(0);
  }
  if(!analysis->scaleSamplesLumi()){ 
    cout<<"Failed scaling the MC samles."<<endl; 
    exit(0);
  }


  ////Binning
  //analysis->setBinning("vh_m[vh]/1000",15,0,3000);//this may depend on region
  analysis->setBinning("vh_m[vh]/1000",NXBINS,xbinsValues);
 
  ///
  TFile output(TString("LimitInputs_")+channel+"_"+PRODTAG+".root","recreate");
  gROOT->cd();

  for(long cat=0; cat<NCAT; cat++){
    
    analysis->setSelection(getSelection(channel,region[cat]));

    //////////////////////////////////////////
    ///for backgrounds loop over systematics
    TString systName="nominal";
    TString histprefix="h_"+channel+region[cat];
  

    //////////////////////////////
    TH1D* Zb=0;
    Zb=analysis->getBackground("Zb");
    Zb->SetName(histprefix+"_Zb_"+systName);
    //Zb->SetTitle("");
    fix0Bins(Zb); 

    TH1D* Zc=0;
    Zc=analysis->getBackground("Zc");
    Zc->SetName(histprefix+"_Zc_"+systName);
    //Zc->SetTitle("");
    fix0Bins(Zc); 

    TH1D* Zl=0;
    Zl=analysis->getBackground("Zl");
    Zl->SetName(histprefix+"_Zl_"+systName);
    //Zl->SetTitle("");
    fix0Bins(Zl); 



    TH1D* ttbar = 0;
    ttbar=analysis->getBackground("ttbar");
    ttbar->SetName(histprefix+"_ttbar_"+systName);
    //ttbar->SetTitle("");
    fix0Bins(ttbar);


    output.cd();
    ttbar->Write();
    Zb->Write();
    Zc->Write();
    Zl->Write();
    gROOT->cd();


    /////////Data
    TH1D* data = analysis->getTotalData();
    data->SetName(histprefix+"_data");
    data->SetTitle("");

    if(analysis->getFakeLumi()>0.){
      cout<<"WARNINIG: fake lumi ="<<analysis->getFakeLumi()<<", will set data with a toy experiment from the total MC"<<endl;
      TH1D* HMC=(TH1D*)data->Clone();
      HMC->Add(ttbar);
      HMC->Add(Zb);
      HMC->Add(Zc);
      HMC->Add(Zl);
      
      //data->Scale(0.)
      //data->FillRandom(HMC,(int)(HMC->Integral()));

      for(int b=1;b<=data->GetNbinsX();b++){
	data->SetBinContent(b,HMC->GetBinContent(b));
	data->SetBinError(b,sqrt(HMC->GetBinContent(b)));
      }

    }
    cout<<"Data integral :"<< data->Integral()<<endl;


    output.cd();
    data->Write();   
    gROOT->cd();


    
    delete ttbar;
    delete Zb;
    delete Zc;
    delete Zl;
    delete data;


      
    for(long m=0;m<NMASS;m++){
      TString sampleName=TString("HVT")+Mass[m];

      TH1D* SIG = analysis->getSample(sampleName);
      if(!SIG || SIG->Integral()==0) continue;

      SIG->SetName(histprefix+"_signal_"+Mass[m]+"_"+systName);
      //SIG->SetTitle("");
      fix0Bins(SIG); 
      
      float XS=analysis->findSample(sampleName)->getCrossection();
      if(XS<=0.){cout<<"sample has bad crossection: "<<XS<<" : "<<sampleName<<endl; exit(0); }
      SIG->Scale(1./XS); //write signals normalized to 1 pb
      
      output.cd();
      SIG->Write();
      gROOT->cd();
      
      delete SIG;
    }

  }
  
  output.ls();
  output.Close();
  gROOT->ProcessLine(".q");
}



