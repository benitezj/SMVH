#include "../plots/plottingTools.C"
#include "../plots/plotterGlobals.h"

#define NBIN 7
//#define NBIN 9
#define REBIN 10

TH1F* copyHisto(TH1F*Hin){
  if(!Hin){cout<<"No histo"<<endl;return 0;}
  
  float xbins[NBIN+1]={0,500,1000,1500,2000,3000,4000,5000};
  //float xbins[NBIN+1]={0,100,200,300,400,500,600,700,800,900};//binning for pTJet
  TH1F * H = new TH1F(Hin->GetName(),"",NBIN,xbins);
  for(int b=1;b<=NBIN;b++){
    float ev=0.;
    float err=0.;
    for(int bin=1;bin<=Hin->GetNbinsX();bin++){
      if(H->GetBinLowEdge(b)<Hin->GetBinCenter(bin) && Hin->GetBinCenter(bin)<H->GetBinLowEdge(b)+H->GetBinWidth(b)){
	ev+=Hin->GetBinContent(bin);
	err+=Hin->GetBinError(bin)*Hin->GetBinError(bin);
      }
    }
    H->SetBinContent(b,ev,sqrt(err));
  }
  return H;
}

void printRatioString(TString file, TH1F* H){
  cout<<file<<" "<<H->GetName()<<" ";
  for(int bin=1;bin<=H->GetNbinsX();bin++){
    if(bin!=1)cout<<"+";
    cout<<"("<<H->GetBinContent(bin)<<")*("<<H->GetBinLowEdge(bin)<<"<x&&x<="<<H->GetBinLowEdge(bin)+H->GetBinWidth(bin)<<")";
  }
  cout<<endl;
}


void plotRatio(TString inpath,TString file, TString outpath,TString systname){
  
  TString infile=inpath+"/"+file;
  TFile INFILE(infile,"read");
  gROOT->cd();

  TH1F * H_nominal = copyHisto((TH1F*)INFILE.Get("nominal"));
  TH1F * H_1up = copyHisto((TH1F*)INFILE.Get(systname+"__1up"));
  H_1up->SetLineColor(4);
  TH1F * H_1down = copyHisto((TH1F*)INFILE.Get(systname+"__1down"));
  H_1down->SetLineColor(2);

  TLine line;
  TCanvas C;
  C.Clear();
  H_nominal->GetYaxis()->SetRangeUser(0,H_nominal->GetMaximum()>H_1up->GetMaximum() ? 1.3*H_nominal->GetMaximum() : 1.3*H_1up->GetMaximum()); 
  H_nominal->Draw("hist");
  H_1up->Draw("histsame");
  H_1down->Draw("histsame");
  C.Print(outpath+"/"+file+"_"+systname+".png");

  C.Clear();
  H_1up->Divide(H_nominal);
  H_1down->Divide(H_nominal);
  H_1up->GetYaxis()->SetRangeUser(0,2);
  H_1up->Draw("hist");
  H_1down->Draw("histsame");
  line.DrawLine(H_nominal->GetXaxis()->GetXmin(),1,H_nominal->GetXaxis()->GetXmax(),1);
  C.Print(outpath+"/"+file+"_"+systname+"_ratio.png");
 
  //Print the ratio strings
  printRatioString(file,H_1up);
  printRatioString(file,H_1down);

  delete H_nominal;
  delete H_1up;
  delete H_1down;
  
}


