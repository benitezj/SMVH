#include "plotterGlobals.h"
#include "plotRToVHTruth.C"

void runZHllJResolution(TString channel, TString intag, TString outtag=""){

  TString region="presel";

  TString inpath=inputDir_+"/"+channel+"/"+intag;
  TString outpath=outputDir_+"/"+channel+"/Resolution_"+region+"_"+intag+"_"+outtag;
  system(TString("rm -rf ")+outpath);
  system(TString("mkdir ")+outpath);

  TString selection = getSelection(channel,region);

  TCanvas C;

  TGraphErrors GRMSvsMR;
  TGraphErrors GMeanvsMR;

  TGraphErrors GSigmavsMR;
  TGraphErrors GMuvsMR;

  float min=-500; 
  float max=500;
  float range=200;

  //TF1 Fit("Fit","[0]*exp(-0.5*(x-[1])**2/[2]**2)",min,max);
  TF1 Fit("Fit","gaus",min,max);
  Fit.SetParLimits(0,0.0001,1);
  Fit.SetParLimits(1,min,max);
  Fit.SetParLimits(2,10,300);

  int counter=0;
  for(long M=500;M<=5000;M+=100){
    TString sName;
    if(M<1000) sName = findMatchInDir(inpath.Data(),TString("VzZH_llqq_m0")+M);
    else sName = findMatchInDir(inpath.Data(),TString("VzZH_llqq_m")+M);
    if(! sName.Contains("VzZH")) continue;
    cout<<M<<" "<<sName<<endl;
    Sample S("sample",sName.Data(),inpath);

    TH1D* H = S.getHistoNtpFile("(vh_m[vh]-truth_m[truth_RToVH])/1000",100,-1000,1000,TCut(selection));
    //TH1D* H = S.getHistoNtpFile("(vh_m1[vh]-truth_m[truth_RToVH])/1000",100,-1000,1000,TCut(selection));//no mu-mu rescaling
    H->SetName(TString("VHMass")+M);
    H->Scale(1./H->Integral());
    H->GetXaxis()->SetTitle("m(VH) - gen. mass   [GeV]");
    H->GetYaxis()->SetTitle("");

    H->Fit(&Fit,"","",H->GetBinCenter(H->GetMaximumBin())-range,H->GetBinCenter(H->GetMaximumBin())+range);


    float mean=H->GetMean();
    float rms=H->GetRMS();
    
    std::cout<<channel<<"  M="<<M<<"  mean = "<<mean<<" rms = "<<rms<<" ; mu = "<<Fit.GetParameter(1)<<" ; sigma = "<<Fit.GetParameter(2)<<" ;"<<std::endl;
    
    GMeanvsMR.SetPoint(counter,M,mean);
    GRMSvsMR.SetPoint(counter,M,rms);

    GMuvsMR.SetPoint(counter,M,Fit.GetParameter(1));
    GSigmavsMR.SetPoint(counter,M,Fit.GetParameter(2));

    C.Clear();
    H->Draw("pe");
    C.Print(outpath+"/Mdiff_M"+M+".png");

    delete H;

    counter++;
  }


  
  TH1F HFrame("HFrame","",1,0,6000);

  C.Clear();
  HFrame.GetYaxis()->SetRangeUser(0,350);
  HFrame.GetYaxis()->SetTitle("RMS  [GeV]");
  HFrame.GetXaxis()->SetTitle("Mass  [GeV]");
  HFrame.Draw("hist");
  GRMSvsMR.Draw("pesame");
  C.Print(outpath+"/RMS_vs_M.png");
  C.Print(outpath+"/RMS_vs_M.eps");


  C.Clear();
  HFrame.GetYaxis()->SetRangeUser(-200,200);
  HFrame.GetYaxis()->SetTitle("Mean  [GeV]");
  HFrame.GetXaxis()->SetTitle("Mass  [GeV]");
  HFrame.Draw("hist");
  GMeanvsMR.Draw("pesame");
  C.Print(outpath+"/Mean_vs_M.png");
  C.Print(outpath+"/Mean_vs_M.eps");


  C.Clear();
  HFrame.GetYaxis()->SetRangeUser(0,350);
  HFrame.GetYaxis()->SetTitle("Sigma  [GeV]");
  HFrame.GetXaxis()->SetTitle("Mass  [GeV]");
  HFrame.Draw("hist");
  GSigmavsMR.Draw("pesame");
  C.Print(outpath+"/Sigma_vs_M.png");
  C.Print(outpath+"/Sigma_vs_M.eps");


  C.Clear();
  HFrame.GetYaxis()->SetRangeUser(-200,200);
  HFrame.GetYaxis()->SetTitle("Mu  [GeV]");
  HFrame.GetXaxis()->SetTitle("Mass  [GeV]");
  HFrame.Draw("hist");
  GMuvsMR.Draw("pesame");
  C.Print(outpath+"/Mu_vs_M.png");
  C.Print(outpath+"/Mu_vs_M.eps");



  gROOT->ProcessLine(".q");
}
