#include <TString.h>
#include <TFile.h>
#include <TH1F.h>

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <stdio.h>
#include <sstream>

///Rtrk uncertainties determined at preselection
std::vector<std::string> RtrkHistBkgs={"Zb_","Zc_","Zl_","TTbar","Diboson","STop"};
std::vector<std::string> RtrkHistRegions={"lowMH","SR","highMH"};
std::vector<std::string> RtrkSystsName;
std::vector<std::string> RtrkSystsRegion;
std::vector<std::string> RtrkSystsFunction;


void add_MODEL_Vjets(std::string filename,TFile * File=NULL, TH1F * nominal=NULL){
  if(filename.size()==0 || !File || !nominal){
    std::cout<<"add_MODEL_TTbar_Herwig bad inputs "<<std::endl; return;
  }
  
  ///Systematics from Stephen stored in the CorrsAndSysts package
  TString FileLocation="CorrsAndSysts/data/SystVJets_shape_mVH/";
  TFile SystVJets_2lep_lowMH_mVH((TString)(FileLocation+"SystVJets_2Lep_lowMH_mVH.root"), "READ");
  TFile SystVJets_2lep_SR_mVH((TString)(FileLocation+"SystVJets_2Lep_SR_mVH.root"), "READ");
  TFile SystVJets_2lep_highMH_mVH((TString)(FileLocation+"SystVJets_2Lep_highMH_mVH.root"), "READ");
  
  //Choose function based on mH region and Z+jet flavor, independent of # of tags
  TF1* Function=NULL;
  if( filename.find("_mVH")<filename.size() ){ //ratios are in m(VH) only
    if(filename.find("_lowMH_")<filename.size() ) { 
      if( filename.find("Zl_")<filename.size() ) 
	Function = (TF1*)SystVJets_2lep_lowMH_mVH.Get( "Zl_llJ_0ptag_0paddtag_lowMH_mVH_logx_1-Order_PolyFit");
      if(filename.find("Zc_")<filename.size() )
	Function = (TF1*)SystVJets_2lep_lowMH_mVH.Get( "Zc_llJ_0ptag_0paddtag_lowMH_mVH_logx_1-Order_PolyFit");
      if(filename.find("Zb_")<filename.size())
	Function = (TF1*)SystVJets_2lep_lowMH_mVH.Get( "Zb_llJ_0ptag_0paddtag_lowMH_mVH_logx_1-Order_PolyFit");
    }
    if(filename.find("_SR_")<filename.size() ) { 
      if( filename.find("Zl_")<filename.size() ) 
	Function = (TF1*)SystVJets_2lep_SR_mVH.Get( "Zl_llJ_0ptag_0paddtag_SR_mVH_logx_1-Order_PolyFit");
      if(filename.find("Zc_")<filename.size() )
	Function = (TF1*)SystVJets_2lep_SR_mVH.Get( "Zc_llJ_0ptag_0paddtag_SR_mVH_logx_1-Order_PolyFit");
      if(filename.find("Zb_")<filename.size())
	Function = (TF1*)SystVJets_2lep_SR_mVH.Get( "Zb_llJ_0ptag_0paddtag_SR_mVH_logx_1-Order_PolyFit");
    }
    if(filename.find("_highMH_")<filename.size() ) { 
      if( filename.find("Zl_")<filename.size() ) 
	Function = (TF1*)SystVJets_2lep_highMH_mVH.Get( "Zl_llJ_0ptag_0paddtag_highMH_mVH_logx_1-Order_PolyFit");
      if(filename.find("Zc_")<filename.size() )
	Function = (TF1*)SystVJets_2lep_highMH_mVH.Get( "Zc_llJ_0ptag_0paddtag_highMH_mVH_logx_1-Order_PolyFit");
      if(filename.find("Zb_")<filename.size())
	Function = (TF1*)SystVJets_2lep_highMH_mVH.Get( "Zb_llJ_0ptag_0paddtag_highMH_mVH_logx_1-Order_PolyFit");
    }
  }
  
  //Write the variation
  TH1F * nominal_Up = (TH1F*)nominal->Clone("MODEL_Vjets_MadGraph__1up"); 
  if(Function){
    nominal_Up->Multiply(Function);
    cout<<"add_MODEL_Vjets applied to : "<< filename.c_str()<<" with: "<<Function->GetName()<<endl;
  }
  File->cd();
  nominal_Up->Write();
  delete nominal_Up;
}
     

