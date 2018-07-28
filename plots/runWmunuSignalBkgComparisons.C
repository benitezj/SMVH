#include "plotterGlobals.h"
#include "plottingTools.C"

void plotWmunuSignalBkgComparisons(Sample* S, Sample* B, TString outpath){
  TCanvas C;
 
  compareSignalAndBkg(S,B,"jet_sv1ip3d[wlnu_jet]",100,-15,40,"wlnu_jet>=0","lead jet SV1_IP3D",&C,outpath+"/leadjet_sv1ip3d");
  compareSignalAndBkg(S,B,"jet_pt[wlnu_jet]/1000",100,0,300,"wlnu_jet>=0","lead jet pT",&C,outpath+"/leadjet_pt");  
  compareSignalAndBkg(S,B,"jet_eta[wlnu_jet]",100,-3,3,"wlnu_jet>=0","lead jet eta",&C,outpath+"/leadjet_eta");

  //compareSignalAndBkg(S,B,"jet_m[wlnu_jet]",100,0,400,"wlnu_jet>=0",&C,outpath+"/leadjet_m");
  //compareSignalAndBkg(S,B,"jet_massvx[wlnu_jet]",100,0,400,"wlnu_jet>=0",&C,outpath+"/leadjet_massvx");
  //compareSignalAndBkg(S,B,"jet_normdist[wlnu_jet]",100,0,100,"wlnu_jet>=0",&C,outpath+"/leadjet_normdist");
  //compareSignalAndBkg(S,B,"jet_mv1[wlnu_jet]",100,-10,10,"wlnu_jet>=0",&C,outpath+"/leadjet_mv1");



}


void runWmunuSignalBkgComparisons(TString intag="",TString outtag=""){  
    
  TString inpath=inputDir_+"/CxTupleSamples/Wmunu/"+CXTAG;
  if(intag.CompareTo("")!=0)inpath+="_"+intag;//version of the ntuples

  TString outpath=outputDir_+"/DC14Studies/Wmunu_Signal/"+CXTAG;
  if(intag.CompareTo("")!=0)outpath+="_"+intag;
  if(outtag.CompareTo("")!=0)outpath+="_"+outtag;//version of the plots

  system(TString("rm -rf ")+outpath);
  system(TString("mkdir ")+outpath);
  
  Sample * Signal = new Sample("Signal","mc14_8TeV.189421.PowhegPythia8_AU2CT10_WpH125J_MINLO_munubb_VpT_Weighted.merge.AOD.e2698_s1933_s1911_r5591_r5625",inpath); 
  Sample * Bkg = new Sample("Bkg","mc14_8TeV.167745.Sherpa_CT10_WmunuMassiveCBPt0_CJetVetoBVeto.merge.AOD.e1585_s1933_s1911_r5591_r5625",inpath);


  //skim before plotting: we only care about the leading jet
  cout<<"Signal skim: "<<Signal->skim("wlnu_jet>=0")<<endl;
  cout<<"Bkg skim: "<<Bkg->skim("wlnu_jet>=0")<<endl;


  //Compare distributions
  Signal->setEventWeight("eve_mc_w");
  Bkg->setEventWeight("eve_mc_w");
  plotWmunuSignalComparisons(Signal,Bkg,outpath);
  
  ////Rejection vs Efficiency 
  Signal->setEventWeight("eve_mc_w*(20000<jet_pt[wlnu_jet]&&jet_pt[wlnu_jet]<40000)");
  Bkg->setEventWeight("eve_mc_w*(20000<jet_pt[wlnu_jet]&&jet_pt[wlnu_jet]<40000)");
  TGraphErrors* ROC2040=makeROC(Signal,Bkg,"jet_sv1ip3d[wlnu_jet]",100,-5,25,"rejection");
  ROC2040->SetLineColor(2);
  ROC2040->SetFillColor(2);
  ROC2040->SetFillStyle(3010);

  Signal->setEventWeight("eve_mc_w*(40000<jet_pt[wlnu_jet]&&jet_pt[wlnu_jet]<60000)");
  Bkg->setEventWeight("eve_mc_w*(40000<jet_pt[wlnu_jet]&&jet_pt[wlnu_jet]<60000)");
  TGraphErrors* ROC4060=makeROC(Signal,Bkg,"jet_sv1ip3d[wlnu_jet]",100,-5,25,"rejection");
  ROC4060->SetLineColor(3);
  ROC4060->SetFillColor(3);
  ROC4060->SetFillStyle(3010);

  Signal->setEventWeight("eve_mc_w*(60000<jet_pt[wlnu_jet]&&jet_pt[wlnu_jet]<80000)");
  Bkg->setEventWeight("eve_mc_w*(60000<jet_pt[wlnu_jet]&&jet_pt[wlnu_jet]<80000)");
  TGraphErrors* ROC6080=makeROC(Signal,Bkg,"jet_sv1ip3d[wlnu_jet]",100,-5,25,"rejection");
  ROC6080->SetLineColor(4);
  ROC6080->SetFillColor(4);
  ROC6080->SetFillStyle(3010);

  // Signal->setEventWeight("eve_mc_w*(80000<jet_pt[wlnu_jet]&&jet_pt[wlnu_jet]<100000)");
  // Bkg->setEventWeight("eve_mc_w*(80000<jet_pt[wlnu_jet]&&jet_pt[wlnu_jet]<100000)");
  // TGraphErrors* ROC80100=makeROC(Signal,Bkg,"jet_sv1ip3d[wlnu_jet]",100,-5,25,"rejection");
  // ROC80100->SetLineColor(5);
  // ROC80100->SetFillColor(5);
  // ROC80100->SetFillStyle(3010);

  TCanvas C;
  C.Clear();
  TH1F HFrame("HFrame","",1,0,1);
  HFrame.GetYaxis()->SetRangeUser(1,1e5);
  HFrame.GetXaxis()->SetRangeUser(0,1);
  HFrame.GetXaxis()->SetTitle("b-jet efficiency");
  HFrame.GetYaxis()->SetTitle("background rejection");
  HFrame.Draw();

  C.SetLogy(1);
  ROC2040->Draw("l2same");
  ROC4060->Draw("l2same");
  ROC6080->Draw("l2same");
  //ROC80100->Draw("lsame");
  C.Print(outpath+"/ROC_sv1ip3d.png");

  gROOT->ProcessLine(".q");
}
