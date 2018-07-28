#include "plottingTools.C"

void drawCut1D(int cuttype, TH1D* H){
  if(cuttype == 0 || cuttype == 1 ){
    float isocut=0.1;
    TLine cutline;
    cutline.SetLineColor(2);
    cutline.SetLineStyle(4001);
    cutline.DrawLine(isocut,0,isocut,H->GetMaximum());
  }
    
}
void drawCut2D(int cuttype, TH2D* H){
  if(cuttype == 0 || cuttype == 1  ){
    float isocut=0.1;
    TLine cutline;
    cutline.SetLineColor(2);
    cutline.SetLineStyle(4001);
    cutline.DrawLine(H->GetXaxis()->GetXmin(),isocut,H->GetXaxis()->GetXmax(),isocut);
  }
    
}

void plot2LepIsoStudy(Sample*sample,int channel,int cutType,TString outpath){
  system((TString("rm -rf ")+outpath).Data());
  system((TString("mkdir ")+outpath).Data());

  int   ndR=50;
  float dRmin=0.;
  float dRmax=2.5;

  int   niso=60;
  float isomin=0.;
  float isomax=3.;

  TString isovarLeg1="";
  TString isovarLeg2="";
  TCut isoSel="";


  if(cutType == 0){
    //Nominal isolation
    if(channel==1){
      isovarLeg1="muo_ptiso[zll_l1]/muo_pt[zll_l1]";
      isovarLeg2="muo_ptiso[zll_l2]/muo_pt[zll_l2]";
    }
    if(channel==2){
      isovarLeg1="ele_ptiso[zll_l1]/ele_pt[zll_l1]";
      isovarLeg2="ele_ptiso[zll_l2]/ele_pt[zll_l2]";
    }
    isoSel = TCut(isovarLeg1+"<0.1")+TCut(isovarLeg2+"<0.1");
  }
  if(cutType == 1){
    //Here remove pT of second lepton from first lepton isolation
    if(channel==1){
      isovarLeg1="(muo_ptiso[zll_l1]-muo_trkpt[zll_l2]*(mm_dR[zll_ll]<0.2))/muo_pt[zll_l1]";
      isovarLeg2="(muo_ptiso[zll_l2]-muo_trkpt[zll_l1]*(mm_dR[zll_ll]<0.2))/muo_pt[zll_l2]";
    }
    if(channel==2){
      isovarLeg1="(ele_ptiso[zll_l1]-ele_trkpt[zll_l2]*(ee_dR[zll_ll]<0.2))/ele_pt[zll_l1]";
      isovarLeg2="(ele_ptiso[zll_l2]-ele_trkpt[zll_l1]*(ee_dR[zll_ll]<0.2))/ele_pt[zll_l2]";
    }
    isoSel = TCut(isovarLeg1+"<0.1")+TCut(isovarLeg2+"<0.1");
  }


  TCanvas C;
  
  //////////////////////
  ///Draw the isolation vs dR for Leading Lepton
  /////////////////////
  TH2D*HIsoVsDR_leg1=0;
  if(channel==1)HIsoVsDR_leg1 = sample->getHistoNtpFile("mm_dR[zll_ll]",ndR,dRmin,dRmax,
							isovarLeg1,niso,isomin,isomax);
  if(channel==2)HIsoVsDR_leg1 = sample->getHistoNtpFile("ee_dR[zll_ll]",ndR,dRmin,dRmax,
							isovarLeg1,niso,isomin,isomax);

  HIsoVsDR_leg1->SetName("HIsoVsDR_leg1");
  HIsoVsDR_leg1->SetTitle("Leading Lepton");
  C.Clear();
  HIsoVsDR_leg1->GetYaxis()->SetTitle("Lead lepton relative Iso.");
  HIsoVsDR_leg1->GetXaxis()->SetTitle("deltaR");
  HIsoVsDR_leg1->Draw("colz");
  drawCut2D(cutType,HIsoVsDR_leg1);
  C.SetLogz(1);
  C.Print(outpath+"/IsoVsDR_leg1.png");
  C.SetLogz(0);


  //////////////////////
  ///Draw the isolation vs dR for SubLeading Lepton
  /////////////////////
  TH2D*HIsoVsDR_leg2=0;
  if(channel==1) HIsoVsDR_leg2=sample->getHistoNtpFile("mm_dR[zll_ll]",ndR,dRmin,dRmax,
						       isovarLeg2,niso,isomin,isomax);
  
  if(channel==2) HIsoVsDR_leg2=sample->getHistoNtpFile("ee_dR[zll_ll]",ndR,dRmin,dRmax,
						       isovarLeg2,niso,isomin,isomax);
  
  HIsoVsDR_leg2->SetName("HIsoVsDR_leg2");
  HIsoVsDR_leg2->SetTitle("Subleading Lepton");
  C.Clear();
  HIsoVsDR_leg2->GetYaxis()->SetTitle("Sublead lepton relative Iso.");
  HIsoVsDR_leg2->GetXaxis()->SetTitle("deltaR");
  HIsoVsDR_leg2->Draw("colz");
  drawCut2D(cutType,HIsoVsDR_leg2);
  C.SetLogz(1);
  C.Print(outpath+"/IsoVsDR_leg2.png");
  C.SetLogz(0);
  

  /////////////////////////////////////////
  //Draw the isolation distributions
  ////////////////////////////////////////
  TH1D*HIso_leg1 = sample->getHistoNtpFile(isovarLeg1,niso,isomin,isomax);
  HIso_leg1->SetName("HIso_leg1");
  HIso_leg1->SetTitle("Leading Lepton");
  C.Clear();
  HIso_leg1->GetYaxis()->SetTitle("# of events");
  HIso_leg1->GetXaxis()->SetTitle("relative isolation");
  HIso_leg1->SetFillColor(4);
  HIso_leg1->Draw("hist");
  drawCut1D(cutType,HIso_leg1);
  C.Print(outpath+"/Iso_leg1.png");
  C.SetLogy(1);
  C.Print(outpath+"/Iso_leg1.log.png");
  C.SetLogy(0);
  
  TH1D*HIso_leg2 = sample->getHistoNtpFile(isovarLeg2,niso,isomin,isomax);
  HIso_leg2->SetName("HIso_leg2");
  HIso_leg2->SetTitle("Leading Lepton");
  C.Clear();
  HIso_leg2->GetYaxis()->SetTitle("# of events");
  HIso_leg2->GetXaxis()->SetTitle("relative isolation");
  HIso_leg2->SetFillColor(4);
  HIso_leg2->Draw("hist");
  drawCut1D(cutType,HIso_leg2);
  C.Print(outpath+"/Iso_leg2.png");
  C.SetLogy(1);
  C.Print(outpath+"/Iso_leg2.log.png");
  C.SetLogy(0);


  //////////////////////////
  ///Efficiency vs Z p
  /////////////////////////
  int nzp=30; float zpmin=0; float zpmax=3000;
  TH1D*HZp=0;
  if(channel==1) HZp=sample->getHistoNtpFile("mm_p[zll_ll]/1000",nzp,zpmin,zpmax);
  if(channel==2) HZp=sample->getHistoNtpFile("ee_p[zll_ll]/1000",nzp,zpmin,zpmax);
  HZp->SetName("HZp");
  
  TH1D*HZpCut=0;
  if(channel==1) HZpCut= sample->getHistoNtpFile("mm_p[zll_ll]/1000",nzp,zpmin,zpmax,isoSel);
  if(channel==2) HZpCut= sample->getHistoNtpFile("ee_p[zll_ll]/1000",nzp,zpmin,zpmax,isoSel);
  HZpCut->SetName("HZpCut");

  C.Clear();
  HZp->SetTitle("");
  HZp->GetXaxis()->SetTitle("Z reco. momentum   [GeV]");
  HZp->Draw("hist");
  HZpCut->Draw("histsame");
  C.Print(outpath+"/ll_zp.png");

  TLine line;
  C.Clear();
  TH1F*HZpEff=makeHistRatio(HZpCut,HZp);
  HZpEff->GetYaxis()->SetTitle("efficiency");
  HZpEff->GetXaxis()->SetTitle(HZp->GetXaxis()->GetTitle());
  HZpEff->GetYaxis()->SetRangeUser(0,1.2);
  HZpEff->Draw("histpe");
  line.DrawLine(zpmin,1,zpmax,1);
  C.Print(outpath+"/ll_zpEff.png");
  


  //////////////////////////
  ///Efficiency vs Z pT
  /////////////////////////
  int nzpT=30; float zpTmin=0; float zpTmax=3000;
  TH1D*HZpT=0;
  if(channel==1) HZpT=sample->getHistoNtpFile("mm_pt[zll_ll]/1000",nzpT,zpTmin,zpTmax);
  if(channel==2) HZpT=sample->getHistoNtpFile("ee_pt[zll_ll]/1000",nzpT,zpTmin,zpTmax);
  HZpT->SetName("HZpT");
  
  TH1D*HZpTCut=0;
  if(channel==1) HZpTCut= sample->getHistoNtpFile("mm_pt[zll_ll]/1000",nzpT,zpTmin,zpTmax,isoSel);
  if(channel==2) HZpTCut= sample->getHistoNtpFile("ee_pt[zll_ll]/1000",nzpT,zpTmin,zpTmax,isoSel);
  HZpTCut->SetName("HZpTCut");

  C.Clear();
  HZpT->SetTitle("");
  HZpT->GetXaxis()->SetTitle("Z pT [GeV]");
  HZpT->Draw("hist");
  HZpTCut->Draw("histsame");
  C.Print(outpath+"/ll_zpT.png");

  TLine line;
  C.Clear();
  TH1F*HZpTEff=makeHistRatio(HZpTCut,HZpT);
  HZpTEff->GetYaxis()->SetTitle("efficiency");
  HZpTEff->GetXaxis()->SetTitle(HZpT->GetXaxis()->GetTitle());
  HZpTEff->GetYaxis()->SetRangeUser(0,1.2);
  HZpTEff->Draw("histpe");
  line.DrawLine(zpTmin,1,zpTmax,1);
  C.Print(outpath+"/ll_zpTEff.png");
  

  //////////////////////////
  ///Efficiency vs Z eta
  /////////////////////////
  int nzeta=60; float zetamin=-3; float zetamax=3;
  TH1D*HZeta=0;
  if(channel==1) HZeta=sample->getHistoNtpFile("mm_eta[zll_ll]",nzeta,zetamin,zetamax);
  if(channel==2) HZeta=sample->getHistoNtpFile("ee_eta[zll_ll]",nzeta,zetamin,zetamax);
  HZeta->SetName("HZeta");
  
  TH1D*HZetaCut=0;
  if(channel==1) HZetaCut= sample->getHistoNtpFile("mm_eta[zll_ll]",nzeta,zetamin,zetamax,isoSel);
  if(channel==2) HZetaCut= sample->getHistoNtpFile("ee_eta[zll_ll]",nzeta,zetamin,zetamax,isoSel);
  HZetaCut->SetName("HZetaCut");

  C.Clear();
  HZeta->SetTitle("");
  HZeta->GetXaxis()->SetTitle("#eta_Z ");
  HZeta->Draw("hist");
  HZetaCut->Draw("histsame");
  C.Print(outpath+"/ll_zeta.png");

  TLine line;
  C.Clear();
  TH1F*HZetaEff=makeHistRatio(HZetaCut,HZeta);
  HZetaEff->GetYaxis()->SetTitle("efficiency");
  HZetaEff->GetXaxis()->SetTitle(HZeta->GetXaxis()->GetTitle());
  HZetaEff->GetYaxis()->SetRangeUser(0,1.2);
  HZetaEff->Draw("histpe");
  line.DrawLine(zetamin,1,zetamax,1);
  C.Print(outpath+"/ll_zetaEff.png");
  


  /////////////////////////////////
  //Draw the correlation between inner track pT and final pT value
  //////////////////////////////////
  TH2D*HTrkPtVsPt_leg1=0;
  if(channel == 1) HTrkPtVsPt_leg1=sample->getHistoNtpFile("muo_pt[zll_l1]/1000",100,0,1500,
							   "muo_trkpt[zll_l1]/1000",100,0,1500);
  
  if(channel == 2) HTrkPtVsPt_leg1=sample->getHistoNtpFile("ele_pt[zll_l1]/1000",100,0,1500,
							   "ele_trkpt[zll_l1]/1000",100,0,1500);
  
  HTrkPtVsPt_leg1->SetName("HTrkPtVsPt_leg1");
  HTrkPtVsPt_leg1->SetTitle("Leading Lepton");
  C.Clear();
  HTrkPtVsPt_leg1->GetYaxis()->SetTitle("Inner Track pT  [GeV]");
  HTrkPtVsPt_leg1->GetXaxis()->SetTitle("Lepton pT  [GeV]");
  HTrkPtVsPt_leg1->Draw("colz");
  C.SetLogz(1);
  C.Print(outpath+"/TrkPtVsPt_leg1.png");
  C.SetLogz(0);
  

  //////////////////////////
  ///Z Mass distribution and the cut efficiency
  /////////////////////////
  int nmass=100; float massmin=50; float massmax=150;
  TH1D*HMass=0;
  if(channel==1) HMass=sample->getHistoNtpFile("mm_m[zll_ll]/1000",nmass,massmin,massmax);
  if(channel==2) HMass=sample->getHistoNtpFile("ee_m[zll_ll]/1000",nmass,massmin,massmax);
  HMass->SetName("HMass");

  TH1D*HMassCut=0;
  if(channel==1) HMassCut= sample->getHistoNtpFile("mm_m[zll_ll]/1000",nmass,massmin,massmax,isoSel);
  if(channel==2) HMassCut= sample->getHistoNtpFile("ee_m[zll_ll]/1000",nmass,massmin,massmax,isoSel);
  HMassCut->SetName("HMassCut");

  C.Clear();
  float eff=HMassCut->Integral(0,nmass+1)/HMass->Integral(0,nmass+1);
  char title[100];
  sprintf(title,"CutType=%d, Efficiency=%.3f",cutType,eff);
  HMass->SetTitle(title);
  HMass->GetXaxis()->SetTitle("m(ll)    [GeV]");
  HMass->Draw("hist");
  HMassCut->Draw("histsame");
  C.Print(outpath+"/ll_mass.png");
  
  cout<<eff<<" : "<<sample->GetTitle()<<endl;

}

