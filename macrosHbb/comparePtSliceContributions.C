#include "../plots/plotterGlobals.h"
#include "../plots/plottingTools.C"

void comparePtSliceContributions(TString bkg="Zbb", TString region="2tag2jet_150ptv_SR_mva"){
  gROOT->ProcessLine(".x ./SMVH/plots/rootlogon.C");

  std::vector<std::string> SliceName;
  std::map<std::string,std::vector<std::string>* > SliceFiles;
  std::map<std::string,float> SliceIntegral;
  std::map<std::string,TH1F*> SliceHisto;

  std::vector<std::string> SliceName_files;
  std::vector<std::string> SlicePath_files;

  if(bkg.CompareTo("Zbb")==0){
    SliceName_files.push_back("PtSlice_ZnunuB.txt");//this files contain mapping between root files and pt Slices
    SliceName_files.push_back("PtSlice_ZnunuL.txt");
    SlicePath_files.push_back("File_ZnunuB.txt");
    SlicePath_files.push_back("File_ZnunuL.txt");
  }

  if(bkg.CompareTo("Wbb")==0){
    ///munu+enu
    SliceName_files.push_back("PtSlice_WmunuB.txt");
    SliceName_files.push_back("PtSlice_WmunuL.txt");
    SliceName_files.push_back("PtSlice_WenuB.txt");
    SliceName_files.push_back("PtSlice_WenuL.txt");
    SlicePath_files.push_back("File_WmunuB.txt");
    SlicePath_files.push_back("File_WmunuL.txt");
    SlicePath_files.push_back("File_WenuB.txt");
    SlicePath_files.push_back("File_WenuL.txt");

    // ////taunu
    // SliceName_files.push_back("PtSlice_WtaunuB.txt");
    // SliceName_files.push_back("PtSlice_WtaunuL.txt");
    // SlicePath_files.push_back("File_WtaunuB.txt");
    // SlicePath_files.push_back("File_WtaunuL.txt");
  }


  for( std::vector<std::string>::iterator f=SliceName_files.begin();f!=SliceName_files.end();f++){
    
    std::ifstream infile1((*f).c_str());
    std::string line1;
    while (std::getline(infile1, line1)){
      std::istringstream iss1(line1);
      TString slice;
      iss1>>slice;
      
      /////check if the slice is already there
      bool loaded=0;
      for( std::vector<std::string>::iterator it=SliceName.begin();it!=SliceName.end();it++){
	if((*it).compare(slice.Data())==0) loaded=1;
      }
      
      /////
      if(!loaded){
	SliceName.push_back(slice.Data());
	//cout<<"Loaded Slice: "<< slice<<endl;
      }
    }
    
  }
  cout<<"Nslices="<<SliceName.size()<<endl;

  //define map slices
  for( std::vector<std::string>::iterator it=SliceName.begin();it!=SliceName.end();it++){
    SliceFiles[(*it).c_str()]=new std::vector<std::string>();
    SliceIntegral[(*it).c_str()]=0.;
    SliceHisto[(*it).c_str()]=NULL;
  }

  //return;

  ///////Load full map
  int fctr=0;
  for( std::vector<std::string>::iterator f=SliceName_files.begin();f!=SliceName_files.end();f++){
    std::ifstream infile1((*f).c_str());
    std::string line1;

    std::ifstream infile2(SlicePath_files[fctr].c_str());
    std::string line2;

    while (std::getline(infile1, line1)){
      std::istringstream iss1(line1);
      TString slice;
      iss1>>slice;

      std::getline(infile2,line2);
      std::istringstream iss2(line2);
      TString path;
      iss2>>path;

      SliceFiles[slice.Data()]->push_back(path.Data());
      //cout<<"Loaded path: "<<slice<<" : "<<path<<endl;
    }

    fctr++;
  }

  for( std::vector<std::string>::iterator it=SliceName.begin();it!=SliceName.end();it++){
    for( std::vector<std::string>::iterator f=SliceFiles[(*it).c_str()]->begin();
    	 f!=SliceFiles[(*it).c_str()]->end();
    	 f++){
      //cout<<" "<<(*f).c_str()<<endl;
      TFile F((*f).c_str(),"read");
      if(F.IsZombie()){
	cout<<(*f).c_str()<<" not found"<<endl;
	continue;
      }
      gROOT->cd();
      TH1F* h=(TH1F*)F.Get(bkg+"_"+region); //"_2tag2jet_150ptv_SR_mva");
      if(!h){
	//cout<<(*f).c_str()<<" no Zbb"<<endl;
	continue;
      }
      
      if(SliceHisto[(*it).c_str()]==NULL)
	SliceHisto[(*it).c_str()] = (TH1F*)(h->Rebin(500,(*it).c_str()));
      else SliceHisto[(*it).c_str()]->Add((TH1F*)(h->Rebin(500,(*it).c_str())));
      
      //SliceIntegral[(*it).c_str()] += h->GetBinContent(2);

    }
  }


  for( std::vector<std::string>::iterator it=SliceName.begin();it!=SliceName.end();it++){

    //if(SliceIntegral[(*it).c_str()]>0)
    //cout<<  SliceIntegral[(*it).c_str()] <<"   "<<(*it).c_str()<<"("<<SliceFiles[(*it).c_str()]->size()<<")"<<endl;

    if(SliceHisto[(*it).c_str()]!=NULL)
      printf("%.2f +\\- %.2f : %s\n",SliceHisto[(*it).c_str()]->GetBinContent(2),SliceHisto[(*it).c_str()]->GetBinError(2),(*it).c_str());
  }

}