void add_MODEL_TTbar_Herwig(std::string filename,TFile * File=NULL, TH1F * nominal=NULL){
  if(filename.size()==0 || !File || !nominal){
    std::cout<<"add_MODEL_TTbar_Herwig bad inputs "<<std::endl; return;
  }

  TString FileLocation="CorrsAndSysts/data/SystTTBar_shape_mVH/";
  TFile SystTTbar_2lep((TString)(FileLocation+"fit_VH_res_2lep.root"),"READ");
  
  TF1* Function=NULL;
  if(filename.find("TTbar_")<filename.size()   &&  filename.find("_mVH")<filename.size() ) {
    if( filename.find("_SR_")<filename.size() ){
      if(filename.find("_0tag_")<filename.size())
	Function = (TF1*)SystTTbar_2lep.Get("Powheg+Pythia6_Powheg+Herwig++_0tag_0addtag_SR");
      if(filename.find("_1tag_")<filename.size())
	Function = (TF1*)SystTTbar_2lep.Get("Powheg+Pythia6_Powheg+Herwig++_1tag_0addtag_SR");
      if(filename.find("_2tag_")<filename.size())
	Function = (TF1*)SystTTbar_2lep.Get("Powheg+Pythia6_Powheg+Herwig++_2tag_0addtag_SR");
    }
    if (filename.find("_emu_")<filename.size()  ){
      if(filename.find("_0tag_")<filename.size())
	Function = (TF1*)SystTTbar_2lep.Get("Powheg+Pythia6_Powheg+Herwig++_0tag_topemu_SR");
      if(filename.find("_1tag_")<filename.size())
	Function = (TF1*)SystTTbar_2lep.Get("Powheg+Pythia6_Powheg+Herwig++_1tag_topemu_SR");
      if(filename.find("_2tag_")<filename.size())
	Function = (TF1*)SystTTbar_2lep.Get("Powheg+Pythia6_Powheg+Herwig++_2tag_topemu_SR");
    }
  }
  
  //Write the variation
  TH1F * nominal_Up = (TH1F*)nominal->Clone("MODEL_TTbar_Herwig__1up"); 
  if(Function){
    nominal_Up->Multiply(Function);
    cout<<"add_MODEL_TTbar_Herwig applied to : "<< filename.c_str()<<" with: "<<Function->GetName()<<endl;
  }
  File->cd();
  nominal_Up->Write();
  delete nominal_Up;
}


