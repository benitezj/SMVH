#include "plottingTools.C"

#define NISOWP 7

void plotIsoEff(Sample*sample,TString channel,TString outpath){

  TCut BaseSelection;
  if(channel.CompareTo("Wmunu")==0)BaseSelection="";
  if(channel.CompareTo("Wenu")==0)BaseSelection="";

 
  TCut isoSel[NISOWP];

  if(channel.CompareTo("Wmunu")==0){
    isoSel[0]="muo_ptiso[wlnu_lMet]/muo_pt[wlnu_lMet]<0.1";
    isoSel[1]="muo_isoWP1[wlnu_lMet]==1";
    isoSel[2]="muo_isoWP2[wlnu_lMet]==1";
    isoSel[3]="muo_isoWP3[wlnu_lMet]==1";
    isoSel[4]="muo_isoWP4[wlnu_lMet]==1";
    isoSel[5]="muo_ptiso[wlnu_lMet]/muo_pt[wlnu_lMet]<0.1&&muo_etiso[wlnu_lMet]/muo_pt[wlnu_lMet]<0.1";
    isoSel[6]="muo_ptiso[wlnu_lMet]/muo_pt[wlnu_lMet]<0.04&&muo_etiso[wlnu_lMet]/muo_pt[wlnu_lMet]<0.04";
    //isoSel[7]="muo_isoWP5[wlnu_lMet]==1";
    //isoSel[8]="muo_isoWP6[wlnu_lMet]==1";
  }
  if(channel.CompareTo("Wenu")==0){
    isoSel[0]="ele_ptiso[wlnu_lMet]/ele_pt[wlnu_lMet]<0.1";
    isoSel[1]="ele_isoWP1[wlnu_lMet]==1";
    isoSel[2]="ele_isoWP2[wlnu_lMet]==1";
    isoSel[3]="ele_isoWP3[wlnu_lMet]==1";
    isoSel[4]="ele_isoWP4[wlnu_lMet]==1";
    isoSel[5]="ele_ptiso[wlnu_lMet]/ele_pt[wlnu_lMet]<0.1&&ele_etiso[wlnu_lMet]/ele_pt[wlnu_lMet]<0.1";
    isoSel[6]="ele_ptiso[wlnu_lMet]/ele_pt[wlnu_lMet]<0.04&&ele_etiso[wlnu_lMet]/ele_pt[wlnu_lMet]<0.04";
    //isoSel[7]="ele_isoWP5[wlnu_lMet]==1";
    //isoSel[8]="ele_isoWP6[wlnu_lMet]==1";
  }


  TCanvas C;
  TLine line;
  float markersize=1;
  float errThreshold=0.2;
  TH1D* HFrame;
  float effmin=0.75;
  float effmax=1.00;

  //////////////////////////
  ///Efficiency vs Lepton pT
  /////////////////////////
  int nLeppT=20; float LeppTmin=0; float LeppTmax=1000;
  TString LeppT;
  if(channel.CompareTo("Wmunu")==0) LeppT="muo_pt[wlnu_lMet]/1000";
  if(channel.CompareTo("Wenu")==0) LeppT="ele_pt[wlnu_lMet]/1000";
    
  TH1D*HLeppT=sample->getHistoNtpFile(LeppT,nLeppT,LeppTmin,LeppTmax,BaseSelection);
  HLeppT->SetName("HLeppT");
  
  TH1D*HLeppTCut[NISOWP];  
  for(int i=0;i<NISOWP;i++){
    HLeppTCut[i]= sample->getHistoNtpFile(LeppT,nLeppT,LeppTmin,LeppTmax,BaseSelection+isoSel[i]);
    HLeppTCut[i]->SetName(TString("HLeppTCut")+(long)i);
  }

  C.Clear();
  HLeppT->SetTitle("");
  HLeppT->GetXaxis()->SetTitle(" lepton pT  [GeV]");
  HLeppT->Draw("hist");
  for(int i=0;i<NISOWP;i++){
    HLeppTCut[i]->Draw("histsame");
  }
  C.Print(outpath+"/l1pT.png");

  C.Clear();

  HFrame = (TH1D*)HLeppT->Clone("EffFrame");
  HFrame->Reset();
  HFrame->GetYaxis()->SetTitle("efficiency");
  HFrame->GetYaxis()->SetRangeUser(effmin,effmax);
  HFrame->Draw("hist");

  for(int i=0;i<NISOWP;i++){    
    TGraphErrors*HLeppTEff=makeGraphRatio(HLeppTCut[i],HLeppT,errThreshold,0,0);
    HLeppTEff->GetYaxis()->SetTitle("efficiency");
    HLeppTEff->GetXaxis()->SetTitle(HLeppT->GetXaxis()->GetTitle());
    HLeppTEff->GetYaxis()->SetRangeUser(effmin,effmax);
    HLeppTEff->SetLineColor(i+1);
    HLeppTEff->SetMarkerColor(i+1);
    HLeppTEff->SetMarkerSize(markersize);
    HLeppTEff->Draw("plsame");
  }
  line.DrawLine(LeppTmin,1,LeppTmax,1);
  C.Print(outpath+"/l1pTEff.png");
  

  //////////////////////////
  ///Efficiency vs Lepton eta
  /////////////////////////
  int nLepEta=30; float LepEtamin=-3; float LepEtamax=3;
  TString LepEta;
  if(channel.CompareTo("Wmunu")==0) LepEta="muo_eta[wlnu_lMet]";
  if(channel.CompareTo("Wenu")==0) LepEta="ele_eta[wlnu_lMet]";
    
  TH1D*HLepEta=sample->getHistoNtpFile(LepEta,nLepEta,LepEtamin,LepEtamax,BaseSelection);
  HLepEta->SetName("HLepEta");
  
  TH1D*HLepEtaCut[NISOWP];  
  for(int i=0;i<NISOWP;i++){
    HLepEtaCut[i]= sample->getHistoNtpFile(LepEta,nLepEta,LepEtamin,LepEtamax,BaseSelection+isoSel[i]);
    HLepEtaCut[i]->SetName(TString("HLepEtaCut")+(long)i);
  }

  C.Clear();
  HLepEta->SetTitle("");
  HLepEta->GetXaxis()->SetTitle(" lepton eta ");
  HLepEta->Draw("hist");
  for(int i=0;i<NISOWP;i++){
    HLepEtaCut[i]->Draw("histsame");
  }
  C.Print(outpath+"/l1Eta.png");

  C.Clear();
  HFrame = (TH1D*)HLepEta->Clone("EffFrame");
  HFrame->Reset();
  HFrame->GetYaxis()->SetTitle("efficiency");
  HFrame->GetYaxis()->SetRangeUser(effmin,effmax);
  HFrame->Draw("hist");

  for(int i=0;i<NISOWP;i++){    
    TGraphErrors*HLepEtaEff=makeGraphRatio(HLepEtaCut[i],HLepEta,errThreshold,0,0);   
    HLepEtaEff->GetYaxis()->SetTitle("efficiency");
    HLepEtaEff->GetXaxis()->SetTitle(HLepEta->GetXaxis()->GetTitle());
    HLepEtaEff->GetYaxis()->SetRangeUser(effmin,effmax);
    HLepEtaEff->SetLineColor(i+1);
    HLepEtaEff->SetMarkerColor(i+1);
    HLepEtaEff->SetMarkerSize(markersize);
    HLepEtaEff->Draw("plsame");
  }
  line.DrawLine(LepEtamin,1,LepEtamax,1);
  C.Print(outpath+"/l1EtaEff.png");
  



  /////////////////////////
  ///Efficiency vs VH Mass
  /////////////////////////
  int nVHm=15; float VHmmin=0; float VHmmax=3000;
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
  HVHm->GetXaxis()->SetTitle("WH truth mass [GeV]");
  HVHm->Draw("hist");
  for(int i=0;i<NISOWP;i++){
    HVHmCut[i]->Draw("histsame");
  }
  C.Print(outpath+"/VHm.png");

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
  


}

