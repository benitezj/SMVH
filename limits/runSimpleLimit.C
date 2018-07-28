#include "../plots/plotterGlobals.h"
//#include "../SMVH/tools.h"

//std::vector<std::string> BKGS={"Zl","Zc","Zb","TTbar","STop","Diboson","SMZh"};
std::vector<std::string> BKGS={"Zl","Zc","Zb","TTbar","stopWt","Diboson"};

//#define TAG "0addtag_SR_mVH" 
#define TAG "0addtag_unblind_SR_mVH" //used by Stephen

#define REBIN 4 //input histos have 50GeV binning


float calculateLimit(TH1F*HB,TH1F*HS){//This works for one signal region
  if(HS==NULL || HB==NULL)    return 0.;

  if(HS->Integral()<=0 || HB->Integral()<=0)    return 0.;

  //cout<<"calculateLimit: "<<HB->Integral()<<" "<<HS->Integral()<<endl;
  
  float NBkg=0.;
  float NBkgErr=0.;
  float NSig=0.;
  for(int i=1; i<=HS->GetNbinsX();i++){
    if(HS->GetBinContent(i)/HS->Integral() > 0.05){//~90% signal region
      NSig += HS->GetBinContent(i);
      NBkg += HB->GetBinContent(i);
      NBkgErr += HB->GetBinError(i) * HB->GetBinError(i);
    }
  }

  //cout<<"calculateLimit: Bkg="<<NBkg<<" BkgErr="<<sqrt(NBkgErr)<<" Sig:"<<NSig<<endl;
  return  estimateLimit(NBkg + sqrt(NBkgErr)) / NSig;//If signals were normalized to a crosection of 1pb then this limit is in pb 
}


float calculateSmallestLimit(std::vector<TH1F*> bkgs, std::vector<TH1F*> sigs){
  //input vectors contain the different event categories
  //this function returns the smallest limit of all categories

  if(bkgs.size()!=sigs.size() || bkgs.size()==0)
    return 0.;

  float limit=99999999;
  for(int index=0;index<bkgs.size();index++){
    TH1F*HS=sigs[index];
    TH1F*HB=bkgs[index];
   
    if(HS->Integral()<=0 || HB->Integral()<=0)
      return 0.;
    
    float l=calculateLimit(HB,HS);
    if(l<limit)limit=l;
 
  }

  return  limit;
}



TH1F * getTotalBackground(TString inpath, TString input, TString channel, TString region){

  TH1F * HTOT=NULL;
  for(std::vector<std::string>::iterator it=BKGS.begin(); it!=BKGS.end(); it++){

    TString file=TString((*it).c_str())+"_"+channel+"_"+region+"_"+TAG+".root";
    TFile FBkg(inpath+"/"+input+"/"+file,"read");
    if(FBkg.IsZombie()){
      cout<<"File is Zombie: "<<FBkg.GetName()<<endl;
      continue;
    }
    gROOT->cd();

    //Get histogram
    TH1F * HBkg=(TH1F*)FBkg.Get("nominal");
    if(!HBkg){
      cout<<"No histogram found in "<<FBkg.GetName()<<endl;
      FBkg.ls();
      continue;
    }
    //cout<<file<<" "<<HBkg->Integral()<<endl;

    ////Sum backgrounds
    if(!HTOT){
      HTOT=(TH1F*)HBkg->Clone("HTOT");
      HTOT->Scale(0);
    }
    HTOT->Add(HBkg);
    
  }
  if(!HTOT) return NULL;

  ///REBIN the total histogram
  return (TH1F*)HTOT->Rebin(REBIN,channel+"_"+region+"_Bkg");
}


TH1F * getSignal(TString inpath, TString input, TString channel, TString region, long mass){
  TFile FSig(inpath+"/"+input+"/HVTZHllqq"+mass+"_"+channel+"_"+region+"_"+TAG+".root","read");
  if(FSig.IsZombie()){
    cout<<"File is Zombie: "<<FSig.GetName()<<endl;
    return 0;
  }
  gROOT->cd();
  
  TH1F * HSig=(TH1F*)FSig.Get("nominal");
  if(!HSig){
    cout<<"No histogram found in "<<FSig.GetName()<<endl;
    return 0;
  }
  //cout<<"M = "<<mass<<" "<<region<<" "<<HSig->Integral()<<endl;
  return (TH1F*)HSig->Rebin(REBIN,channel+"_"+region+"_Sig");
}


