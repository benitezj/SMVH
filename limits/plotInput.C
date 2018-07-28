#include "../plots/plottingTools.C"
#include "../plots/plotterGlobals.h"

#define REBINFACTOR 10

void printYield(TString varname, TH1F* HVar, TH1F * HNom){
  if(!HVar || !HNom) return;

  float N=0.,E=0.;
  for(int b=1;b<=HNom->GetNbinsX();b++){
    N+=HNom->GetBinContent(b);
    E+=HNom->GetBinError(b) * HNom->GetBinError(b);
  }
  E=sqrt(E);

  float Nvar=0.,Evar=0.;
  for(int b=1;b<=HVar->GetNbinsX();b++){
    Nvar+=HVar->GetBinContent(b);
    Evar+=HVar->GetBinError(b) * HVar->GetBinError(b);
  }
  Evar=sqrt(Evar);

  printf("%30s : %.4f+/-%.4f[%.0f%%] => %.4f \n",varname.Data(),Nvar,Evar,Nvar>0 ? 100*Evar/Nvar : 0,Nvar/N);
}

void plotVariations(TString path1,TString TAG1,TString file,TString outpath,TString matchsyst="_", bool plot=0){

  TFile FILE(path1+"/"+file.Data());
  if(FILE.IsZombie()){
    cout<<"File1 is zombie: "<<FILE.GetName()<<endl;
    return;
  }
  
  TH1F* HNom=(TH1F*)FILE.Get("nominal");
  if(!HNom){cout<<"nominal not found for "<<FILE.GetName()<<endl; return;}
  TH1F* HNomRebin=(TH1F*)HNom->Rebin(REBINFACTOR,"HNomRebin");
  printYield("nominal",HNomRebin,HNomRebin);


  
  float YMAX=2;//HNomRebin->GetMaximum();
  TCanvas C;
  if(plot){
    HNomRebin->SetLineColor(1);
    HNomRebin->SetFillColor(0);
    //HNomRebin->Divide(HNomRebin);
    HNomRebin->Draw("histp");
  }

  //This list is missing the weight systematics:
  for( std::vector<string>::iterator it = kinSysts.begin() ; it != kinSysts.end(); it++){
    if( !( (*it).find(matchsyst.Data())<(*it).size() ) ) continue;

    TH1F* HVar=(TH1F*)FILE.Get((*it).c_str());
    if(!HVar){cout<<(*it).c_str()<<" not found for "<<FILE.GetName()<<endl; return;}
    TH1F*HVarRebin=(TH1F*)HVar->Rebin(REBINFACTOR,"HVarRebin");
    printYield((*it).c_str(),HVarRebin,HNomRebin);
    if(plot){
      if((*it).find("1up")<(*it).size())
	HVarRebin->SetLineColor(4);
      if((*it).find("1down")<(*it).size())
	HVarRebin->SetLineColor(2);
      
      HVarRebin->SetFillColor(0);
      HVarRebin->SetMarkerStyle(kPlus);
      //HVarRebin->Divide(HNomRebin);
      HVarRebin->Draw("histpesame");

      if( HVarRebin->GetMaximum() > YMAX ) YMAX = HVarRebin->GetMaximum();
    }
  }
  
  if(plot){
    TString outfile=file;
    outfile(".root")=".gif";
    HNomRebin->GetYaxis()->SetRangeUser(0,1.2*YMAX);
    C.Update();
    C.Print(outpath+"/"+outfile);
  }
}


void plotInput(TString INPATH, TString INPUT, TString matchfile=".root", TString matchsyst="_",bool plot=0){
  //Run like: rootload SMVH/limits/plotInput.C\(\"/afs/cern.ch/user/b/benitezj/public/analysis/LimitInputs\",\"LimitInputs_ZHllJ_DB00-07-02\",\"tag_0addtag_SR_pTJet\",\"Rtrk\",1\)


  TString outpath=outputDir_+"/Limits/SystPlots_"+INPUT;
  system((TString("rm -rf ")+outpath).Data());
  system((TString("mkdir -p ")+outpath).Data());

  TString inPath=INPATH+"/"+INPUT;
  cout<<inPath<<endl;

  //plotVariations(inPath,INPUT,"Zb_llJ_2tag_0addtag_SR_mVH.root",outpath);
  
  std::vector<std::string> list=findSamplesInDir(inPath.Data(),matchfile.Data());
  for( std::vector<string>::iterator it = list.begin() ; it != list.end(); it++){
    cout<<endl<<"*************"<<(*it).c_str()<<"****************"<<endl;
    plotVariations(inPath,INPUT,(*it).c_str(),outpath,matchsyst,plot);
  }


  gROOT->ProcessLine(".q");
}