void run1LepIsoRecommendations(TString TAG,TString channel){

  system((TString("rm -rf ")+outputDir_+"/DC14Studies/"+channel+"/IsoRecommendations_"+TAG).Data());
  system((TString("mkdir ")+outputDir_+"/DC14Studies/"+channel+"/IsoRecommendations_"+TAG).Data());  

  TString inpath=inputDir_+"/CxTupleSamples/"+channel+"/"+TAG;

  TString outpath=outputDir_+"/DC14Studies/"+channel+"/IsoRecommendations_"+TAG;
  system((TString("rm -rf ")+outpath).Data());
  system((TString("mkdir ")+outpath).Data());

  std::vector<string> samples;
  samples.push_back((findMatchInDir(inpath.Data(),"MadgraphPythia8_AU2MSTW2008LO_HVT_Wh_lvbb_500GeV_126")));
  samples.push_back((findMatchInDir(inpath.Data(),"MadgraphPythia8_AU2MSTW2008LO_HVT_Wh_lvbb_1000GeV_126")));
  samples.push_back((findMatchInDir(inpath.Data(),"MadgraphPythia8_AU2MSTW2008LO_HVT_Wh_lvbb_1500GeV_126")));
  samples.push_back((findMatchInDir(inpath.Data(),"MadgraphPythia8_AU2MSTW2008LO_HVT_Wh_lvbb_2000GeV_126")));
  samples.push_back((findMatchInDir(inpath.Data(),"MadgraphPythia8_AU2MSTW2008LO_HVT_Wh_lvbb_2500GeV_126")));

  //plot distributions with all samples merged
  std::vector<string>::iterator it = samples.begin();
  Sample sample("sample",(*it).c_str(),inpath);
  for(it++ ; it != samples.end(); it++){
    sample.addRootFiles((*it).c_str(),inpath);
  }
  
  plotIsoEff(&sample,channel,outpath);


  gROOT->ProcessLine(".q");  
}
