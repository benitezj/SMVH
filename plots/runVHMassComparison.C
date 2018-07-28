#include "plotterGlobals.h"
#include "plottingTools.C"


void drawMeanRMS(TH1D*H1,TH1D*H2){
  TLatex text;
  text.SetTextSize(0.04);
  char TXT[100];

  float X=0.25;
  float Y=0.85;

  text.SetTextColor(H1->GetLineColor());
  sprintf(TXT,"mean = %.0f",H1->GetMean());
  text.DrawTextNDC(X,Y,TXT);
  sprintf(TXT,"rms = %.0f",H1->GetRMS());
  text.DrawTextNDC(X,Y-0.05,TXT);

  text.SetTextColor(H2->GetLineColor());
  sprintf(TXT,"mean = %.0f",H2->GetMean());
  text.DrawTextNDC(X,Y-0.15,TXT);
  sprintf(TXT,"rms = %.0f",H2->GetRMS());
  text.DrawTextNDC(X,Y-0.20,TXT);

}

void runVHMassComparison(TString channel,TString intag, long mass=1900){  
    
  TString inpath=inputDir_+"/"+channel+"/"+intag;
  TString sampleName=TString("VzZH_llqq_m")+mass;
  Sample * S = new Sample("S",findMatchInDir(inpath.Data(),sampleName).c_str(),inpath); 

  ///////////Selection should be synched
  TString selection="eve_mc_w*(fatjet_pt[vh_h[vh]]>200000)*(70000<fatjet_m[vh_h[vh]]&&fatjet_m[vh_h[vh]]<140000)";
  if(channel.CompareTo("ZHmmJ")==0)
    selection+=TString("*")+"(60000.<mm_m[vh_v[vh]]&&mm_m[vh_v[vh]]<120000.)";
  else if(channel.CompareTo("ZHeeJ")==0) 
    selection+=TString("*")+"(60000.<ee_m[vh_v[vh]]&&ee_m[vh_v[vh]]<120000.)";
  else {cout <<"Wrong channel"<<endl; return;}

  TString outpath=outputDir_+"/VHMassComparison/"+channel+"_"+intag+"_"+sampleName;
  system(TString("rm -rf ")+outpath);
  system(TString("mkdir ")+outpath);
  
  TCanvas C;
  
  int nbins=50; float xmin=mass-1500, xmax=mass+1000;
  TH1D * Hzhcorr=S->getHistoNtpFile("vh_m[vh]/1000",nbins,xmin,xmax,TCut(selection.Data()));
  Hzhcorr->SetName("Hzhcorr");
  TH1D * Huncorr=S->getHistoNtpFile("vh_m1[vh]/1000",nbins,xmin,xmax,TCut(selection.Data()));
  Huncorr->SetName("Huncorr");
  TH1D * Hhcorr=S->getHistoNtpFile("vh_m2[vh]/1000",nbins,xmin,xmax,TCut(selection.Data()));
  Hhcorr->SetName("Hhcorr");
  TH1D * Hzcorr=S->getHistoNtpFile("vh_m3[vh]/1000",nbins,xmin,xmax,TCut(selection.Data()));
  Hzcorr->SetName("Hzcorr");

  Hzhcorr->Scale(1./Hzhcorr->Integral()); 
  Huncorr->Scale(1./Huncorr->Integral());
  Hhcorr->Scale(1./Hhcorr->Integral());
  Hzcorr->Scale(1./Hzcorr->Integral());

  Huncorr->SetLineColor(1);
  Hzhcorr->SetLineColor(2);
  Hhcorr->SetLineColor(2);
  Hzcorr->SetLineColor(2);

  Huncorr->SetMarkerColor(1);
  Hzhcorr->SetMarkerColor(2);
  Hhcorr->SetMarkerColor(2);
  Hzcorr->SetMarkerColor(2);

  Huncorr->SetLineWidth(2);
  Hzhcorr->SetLineWidth(2);
  Hhcorr->SetLineWidth(2);
  Hzcorr->SetLineWidth(2);


  Huncorr->GetYaxis()->SetRangeUser(0,1.3*Huncorr->GetBinContent(Huncorr->GetMaximumBin()));
  Huncorr->GetYaxis()->SetTitle("Unit Normalization");
  Huncorr->GetXaxis()->SetTitle("ZH mass    [GeV]");

  C.Clear();
  Huncorr->Draw("hist");
  Hhcorr->Draw("histsame");
  drawMeanRMS(Huncorr,Hhcorr);
  C.Print(outpath+"/vhmass_hcorr.png");

  C.Clear();
  Huncorr->Draw("hist");
  Hzcorr->Draw("histsame");
  drawMeanRMS(Huncorr,Hzcorr);
  C.Print(outpath+"/vhmass_zcorr.png");

  C.Clear();
  Huncorr->Draw("hist");
  Hzhcorr->Draw("histsame");
  drawMeanRMS(Huncorr,Hzhcorr);
  C.Print(outpath+"/vhmass_zhcorr.png");



  gROOT->ProcessLine(".q");
}
