#include "plottingTools.C"

#define NISOWP 8

void plotIsoEff(Sample*sample,TString channel,TString outpath){

  TCut BaseSelection;
  if(channel.CompareTo("Zmm")==0)BaseSelection="60000<mm_m[zll_ll]&&mm_m[zll_ll]<120000";
  if(channel.CompareTo("Zee")==0)BaseSelection="60000<ee_m[zll_ll]&&ee_m[zll_ll]<120000";

 
  TCut isoSel[NISOWP];
  TCut isoSelL1[NISOWP];
  TCut isoSelL2[NISOWP];

  if(channel.CompareTo("Zmm")==0){
    isoSel[0]="muo_ptiso[zll_l1]/muo_pt[zll_l1]<0.1&&muo_ptiso[zll_l2]/muo_pt[zll_l2]<0.1";
    isoSel[1]="muo_isoWP1[zll_l1]==1&&muo_isoWP1[zll_l2]==1";
    isoSel[2]="muo_isoWP2[zll_l1]==1&&muo_isoWP2[zll_l2]==1";
    isoSel[3]="muo_isoWP3[zll_l1]==1&&muo_isoWP3[zll_l2]==1";
    isoSel[4]="muo_isoWP4[zll_l1]==1&&muo_isoWP4[zll_l2]==1";
    isoSel[5]="muo_isoWP5[zll_l1]==1&&muo_isoWP5[zll_l2]==1";
    isoSel[6]="muo_isoWP6[zll_l1]==1&&muo_isoWP6[zll_l2]==1";
    isoSel[7]="(muo_ptiso[zll_l1]-muo_trkpt[zll_l2]*(mm_dR[zll_ll]<0.2))/muo_pt[zll_l1]<0.1&&(muo_ptiso[zll_l2]-muo_trkpt[zll_l1]*(mm_dR[zll_ll]<0.2))/muo_pt[zll_l2]<0.1";

    isoSelL1[0]="muo_ptiso[zll_l1]/muo_pt[zll_l1]<0.1";
    isoSelL1[1]="muo_isoWP1[zll_l1]==1";
    isoSelL1[2]="muo_isoWP2[zll_l1]==1";
    isoSelL1[3]="muo_isoWP3[zll_l1]==1";
    isoSelL1[4]="muo_isoWP4[zll_l1]==1";
    isoSelL1[5]="muo_isoWP5[zll_l1]==1";
    isoSelL1[6]="muo_isoWP6[zll_l1]==1";
    isoSelL1[7]="(muo_ptiso[zll_l1]-muo_trkpt[zll_l2]*(mm_dR[zll_ll]<0.2))/muo_pt[zll_l1]<0.1";

    isoSelL2[0]="muo_ptiso[zll_l2]/muo_pt[zll_l2]<0.1";
    isoSelL2[1]="muo_isoWP1[zll_l2]==1";
    isoSelL2[2]="muo_isoWP2[zll_l2]==1";
    isoSelL2[3]="muo_isoWP3[zll_l2]==1";
    isoSelL2[4]="muo_isoWP4[zll_l2]==1";
    isoSelL2[5]="muo_isoWP5[zll_l2]==1";
    isoSelL2[6]="muo_isoWP6[zll_l2]==1";
    isoSelL2[7]="(muo_ptiso[zll_l2]-muo_trkpt[zll_l1]*(mm_dR[zll_ll]<0.2))/muo_pt[zll_l2]<0.1";

    
  }
  if(channel.CompareTo("Zee")==0){
    isoSel[0]="ele_ptiso[zll_l1]/ele_pt[zll_l1]<0.1&&ele_ptiso[zll_l2]/ele_pt[zll_l2]<0.1";
    isoSel[1]="ele_isoWP1[zll_l1]==1&&ele_isoWP1[zll_l2]==1";
    isoSel[2]="ele_isoWP2[zll_l1]==1&&ele_isoWP2[zll_l2]==1";
    isoSel[3]="ele_isoWP3[zll_l1]==1&&ele_isoWP3[zll_l2]==1";
    isoSel[4]="ele_isoWP4[zll_l1]==1&&ele_isoWP4[zll_l2]==1";
    isoSel[5]="ele_isoWP5[zll_l1]==1&&ele_isoWP5[zll_l2]==1";
    isoSel[6]="ele_isoWP6[zll_l1]==1&&ele_isoWP6[zll_l2]==1";
    isoSel[7]="(ele_ptiso[zll_l1]-ele_trkpt[zll_l2]*(ee_dR[zll_ll]<0.2))/ele_pt[zll_l1]<0.1&&(ele_ptiso[zll_l2]-ele_trkpt[zll_l1]*(ee_dR[zll_ll]<0.2))/ele_pt[zll_l2]<0.1";

    isoSelL1[0]="ele_ptiso[zll_l1]/ele_pt[zll_l1]<0.1";
    isoSelL1[1]="ele_isoWP1[zll_l1]==1";
    isoSelL1[2]="ele_isoWP2[zll_l1]==1";
    isoSelL1[3]="ele_isoWP3[zll_l1]==1";
    isoSelL1[4]="ele_isoWP4[zll_l1]==1";
    isoSelL1[5]="ele_isoWP5[zll_l1]==1";
    isoSelL1[6]="ele_isoWP6[zll_l1]==1";
    isoSelL1[7]="(ele_ptiso[zll_l1]-ele_trkpt[zll_l2]*(ee_dR[zll_ll]<0.2))/ele_pt[zll_l1]<0.1";

    isoSelL2[0]="ele_ptiso[zll_l2]/ele_pt[zll_l2]<0.1";
    isoSelL2[1]="ele_isoWP1[zll_l2]==1";
    isoSelL2[2]="ele_isoWP2[zll_l2]==1";
    isoSelL2[3]="ele_isoWP3[zll_l2]==1";
    isoSelL2[4]="ele_isoWP4[zll_l2]==1";
    isoSelL2[5]="ele_isoWP5[zll_l2]==1";
    isoSelL2[6]="ele_isoWP6[zll_l2]==1";
    isoSelL2[7]="(ele_ptiso[zll_l2]-ele_trkpt[zll_l1]*(ee_dR[zll_ll]<0.2))/ele_pt[zll_l2]<0.1";
    
  }


  TCanvas C;
  TLine line;
  float markersize=1;
  float errThreshold=0.2;
  TH1D* HFrame;
  float effmin=0.75;
  float effmax=1.00;

  //////////////////////////
  ///Efficiency vs Z Leading Lepton pT
  /////////////////////////
  int nzl1pT=20; float zl1pTmin=0; float zl1pTmax=1000;
  TString zl1pT;
  if(channel.CompareTo("Zmm")==0) zl1pT="muo_pt[mm_leg1[zll_ll]]/1000";
  if(channel.CompareTo("Zee")==0) zl1pT="ele_pt[ee_leg1[zll_ll]]/1000";
    
  TH1D*HZl1pT=sample->getHistoNtpFile(zl1pT,nzl1pT,zl1pTmin,zl1pTmax,BaseSelection);
  HZl1pT->SetName("HZl1pT");
  
  TH1D*HZl1pTCut[NISOWP];  
  for(int i=0;i<NISOWP;i++){
    HZl1pTCut[i]= sample->getHistoNtpFile(zl1pT,nzl1pT,zl1pTmin,zl1pTmax,BaseSelection+isoSelL1[i]);
    HZl1pTCut[i]->SetName(TString("HZl1pTCut")+(long)i);
  }

  C.Clear();
  HZl1pT->SetTitle("");
  HZl1pT->GetXaxis()->SetTitle("leading lepton pT [GeV]");
  HZl1pT->Draw("hist");
  for(int i=0;i<NISOWP;i++){
    HZl1pTCut[i]->Draw("histsame");
  }
  C.Print(outpath+"/zl1pT.png");
  C.Print(outpath+"/zl1pT.eps");

  C.Clear();

  HFrame = (TH1D*)HZl1pT->Clone("EffFrame");
  HFrame->Reset();
  HFrame->GetYaxis()->SetTitle("efficiency");
  HFrame->GetYaxis()->SetRangeUser(effmin,effmax);
  HFrame->Draw("hist");

  for(int i=0;i<NISOWP;i++){    
    TGraphErrors*HZl1pTEff=makeGraphRatio(HZl1pTCut[i],HZl1pT,errThreshold,0,0);
    HZl1pTEff->GetYaxis()->SetTitle("efficiency");
    HZl1pTEff->GetXaxis()->SetTitle(HZl1pT->GetXaxis()->GetTitle());
    HZl1pTEff->GetYaxis()->SetRangeUser(effmin,effmax);
    HZl1pTEff->SetLineColor(i+1);
    HZl1pTEff->SetMarkerColor(i+1);
    HZl1pTEff->SetMarkerSize(markersize);
    HZl1pTEff->Draw("plsame");
  }
  line.DrawLine(zl1pTmin,1,zl1pTmax,1);
  C.Print(outpath+"/zl1pTEff.png");
  C.Print(outpath+"/zl1pTEff.eps");
  

  //////////////////////////
  ///Efficiency vs Z Leading Lepton eta
  /////////////////////////
  int nzl1Eta=30; float zl1Etamin=-3; float zl1Etamax=3;
  TString zl1Eta;
  if(channel.CompareTo("Zmm")==0) zl1Eta="muo_eta[mm_leg1[zll_ll]]";
  if(channel.CompareTo("Zee")==0) zl1Eta="ele_eta[ee_leg1[zll_ll]]";
    
  TH1D*HZl1Eta=sample->getHistoNtpFile(zl1Eta,nzl1Eta,zl1Etamin,zl1Etamax,BaseSelection);
  HZl1Eta->SetName("HZl1Eta");
  
  TH1D*HZl1EtaCut[NISOWP];  
  for(int i=0;i<NISOWP;i++){
    HZl1EtaCut[i]= sample->getHistoNtpFile(zl1Eta,nzl1Eta,zl1Etamin,zl1Etamax,BaseSelection+isoSelL1[i]);
    HZl1EtaCut[i]->SetName(TString("HZl1EtaCut")+(long)i);
  }

  C.Clear();
  HZl1Eta->SetTitle("");
  HZl1Eta->GetXaxis()->SetTitle("leading lepton eta ");
  HZl1Eta->Draw("hist");
  for(int i=0;i<NISOWP;i++){
    HZl1EtaCut[i]->Draw("histsame");
  }
  C.Print(outpath+"/zl1Eta.png");
  C.Print(outpath+"/zl1Eta.eps");

  C.Clear();
  HFrame = (TH1D*)HZl1Eta->Clone("EffFrame");
  HFrame->Reset();
  HFrame->GetYaxis()->SetTitle("efficiency");
  HFrame->GetYaxis()->SetRangeUser(effmin,effmax);
  HFrame->Draw("hist");

  for(int i=0;i<NISOWP;i++){    
    TGraphErrors*HZl1EtaEff=makeGraphRatio(HZl1EtaCut[i],HZl1Eta,errThreshold,0,0);   
    HZl1EtaEff->GetYaxis()->SetTitle("efficiency");
    HZl1EtaEff->GetXaxis()->SetTitle(HZl1Eta->GetXaxis()->GetTitle());
    HZl1EtaEff->GetYaxis()->SetRangeUser(effmin,effmax);
    HZl1EtaEff->SetLineColor(i+1);
    HZl1EtaEff->SetMarkerColor(i+1);
    HZl1EtaEff->SetMarkerSize(markersize);
    HZl1EtaEff->Draw("plsame");
  }
  line.DrawLine(zl1Etamin,1,zl1Etamax,1);
  C.Print(outpath+"/zl1EtaEff.png");
  C.Print(outpath+"/zl1EtaEff.eps");
  



  //////////////////////////
  ///Efficiency vs Z SubLeading Lepton pT
  /////////////////////////
  int nzl2pT=20; float zl2pTmin=0; float zl2pTmax=1000;
  TString zl2pT;
  if(channel.CompareTo("Zmm")==0) zl2pT="muo_pt[mm_leg2[zll_ll]]/1000";
  if(channel.CompareTo("Zee")==0) zl2pT="ele_pt[ee_leg2[zll_ll]]/1000";
    
  TH1D*HZl2pT=sample->getHistoNtpFile(zl2pT,nzl2pT,zl2pTmin,zl2pTmax,BaseSelection);
  HZl2pT->SetName("HZl2pT");
  
  TH1D*HZl2pTCut[NISOWP];  
  for(int i=0;i<NISOWP;i++){
    HZl2pTCut[i]= sample->getHistoNtpFile(zl2pT,nzl2pT,zl2pTmin,zl2pTmax,BaseSelection+isoSelL2[i]);
    HZl2pTCut[i]->SetName(TString("HZl2pTCut")+(long)i);
  }

  C.Clear();
  HZl2pT->SetTitle("");
  HZl2pT->GetXaxis()->SetTitle("subleading lepton pT [GeV]");
  HZl2pT->Draw("hist");
  for(int i=0;i<NISOWP;i++){
    HZl2pTCut[i]->Draw("histsame");
  }
  C.Print(outpath+"/zl2pT.png");
  C.Print(outpath+"/zl2pT.eps");

  C.Clear();

  HFrame = (TH1D*)HZl2pT->Clone("EffFrame");
  HFrame->Reset();
  HFrame->GetYaxis()->SetTitle("efficiency");
  HFrame->GetYaxis()->SetRangeUser(effmin,effmax);
  HFrame->Draw("hist");

  for(int i=0;i<NISOWP;i++){    
    TGraphErrors*HZl2pTEff=makeGraphRatio(HZl2pTCut[i],HZl2pT,errThreshold,0,0);
    HZl2pTEff->GetYaxis()->SetTitle("efficiency");
    HZl2pTEff->GetXaxis()->SetTitle(HZl2pT->GetXaxis()->GetTitle());
    HZl2pTEff->GetYaxis()->SetRangeUser(effmin,effmax);
    HZl2pTEff->SetLineColor(i+1);
    HZl2pTEff->SetMarkerColor(i+1);
    HZl2pTEff->SetMarkerSize(markersize);
    HZl2pTEff->Draw("plsame");
  }
  line.DrawLine(zl2pTmin,1,zl2pTmax,1);
  C.Print(outpath+"/zl2pTEff.png");
  C.Print(outpath+"/zl2pTEff.eps");
  

  //////////////////////////
  ///Efficiency vs Z SubLeading Lepton eta
  /////////////////////////
  int nzl2Eta=30; float zl2Etamin=-3; float zl2Etamax=3;
  TString zl2Eta;
  if(channel.CompareTo("Zmm")==0) zl2Eta="muo_eta[mm_leg2[zll_ll]]";
  if(channel.CompareTo("Zee")==0) zl2Eta="ele_eta[ee_leg2[zll_ll]]";
    
  TH1D*HZl2Eta=sample->getHistoNtpFile(zl2Eta,nzl2Eta,zl2Etamin,zl2Etamax,BaseSelection);
  HZl2Eta->SetName("HZl2Eta");
  
  TH1D*HZl2EtaCut[NISOWP];  
  for(int i=0;i<NISOWP;i++){
    HZl2EtaCut[i]= sample->getHistoNtpFile(zl2Eta,nzl2Eta,zl2Etamin,zl2Etamax,BaseSelection+isoSelL2[i]);
    HZl2EtaCut[i]->SetName(TString("HZl2EtaCut")+(long)i);
  }

  C.Clear();
  HZl2Eta->SetTitle("");
  HZl2Eta->GetXaxis()->SetTitle("subleading lepton eta ");
  HZl2Eta->Draw("hist");
  for(int i=0;i<NISOWP;i++){
    HZl2EtaCut[i]->Draw("histsame");
  }
  C.Print(outpath+"/zl2Eta.png");
  C.Print(outpath+"/zl2Eta.eps");

  C.Clear();
  HFrame = (TH1D*)HZl2Eta->Clone("EffFrame");
  HFrame->Reset();
  HFrame->GetYaxis()->SetTitle("efficiency");
  HFrame->GetYaxis()->SetRangeUser(effmin,effmax);
  HFrame->Draw("hist");

  for(int i=0;i<NISOWP;i++){    
    TGraphErrors*HZl2EtaEff=makeGraphRatio(HZl2EtaCut[i],HZl2Eta,errThreshold,0,0);   
    HZl2EtaEff->GetYaxis()->SetTitle("efficiency");
    HZl2EtaEff->GetXaxis()->SetTitle(HZl2Eta->GetXaxis()->GetTitle());
    HZl2EtaEff->GetYaxis()->SetRangeUser(effmin,effmax);
    HZl2EtaEff->SetLineColor(i+1);
    HZl2EtaEff->SetMarkerColor(i+1);
    HZl2EtaEff->SetMarkerSize(markersize);
    HZl2EtaEff->Draw("plsame");
  }
  line.DrawLine(zl2Etamin,1,zl2Etamax,1);
  C.Print(outpath+"/zl2EtaEff.png");
  C.Print(outpath+"/zl2EtaEff.eps");
  



  //////////////////////////
  ///Efficiency vs Z pT
  /////////////////////////
  int nzpT=20; float zpTmin=0; float zpTmax=2000;
  TString zpT;
  if(channel.CompareTo("Zmm")==0) zpT="mm_pt[zll_ll]/1000";
  if(channel.CompareTo("Zee")==0) zpT="ee_pt[zll_ll]/1000";
    
  TH1D*HZpT=sample->getHistoNtpFile(zpT,nzpT,zpTmin,zpTmax,BaseSelection);
  HZpT->SetName("HZpT");
  
  TH1D*HZpTCut[NISOWP];  
  for(int i=0;i<NISOWP;i++){
    HZpTCut[i]= sample->getHistoNtpFile(zpT,nzpT,zpTmin,zpTmax,BaseSelection+isoSel[i]);
    HZpTCut[i]->SetName(TString("HZpTCut")+(long)i);
  }

  C.Clear();
  HZpT->SetTitle("");
  HZpT->GetXaxis()->SetTitle("Z pT [GeV]");
  HZpT->Draw("hist");
  for(int i=0;i<NISOWP;i++){
    HZpTCut[i]->Draw("histsame");
  }
  C.Print(outpath+"/zpT.png");
  C.Print(outpath+"/zpT.eps");

  C.Clear();
    
  HFrame = (TH1D*)HZpT->Clone("EffFrame");
  HFrame->Reset();
  HFrame->GetYaxis()->SetTitle("efficiency");
  HFrame->GetYaxis()->SetRangeUser(effmin,effmax);
  HFrame->Draw("hist");
    
  for(int i=0;i<NISOWP;i++){    
    TGraphErrors*HZpTEff=makeGraphRatio(HZpTCut[i],HZpT,errThreshold,0,0);
    HZpTEff->GetYaxis()->SetTitle("efficiency");
    HZpTEff->GetYaxis()->SetRangeUser(effmin,effmax);
    HZpTEff->GetXaxis()->SetTitle(HZpT->GetXaxis()->GetTitle());
    HZpTEff->GetXaxis()->SetRangeUser(zpTmin,zpTmax);
    HZpTEff->SetLineColor(i+1);
    HZpTEff->SetMarkerColor(i+1);
    HZpTEff->SetMarkerSize(markersize);
    HZpTEff->Draw("plsame");
  }
  line.DrawLine(zpTmin,1,zpTmax,1);
  C.Print(outpath+"/zpTEff.png");
  C.Print(outpath+"/zpTEff.eps");
  


  //////////////////////////
  ///Efficiency vs Z eta
  /////////////////////////
  int nzEta=20; float zEtamin=-4; float zEtamax=4;
  TString zEta;
  if(channel.CompareTo("Zmm")==0) zEta="mm_eta[zll_ll]";
  if(channel.CompareTo("Zee")==0) zEta="ee_eta[zll_ll]";
    
  TH1D*HZEta=sample->getHistoNtpFile(zEta,nzEta,zEtamin,zEtamax,BaseSelection);
  HZEta->SetName("HZEta");
  
  TH1D*HZEtaCut[NISOWP];  
  for(int i=0;i<NISOWP;i++){
    HZEtaCut[i]= sample->getHistoNtpFile(zEta,nzEta,zEtamin,zEtamax,BaseSelection+isoSel[i]);
    HZEtaCut[i]->SetName(TString("HZEtaCut")+(long)i);
  }

  C.Clear();
  HZEta->SetTitle("");
  HZEta->GetXaxis()->SetTitle("Z eta");
  HZEta->Draw("hist");
  for(int i=0;i<NISOWP;i++){
    HZEtaCut[i]->Draw("histsame");
  }
  C.Print(outpath+"/zEta.png");  
  C.Print(outpath+"/zEta.eps");

  C.Clear();
  HFrame = (TH1D*)HZEta->Clone("EffFrame");
  HFrame->Reset();
  HFrame->GetYaxis()->SetTitle("efficiency");
  HFrame->GetYaxis()->SetRangeUser(effmin,effmax);
  HFrame->Draw("hist");
  for(int i=0;i<NISOWP;i++){    
    TGraphErrors*HZEtaEff=makeGraphRatio(HZEtaCut[i],HZEta,errThreshold,0,0);
    HZEtaEff->GetYaxis()->SetTitle("efficiency");
    HZEtaEff->GetXaxis()->SetTitle(HZEta->GetXaxis()->GetTitle());
    HZEtaEff->GetYaxis()->SetRangeUser(effmin,effmax);
    HZEtaEff->SetLineColor(i+1);
    HZEtaEff->SetMarkerColor(i+1);
    HZEtaEff->SetMarkerSize(markersize);
    HZEtaEff->Draw("plsame");
  }
  line.DrawLine(zEtamin,1,zEtamax,1);
  C.Print(outpath+"/zEtaEff.png");
  C.Print(outpath+"/zEtaEff.eps");
  



  /////////////////////////
  ///Efficiency vs VH Mass
  /////////////////////////
  int nVHm=30; float VHmmin=0; float VHmmax=3000;
  TString VHm="truth_m[truth_RToVH]/1000";

  TH1D*HVHm=sample->getHistoNtpFile(VHm,nVHm,VHmmin,VHmmax,BaseSelection);
  HVHm->SetName("HVHm");
  
  TH1D*HVHmCut[NISOWP];  
  for(int i=0;i<NISOWP;i++){
    HVHmCut[i]= sample->getHistoNtpFile(VHm,nVHm,VHmmin,VHmmax,BaseSelection+isoSel[i]);
    HVHmCut[i]->SetName(TString("HVHmCut")+(long)i);
  }

  C.Clear();
  HVHm->SetTitle("");
  HVHm->GetXaxis()->SetTitle("ZH truth mass [GeV]");
  HVHm->Draw("hist");
  for(int i=0;i<NISOWP;i++){
    HVHmCut[i]->Draw("histsame");
  }
  C.Print(outpath+"/VHm.png");
  C.Print(outpath+"/VHm.eps");

  C.Clear();
  HFrame = (TH1D*)HVHm->Clone("EffFrame");
  HFrame->Reset();
  HFrame->GetYaxis()->SetTitle("efficiency");
  HFrame->GetYaxis()->SetRangeUser(effmin,effmax);
  HFrame->Draw("hist");
  for(int i=0;i<NISOWP;i++){    
    TGraph*HVHmEff=makeGraphRatio(HVHmCut[i],HVHm,errThreshold,0,0);
    HVHmEff->GetYaxis()->SetTitle("efficiency");
    HVHmEff->GetXaxis()->SetTitle(HVHm->GetXaxis()->GetTitle());
    HVHmEff->GetYaxis()->SetRangeUser(effmin,effmax);
    HVHmEff->SetMarkerSize(markersize);
    HVHmEff->SetMarkerColor(i+1);
    HVHmEff->SetLineColor(i+1);
    HVHmEff->Draw("plsame");
  }
  line.DrawLine(VHmmin,1,VHmmax,1);
  C.Print(outpath+"/VHmEff.png");
  C.Print(outpath+"/VHmEff.eps");
  


}