void add_MODEL_TTbar_aMcAtNlo(std::string filename,TFile * File=NULL, TH1F * nominal=NULL){
  if(filename.size()==0 || !File || !nominal){
    std::cout<<"add_MODEL_TTbar_Herwig bad inputs "<<std::endl; return;
  }

  TString FileLocation="CorrsAndSysts/data/SystTTBar_shape_mVH/";
  TFile SystTTbar_2lep((TString)(FileLocation+"fit_VH_res_2lep.root"),"READ");
  TF1* Function=NULL;
  if(filename.find("TTbar_")<filename.size()   &&  filename.find("_mVH")<filename.size() ) {
    if( filename.find("_SR_")<filename.size() ){
      if(filename.find("_0tag_")<filename.size())
	Function = (TF1*)SystTTbar_2lep.Get("aMCAtNLO+Herwig++_Powheg+Herwig++_0tag_0addtag_SR");
      if(filename.find("_1tag_")<filename.size())
	Function = (TF1*)SystTTbar_2lep.Get("aMCAtNLO+Herwig++_Powheg+Herwig++_1tag_0addtag_SR");
      if(filename.find("_2tag_")<filename.size())
	Function = (TF1*)SystTTbar_2lep.Get("aMCAtNLO+Herwig++_Powheg+Herwig++_2tag_0addtag_SR");
    }
    if (filename.find("_emu_")<filename.size()  ){
      if(filename.find("_0tag_")<filename.size())
	Function = (TF1*)SystTTbar_2lep.Get("aMCAtNLO+Herwig++_Powheg+Herwig++_0tag_topemu_SR");
      if(filename.find("_1tag_")<filename.size())
	Function = (TF1*)SystTTbar_2lep.Get("aMCAtNLO+Herwig++_Powheg+Herwig++_1tag_topemu_SR");
      if(filename.find("_2tag_")<filename.size())
	Function = (TF1*)SystTTbar_2lep.Get("aMCAtNLO+Herwig++_Powheg+Herwig++_2tag_topemu_SR");
    }
  }

  //Write the variation
  TH1F * nominal_Up = (TH1F*)nominal->Clone("MODEL_TTbar_aMcAtNlo__1up"); 
  if(Function){
    nominal_Up->Multiply(Function);
    cout<<"add_MODEL_TTbar_aMcAtNlo applied to : "<< filename.c_str()<<" with: "<<Function->GetName()<<endl;
  }
  File->cd();
  nominal_Up->Write();
  delete nominal_Up;
}


void add_MODEL_TTbar_rad(std::string filename,TFile * File=NULL, TH1F * nominal=NULL){
  if(filename.size()==0 || !File || !nominal){
    std::cout<<"add_MODEL_TTbar_Herwig bad inputs "<<std::endl; return;
  }
  
  TString FileLocation="CorrsAndSysts/data/SystTTBar_shape_mVH/";
  TFile SystTTbar_2lep((TString)(FileLocation+"fit_VH_res_2lep.root"),"READ");
  TF1* Function=NULL;
  if(filename.find("TTbar_")<filename.size()   &&  filename.find("_mVH")<filename.size() ) {
    if( filename.find("_SR_")<filename.size() ){
      if(filename.find("_0tag_")<filename.size())
	Function = (TF1*)SystTTbar_2lep.Get("RadHi_RadLo_0tag_0addtag_SR");
      if(filename.find("_1tag_")<filename.size())
	Function = (TF1*)SystTTbar_2lep.Get("RadHi_RadLo_1tag_0addtag_SR");
      if(filename.find("_2tag_")<filename.size())
	Function = (TF1*)SystTTbar_2lep.Get("RadHi_RadLo_2tag_0addtag_SR");
    }
    if (filename.find("_emu_")<filename.size()  ){
      if(filename.find("_0tag_")<filename.size())
	Function = (TF1*)SystTTbar_2lep.Get("RadHi_RadLo_0tag_topemu_SR");
      if(filename.find("_1tag_")<filename.size())
	Function = (TF1*)SystTTbar_2lep.Get("RadHi_RadLo_1tag_topemu_SR");
      if(filename.find("_2tag_")<filename.size())
	Function = (TF1*)SystTTbar_2lep.Get("RadHi_RadLo_2tag_topemu_SR");
    }
  }
 

  //Write the variation
  TH1F * nominal_Up = (TH1F*)nominal->Clone("MODEL_TTbar_rad__1up"); 
  TH1F * nominal_Down = (TH1F*)nominal->Clone("MODEL_TTbar_rad__1down"); 
  if(Function){
    TH1F * w_Up = (TH1F*)nominal->Clone("w_Up"); 
    TH1F * w_Down = (TH1F*)nominal->Clone("w_Down");
    for(int b=1;b<=nominal->GetNbinsX();b++){
      float r=Function->Eval(nominal->GetBinCenter(b));
      //following weights assume the Function is the Ratio of radHi/radLo and that these variations are symmertric w.r.t the nominal
      w_Up->SetBinContent(b,1. + (r-1.)/(r+1.));
      w_Down->SetBinContent(b,1. - (r-1.)/(r+1.));
    }
    nominal_Up->Multiply(w_Up);
    nominal_Down->Multiply(w_Down);
    cout<<"add_MODEL_TTbar_rad applied to : "<< filename.c_str()<<" with: "<<Function->GetName()<<endl;
  }
  File->cd();
  nominal_Up->Write();
  nominal_Down->Write();
  delete nominal_Up;
  delete nominal_Down;
}


