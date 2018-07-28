#include "plotterGlobals.h"

#include "plotRToVHTruth.C"

void runZHllJEfficiency(TString channel, TString intag, TString region){



  TString inpath=inputDir_+"/"+channel+"/"+intag;
  TString outpath=outputDir_+"/"+channel+"/Efficiency_"+intag+"_"+region;
  system(TString("rm -rf ")+outpath);
  system(TString("mkdir ")+outpath);

  TString selection = getSelection(channel,region);


  ////////////////////////////////////////////////////////
  //Plot efficiency vs Mass point
  //-Use sum of initial events to obtain absolute efficiency even for derivations
  ///////////////////////////////////////////////////////
  
  TGraphErrors GEffvsMR;

  int counter=0;
  for(long M=500;M<=5000;M+=100){
    TString sName;

    ////HVT samples
    if(M<1000) sName=findMatchInDir(inpath.Data(),TString("VzZH_llqq_m0")+M);
    else sName=findMatchInDir(inpath.Data(),TString("VzZH_llqq_m")+M);
    if(! sName.Contains("VzZH")) continue;

    ////AZh samples
    //sName = findMatchInDir(inpath.Data(),TString("A14NNPDF23LO_ggA")+M);
    //if(! sName.Contains("ggA")) continue;

    ////
    cout<<M<<" "<<sName<<endl;
    Sample S("sample",sName.Data(),inpath);

    TH1D* H = S.getHistoNtpFile("vh_m[vh]/1000",60,0,6000,TCut(selection));
    H->SetName(TString("VHMass")+M);

    float initialEvents = S.getGenEventsSumW();

    if(initialEvents<=0) {
      cout<<"Initial events is <=0 for "<<S.GetName()<<endl;
    }

    ///loop to get correct total uncertainty
    float integral=0.;
    float error=0.;
    for(int b=1;b<=H->GetNbinsX();b++){
      integral += H->GetBinContent(b);
      error += H->GetBinError(b) * H->GetBinError(b);
    }


    float eff=integral/initialEvents;
    float err=sqrt(error)/initialEvents;
    
    std::cout<<channel<<"  M="<<M<<"  eff.="<<eff<<"+/-"<<err<<" ; "<<std::endl;

    GEffvsMR.SetPoint(counter,M,eff);
    GEffvsMR.SetPointError(counter,0,err);
    delete H;


    counter++;
  }

  TCanvas C;
  
  C.Clear();
  TH1F HFrame("HFrame","",1,0,6000);
  HFrame.GetYaxis()->SetRangeUser(0,0.40);
  HFrame.GetYaxis()->SetTitle("efficiency");
  HFrame.GetXaxis()->SetTitle("Mass    [GeV]");
  HFrame.Draw("hist");
  GEffvsMR.Draw("pesame");
  C.Print(outpath+"/Efficiency_vs_MR.png");
  C.Print(outpath+"/Efficiency_vs_MR.eps");



  gROOT->ProcessLine(".q");
}
