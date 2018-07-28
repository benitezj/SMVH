#ifndef Sample_H
#define Sample_H

#include <memory>
#include <iostream>
#include <iomanip>
#include <sys/stat.h>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h> 
using namespace std;

#include <TROOT.h>
#include <TNamed.h>
#include <TSystem.h>
#include <TTree.h>
#include <TChain.h>
#include <TFile.h>
#include <TString.h>
#include <TCut.h>
#include <TH1.h>
#include <TH1D.h>
#include <TH1F.h>
#include <TH2.h>
#include <TH2F.h>
#include <TH2D.h>
#include <TList.h>
#include <TIterator.h>
#include <TKey.h>
#include <TGraphErrors.h>


class Sample : public TNamed {
  
public:
  
  Sample();
  Sample(const char * name, const char * title, const char * path, std::vector<std::string> systNames = std::vector<std::string>() );
  virtual ~Sample();
  

  void addRootFiles(TString name,TString path){ //useful when one background is in multiple directories
    if(nNames_>=30){cout<<"Too many root file directories."<<endl; return;}
    addFileNames[nNames_++] = path+"/"+name; ;
  }
  void setColor(Int_t color){color_=color;}
  void setLineColor(Int_t color){lcolor_=color;}
  void setLineStyle(Int_t lstyle){lstyle_=lstyle;}
  void setDataType(TString type){ dataType_=type;  }
  void setTitle(TString title){ title_=title;  }
  void setFileName(TString name){ filename_ = name;}
  void setNtupleName(TString name){ ntpname_ = name;}

  void setEventWeight(TString weight){eventWeight_ = weight;}
  void setCrossection(float crossection){crossection_=crossection;} //in pb
  void setSampleLumi(float lumi){lumi_=lumi;}
  void resetScale(){ normFactor_=1.;}
  void scale(Float_t factor){if(!ntpChain_) openNtpFile(); normFactor_ *= factor;}

  void setSignalMass(Float_t mass){signalMass_=mass;}
  float getSignalMass(){return signalMass_;}

  //access
  TChain * getTChain(){if(!ntpChain_) openNtpFile(); return ntpChain_; }
  float getCrossection(){return crossection_;}
  TString getDataType(){return dataType_;}
  int getRun(){return run_;}
  TString getDataSet(){return dataSet_;}
  int getProcessedEvents(){return procEvents_;}
  int getGenEvents(){return genEvents_;}
  float getGenEventsSumW(){return genEventsSumW_;}

  float getLumi(){ 
    if(dataType_=="Data") return lumi_;    
    else if(crossection_>0.){
      if(!ntpChain_) if(!openNtpFile()) return 0.;
      return getGenEventsSumW()/crossection_;
    }
    return 0.;
  }

  float getNorm(){return normFactor_;}
  
  Int_t getColor(){return color_;}
  Int_t getLineColor(){return lcolor_;}
  Int_t getLineStyle(){return lstyle_;}
  Int_t getNFiles(){ if(!ntpChain_) if(!openNtpFile()) return 0; return ntpChain_->GetNtrees(); }
  Int_t getEntries(TString selection=""){
    if(!ntpChain_) if(!openNtpFile()) return 0;
    return ntpChain_->GetEntries(selection);
  }

  ////
  void fillHisto(TH1* h, TString xvar,TCut selection="",TString variation="");
  TH1D* getHistoNtpFile(TString xvar,Int_t xnbins,Float_t xmin,Float_t xmax,TCut selection="",TString variation="");
  TH1D* getHistoNtpFile(TString xvar,Int_t Nbins, Float_t * Xbins,TCut selection="",TString variation="");
  TH2D* getHistoNtpFile(TString xvar,Int_t xnbins,Float_t xmin,Float_t xmax,TString yvar,Int_t ynbins,Float_t ymin,Float_t ymax,TCut selection="",TString variation="");




  TH1* getPileUp();


  TH1* getHisto(TString histoName, int nbins=0, float xmin=0., float xmax=0.);


  void setHistoAttr(TH1* h){
    h->SetTitle(title_);
    h->SetLineWidth(1);
    h->SetLineColor(1);
    h->SetFillColor(color_);
  }


  bool addSkim(TString name, TString selection){
    if(skimCounter>=20){cout<<"Too many skims"<<endl; return 0;}
    skimName[skimCounter]=name;
    skimSelection[skimCounter]=selection;
    skimCounter++;
    return 1;
  }

  bool skim(TString selection){
    if(!ntpChain_) if(!openNtpFile()) return 0;
    //if(ntpChain_->GetNtrees()>0){
    if(ntpChain_->GetEntries()>0){
      gROOT->cd();    
      
      TTree* t = ntpChain_->CopyTree(selection.Data());
      if(!t){cout<<"Failed to skim:"<<GetName()<<endl; return 0;}

      delete ntpChain_;
      ntpChain_=(TChain*)t;
      return 1;
    }
    cout<<"Sample::skim() Warning TChain has no entries:  "<< selection << " not applied"<<endl;
    return 1;
  }

  bool runSkims(){
    for(int i=0;i<skimCounter;i++) if(!skim(skimSelection[i])) return 0;
    return 1;
  }
  
  TGraphErrors * getCutFlow(TString firstCut="eventCounter_inputCounter",TString outpath="",float ymax=10);
  
 
protected:


private:


  TString path_;
  int run_;
  TString dataSet_;
  float crossection_;
  float lumi_;
  int procEvents_;
  int genEvents_;
  float genEventsSumW_;
  TString eventWeight_;

  Int_t  nNames_;
  TString addFileNames[30];

  TString filename_;
  TString ntpname_;
  TChain* ntpChain_;
  std::vector<TChain*> systNtpChain;//one for each systematic, including Nominal
  std::vector<std::string> systName;//map for systematics
  Int_t NMAXFILES_;
  Int_t NMAXNONEXISTENT_;

  TString dataType_;
  TString title_;
  Int_t color_;
  Int_t lcolor_;
  Int_t lstyle_;
  float normFactor_;
  bool init_;

  Float_t signalMass_;
  
  bool openNtpFile();

  int getNProcEvents(TString logfile);
  int getInitialEvents(TFile * rootFile);
  float getSumOfWeights(TFile * rootFile);

  int     skimCounter=0;
  TString skimName[20];
  TString skimSelection[20];


  ClassDef(Sample, 1);
};

#endif 
