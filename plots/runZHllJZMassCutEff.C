#include "plotterGlobals.h"

void runZHllJZMassCutEff(TString channel, TString intag,TString tag=""){

  TString region="preselZmass";//preselection without Z mass selection

  TString inpath=inputDir_+"/"+channel+"/"+intag;
  TString outpath=outputDir_+"/"+channel+"/ZMassCutEff_"+intag+"_"+region+"_"+tag;
  system(TString("rm -rf ")+outpath);
  system(TString("mkdir ")+outpath);

  TString selection = getSelection(channel,region);

  TString Zcut;
  if(channel.CompareTo("ZHmmJ")==0)
    //Zcut="(50000.<mm_m[vh_v[vh]]&&mm_m[vh_v[vh]]<120000.)";
    Zcut="(55000.<mm_m[vh_v[vh]]&&mm_m[vh_v[vh]]<125000.)";
    //Zcut="(60000.<mm_m[vh_v[vh]]&&mm_m[vh_v[vh]]<120000.)";
    //Zcut="(70000.<mm_m[vh_v[vh]]&&mm_m[vh_v[vh]]<110000.)";

  if(channel.CompareTo("ZHeeJ")==0)
    //Zcut="(50000.<ee_m[vh_v[vh]]&&ee_m[vh_v[vh]]<120000.)";
    //Zcut="(60000.<ee_m[vh_v[vh]]&&ee_m[vh_v[vh]]<1100000.)";
    //Zcut="(70000.<ee_m[vh_v[vh]]&&ee_m[vh_v[vh]]<110000.)";
    Zcut="(75000.<ee_m[vh_v[vh]]&&ee_m[vh_v[vh]]<115000.)";

  std::vector<TH1D*> HZMass;

  TGraphErrors GEffvsMR;

  int counter=0;
  for(long M=1000;M<=5000;M+=100){
    TString sName=findMatchInDir(inpath.Data(),TString("VzZH_llqq_m")+M);
    if(! sName.Contains("VzZH")) continue;
    cout<<M<<" "<<sName<<endl;
    Sample S("sample",sName.Data(),inpath);

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


    TH1D* HCut = S.getHistoNtpFile("vh_m[vh]/1000",60,0,6000,TCut(selection)+TCut(Zcut));
    HCut->SetName(TString("VHMassCut")+M);

    ///loop to get correct total uncertainty
    float integralCut=0.;
    float errorCut=0.;
    for(int b=1;b<=HCut->GetNbinsX();b++){
      integralCut += HCut->GetBinContent(b);
      errorCut += HCut->GetBinError(b) * HCut->GetBinError(b);
    }

    GEffvsMR.SetPoint(counter,M,integralCut/integral);
    GEffvsMR.SetPointError(counter,0,sqrt(errorCut)/integral);
    delete H;
    delete HCut;
	

    ///////////
    if(M%500==0){
      TH1D* HZM = NULL;
      if(channel.CompareTo("ZHmmJ")==0)
	HZM = S.getHistoNtpFile("mm_m[vh_v[vh]]/1000",20,50,150,TCut(selection));
      if(channel.CompareTo("ZHeeJ")==0)
	HZM = S.getHistoNtpFile("ee_m[vh_v[vh]]/1000",20,50,150,TCut(selection));
      HZM->SetName(TString("ZMass")+M);
      HZMass.push_back(HZM);

    }

    counter++;
  }

  TCanvas C;
 

  C.Clear();
  HZMass[0]->Scale(1./HZMass[0]->Integral());
  HZMass[0]->GetYaxis()->SetRangeUser(0,HZMass[0]->GetMaximum()*1.5);
  HZMass[0]->GetXaxis()->SetTitle("m(ll)    [GeV]");
  HZMass[0]->Draw("hist");
  for(int s=1;s<HZMass.size();s++){
    HZMass[s]->SetLineColor(s+1);
    HZMass[s]->Scale(1./HZMass[s]->Integral());
    HZMass[s]->Draw("histsame");
  }
  C.Print(outpath+"/ZMassDist_vs_MR.png");
  C.Print(outpath+"/ZMassDist_vs_MR.eps");
  
  C.SetLogy(1);
  HZMass[0]->GetYaxis()->SetRangeUser(0.001,HZMass[0]->GetMaximum()*1.5);
  C.Update();
  C.Print(outpath+"/ZMassDist_vs_MR_log.png");
  C.Print(outpath+"/ZMassDist_vs_MR_log.eps");
  C.SetLogy(0);


  C.Clear();
  TH1F HFrame("HFrame","",1,0,6000);
  HFrame.GetYaxis()->SetRangeUser(0.5,1.0);
  HFrame.GetYaxis()->SetTitle("efficiency");
  HFrame.GetXaxis()->SetTitle("Mass    [GeV]");
  HFrame.Draw("hist");
  GEffvsMR.Draw("pesame");
  C.Print(outpath+"/Efficiency_vs_MR.png");
  C.Print(outpath+"/Efficiency_vs_MR.eps");



  gROOT->ProcessLine(".q");
}
