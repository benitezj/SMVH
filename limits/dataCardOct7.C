#include <TString.h>
#include <TFile.h>
#include <TH1F.h>
#include <TDirectory.h>

#include "../plots/plotterGlobals.h"
#include "../reader/ZHmmJPlotter.C"
#include "../reader/ZHeeJPlotter.C"
#include "../reader/ZHemJPlotter.C"
#include "../plots/configZHllJ_13TeV.C"

#define NBKG 7


void fix0Bins(TH1* H){
  if(!H){
    cout<<"fix0Bins: H is NULL"<<endl; return;
  }

  for(int b=1;b<=H->GetNbinsX();b++)
    if(H->GetBinContent(b)<0.) 
      H->SetBinContent(b,0.);
}


TH1F * convertTH1DtoTH1F(TH1D*hD){
  if(hD==0){cout<<"NULL histo given to convertTH1DtoTH1F"<<endl; exit(0);}
  TH1F * hF=new TH1F();
  hD->Copy(*hF);
  delete hD;
  return hF;
}


void writeBackground( Plotter * analysis, TString sampleName, TFile * output, TString histName,TH1*MC=NULL){
  if(!analysis || !output ) exit(0);
  TH1F* hBkg=convertTH1DtoTH1F(analysis->getBackground(sampleName));
  //fix0Bins(hBkg); 
  output->cd();
  hBkg->SetName(histName.Data());
  hBkg->Write();
  gROOT->cd();
  if(MC)MC->Add(hBkg);
  delete hBkg;
}

void writeSignal( Plotter * analysis, TString sampleName, TFile * output, TString histName ){
  if(!analysis || !output ) exit(0);

  TH1D* sig = analysis->getSample(sampleName);
  float XS=0.;
  if(!sig){
    //for emu channel need to provide empty histograms
    sig=analysis->getPlotHisto(sampleName);
    XS=1.;
  }else {
    XS=analysis->findSample(sampleName)->getCrossection();
  }
  TH1F* SIG =convertTH1DtoTH1F(sig);
  //fix0Bins(SIG); 
      
  if(XS<=0.){cout<<"sample has bad crossection: "<<XS<<" : "<<sampleName<<endl; exit(0); }
  SIG->Scale(1./XS); //write signals normalized to 1 pb

  output->cd();
  SIG->SetName(histName.Data());
  SIG->Write();
  gROOT->cd();
  delete SIG;

}


