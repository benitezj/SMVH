#include "plotterGlobals.h"


void plot(TString path1, TString path2, TString outpath, TString file){

  TFile F1(path1+"/"+file+".root","read");
  TFile F2(path2+"/"+file+".root","read");

  if(F1.IsZombie() || F2.IsZombie()){
    cout<<"Files are invalid"<<endl;
    cout<<path1<<endl;
    cout<<path2<<endl;
    return;
  }
  gROOT->cd();

  //get all histograms
  THStack* BkgStack=(THStack*)F1.Get("BkgStack");
  TH1D* Data=(TH1D*)F1.Get("Data");
  TH1D*	Bkg=(TH1D*)F1.Get("Bkg");
  TH1D*	Ratio=(TH1D*)F1.Get("Ratio");
  TH1D*	Signal=(TH1D*)F1.Get("Signal");
  TLegend* Legend=(TLegend*)F1.Get("Legend");
  TPaveText* Title=(TPaveText*)F1.Get("Title");

  if(!BkgStack || !Data || !Bkg || !Ratio || !Legend || !Title ) {
    cout<<"Objects not found"<<endl;
    cout<<path1<<"/"<<file<<endl;
    cout<<" BkgStack="<<BkgStack<<" Data="<<Data<<" Bkg="<<Bkg<<" Ratio="<<Ratio<<" Legend="<<Legend<<" Title="<<Title<<endl;
    return;
  }



  //add all histograms
  //BkgStack->Add((THStack*)F2.Get("BkgStack"));
  THStack* BkgStack2=(THStack*)F2.Get("BkgStack");
  Data->Add((TH1D*)F2.Get("Data"));
  Bkg->Add((TH1D*)F2.Get("Bkg"));
  if(Signal)Signal->Add((TH1D*)F2.Get("Signal"));
  

  TList* histList= BkgStack->GetHists();  
  TList* histList2= BkgStack2->GetHists();  
  for(Int_t i=histList->GetSize()-1 ; i>=0 ;i--){
    //cout<<histList->At(i)->GetName()<<endl;
    TH1D*H=(TH1D*)histList->At(i);
    H->Add((TH1D*)(histList2->At(i)));
  }


  TString filename=outpath+"/"+file;

  TCanvas C("C","C");  
  TPad * pad1=new TPad("pad1","",0,0.2,1,1);
  TPad * pad2=new TPad("pad2","",0,0,1,0.2);
 

  float maxyData=(Data->GetMaximum()+Data->GetBinError(Data->GetMaximumBin()))*1.25;
  float maxyMC=(Bkg->GetMaximum()+Bkg->GetBinError(Bkg->GetMaximumBin()))*1.25;


  pad1->cd();
  Data->GetYaxis()->SetRangeUser(0,maxyData>maxyMC ? maxyData : maxyMC);
  Data->Draw("hist pe");
  BkgStack->Draw("hist same");  
  if(Signal)Signal->Draw("histsame");
  Data->Draw("hist pe same");
  Bkg->Draw("histsame");
  BkgStack->GetHistogram()->Draw("same");
  Legend->Draw();
  Title->Draw();


  pad2->cd();
  TH1D*	ratio=(TH1D*)Data->Clone("ratio");
  ratio->Divide(Bkg);
  //ratio->GetYaxis()->SetRangeUser(Ratio->GetYaxis()->GetXmin(),Ratio->GetYaxis()->GetXmax());
  ratio->GetYaxis()->SetRangeUser(0.5,1.5);
  ratio->GetYaxis()->SetTitle(Ratio->GetYaxis()->GetTitle());
  ratio->GetXaxis()->SetTitle(Ratio->GetXaxis()->GetTitle());
  ratio->GetYaxis()->SetNdivisions(5);
  ratio->GetYaxis()->SetLabelSize(0.15);
  ratio->GetYaxis()->SetTitleSize(0.2);
  ratio->GetYaxis()->SetTitleOffset(0.20);
  ratio->GetXaxis()->SetNdivisions(-1);
  ratio->GetXaxis()->SetLabelSize(0.0001);
  ratio->Draw("hist pe");
  TLine line;
  line.DrawLine(ratio->GetXaxis()->GetXmin(),1,ratio->GetXaxis()->GetXmax(),1);

  C.Clear();
  pad1->Draw();
  pad2->Draw();
  C.Print(filename+"_ratio.png");   
  C.Print(filename+"_ratio.eps");

  Data->GetYaxis()->SetRangeUser(0.01,Data->GetMaximum()*100);
  C.Update();
  pad1->SetLogy(1);
  C.Print(filename+"_ratio_log.png");   
  C.Print(filename+"_ratio_log.eps");

  delete pad1;
  delete pad2;
  delete ratio;

}

void mergeZHllJ(TString outchannel,TString channel1,TString channel2,TString intag, TString region, TString outtag=""){

  TString inpath1=outputDir_+"/"+channel1+"/"+intag+"_"+region+"_"+outtag;
  TString inpath2=outputDir_+"/"+channel2+"/"+intag+"_"+region+"_"+outtag;

  TString outpath=inpath1;
  outpath(channel1.Data())=outchannel.Data();
  cout<<outpath<<endl;

  system(TString("rm -rf ")+outpath);
  system(TString("mkdir ")+outpath);

  for(std::vector<string>::iterator it = ctrlPlots.begin(); it != ctrlPlots.end(); it++){
    plot(inpath1,inpath2,outpath,(*it).c_str());
  }

  gROOT->ProcessLine(".q");
}
