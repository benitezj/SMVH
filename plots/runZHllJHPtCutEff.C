#include "plotterGlobals.h"

void runZHllJHPtCutEff(TString channel, TString intag,TString tag=""){

  TString region="1btag";//check after requiring 2 track jets in fat 

  TString inpath=inputDir_+"/"+channel+"/"+intag;
  TString outpath=outputDir_+"/"+channel+"/HPtCutEff_"+intag+"_"+region+"_"+tag;
  system(TString("rm -rf ")+outpath);
  system(TString("mkdir ")+outpath);

  TString selection = getSelection(channel,region);

  TString CUT;
  CUT="(fatjet_pt[vh_h[vh]]>250000)";

  std::vector<TH1D*> HSubleadLepPt;

  TGraphErrors GEffvsMR;

  int counter=0;
  for(long M=1000;M<=5000;M+=100){
    TString sName=findMatchInDir(inpath.Data(),TString("VzZH_llqq_m")+M);
    if(! sName.Contains("VzZH")) continue;
    cout<<M<<" "<<sName<<endl;
    Sample S("sample",sName.Data(),inpath);
    //Sample.setNtupleName("tuple");

    float initialEvents = S.getGenEventsSumW();

    if(initialEvents<=0) {
      cout<<"Initial events is <=0 for "<<S.GetName()<<endl;
    }


    TH1D* H = S.getHistoNtpFile("vh_m[vh]/1000",60,0,6000,TCut(selection));
    H->SetName(TString("VHMass")+M);

    ///loop to get correct total uncertainty
    float integral=0.;
    float error=0.;
    for(int b=1;b<=H->GetNbinsX();b++){
      integral += H->GetBinContent(b);
      error += H->GetBinError(b) * H->GetBinError(b);
    }


    TH1D* HCut = S.getHistoNtpFile("vh_m[vh]/1000",60,0,6000,TCut(selection)+TCut(CUT));
    HCut->SetName(TString("VHMassCut")+M);

    ///loop to get correct total uncertainty
    float integralCut=0.;
    float errorCut=0.;
    for(int b=1;b<=HCut->GetNbinsX();b++){
      integralCut += HCut->GetBinContent(b);
      errorCut += HCut->GetBinError(b) * HCut->GetBinError(b);
    }

    GEffvsMR.SetPoint(counter,M,integralCut/integral);
    //GEffvsMR.SetPointError(counter,0,sqrt(errorCut)/integral);
    delete H;
    delete HCut;
	

    ///////////
    if(M%500==0){
      TH1D* HZM = NULL;
      HZM = S.getHistoNtpFile("fatjet_pt[vh_h[vh]]/1000",100,0,2000,TCut(selection));
      HZM->SetName(TString("HPt")+M);
      HSubleadLepPt.push_back(HZM);

    }

    counter++;
  }

  TCanvas C;
 

  C.Clear();
  HSubleadLepPt[0]->Scale(1./HSubleadLepPt[0]->Integral());
  HSubleadLepPt[0]->GetYaxis()->SetRangeUser(0,HSubleadLepPt[0]->GetMaximum()*1.5);
  HSubleadLepPt[0]->GetXaxis()->SetTitle("Jet pT   [GeV]");
  HSubleadLepPt[0]->Draw("hist");
  for(int s=1;s<HSubleadLepPt.size();s++){
    HSubleadLepPt[s]->SetLineColor(s+1);
    HSubleadLepPt[s]->Scale(1./HSubleadLepPt[s]->Integral());
    HSubleadLepPt[s]->Draw("histsame");
  }
  C.Print(outpath+"/SubleadLepPtDist_vs_MR.png");
  C.Print(outpath+"/SubleadLepPtDist_vs_MR.eps");
  
  C.SetLogy(1);
  HSubleadLepPt[0]->GetYaxis()->SetRangeUser(0.001,HSubleadLepPt[0]->GetMaximum()*1.5);
  C.Update();
  C.Print(outpath+"/SubleadLepPtDist_vs_MR_log.png");
  C.Print(outpath+"/SubleadLepPtDist_vs_MR_log.eps");
  C.SetLogy(0);


  C.Clear();
  TH1F HFrame("HFrame","",1,0,5000);
  HFrame.GetYaxis()->SetRangeUser(0.8,1.0);
  HFrame.GetYaxis()->SetTitle("efficiency");
  HFrame.GetXaxis()->SetTitle("M_{R}   [GeV]");
  HFrame.Draw("hist");
  GEffvsMR.Draw("psame");
  C.Print(outpath+"/Efficiency_vs_MR.png");
  C.Print(outpath+"/Efficiency_vs_MR.eps");



  gROOT->ProcessLine(".q");
}