void run2LepIsoStudy(TString TAG,int channel){

  TString ChName="";
  if(channel==1) ChName="Zmm";
  if(channel==2) ChName="Zee";

  system((TString("rm -rf ")+outputDir_+"/DC14Studies/"+ChName+"/IsoStudy_"+TAG).Data());
  system((TString("mkdir ")+outputDir_+"/DC14Studies/"+ChName+"/IsoStudy_"+TAG).Data());  

  TString inpath=inputDir_+"/CxTupleSamples/"+ChName+"/"+TAG;

  std::vector<string> samples;
  samples.push_back((findMatchInDir(inpath.Data(),"MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_500GeV_126")));
  samples.push_back((findMatchInDir(inpath.Data(),"MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_1000GeV_126")));
  samples.push_back((findMatchInDir(inpath.Data(),"MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_1500GeV_126")));
  samples.push_back((findMatchInDir(inpath.Data(),"MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_2000GeV_126")));
  samples.push_back((findMatchInDir(inpath.Data(),"MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_2500GeV_126")));

  for(std::vector<string>::iterator it = samples.begin(); it != samples.end(); it++){
    cout<<*it<<endl;

    Sample sample("sample",(*it).c_str(),inpath);
    if(channel==1)sample.skim("71000<mm_m[zll_ll]&&mm_m[zll_ll]<111000");
    if(channel==2)sample.skim("71000<ee_m[zll_ll]&&ee_m[zll_ll]<111000");

    plot2LepIsoStudy(&sample,channel,0,outputDir_+"/DC14Studies/"+ChName+"/IsoStudy_"+TAG+"/"+(*it).c_str()+"_CutType0");
    plot2LepIsoStudy(&sample,channel,1,outputDir_+"/DC14Studies/"+ChName+"/IsoStudy_"+TAG+"/"+(*it).c_str()+"_CutType1");

  }


  //plot distributions with all samples merged
  std::vector<string>::iterator it = samples.begin();
  Sample sample("sample",(*it).c_str(),inpath);
  for(it++ ; it != samples.end(); it++){
    sample.addRootFiles((*it).c_str(),inpath);
  }
  if(channel==1)sample.skim("71000<mm_m[zll_ll]&&mm_m[zll_ll]<111000");
  if(channel==2)sample.skim("71000<ee_m[zll_ll]&&ee_m[zll_ll]<111000");
  
  plot2LepIsoStudy(&sample,channel,0,outputDir_+"/DC14Studies/"+ChName+"/IsoStudy_"+TAG+"/MergedSamples_CutType0");
  plot2LepIsoStudy(&sample,channel,1,outputDir_+"/DC14Studies/"+ChName+"/IsoStudy_"+TAG+"/MergedSamples_CutType1");




  gROOT->ProcessLine(".q");  
}