TF1* getRtrkFunction(TString systematic, TString bkg, TString region,TH1F*H){
  //note this function returns ownership
  if(!H)return NULL;
  for(int i=0; i < RtrkSystsName.size(); i++){
    if(RtrkSystsName[i].find(systematic.Data())<RtrkSystsName[i].size()
       && RtrkSystsRegion[i].find(bkg.Data())<RtrkSystsRegion[i].size()
       && RtrkSystsRegion[i].find(region.Data())<RtrkSystsRegion[i].size()
       )
      //return new TF1(systematic.Data(),RtrkSystsFunction[i].c_str(),H->GetXaxis()->GetXmin(),H->GetXaxis()->GetXmax());
      ////this is a hack because the rTrk systematics in the CxAODs were set as variation^2, but the difference in the distributions shown by Takuya is ~-50%
      return new TF1(systematic.Data(),TString("0.5*(")+RtrkSystsFunction[i].c_str()+"-1.0)+1.0",H->GetXaxis()->GetXmin(),H->GetXaxis()->GetXmax());
  }
  return NULL;
}

void add_JET_Rtrk_Baseline(std::string filename,TFile * File=NULL, TH1F * nominal=NULL){
  if(filename.size()==0 || !File || !nominal){
    std::cout<<"add_JET_Rtrk_Baseline bad inputs "<<std::endl; return;
  }
  //ratios are split by : Zb,Zc,Zl : lowMH,SR,highMH :  
  //ratios are in mVH, only apply to 1 and 2 tag regions
  TF1* F_1up=NULL;
  TF1* F_1down=NULL;
  if(filename.find("_mVH")<filename.size() 
     && ( filename.find("1tag")<filename.size() || filename.find("2tag")<filename.size() ) ) { 
    
    for(std::vector<string>::iterator Bkg = RtrkHistBkgs.begin(); Bkg != RtrkHistBkgs.end(); Bkg++)
      for(std::vector<string>::iterator Reg = RtrkHistRegions.begin(); Reg != RtrkHistRegions.end(); Reg++)
	if( filename.find((*Bkg).c_str())<filename.size() && filename.find((*Reg).c_str())<filename.size() ){
	  F_1up=getRtrkFunction("JET_Rtrk_Baseline__1up",(*Bkg).c_str(),(*Reg).c_str(),nominal);
	  F_1down=getRtrkFunction("JET_Rtrk_Baseline__1down",(*Bkg).c_str(),(*Reg).c_str(),nominal);
	}

  }


  //Write the variation
  if(F_1up && F_1down){
    //if a fuction is available replace the systematic already in the file
    TH1F * nominal_Up = (TH1F*)nominal->Clone("JET_Rtrk_Baseline__1up"); 
    TH1F * nominal_Down = (TH1F*)nominal->Clone("JET_Rtrk_Baseline__1down"); 
    nominal_Up->Multiply(F_1up);
    nominal_Down->Multiply(F_1down);    
    File->cd();
    gDirectory->Delete("JET_Rtrk_Baseline__1up;1"); 
    gDirectory->Delete("JET_Rtrk_Baseline__1down;1"); 
    nominal_Up->Write();
    nominal_Down->Write();
    delete nominal_Up;
    delete nominal_Down;
    delete F_1up;
    delete F_1down;
    cout<<"add_JET_Rtrk_Baseline applied to : "<< filename.c_str()<<endl;
  }

}


