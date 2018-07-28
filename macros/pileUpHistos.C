#include "../plots/plotterGlobals.h"
#include "../plots/plottingTools.C"

#define NPILEUPBINS 100
#define PILEUPMIN 0
#define PILEUPMAX 100

void pileUpDataFromGRL(TString filename, TString fileout="pileup_grl.root"){
  //input file is produced using iLumiCale.exe --plots

  TFile input(filename,"READ");
  
  //From GRL
  TH1F*HIn=(TH1F*)input.Get("avgintperbx");  

  //FROM MC sample by Takuya
  //TH1F*HIn=(TH1F*)input.Get("PileupReweighting/pileup_chan410000_run222526");

  
  //Rebin the input histogram 
  TH1F H("pileup","pileup",NPILEUPBINS,PILEUPMIN,PILEUPMAX);
  for(int bi=1;bi<=NPILEUPBINS;bi++){
    for(int bo=1;bo<=HIn->GetXaxis()->GetNbins();bo++){
      //if( H.GetBinLowEdge(bi) < HIn->GetBinCenter(bo) && HIn->GetBinCenter(bo) <= H.GetBinLowEdge(bi)+H.GetBinWidth(bi) ) 
      if( H.GetBinLowEdge(bi)-H.GetBinWidth(bi)/2 < HIn->GetBinCenter(bo) && HIn->GetBinCenter(bo) <= H.GetBinLowEdge(bi)+H.GetBinWidth(bi)-H.GetBinWidth(bi)/2 ) 
	H.AddBinContent(bi,HIn->GetBinContent(bo));
    }
  }

  //normalize to unity
  if(H.Integral()>0){
    H.Scale(1./H.Integral());
  }else{
    cout<<"Histogram Integral is less than 0"<<endl;
    exit(0);
  }
  

  TFile output(fileout,"RECREATE");
  H.Write();
  output.ls();
  
  gROOT->ProcessLine(".q");
}


void pileUpFromAOD(TString inputDir, TString match, TString fileout="pileup_aod.root"){
  std::vector<std::string> samples=findSamplesInDir(inputDir.Data(),match.Data());
  if(samples.size()==0){
    cout<<"Number of samples is 0"<<endl;
    return;
  }

  TChain tuple("CollectionTree");
  for(int i=0; i < samples.size() ; i++)
    tuple.Add(inputDir+"/"+samples.at(i).c_str()+"/*.root*");  
  
  if(tuple.GetNtrees()==0){
    cout<<"Number of root files is 0"<<endl;
    return;
  }

  cout<<"N files: "<<tuple.GetNtrees()<<endl;
  
  TH1F pileup("pileup","",NPILEUPBINS,PILEUPMIN,PILEUPMAX);
  tuple.Draw("averageInteractionsPerCrossing>>pileup");

  //normalize to unity
  if(pileup.Integral()>0){
    pileup.Scale(1./pileup.Integral());
  }else{
    cout<<"Histogram Integral is less than 0"<<endl;
    return;
  }
  

  TFile output(fileout,"RECREATE");
  pileup.Write();
  output.ls();
  
  gROOT->ProcessLine(".q");
}

void pileUpFromTUPLE(TString fileout="pileup_tuple.root"){

  Sample S("S","mc15_13TeV.410000.PowhegPythiaEvtGen_P2012_ttbar_hdamp172p5_nonallhad.merge.DAOD_HIGG2D4.e3698_s2608_s2183_r6630_r6264_p2340","NTUPLES/CxTupleSamples/Zmm/00-09_00_00");
  
  TH1F*H=(TH1F*)S.getPileUp();

  //normalize to unity                                                                                                                            
  if(H->Integral()>0){
    H->Scale(1./H->Integral());
  }else{
    cout<<"Histogram Integral is less than 0"<<endl;
    return;
  }
  
  TFile output(fileout,"RECREATE");
  H->SetName("pileup");
  H->Write();
  output.ls();
  

  gROOT->ProcessLine(".q");
}

