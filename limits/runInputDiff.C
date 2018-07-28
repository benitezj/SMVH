#include "../plots/plottingTools.C"

void makePlot(TString path1,TString TAG1,TString path2,TString TAG2,TString file,TString outpath,bool plot=0){

  TFile F1(path1+"/"+file.Data());
  TFile F2(path2+"/"+file.Data());

  if(F1.IsZombie()){
    cout<<"File1 is zombie: "<<F1.GetName()<<endl;
    return;
  }
  if(F2.IsZombie()){
    cout<<"File2 is zombie: "<<F2.GetName()<<endl;
    return;
  }
    


  TH1F*H1=(TH1F*)F1.Get("nominal");
  TH1F*H2=(TH1F*)F2.Get("nominal");
  if(!H1){
    cout<<"H1 is NULL: "<<endl;
    return;
  }
  if(!H2){
    cout<<"H2 is NULL: "<<endl;
    return;
  }


  char ratio[100];
  if(H1->Integral()>0)
    sprintf(ratio,"%s/%s=%.3f",TAG2.Data(),TAG1.Data(),H2->Integral()/H1->Integral());
  else sprintf(ratio,"%s/%s=nan",TAG2.Data(),TAG1.Data());
  H1->SetTitle(ratio);

  if(plot){
    TCanvas C;
    C.Clear();
    H1->GetYaxis()->SetRangeUser(0,H1->GetMaximum()*1.5);
    H1->Draw("hist");
    H2->Draw("histpesame");
    TString outfile=file;
    outfile(".root")=".gif";
    C.Print(outpath+"/"+outfile);
  }
  
  //Print the integrals and uncertainties
  float N1=0.,E1=0.,N2=0.,E2=0.;
  for(int b=1;b<=H1->GetNbinsX();b++){
    N1+=H1->GetBinContent(b);
    N2+=H2->GetBinContent(b);
    E1+=H1->GetBinError(b) * H1->GetBinError(b);
    E2+=H2->GetBinError(b) * H2->GetBinError(b);
  }
  E1=sqrt(E1);
  E2=sqrt(E2);

  TString region=file;
  region(".root")="";
  printf("%60s : %.4f+/-%.4f,%.0f%%    %.4f+/-%.4f,%.0f%%",region.Data(),N1,E1,N1>0 ? 100*E1/N1 : 0,N2,E2,N2>0 ? 100*E2/N2 : 0);
  cout<<endl;
}


void runInputDiff(TString INPATH, TString INPUT1,TString INPUT2,bool plot=0){
  gROOT->ProcessLine(".x ./SMVH/plots/rootlogon.C");

  TString outpath=outputDir_+"/Limits/Diff_"+INPUT1+"_"+INPUT2;
  system((TString("rm -rf ")+outpath).Data());
  system((TString("mkdir -p ")+outpath).Data());

  TString inPath1=INPATH+"/"+INPUT1;
  TString inPath2=INPATH+"/"+INPUT2;
  cout<<inPath1<<endl;
  cout<<inPath2<<endl;

  //makePlot(inPath1,INPUT1,inPath2,INPUT2,"HVTZHllqq1500_llJ_presel_0addtag_SR_mVH.root",outpath,plot);

  std::vector<std::string> list=findSamplesInDir(inPath1.Data(),".root");
  for( std::vector<string>::iterator it = list.begin() ; it != list.end(); it++){
    //cout<<(*it).c_str()<<endl;
    makePlot(inPath1,INPUT1,inPath2,INPUT2,(*it).c_str(),outpath,plot);
  }


  gROOT->ProcessLine(".q");
}