void plotFatJetSysts(TString inpath,TString INPUT){

  TString outpath=outputDir_+"/Limits/plotFatJetSysts_"+INPUT;

  system(TString("rm -rf ")+outpath);
  system(TString("mkdir ")+outpath);
  
  ///Zb :                     
  plotRatio(inpath+"/"+INPUT,"Zb_llJ_presel_0addtag_lowMH_mVH.root",outpath,"JET_Rtrk_Baseline");
  plotRatio(inpath+"/"+INPUT,"Zb_llJ_presel_0addtag_lowMH_mVH.root",outpath,"JET_Rtrk_Modelling");
  plotRatio(inpath+"/"+INPUT,"Zb_llJ_presel_0addtag_lowMH_mVH.root",outpath,"JET_Rtrk_Tracking");

  plotRatio(inpath+"/"+INPUT,"Zb_llJ_presel_0addtag_highMH_mVH.root",outpath,"JET_Rtrk_Baseline");
  plotRatio(inpath+"/"+INPUT,"Zb_llJ_presel_0addtag_highMH_mVH.root",outpath,"JET_Rtrk_Modelling");
  plotRatio(inpath+"/"+INPUT,"Zb_llJ_presel_0addtag_highMH_mVH.root",outpath,"JET_Rtrk_Tracking");

  plotRatio(inpath+"/"+INPUT,"Zb_llJ_presel_0addtag_SR_mVH.root",outpath,"JET_Rtrk_Baseline");
  plotRatio(inpath+"/"+INPUT,"Zb_llJ_presel_0addtag_SR_mVH.root",outpath,"JET_Rtrk_Modelling");
  plotRatio(inpath+"/"+INPUT,"Zb_llJ_presel_0addtag_SR_mVH.root",outpath,"JET_Rtrk_Tracking");

  //Zc
  plotRatio(inpath+"/"+INPUT,"Zc_llJ_presel_0addtag_lowMH_mVH.root",outpath,"JET_Rtrk_Baseline");
  plotRatio(inpath+"/"+INPUT,"Zc_llJ_presel_0addtag_lowMH_mVH.root",outpath,"JET_Rtrk_Modelling");
  plotRatio(inpath+"/"+INPUT,"Zc_llJ_presel_0addtag_lowMH_mVH.root",outpath,"JET_Rtrk_Tracking");

  plotRatio(inpath+"/"+INPUT,"Zc_llJ_presel_0addtag_highMH_mVH.root",outpath,"JET_Rtrk_Baseline");
  plotRatio(inpath+"/"+INPUT,"Zc_llJ_presel_0addtag_highMH_mVH.root",outpath,"JET_Rtrk_Modelling");
  plotRatio(inpath+"/"+INPUT,"Zc_llJ_presel_0addtag_highMH_mVH.root",outpath,"JET_Rtrk_Tracking");

  plotRatio(inpath+"/"+INPUT,"Zc_llJ_presel_0addtag_SR_mVH.root",outpath,"JET_Rtrk_Baseline");
  plotRatio(inpath+"/"+INPUT,"Zc_llJ_presel_0addtag_SR_mVH.root",outpath,"JET_Rtrk_Modelling");
  plotRatio(inpath+"/"+INPUT,"Zc_llJ_presel_0addtag_SR_mVH.root",outpath,"JET_Rtrk_Tracking");

  //Zl
  plotRatio(inpath+"/"+INPUT,"Zl_llJ_presel_0addtag_lowMH_mVH.root",outpath,"JET_Rtrk_Baseline");
  plotRatio(inpath+"/"+INPUT,"Zl_llJ_presel_0addtag_lowMH_mVH.root",outpath,"JET_Rtrk_Modelling");
  plotRatio(inpath+"/"+INPUT,"Zl_llJ_presel_0addtag_lowMH_mVH.root",outpath,"JET_Rtrk_Tracking");

  plotRatio(inpath+"/"+INPUT,"Zl_llJ_presel_0addtag_highMH_mVH.root",outpath,"JET_Rtrk_Baseline");
  plotRatio(inpath+"/"+INPUT,"Zl_llJ_presel_0addtag_highMH_mVH.root",outpath,"JET_Rtrk_Modelling");
  plotRatio(inpath+"/"+INPUT,"Zl_llJ_presel_0addtag_highMH_mVH.root",outpath,"JET_Rtrk_Tracking");

  plotRatio(inpath+"/"+INPUT,"Zl_llJ_presel_0addtag_SR_mVH.root",outpath,"JET_Rtrk_Baseline");
  plotRatio(inpath+"/"+INPUT,"Zl_llJ_presel_0addtag_SR_mVH.root",outpath,"JET_Rtrk_Modelling");
  plotRatio(inpath+"/"+INPUT,"Zl_llJ_presel_0addtag_SR_mVH.root",outpath,"JET_Rtrk_Tracking");


  ///TTbar :                     
  plotRatio(inpath+"/"+INPUT,"TTbar_llJ_presel_0addtag_lowMH_mVH.root",outpath,"JET_Rtrk_Baseline");
  plotRatio(inpath+"/"+INPUT,"TTbar_llJ_presel_0addtag_lowMH_mVH.root",outpath,"JET_Rtrk_Modelling");
  plotRatio(inpath+"/"+INPUT,"TTbar_llJ_presel_0addtag_lowMH_mVH.root",outpath,"JET_Rtrk_Tracking");

  plotRatio(inpath+"/"+INPUT,"TTbar_llJ_presel_0addtag_highMH_mVH.root",outpath,"JET_Rtrk_Baseline");
  plotRatio(inpath+"/"+INPUT,"TTbar_llJ_presel_0addtag_highMH_mVH.root",outpath,"JET_Rtrk_Modelling");
  plotRatio(inpath+"/"+INPUT,"TTbar_llJ_presel_0addtag_highMH_mVH.root",outpath,"JET_Rtrk_Tracking");

  plotRatio(inpath+"/"+INPUT,"TTbar_llJ_presel_0addtag_SR_mVH.root",outpath,"JET_Rtrk_Baseline");
  plotRatio(inpath+"/"+INPUT,"TTbar_llJ_presel_0addtag_SR_mVH.root",outpath,"JET_Rtrk_Modelling");
  plotRatio(inpath+"/"+INPUT,"TTbar_llJ_presel_0addtag_SR_mVH.root",outpath,"JET_Rtrk_Tracking");

  ///Diboson :                     
  plotRatio(inpath+"/"+INPUT,"Diboson_llJ_presel_0addtag_lowMH_mVH.root",outpath,"JET_Rtrk_Baseline");
  plotRatio(inpath+"/"+INPUT,"Diboson_llJ_presel_0addtag_lowMH_mVH.root",outpath,"JET_Rtrk_Modelling");
  plotRatio(inpath+"/"+INPUT,"Diboson_llJ_presel_0addtag_lowMH_mVH.root",outpath,"JET_Rtrk_Tracking");

  plotRatio(inpath+"/"+INPUT,"Diboson_llJ_presel_0addtag_highMH_mVH.root",outpath,"JET_Rtrk_Baseline");
  plotRatio(inpath+"/"+INPUT,"Diboson_llJ_presel_0addtag_highMH_mVH.root",outpath,"JET_Rtrk_Modelling");
  plotRatio(inpath+"/"+INPUT,"Diboson_llJ_presel_0addtag_highMH_mVH.root",outpath,"JET_Rtrk_Tracking");

  plotRatio(inpath+"/"+INPUT,"Diboson_llJ_presel_0addtag_SR_mVH.root",outpath,"JET_Rtrk_Baseline");
  plotRatio(inpath+"/"+INPUT,"Diboson_llJ_presel_0addtag_SR_mVH.root",outpath,"JET_Rtrk_Modelling");
  plotRatio(inpath+"/"+INPUT,"Diboson_llJ_presel_0addtag_SR_mVH.root",outpath,"JET_Rtrk_Tracking");

  ///STop :                     
  plotRatio(inpath+"/"+INPUT,"STop_llJ_presel_0addtag_lowMH_mVH.root",outpath,"JET_Rtrk_Baseline");
  plotRatio(inpath+"/"+INPUT,"STop_llJ_presel_0addtag_lowMH_mVH.root",outpath,"JET_Rtrk_Modelling");
  plotRatio(inpath+"/"+INPUT,"STop_llJ_presel_0addtag_lowMH_mVH.root",outpath,"JET_Rtrk_Tracking");

  plotRatio(inpath+"/"+INPUT,"STop_llJ_presel_0addtag_highMH_mVH.root",outpath,"JET_Rtrk_Baseline");
  plotRatio(inpath+"/"+INPUT,"STop_llJ_presel_0addtag_highMH_mVH.root",outpath,"JET_Rtrk_Modelling");
  plotRatio(inpath+"/"+INPUT,"STop_llJ_presel_0addtag_highMH_mVH.root",outpath,"JET_Rtrk_Tracking");

  plotRatio(inpath+"/"+INPUT,"STop_llJ_presel_0addtag_SR_mVH.root",outpath,"JET_Rtrk_Baseline");
  plotRatio(inpath+"/"+INPUT,"STop_llJ_presel_0addtag_SR_mVH.root",outpath,"JET_Rtrk_Modelling");
  plotRatio(inpath+"/"+INPUT,"STop_llJ_presel_0addtag_SR_mVH.root",outpath,"JET_Rtrk_Tracking");



  // //
  // plotRatio(inpath+"/"+INPUT,"TTbar_llJ_1tag_emu_SR_mVH.root",outpath,"JET_Rtrk_Baseline");
  // plotRatio(inpath+"/"+INPUT,"TTbar_llJ_1tag_emu_SR_mVH.root",outpath,"JET_Rtrk_Modelling");
  // plotRatio(inpath+"/"+INPUT,"TTbar_llJ_1tag_emu_SR_mVH.root",outpath,"JET_Rtrk_Tracking");

  // plotRatio(inpath+"/"+INPUT,"TTbar_llJ_2tag_emu_SR_mVH.root",outpath,"JET_Rtrk_Baseline");
  // plotRatio(inpath+"/"+INPUT,"TTbar_llJ_2tag_emu_SR_mVH.root",outpath,"JET_Rtrk_Modelling");
  // plotRatio(inpath+"/"+INPUT,"TTbar_llJ_2tag_emu_SR_mVH.root",outpath,"JET_Rtrk_Tracking");


  // //
  // plotRatio(inpath+"/"+INPUT,"Diboson_llJ_1tag_0addtag_SR_mVH.root",outpath,"JET_Rtrk_Baseline");
  // plotRatio(inpath+"/"+INPUT,"Diboson_llJ_1tag_0addtag_SR_mVH.root",outpath,"JET_Rtrk_Modelling");
  // plotRatio(inpath+"/"+INPUT,"Diboson_llJ_1tag_0addtag_SR_mVH.root",outpath,"JET_Rtrk_Tracking");

  // plotRatio(inpath+"/"+INPUT,"Diboson_llJ_2tag_0addtag_SR_mVH.root",outpath,"JET_Rtrk_Baseline");
  // plotRatio(inpath+"/"+INPUT,"Diboson_llJ_2tag_0addtag_SR_mVH.root",outpath,"JET_Rtrk_Modelling");
  // plotRatio(inpath+"/"+INPUT,"Diboson_llJ_2tag_0addtag_SR_mVH.root",outpath,"JET_Rtrk_Tracking");



  // ///this is just to show the variations  in pT(Jet)
  // plotRatio(inpath+"/"+INPUT,"Zb_llJ_2tag_0addtag_SR_pTJet.root",outpath,"JET_Rtrk_Baseline");
  // plotRatio(inpath+"/"+INPUT,"Zb_llJ_2tag_0addtag_SR_pTJet.root",outpath,"JET_Rtrk_Modelling");
  // plotRatio(inpath+"/"+INPUT,"Zb_llJ_2tag_0addtag_SR_pTJet.root",outpath,"JET_Rtrk_Tracking");

  gROOT->ProcessLine(".q");
}