TGraphErrors* getSigScan(TString inpath, TString input, TString channel, TString region, float scale){
  //cout<<input<<" "<<channel<<" "<<region<<endl;

  std::vector<TH1F*> bkgs;  
  if(region.Contains("1tag")) bkgs.push_back(getTotalBackground(inpath,input,channel,"1tag"));
  if(region.Contains("2tag")) bkgs.push_back(getTotalBackground(inpath,input,channel,"2tag"));
  
  TGraphErrors * GEffvsMR = new TGraphErrors();
  int counter=0;

  for(long m=0;m<NMASS;m++){

    if(MassPoint[m]<700||MassPoint[m]>4000) continue;//stop at 3TeV
    
    std::vector<TH1F*> sigs;  
    if(region.Contains("1tag")) sigs.push_back(getSignal(inpath,input,channel,"1tag",MassPoint[m]));
    if(region.Contains("2tag")) sigs.push_back(getSignal(inpath,input,channel,"2tag",MassPoint[m]));
	  
    float sLimit=calculateSmallestLimit(bkgs,sigs);

    double * sig = new double[2];

    ///Significance estimation:
    //sig = getExpectedSignificance(bkgs[0],sigs[0],1);

    ///Limit Estimation:
    //sig[0] = scale * calculateLimit(bkgs[0],sigs[0]);
    sig[0] = scale * likelihoodLimit(bkgs,sigs,bkgs,2*sLimit);
    sig[1] = 0.; 

    //cout<<"M = "<<MassPoint[m]<<" : "<<sig[0]<<" +/- "<<sig[1]<<" , smallestLimit="<<scale*sLimit<<" ratio="<<sig[0]/(scale*sLimit)<<endl;
    GEffvsMR->SetPoint(counter,MassPoint[m],sig[0]);
    GEffvsMR->SetPointError(counter,0,sig[1]);
    counter++;

  }  

  return GEffvsMR;
}


void runSimpleLimit(TString inpath, TString input, TString channel, TString region){
  
  //cout<<"input: "<<inpath<<"/"<<input<<endl;

  //Assumme inputs were normalized to sigma = 1pb
  float scale = 1./(2.*0.03366); //account for Z->ll BF

  TGraphErrors * LimitGraph = getSigScan(inpath,input,channel,region,scale);

  for(int i=0;i<LimitGraph->GetN();i++){
    cout<<LimitGraph->GetX()[i]<<" "<<LimitGraph->GetY()[i]<<endl;
  }
 
  gROOT->ProcessLine(".q");
}


// void runLimitPlot(float YMIN=2e-2, float YMAX=10){
//   ///Code needs fixing

//   TString outpath=outputDir_+"/"+channel+"/Significance_"+input1+"_"+input2+"_"+region;
//   system(TString("rm -rf ")+outpath);
//   system(TString("mkdir ")+outpath);

//   TGraphErrors * GEffvsMR2 = getSigScan(input2,channel,region,scale);
  

//   TCanvas C;
  
//   C.Clear();
//   TH1F HFrame("HFrame","",1,0,4000);
//   HFrame.GetYaxis()->SetRangeUser(YMIN,YMAX);//YMAX must be provided at command line
//   HFrame.GetYaxis()->SetTitle("Limit   [pb] ");
//   HFrame.GetXaxis()->SetTitle("Mass    [GeV]");
//   HFrame.Draw("hist");
//   GEffvsMR1->Draw("lsame");
//   GEffvsMR2->SetLineColor(2);
//   GEffvsMR2->SetMarkerColor(2);
//   GEffvsMR2->Draw("psame");
//   C.Print(outpath+"/Limit_vs_M.png");
//   C.Print(outpath+"/Limit_vs_M.eps");

//   C.SetLogy(1);
//   HFrame.GetYaxis()->SetRangeUser(YMIN,YMAX);
//   C.Update();
//   C.Print(outpath+"/Limit_vs_M_log.png");
//   C.Print(outpath+"/Limit_vs_M_log.eps");



//   TGraphErrors GRatio;
//   float maxratio=0.;
//   for(int i=0;i<GEffvsMR1->GetN();i++){
//     float ratio=GEffvsMR2->GetY()[i]/GEffvsMR1->GetY()[i];
//     GRatio.SetPoint(i,GEffvsMR1->GetX()[i],ratio);
//     if(ratio > maxratio) maxratio=ratio;
//   }
//   C.Clear();
//   C.SetLogy(0);
//   HFrame.GetYaxis()->SetRangeUser(0,maxratio*1.5);//YMAX must be provided at command line
//   HFrame.GetYaxis()->SetTitle("Ratio ");
//   HFrame.Draw("hist");
//   GRatio.SetMarkerColor(2);
//   GRatio.SetLineColor(2);
//   GRatio.Draw("psame");
//   TLine line;
//   line.DrawLine(HFrame.GetXaxis()->GetXmin(),1,HFrame.GetXaxis()->GetXmax(),1);
//   C.Print(outpath+"/LimitRatio_vs_M.png");
//   C.Print(outpath+"/LimitRatio_vs_M.eps");


// }
