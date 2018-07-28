#include "../plots/plotterGlobals.h"
#include "../plots/plottingTools.C"

void compareExtraStats(TString bkg="W",TString region="2tag2jet_150ptv_SR_mva",int rebin=1,float xmin=0, float xmax=0,float logy=0.){
  gROOT->ProcessLine(".x ./SMVH/plots/rootlogon.C");

  ///for BDT
  // float maxYieldRatio=0.7;
  // float maxUncRatio=1;

  //for MET
  float maxYieldRatio=1.5;
  float maxUncRatio=2;


  // TFile input1("./inputs_Oct2.root","read");
  // TFile input2("./inputs_Oct2_extrastats.root","read");
 
  TString title1="Sh2.2.0";
  TString title2="Sh2.2.1";
  TFile input1("NTUPLES/CxTupleSamples/0lep/Oct10/inputs.13TeV.root","read");//reference
  TFile input2("NTUPLES/CxTupleSamples/0lep/Oct17_MAXHTPTV_MVA/inputs.13TeV.root","read");//new 


  if(input1.IsZombie()||  input2.IsZombie()) return;
  gROOT->cd();
 
  std::vector<std::string> bkgs;

  if(bkg.CompareTo("W")==0){
    bkgs.push_back("Wbb");
    bkgs.push_back("Wbc");
    bkgs.push_back("Wbl");
    bkgs.push_back("Wcl");
    bkgs.push_back("Wcc");
    bkgs.push_back("Wl");
  }
  else if(bkg.CompareTo("Z")==0){
    bkgs.push_back("Zbl");
    bkgs.push_back("Zbb");
    bkgs.push_back("Zbc");
    bkgs.push_back("Zcl");
    bkgs.push_back("Zcc");
    bkgs.push_back("Zl");
  }
  else if(bkg.CompareTo("VV")==0){
    bkgs.push_back("WW");
    bkgs.push_back("WZ");
    bkgs.push_back("ZZ");
  }
  else if(bkg.CompareTo("H")==0){//plot the signal for comparison
    bkgs.push_back("qqZvvH125");
    bkgs.push_back("qqWlvH125");
    bkgs.push_back("ggZvvH125");
    bkgs.push_back("qqWplusmuvmuHNLO125");
    bkgs.push_back("qqWminusmuvmuHNLO125");
    bkgs.push_back("qqZllH125");
    bkgs.push_back("qqWpluseveHNLO125");    
    bkgs.push_back("qqWminuseveHNLO125");
  }
  else {
    bkgs.push_back(bkg.Data());
  }



  ///read the histograms from the inputs
  TH1F * H1=NULL;
  TH1F * H2=NULL;
  for( std::vector<std::string>::iterator it=bkgs.begin();it!=bkgs.end();it++){
    std::string histname=(TString((*it).c_str())+"_"+region).Data();
    cout<<histname<<endl;

    TH1F*h1=(TH1F*)input1.Get(histname.c_str());
    if(!h1){
      cout<<"Did not find "<<histname.c_str()<<" in "<<input1.GetName()<<endl;
      //return;
      continue;
    }
    if(!H1){
      H1=(TH1F*)h1->Clone("H1");
    }else H1->Add(h1);
  }


  for( std::vector<std::string>::iterator it=bkgs.begin();it!=bkgs.end();it++){
    std::string histname=(TString((*it).c_str())+"_"+region).Data();
    cout<<histname<<endl;
    TH1F*h2=(TH1F*)input2.Get(histname.c_str());
    if(!h2){
      cout<<"Did not find "<<histname.c_str()<<" in "<<input2.GetName()<<endl;
      //return;
      continue;
    }
    if(!H2){
      H2=(TH1F*)h2->Clone("H2");
    }else H2->Add(h2);
  }

  if(!H1 || !H2) return;


  H1->Rebin(rebin);
  H2->Rebin(rebin);
  H1->GetYaxis()->SetTitle(title1);
  H2->GetYaxis()->SetTitle(title2);
  H1->GetXaxis()->SetTitle((bkg+", "+region).Data());
  compareWithRatio(H1,H2,TString("./compareExtraStats_")+bkg+"_"+region,maxYieldRatio,xmin,xmax,logy);


  ////Check some bins with >100% uncertainty
  // for(int b=1;b<=H1->GetNbinsX();b++){
  //   cout<<"H2:"<<b<<" "<<H2->GetBinError(b)/H2->GetBinContent(b)<<" "<<H2->GetBinErrorLow(b)/H2->GetBinContent(b)<<" "<<H2->GetBinErrorUp(b)/H2->GetBinContent(b)<<" "<<endl;
  // }

  ///Show the bin uncertainty values
  TCanvas C;
  
  TH1F* ratio1=makeHistRatio(H1,H1,1.);  
  ratio1->SetName(H1->GetYaxis()->GetTitle());
  TH1F* ratio2=makeHistRatio(H2,H2,1.);  
  ratio2->SetName(H2->GetYaxis()->GetTitle());
  float maxy=0.;
  for(int b=1;b<=ratio1->GetNbinsX();b++){
    if(ratio1->GetBinError(b) > maxy) maxy=ratio1->GetBinError(b);
    if(ratio2->GetBinError(b) > maxy) maxy=ratio2->GetBinError(b);

    ratio1->SetBinContent(b,ratio1->GetBinError(b));
    ratio2->SetBinContent(b,ratio2->GetBinError(b));

    ratio1->SetBinError(b,0);
    ratio2->SetBinError(b,0);
  }

  ratio1->GetYaxis()->SetTitle(title1);
  ratio2->GetYaxis()->SetTitle(title2);
  ratio1->GetYaxis()->SetRangeUser(0,maxy*1.2);
  compareWithRatio(ratio1,ratio2,TString("./compareExtraStats_")+bkg+"_"+region+"_error",maxUncRatio,xmin,xmax,0);

}
