#include "plottingTools.C"


void drawCut(int cuttype, TH2D* H){
  if(cuttype == 0 || cuttype == 1 || cuttype == 10 || cuttype == 11 ){
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


  int   ndR=60;
  float dRmin=0.;
  float dRmax=3.;

  int   niso=60;
  float isomin=0.;
  float isomax=3.;

  TString isovarLeg1="";
  TString isovarLeg2="";
  TString selection="";


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
    selection=isovarLeg1+"<0.1&&"+isovarLeg2+"<0.1";
  }
  if(cutType == 1){
    //Here remove pT of second lepton from first lepton isolation
    if(channel==1){
      isovarLeg1="(muo_ptiso[zll_l1]-muo_pt[zll_l2]*(mm_dR[zll_ll]<0.2))/muo_pt[zll_l1]";
      isovarLeg2="(muo_ptiso[zll_l2]-muo_pt[zll_l1]*(mm_dR[zll_ll]<0.2))/muo_pt[zll_l2]";
    }
    if(channel==2){
      isovarLeg1="(ele_ptiso[zll_l1]-ele_pt[zll_l2]*(ee_dR[zll_ll]<0.2))/ele_pt[zll_l1]";
      isovarLeg2="(ele_ptiso[zll_l2]-ele_pt[zll_l1]*(ee_dR[zll_ll]<0.2))/ele_pt[zll_l2]";
    }
    selection=isovarLeg1+"<0.1&&"+isovarLeg2+"<0.1";
  }


  TCanvas C;
  
  //////////////////////
  ///Draw the isolation vs dR
  /////////////////////
  TH2D*HIsoVsDR_leg1=0;
  if(channel==1)HIsoVsDR_leg1= sample->getHistoNtpFile("mm_dR[zll_ll]",ndR,dRmin,dRmax,
					 isovarLeg1,niso,isomin,isomax,
					 "");
  if(channel==2)HIsoVsDR_leg1= sample->getHistoNtpFile("ee_dR[zll_ll]",ndR,dRmin,dRmax,
					 isovarLeg1,niso,isomin,isomax,
					 "");


  HIsoVsDR_leg1->SetName("HIsoVsDR_leg1");
  HIsoVsDR_leg1->SetTitle("Leading Lepton");
  C.Clear();
  HIsoVsDR_leg1->GetYaxis()->SetTitle("Lead lepton relative Iso.");
  HIsoVsDR_leg1->GetXaxis()->SetTitle("deltaR");
  HIsoVsDR_leg1->Draw("colz");
  drawCut(cutType,HIsoVsDR_leg1);
  C.SetLogz(1);
  C.Print(outpath+"/IsoVsDR_leg1.png");
  C.SetLogz(0);



  TH2D*HIsoVsDR_leg2=0;
  if(channel==1) HIsoVsDR_leg2=sample->getHistoNtpFile("mm_dR[zll_ll]",ndR,dRmin,dRmax,
					 isovarLeg2,niso,isomin,isomax,
					 "");

  if(channel==2) HIsoVsDR_leg2=sample->getHistoNtpFile("ee_dR[zll_ll]",ndR,dRmin,dRmax,
					 isovarLeg2,niso,isomin,isomax,
					 "");


  HIsoVsDR_leg2->SetName("HIsoVsDR_leg2");
  HIsoVsDR_leg2->SetTitle("Subleading Lepton");
  C.Clear();
  HIsoVsDR_leg2->GetYaxis()->SetTitle("Sublead lepton relative Iso.");
  HIsoVsDR_leg2->GetXaxis()->SetTitle("deltaR");
  HIsoVsDR_leg2->Draw("colz");
  drawCut(cutType,HIsoVsDR_leg2);
  C.SetLogz(1);
  C.Print(outpath+"/IsoVsDR_leg2.png");
  C.SetLogz(0);
  

  //////////////////////////
  ///Compute the Efficiency and draw the mass distributions
  /////////////////////////
  int nmass=100; float massmin=50; float massmax=150;
  TH1D*HMass=0;
  if(channel==1) HMass=sample->getHistoNtpFile("mm_m[zll_ll]/1000",nmass,massmin,massmax,"");
  if(channel==2) HMass=sample->getHistoNtpFile("ee_m[zll_ll]/1000",nmass,massmin,massmax,"");
  HMass->SetName("HMass");

  TH1D*HMassCut=0;
  if(channel==1) HMassCut= sample->getHistoNtpFile("mm_m[zll_ll]/1000",nmass,massmin,massmax,selection.Data());
  if(channel==2) HMassCut= sample->getHistoNtpFile("ee_m[zll_ll]/1000",nmass,massmin,massmax,selection.Data());
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


void plot2LepMassStudy(Sample*sample,int channel, TString outpath){
  system((TString("rm -rf ")+outpath).Data());
  system((TString("mkdir ")+outpath).Data());

  TCanvas C;
  TLine cutline;
  cutline.SetLineColor(2);
  char title[100];

  //int Mlow=83; int Mhigh=99;
  int Mlow=70; int Mhigh=105;
  TCut selection="";
  if(channel==1) selection = TString("")+(long)Mlow+"<mm_m[zll_ll]/1000&&mm_m[zll_ll]/1000<"+(long)Mhigh;
  if(channel==2) selection = TString("")+(long)Mlow+"<ee_m[zll_ll]/1000&&ee_m[zll_ll]/1000<"+(long)Mhigh;

  //////////////////////////////
  ///Mass resolution Study
  //////////////////////////////
  int nmass=100; float massmin=50; float massmax=150;
  TH1D*HMass=0;
  if(channel==1) HMass = sample->getHistoNtpFile("mm_m[zll_ll]/1000",nmass,massmin,massmax,"");
  if(channel==2) HMass = sample->getHistoNtpFile("ee_m[zll_ll]/1000",nmass,massmin,massmax,"");
  HMass->SetName("HMass");

  TF1 Func("Gauss","[0]*exp(-(x-[1])**2/(0.5*[2]**2))",massmin,massmax);
  Func.SetParameter(0,HMass->GetBinContent(HMass->GetMaximumBin())); Func.SetParLimits(0,0.1,10000);
  Func.SetParameter(1,90); Func.SetParLimits(1,60,120);
  Func.SetParameter(2,2); Func.SetParLimits(2,0.1,20);  
  HMass->Fit(&Func,"LL","",85,97);

  TH1D*HMassCutMass = 0;
  if(channel==1) HMassCutMass = sample->getHistoNtpFile("mm_m[zll_ll]/1000",nmass,massmin,massmax,selection);
  if(channel==2) HMassCutMass = sample->getHistoNtpFile("ee_m[zll_ll]/1000",nmass,massmin,massmax,selection);
  HMassCutMass->SetName("HMassCutMass");

  float eff=HMassCutMass->Integral(0,nmass+1)/HMass->Integral(0,nmass+1);
  sprintf(title,"Mean=%.1f,   Sigma=%.2f,  Efficiency=%.3f", Func.GetParameter(1), Func.GetParameter(2), eff);
  HMass->SetTitle(title);

  C.Clear();
  HMass->Draw("histpe");
  Func.Draw("lsame");
  cutline.DrawLine(Mlow,0,Mlow,HMass->GetBinContent(HMass->GetMaximumBin()));
  cutline.DrawLine(Mhigh,0,Mhigh,HMass->GetBinContent(HMass->GetMaximumBin()));
  C.Print(outpath+"/ll_massFit.png");


}



void plot2LepMETStudy(Sample*sample,TString outpath){
  system((TString("rm -rf ")+outpath).Data());
  system((TString("mkdir ")+outpath).Data());

  TCanvas C;
  TLine cutline;
  cutline.SetLineColor(2);
  char title[100];

  TCut baseselection="zll_njet>0&&jet_pt[zll_jet]>45000";
  int MetHigh=60;
  TCut selection=TString("met_pt/1000<")+(long)MetHigh;

  /////////////////////////
  ///MET 
  /////////////////////////
  int nmet=100; float metmin=0; float metmax=400;

  TH1D*HMet=sample->getHistoNtpFile("met_pt/1000",nmet,metmin,metmax,baseselection);
  HMet->SetName("HMet");

  TH1D*HMetCut=sample->getHistoNtpFile("met_pt/1000",nmet,metmin,metmax,baseselection+selection);
  HMetCut->SetName("HMetCut");

  float eff=HMetCut->Integral(0,nmet+1)/HMet->Integral(0,nmet+1);//account for overflow
  sprintf(title,"Efficiency=%.3f",eff);
  HMet->SetTitle(title);

  C.Clear();
  HMet->GetXaxis()->SetTitle("MET [GeV]");
  HMet->Draw("hist");
  cutline.DrawLine(MetHigh,0,MetHigh,HMet->GetBinContent(HMet->GetMaximumBin()));
  C.Print(outpath+"/ll_met.png");

}

void run2LepIsoStudy(TString TAG,int channel){

  TString ChName="";
  if(channel==1) ChName="Zmm";
  if(channel==2) ChName="Zee";


  TString inpath=inputDir_+"/CxTupleSamples/"+ChName+"/"+TAG;

  std::vector<string> samples;
  // samples.push_back("mc14_13TeV.161827.Pythia8_AU2CTEQ6L1_ZH125_llbb.merge.AOD.e3292_s1982_s2008_r5787_r5853");
  // samples.push_back("mc14_13TeV.203921.MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_500GeV_126.merge.AOD.e3318_s1982_s2008_r5787_r5853");
  //samples.push_back("mc14_13TeV.203917.MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_1000GeV_126.merge.AOD.e3318_s1982_s2008_r5787_r5853");
  // samples.push_back("mc14_13TeV.203918.MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_1500GeV_126.merge.AOD.e3318_s1982_s2008_r5787_r5853");
  //samples.push_back("mc14_13TeV.203919.MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_2000GeV_126.merge.AOD.e3318_s1982_s2008_r5787_r5853");
  //samples.push_back("mc14_13TeV.203920.MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_2500GeV_126.merge.AOD.e3318_s1982_s2008_r5787_r5853");

  samples.push_back((findMatchInDir(inpath.Data(),"mc14_13TeV.203917.MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_1000GeV_126")));

  system((TString("rm -rf ")+outputDir_+"/DC14Studies/"+ChName+"/IsoStudy_"+TAG).Data());
  system((TString("mkdir ")+outputDir_+"/DC14Studies/"+ChName+"/IsoStudy_"+TAG).Data());  
  for(std::vector<string>::iterator it = samples.begin(); it != samples.end(); it++){
    cout<<*it<<endl;

    Sample sample("sample",(*it).c_str(),inpath);
    
    plot2LepIsoStudy(&sample,channel,0,outputDir_+"/DC14Studies/"+ChName+"/IsoStudy_"+TAG+"/"+(*it).c_str()+"_CutType0");
    plot2LepIsoStudy(&sample,channel,1,outputDir_+"/DC14Studies/"+ChName+"/IsoStudy_"+TAG+"/"+(*it).c_str()+"_CutType1");

  }


  system((TString("rm -rf ")+outputDir_+"/DC14Studies/"+ChName+"/MassStudy_"+TAG).Data());
  system((TString("mkdir ")+outputDir_+"/DC14Studies/"+ChName+"/MassStudy_"+TAG).Data());  
  for(std::vector<string>::iterator it = samples.begin(); it != samples.end(); it++){
    cout<<*it<<endl;
    Sample sample("sample",(*it).c_str(),inpath);
 
    plot2LepMassStudy(&sample,channel,outputDir_+"/DC14Studies/"+ChName+"/MassStudy_"+TAG+"/"+(*it).c_str());
  }


  system((TString("rm -rf ")+outputDir_+"/DC14Studies/"+ChName+"/METStudy_"+TAG).Data());
  system((TString("mkdir ")+outputDir_+"/DC14Studies/"+ChName+"/METStudy_"+TAG).Data());  
  for(std::vector<string>::iterator it = samples.begin(); it != samples.end(); it++){
    cout<<*it<<endl;
    Sample sample("sample",(*it).c_str(),inpath);
    plot2LepMETStudy(&sample,outputDir_+"/DC14Studies/"+ChName+"/METStudy_"+TAG+"/"+(*it).c_str());
  }


  gROOT->ProcessLine(".q");  
}