void add_JET_Rtrk_Modelling(std::string filename,TFile * File=NULL, TH1F * nominal=NULL){
  if(filename.size()==0 || !File || !nominal){
    std::cout<<"add_JET_Rtrk_Modelling bad inputs "<<std::endl; return;
  }
  //ratios are split by : Zb,Zc,Zl : lowMH,SR,highMH :  
  //ratios are in mVH, only apply to 1 and 2 tag regions
  TF1* F_1up=NULL;
  TF1* F_1down=NULL;
  if(filename.find("_mVH")<filename.size() 
     && ( filename.find("1tag")<filename.size() || filename.find("2tag")<filename.size() ) ) { 
    
    for(std::vector<string>::iterator Bkg = RtrkHistBkgs.begin(); Bkg != RtrkHistBkgs.end(); Bkg++)
      for(std::vector<string>::iterator Reg = RtrkHistRegions.begin(); Reg != RtrkHistRegions.end(); Reg++)
	if( filename.find((*Bkg).c_str())<filename.size() && filename.find((*Reg).c_str())<filename.size() ){
	  F_1up=getRtrkFunction("JET_Rtrk_Modelling__1up",(*Bkg).c_str(),(*Reg).c_str(),nominal);
	  F_1down=getRtrkFunction("JET_Rtrk_Modelling__1down",(*Bkg).c_str(),(*Reg).c_str(),nominal);
	}

  }


  //Write the variation
  if(F_1up && F_1down){
    //if a fuction is available replace the systematic already in the file
    TH1F * nominal_Up = (TH1F*)nominal->Clone("JET_Rtrk_Modelling__1up"); 
    TH1F * nominal_Down = (TH1F*)nominal->Clone("JET_Rtrk_Modelling__1down"); 
    nominal_Up->Multiply(F_1up);
    nominal_Down->Multiply(F_1down);
    File->cd();
    gDirectory->Delete("JET_Rtrk_Modelling__1up;1"); 
    gDirectory->Delete("JET_Rtrk_Modelling__1down;1"); 
    nominal_Up->Write();
    nominal_Down->Write();
    delete nominal_Up;
    delete nominal_Down;
    delete F_1up;
    delete F_1down;
    cout<<"add_JET_Rtrk_Modelling applied to : "<< filename.c_str()<<endl;
  }

}



void add_JET_Rtrk_Tracking(std::string filename,TFile * File=NULL, TH1F * nominal=NULL){
  if(filename.size()==0 || !File || !nominal){
    std::cout<<"add_JET_Rtrk_Tracking bad inputs "<<std::endl; return;
  }
  //ratios are split by : Zb,Zc,Zl : lowMH,SR,highMH :  
  //ratios are in mVH, only apply to 1 and 2 tag regions
  TF1* F_1up=NULL;
  TF1* F_1down=NULL;
  if(filename.find("_mVH")<filename.size() 
     && ( filename.find("1tag")<filename.size() || filename.find("2tag")<filename.size() ) ) { 
    
    for(std::vector<string>::iterator Bkg = RtrkHistBkgs.begin(); Bkg != RtrkHistBkgs.end(); Bkg++)
      for(std::vector<string>::iterator Reg = RtrkHistRegions.begin(); Reg != RtrkHistRegions.end(); Reg++)
	if( filename.find((*Bkg).c_str())<filename.size() && filename.find((*Reg).c_str())<filename.size() ){
	  F_1up=getRtrkFunction("JET_Rtrk_Tracking__1up",(*Bkg).c_str(),(*Reg).c_str(),nominal);
	  F_1down=getRtrkFunction("JET_Rtrk_Tracking__1down",(*Bkg).c_str(),(*Reg).c_str(),nominal);
	}
  }


  //Write the variation
  if(F_1up && F_1down){
    //if a fuction is available replace the systematic already in the file
    TH1F * nominal_Up = (TH1F*)nominal->Clone("JET_Rtrk_Tracking__1up"); 
    TH1F * nominal_Down = (TH1F*)nominal->Clone("JET_Rtrk_Tracking__1down"); 
    nominal_Up->Multiply(F_1up);
    nominal_Down->Multiply(F_1down);
    File->cd();
    gDirectory->Delete("JET_Rtrk_Tracking__1up;1"); 
    gDirectory->Delete("JET_Rtrk_Tracking__1down;1"); 
    nominal_Up->Write();
    nominal_Down->Write();
    delete nominal_Up;
    delete nominal_Down;
    delete F_1up;
    delete F_1down;
    cout<<"add_JET_Rtrk_Tracking applied to : "<< filename.c_str()<<endl;
  }

}