void dataCardOct7(TString channel, TString PRODTAG, TString category, TString Variable, bool blind, bool addsysts){

  TString inpath=inputDir_+"/"+channel+"/"+PRODTAG;
  
  TString DIRECTORY=TString("./LimitInputs_ZHllJ_")+PRODTAG+"_"+Variable;

  std::map<std::string,std::string> catName;
  catName["presel"]="presel";
  catName["preselhmassL"]="presel";
  catName["preselhmassH"]="presel";
  catName["0btag"]="0tag";
  catName["0btaghmassL"]="0tag";
  catName["0btaghmassH"]="0tag";
  catName["1btag"]="1tag";
  catName["1btaghmassL"]="1tag";
  catName["1btaghmassH"]="1tag";
  catName["2btag"]="2tag";
  catName["2btaghmassL"]="2tag";
  catName["2btaghmassH"]="2tag";

  std::map<std::string,std::string> regName;
  regName["presel"]="SR";
  regName["preselhmassL"]="lowMH";
  regName["preselhmassH"]="highMH";
  regName["0btag"]="SR";
  regName["0btaghmassL"]="lowMH";
  regName["0btaghmassH"]="highMH";
  regName["1btag"]="SR";
  regName["1btaghmassL"]="lowMH";
  regName["1btaghmassH"]="highMH";
  regName["2btag"]="SR";
  regName["2btaghmassL"]="lowMH";
  regName["2btaghmassH"]="highMH";

  std::map<std::string,std::string> addName;
  addName["presel"]="0addtag";
  addName["preselhmassL"]="0addtag";
  addName["preselhmassH"]="0addtag";
  addName["0btag"]="0addtag";
  addName["0btaghmassL"]="0addtag";
  addName["0btaghmassH"]="0addtag";
  addName["1btag"]="0addtag";
  addName["1btaghmassL"]="0addtag";
  addName["1btaghmassH"]="0addtag";
  addName["2btag"]="0addtag";
  addName["2btaghmassL"]="0addtag";
  addName["2btaghmassH"]="0addtag";


  //Backgrounds
  TString BKG[NBKG];
  BKG[0]="Zl";
  BKG[1]="Zc";
  BKG[2]="Zb";
  BKG[3]="TTbar";
  BKG[4]="STop";
  BKG[5]="Diboson";
  BKG[6]="SMZh";
  //backgrounds don't need mapping


  //
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

  if(!(configZHllJ_13TeV(analysis,channel,inpath))){
    cout<<"Failed to configure."<<endl; 
    exit(0);
  }
  if(!analysis->scaleSamplesLumi()){ 
    cout<<"Failed scaling the MC samles."<<endl; 
    exit(0);
  }


  ///Weight variations
  TString NominalWeight=analysis->eventWeight_;
  std::vector<std::pair<std::string,std::string> > weightSysts;
  weightSysts.push_back(std::pair<std::string,std::string>("eve_trig_w","EL_EFF_Trigger_TotalCorrUncertainty__1up"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_trig_w","EL_EFF_Trigger_TotalCorrUncertainty__1down"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_trig_w","MUON_EFF_TrigSystUncertainty__1up"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_trig_w","MUON_EFF_TrigSystUncertainty__1down"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_trig_w","MUON_EFF_TrigStatUncertainty__1up"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_trig_w","MUON_EFF_TrigStatUncertainty__1down"));
  weightSysts.push_back(std::pair<std::string,std::string>("ele_reco_w","EL_EFF_Reco_TotalCorrUncertainty__1up"));
  weightSysts.push_back(std::pair<std::string,std::string>("ele_reco_w","EL_EFF_Reco_TotalCorrUncertainty__1down"));
  weightSysts.push_back(std::pair<std::string,std::string>("ele_id_w","EL_EFF_ID_TotalCorrUncertainty__1up"));
  weightSysts.push_back(std::pair<std::string,std::string>("ele_id_w","EL_EFF_ID_TotalCorrUncertainty__1down"));
  weightSysts.push_back(std::pair<std::string,std::string>("ele_iso_w","EL_EFF_Iso_TotalCorrUncertainty__1up"));
  weightSysts.push_back(std::pair<std::string,std::string>("ele_iso_w","EL_EFF_Iso_TotalCorrUncertainty__1down"));
  weightSysts.push_back(std::pair<std::string,std::string>("muo_ttv_w","MUON_TTVA_STAT__1up"));
  weightSysts.push_back(std::pair<std::string,std::string>("muo_ttv_w","MUON_TTVA_STAT__1down"));
  weightSysts.push_back(std::pair<std::string,std::string>("muo_ttv_w","MUON_TTVA_SYS__1up"));
  weightSysts.push_back(std::pair<std::string,std::string>("muo_ttv_w","MUON_TTVA_SYS__1down"));
  weightSysts.push_back(std::pair<std::string,std::string>("muo_id_w","MUON_EFF_STAT__1up"));
  weightSysts.push_back(std::pair<std::string,std::string>("muo_id_w","MUON_EFF_STAT__1down"));
  weightSysts.push_back(std::pair<std::string,std::string>("muo_id_w","MUON_EFF_SYS__1up"));
  weightSysts.push_back(std::pair<std::string,std::string>("muo_id_w","MUON_EFF_SYS__1down"));
  weightSysts.push_back(std::pair<std::string,std::string>("muo_iso_w","MUON_ISO_STAT__1up"));
  weightSysts.push_back(std::pair<std::string,std::string>("muo_iso_w","MUON_ISO_STAT__1down"));
  weightSysts.push_back(std::pair<std::string,std::string>("muo_iso_w","MUON_ISO_SYS__1up"));
  weightSysts.push_back(std::pair<std::string,std::string>("muo_iso_w","MUON_ISO_SYS__1down"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_Eigen_B_0__1down"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_Eigen_B_0__1up"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_Eigen_B_1__1down"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_Eigen_B_1__1up"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_Eigen_B_2__1down"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_Eigen_B_2__1up"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_Eigen_C_0__1down"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_Eigen_C_0__1up"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_Eigen_C_1__1down"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_Eigen_C_1__1up"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_Eigen_C_2__1down"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_Eigen_C_2__1up"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_Eigen_C_3__1down"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_Eigen_C_3__1up"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_Eigen_Light_0__1down"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_Eigen_Light_0__1up"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_Eigen_Light_1__1down"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_Eigen_Light_1__1up"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_Eigen_Light_2__1down"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_Eigen_Light_2__1up"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_Eigen_Light_3__1down"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_Eigen_Light_3__1up"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_Eigen_Light_4__1down"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_Eigen_Light_4__1up"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_extrapolation_from_charm__1down"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_extrapolation_from_charm__1up"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_extrapolation__1down"));
  weightSysts.push_back(std::pair<std::string,std::string>("eve_btag_w","FT_EFF_extrapolation__1up"));


  ///////////////////////////
  //Set the variable and  binning
  //////////////////////
  if(Variable.CompareTo("mVH")==0)  analysis->setBinning("vh_m[vh]/1000",100,0,5000);
  else if(Variable.CompareTo("mJet")==0) analysis->setBinning("fatjet_m_cor[vh_h[vh]]/1000",100,0,500); 
  else if(Variable.CompareTo("pTJet")==0)analysis->setBinning("fatjet_pt[vh_h[vh]]/1000",200,0,2000);
  else if(Variable.CompareTo("MET")==0)  analysis->setBinning("met_pt/1000",100,0,1000);
  else if(Variable.CompareTo("pTV")==0){
    if(channel.CompareTo("ZHmmJ")==0) analysis->setBinning("mm_pt[vh_v[vh]]/1000",200,0,2000); 
    if(channel.CompareTo("ZHeeJ")==0) analysis->setBinning("ee_pt[vh_v[vh]]/1000",200,0,2000); 
    if(channel.CompareTo("ZHemJ")==0) analysis->setBinning("em_pt[vh_v[vh]]/1000",200,0,2000); 
  }
  else if(Variable.CompareTo("mV")==0){
    if(channel.CompareTo("ZHmmJ")==0) analysis->setBinning("mm_m[vh_v[vh]]/1000",100,0,500); 
    if(channel.CompareTo("ZHeeJ")==0) analysis->setBinning("ee_m[vh_v[vh]]/1000",100,0,500); 
    if(channel.CompareTo("ZHemJ")==0) analysis->setBinning("em_m[vh_v[vh]]/1000",100,0,500); 
  }
  else if(Variable.CompareTo("pTL1")==0){
    if(channel.CompareTo("ZHmmJ")==0) analysis->setBinning("muo_pt[mm_leg1[vh_v[vh]]]/1000",100,0,1000); 
    if(channel.CompareTo("ZHeeJ")==0) analysis->setBinning("ele_pt[ee_leg1[vh_v[vh]]]/1000",100,0,1000); 
    if(channel.CompareTo("ZHemJ")==0) analysis->setBinning("ele_pt[em_leg1[vh_v[vh]]]/1000",100,0,1000); //leg1 is not always leading
  }
  else {cout<<"Wrong Variable "<<Variable<<endl; return 0;}

  //Set the selection
  TString Selection=getSelection(channel,category);
  if(blind) Selection=Selection+"*"+vhmassBlindSel;//should be applied to both Data and MC
  analysis->setSelection(Selection);

  ///Data
  analysis->setCurrSyst("");
  analysis->eventWeight_=NominalWeight;
  TH1F* data = convertTH1DtoTH1F(analysis->getTotalData());

  ///Write total background
  TH1F* HMC=(TH1F*)data->Clone();
  HMC->Scale(0.);
  
  //Determine output file name
  TString FileName=channel+"_"+catName[category.Data()]+"_"+addName[category.Data()]+"_"+regName[category.Data()]+"_"+Variable.Data();

  /////Write backgrounds
  for(long bkg=0; bkg<NBKG; bkg++){
    //if(bkg!=6) continue;
    TFile output(DIRECTORY+"/"+BKG[bkg]+"_"+FileName+".root","UPDATE");
    gROOT->cd();
      
    ////////////Nominal
    analysis->setCurrSyst("");
    analysis->eventWeight_=NominalWeight;
    writeBackground(analysis,BKG[bkg],&output,"nominal",HMC);


    if(addsysts){
      //////Kinematic Variations
      for(unsigned int i=0;i<kinSysts.size();i++){       	
	analysis->setCurrSyst(kinSysts[i].c_str());
	analysis->eventWeight_=NominalWeight;
	writeBackground(analysis,BKG[bkg],&output,kinSysts[i].c_str());
      }

      ///Weight Variations
      for(unsigned int i=0;i<weightSysts.size();i++){       	
	analysis->setCurrSyst("");
	TString varWeight=NominalWeight;
	varWeight(weightSysts[i].first.c_str()) = (TString(weightSysts[i].first.c_str())+"_"+weightSysts[i].second.c_str()).Data();
	analysis->eventWeight_=varWeight;
	writeBackground(analysis,BKG[bkg],&output,weightSysts[i].second.c_str());
      }
    }


    //end loop over systematics
    output.Close();
  }


  ///Write data
  if(analysis->getFakeLumi()>0.){
    cout<<"WARNINIG: fake lumi ="<<analysis->getFakeLumi()<<", will set data with a toy experiment from the total MC"<<endl;
    for(int b=1;b<=data->GetNbinsX();b++){
      data->SetBinContent(b,HMC->GetBinContent(b));
      data->SetBinError(b,sqrt(HMC->GetBinContent(b)));
    }
  }
  cout<<"Data integral :"<< data->Integral()<<endl;
	
  TFile output(DIRECTORY+"/data_"+FileName+".root","UPDATE");
  output.cd();
  data->SetName("nominal");
  data->SetTitle("");
  data->Write();   
  output.Close();
  delete data;


  TFile outputMC(DIRECTORY+"/mc_"+FileName+".root","UPDATE");
  outputMC.cd();
  HMC->SetName("nominal");
  HMC->SetTitle("");
  HMC->Write();   
  outputMC.Close();
  delete HMC;



  ///Write signals
  for(long m=0;m<NMASS;m++){
      
    TString sampleName=TString("HVT")+MassPoint[m];
    TString sigName=TString("HVTZHllqq")+MassPoint[m];

    TFile output(DIRECTORY+"/"+sigName+"_"+FileName+".root","UPDATE");
    gROOT->cd();
      
    ///Nominal
    analysis->setCurrSyst("");
    analysis->eventWeight_=NominalWeight;//+"*"+puWeight;//apply p.u. weight for signals
    writeSignal(analysis,sampleName,&output,"nominal");

    if(addsysts){

      //Kinematic variations
      for(unsigned int i=0;i<kinSysts.size();i++){
	analysis->setCurrSyst(kinSysts[i].c_str());
	analysis->eventWeight_=NominalWeight;//+"*"+puWeight;
	writeSignal(analysis,sampleName,&output,kinSysts[i].c_str());
      }

      //Weight Variations
      for(unsigned int i=0;i<weightSysts.size();i++){       	
	analysis->setCurrSyst("");
	TString varWeight=NominalWeight;//+"*"+puWeight;
	varWeight(weightSysts[i].first.c_str()) = (TString(weightSysts[i].first.c_str())+"_"+weightSysts[i].second.c_str()).Data();
	analysis->eventWeight_=varWeight;
	writeSignal(analysis,sampleName,&output,weightSysts[i].second.c_str());
      }

    }


    //end loop over systematics
    output.Close();


    //generate event lists
    if(MassPoint[m]==4000){
      if(channel.CompareTo("ZHeeJ")==0)
	analysis->printEventList(sampleName,Selection,"eve_run:eve_num:ele_eta[ee_leg1[vh_v[vh]]]:ele_eta[ee_leg2[vh_v[vh]]]:fatjet_eta[vh_h[vh]]",DIRECTORY+"/"+sigName+"_"+FileName+".txt");
      if(channel.CompareTo("ZHmmJ")==0) 
	analysis->printEventList(sampleName,Selection,"eve_run:eve_num:muo_eta[mm_leg1[vh_v[vh]]]:muo_eta[mm_leg2[vh_v[vh]]]:fatjet_eta[vh_h[vh]]",DIRECTORY+"/"+sigName+"_"+FileName+".txt");
    }


  }



  ///HIggs signals
  for(long m=0;m<NMASSHIGG;m++){
      
    TString sampleName=TString("ggA")+MassPointHIGG[m];
    TString sigName=TString("ggAZHllqq")+MassPointHIGG[m];

    TFile output(DIRECTORY+"/"+sigName+"_"+FileName+".root","UPDATE");
    gROOT->cd();
      
    ///Nominal
    analysis->setCurrSyst("");
    analysis->eventWeight_=NominalWeight;//+"*"+puWeight;//apply p.u. weight for signals
    writeSignal(analysis,sampleName,&output,"nominal");


    if(addsysts){

      //Kinematic variations
      for(unsigned int i=0;i<kinSysts.size();i++){
  	analysis->setCurrSyst(kinSysts[i].c_str());
  	analysis->eventWeight_=NominalWeight;//+"*"+puWeight;
  	writeSignal(analysis,sampleName,&output,kinSysts[i].c_str());
      }

      //Weight Variations
      for(unsigned int i=0;i<weightSysts.size();i++){       	
  	analysis->setCurrSyst("");
  	TString varWeight=NominalWeight;//+"*"+puWeight;
  	varWeight(weightSysts[i].first.c_str()) = (TString(weightSysts[i].first.c_str())+"_"+weightSysts[i].second.c_str()).Data();
  	analysis->eventWeight_=varWeight;
  	writeSignal(analysis,sampleName,&output,weightSysts[i].second.c_str());
      }

    }

    //end loop over systematics
    output.Close();


    //generate event lists
    if(MassPointHIGG[m]==500){
      if(channel.CompareTo("ZHeeJ")==0)
	analysis->printEventList(sampleName,Selection,"eve_run:eve_num:ele_eta[ee_leg1[vh_v[vh]]]:ele_eta[ee_leg2[vh_v[vh]]]:fatjet_eta[vh_h[vh]]",DIRECTORY+"/"+sigName+"_"+FileName+".txt");
      if(channel.CompareTo("ZHmmJ")==0) 
	analysis->printEventList(sampleName,Selection,"eve_run:eve_num:muo_eta[mm_leg1[vh_v[vh]]]:muo_eta[mm_leg2[vh_v[vh]]]:fatjet_eta[vh_h[vh]]",DIRECTORY+"/"+sigName+"_"+FileName+".txt");
    }

  }
  


  gROOT->ProcessLine(".q");
}



  //Float_t xbinsValues[15+1]={0,200,400,600,800,1000,1250,1500,1750,2000,2250,2500,3000,3500,4000,5000};
  //analysis->setBinning("vh_m[vh]/1000",15,xbinsValues);