void run2LepIsoRecommendations(TString TAG,TString channel,TString outtag=""){

  system((TString("rm -rf ")+outputDir_+"/DC14Studies/"+channel+"/IsoRecommendations_"+TAG).Data());
  system((TString("mkdir ")+outputDir_+"/DC14Studies/"+channel+"/IsoRecommendations_"+TAG).Data());  

  TString inpath=inputDir_+"/"+channel+"/"+TAG;

  TString outpath=outputDir_+"/"+channel+"/IsoRecommendations_"+TAG+"_"+outtag;
  system((TString("rm -rf ")+outpath).Data());
  system((TString("mkdir ")+outpath).Data());


  std::vector<string> samples;
  samples.push_back((findMatchInDir(inpath.Data(),"MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_500GeV_126")));
  samples.push_back((findMatchInDir(inpath.Data(),"MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_1000GeV_126")));
  samples.push_back((findMatchInDir(inpath.Data(),"MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_1500GeV_126")));
  samples.push_back((findMatchInDir(inpath.Data(),"MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_2000GeV_126")));
  samples.push_back((findMatchInDir(inpath.Data(),"MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_2500GeV_126")));

  //plot distributions with all samples merged
  std::vector<string>::iterator it = samples.begin();
  Sample sample("sample",(*it).c_str(),inpath);
  sample.setNtupleName("tuple");
  for(it++ ; it != samples.end(); it++){
    sample.addRootFiles((*it).c_str(),inpath);
  }
  
  plotIsoEff(&sample,channel,outpath);


  gROOT->ProcessLine(".q");  
}
