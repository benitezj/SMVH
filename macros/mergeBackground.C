#include <iostream>
#include <iomanip>
#include <sys/stat.h>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h> 
using namespace std;

#define NMAXFILES_ 100
#define NMAXNONEXISTENT_ 3

void mergeBackground(TString indir, TString bkgname, TString outpath="."){
  
  
  TList HISTS;
  
  int nonExistentCounter=0;
  int ninputfiles=0;
  int ngood=0;
  for(Int_t i=0;i<=NMAXFILES_;i++){

    if(nonExistentCounter==NMAXNONEXISTENT_){
      break;//go to the end of the input files
    }

    TString fname=indir+"/"+bkgname+"-"+(long)i;

    struct stat st;
    if(stat((fname+".root").Data(),&st) != 0){
      if(i==0) cout<<(fname+".root")<<" Not found"<<endl;
      nonExistentCounter++; 
      continue;
    }
    ninputfiles++;   

    TFile file((fname+".root").Data(),"read");
    if(file.IsZombie()){
      cout<<(fname+".root")<<" is Zombie"<<endl;
      continue;
    }
    if(!file.GetListOfKeys()){
      cout<<(fname+".root")<<" has no Keys"<<endl;
      continue;
    }
    if(file.GetListOfKeys()->GetSize()==0){
      cout<<(fname+".root")<<" KeysSize = 0"<<endl;
      continue;            
    }
    gROOT->cd();
    
    // if(ngood==0){
    //   TList*keys=file.GetListOfKeys();
    //   for(int i=0;i<keys->GetSize();i++){
    // 	TObject*object=file.Get(keys->At(i)->GetName());
    // 	TString type=object->ClassName();
    // 	//cout<<type<<endl;

    // 	if(type.CompareTo("TH1F")!=0) continue;

    // 	TH1F*h=(TH1F*)(object);
    // 	if(!h){ cout<<"Hist not found"<<endl; }
    // 	//cout<<h->GetName()<<" "<<h->Integral()<<" "<<h->GetNbinsX()<<" "<<h->GetXaxis()->GetXmin()<<" "<<h->GetXaxis()->GetXmax()<<endl;
      
    // 	TH1F*hn=(TH1F*)(h->Clone(h->GetName()));
    // 	//cout<<hn->GetName()<<" "<<hn->Integral()<<" "<<hn->GetNbinsX()<<" "<<hn->GetXaxis()->GetXmin()<<" "<<hn->GetXaxis()->GetXmax()<<endl;
    // 	HISTS.Add(hn);
    //   }
    // }else{
      
    //   for(int i=0;i<HISTS.GetSize();i++){
    // 	TH1F*h=(TH1F*)(file.Get(HISTS.At(i)->GetName()));
    // 	if(!h){ 
    // 	  cout<<"Hist not found. "<<HISTS.At(i)->GetName()<<" "<<file.GetName()<<endl; 
    // 	  exit(0);
    // 	}
	  
    // 	((TH1F*)(HISTS.At(i)))->Add(h);

    //   }
      
    // }
    

    TList*keys=file.GetListOfKeys();
    for(int i=0;i<keys->GetSize();i++){
      TObject*object=file.Get(keys->At(i)->GetName());
      TString type=object->ClassName();
      //cout<<type<<endl;
      
      if(type.CompareTo("TH1F")!=0) continue;
      
      if(!(TString(object->GetName()).Contains("_mVH"))) continue;

      TH1F*h=(TH1F*)(object);
      
      ///Add this histo to one already in the list
      bool found=0;
      for(int i=0;i<HISTS.GetSize();i++){
	TH1F*h2=(TH1F*)(HISTS.At(i));
	if(TString(h2->GetName()).CompareTo(h->GetName())!=0) continue;
	
	h2->Add(h);
	found=1;
      }
      
      //if it was not already there create it for the first time.
      if(!found)
	HISTS.Add((TH1F*)(h->Clone(h->GetName())));

    }
    

    
    cout<<"TList:"<<HISTS.GetSize()<<endl;
    ngood++;
  }
  
  

  TFile outfile(outpath+"/"+bkgname+".root","recreate");
  
  for(int i=0;i<HISTS.GetSize();i++){
    TH1F*h2=(TH1F*)(HISTS.At(i));
    h2->Write();
  }
  outfile.Close();

  cout<<bkgname<<" : "<<ngood<<"/"<< ninputfiles<<" -> "<<outfile.GetName()<<endl;
  gROOT->ProcessLine(".q");
}