void dataCardOct7_addSysts(TString INDIR ){
  
  TString match=".root";
  //TString match="Zl_ZHmmJ_presel_0addtag_SR_mVH.root";
  //TString match="TTbar_ZHmmJ_0tag_0addtag_SR_mVH.root";
  //TString match="TTbar_ZHmmJ_1tag_0addtag_SR_mVH.root";



  ////Need to load the Rtrk systematics
  std::ifstream infile("SMVH/limits/Rtrk_Systematics.txt");
  std::string line;
  while (std::getline(infile, line)){
    std::istringstream iss(line);
    std::string region;
    std::string syst;
    std::string function;
    iss >> region;
    iss >> syst;
    iss >> function;
    RtrkSystsName.push_back(syst);
    RtrkSystsRegion.push_back(region);
    RtrkSystsFunction.push_back(function);
    //cout<<region<<" "<<syst<<" "<<function<<endl;
  }

  //Get the list of files in the input
  std::vector<std::string> list = findSamplesInDir(INDIR.Data(),match.Data());
  if(list.size()<=0){
    std::cout<<"No root files found in "<<INDIR<<std::endl;
    gROOT->ProcessLine(".q");
  }
  
  //Loop over the files, skip data
  for( std::vector<string>::iterator it = list.begin() ; it != list.end(); it++){
    TString outfile=INDIR+"/"+(*it).c_str();
    
    if((*it).find("data_")<(*it).size()){
      //for data do nothing
    }else {

      //std::cout<<"dataCardOct7_addSysts: "<<outfile<<std::endl;
      
      //Open the MC file to update
      TFile File(outfile,"UPDATE");
      if(File.IsZombie()){
	std::cout<<INDIR<<" "<<outfile<<" isZombie "<<std::endl; 
	gROOT->ProcessLine(".q");
      }
      gROOT->cd();
      
      //Get the Nominal Histogram
      TH1F * nominal = (TH1F*)File.Get("nominal");
      if(!nominal){
	std::cout<<INDIR<<" "<<outfile<<" nominal = NULL"<<std::endl; 
	gROOT->ProcessLine(".q");
      }
 
      // //modify nominal and write variations
      add_MODEL_Vjets((*it).c_str(),&File,nominal);
      add_MODEL_TTbar_Herwig((*it).c_str(),&File,nominal);
      add_MODEL_TTbar_aMcAtNlo((*it).c_str(),&File,nominal);
      add_MODEL_TTbar_rad((*it).c_str(),&File,nominal);
      
      /////replacement of Rtrk variations:
      add_JET_Rtrk_Baseline((*it).c_str(),&File,nominal);
      add_JET_Rtrk_Modelling((*it).c_str(),&File,nominal);
      add_JET_Rtrk_Tracking((*it).c_str(),&File,nominal);

      File.Close();
    }

  }


  gROOT->ProcessLine(".q");
}

