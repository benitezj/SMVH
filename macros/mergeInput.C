#include <iostream>
#include <iomanip>
#include <sys/stat.h>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h> 
using namespace std;

void mergeInput(TString indir=".", TString outpath="."){

  std::vector<std::string> samples;
  
samples.push_back("hist-data15");
samples.push_back("hist-data16");
samples.push_back("hist-HVT");
samples.push_back("hist-ttbar");
samples.push_back("hist-WenuB_v22");
samples.push_back("hist-WenuC_v22");
samples.push_back("hist-WenuL_v22");
samples.push_back("hist-WmunuB_v22");
samples.push_back("hist-WmunuC_v22");
samples.push_back("hist-WmunuL_v22");
samples.push_back("hist-WtaunuB_v22");
samples.push_back("hist-WtaunuC_v22");
samples.push_back("hist-WtaunuL_v22");
samples.push_back("hist-ZeeB_v22");
samples.push_back("hist-ZeeC_v22");
samples.push_back("hist-ZeeL_v22");
samples.push_back("hist-ZmumuB_v22");
samples.push_back("hist-ZmumuC_v22");
samples.push_back("hist-ZmumuL_v22");
samples.push_back("hist-ZtautauB_v22");
samples.push_back("hist-ZtautauC_v22");
samples.push_back("hist-ZtautauL_v22");
samples.push_back("hist-singletop_s");
samples.push_back("hist-singletop_t");
samples.push_back("hist-singletop_Wt");
samples.push_back("hist-WW_improved");
samples.push_back("hist-WZ_improved");
samples.push_back("hist-ZZ_improved");
samples.push_back("hist-ZHll125");
samples.push_back("hist-ZHll125J_MINLO");
   

  TList HISTS;
  
  int ngood=0;
  for(Int_t i=0;i<samples.size();i++){
    cout<<"Merging "<<samples[i].c_str()<<endl;

    TString fname=indir+"/"+samples[i].c_str();

    struct stat st;
    if(stat((fname+".root").Data(),&st) != 0){
      cout<<(fname+".root")<<" Not found"<<endl;
      gROOT->ProcessLine(".q");
    }

    TFile file((fname+".root").Data(),"read");
    if(file.IsZombie()){
      cout<<(fname+".root")<<" is Zombie"<<endl;
      gROOT->ProcessLine(".q");
    }
    if(!file.GetListOfKeys()){
      cout<<(fname+".root")<<" has no Keys"<<endl;
      gROOT->ProcessLine(".q");
    }
    if(file.GetListOfKeys()->GetSize()==0){
      cout<<(fname+".root")<<" KeysSize = 0"<<endl;
      gROOT->ProcessLine(".q");
    }
    gROOT->cd();
 
    

    TList*keys=file.GetListOfKeys();
    for(int i=0;i<keys->GetSize();i++){
      TObject*object=file.Get(keys->At(i)->GetName());
      TString type=object->ClassName();
      //cout<<type<<endl;
      
      if(type.CompareTo("TH1F")!=0) continue;
      
      TH1F*h=(TH1F*)(object);
      
      ///Add this histo to one already in the list
      bool found=0;

      //If inputs have same histo name this will merge them
      //e.g. data files from different periods
      if(TString(h->GetName()).Contains("data_")){
	for(int i=0;i<HISTS.GetSize();i++){
	  TH1F*h2=(TH1F*)(HISTS.At(i));
	  if(TString(h2->GetName()).CompareTo(h->GetName())!=0) continue;
	  
	  h2->Add(h);
	  found=1;
	}
      }
      
      //if it was not already there create it for the first time.
      if(!found)
	HISTS.Add((TH1F*)(h->Clone(h->GetName())));

    }
    
    
    cout<<"TList:"<<HISTS.GetSize()<<endl;
  }
  
  
  ///////
  TFile outfile(outpath+"/input.root","recreate");
  
  for(int i=0;i<HISTS.GetSize();i++){
    TH1F*h2=(TH1F*)(HISTS.At(i));
    h2->Write();
  }
  outfile.Close();


  /////
  cout<<outfile.GetName()<<endl;
  gROOT->ProcessLine(".q");
}
