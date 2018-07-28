#include "../plots/plotterGlobals.h"
#include "../plots/plottingTools.C"

void runTemplateDiff(TString channel, TString PROD1, TString PROD2, TString Label1, TString Label2){
  //Compare the backgrounds from the histograms in the plots

  TString outpath=outputDir_+"/"+channel+"/TemplateCompare_"+PROD1+"_"+PROD2;  
  system(TString("rm -rf ")+outpath);
  system(TString("mkdir ")+outpath);

  TString Path1=outputDir_+"/"+channel+"/"+PROD1;
  TString Path2=outputDir_+"/"+channel+"/"+PROD2;

  for(std::vector<string>::iterator it = ctrlPlots.begin(); it != ctrlPlots.end(); it++){
    TString var=(*it).c_str();
 
    TFile F1(Path1+"/"+var+".root","READ");//var is like vh_m or vh_v_m
    TFile F2(Path2+"/"+var+".root","READ");//var is like vh_m or vh_v_m
    gROOT->cd();
    if(F1.IsZombie() || F2.IsZombie()){
      cout<<"Files are Zombies."<<endl;
      cout<<"F1: "<<F1.GetName()<<endl;
      cout<<"F2: "<<F2.GetName()<<endl;
      return;
    }
  
    TH1D*HBkg=(TH1D*)F1.Get("Data");
    if(!HBkg){
      cout<<"Bkg histo not found"<<endl;
    }


    THStack* BkgStack1=(THStack*)F1.Get("BkgStack");
    TList* histList1= BkgStack1->GetHists();  
    THStack* BkgStack2=(THStack*)F2.Get("BkgStack");
    TList* histList2= BkgStack2->GetHists();  

    for(Int_t i=0; i<histList1->GetSize() ;i++){
      TH1D*H1=(TH1D*)histList1->At(i);
      if(!H1)continue;


      TH1D*H2=NULL;
      for(Int_t j=0; j<histList2->GetSize() ;j++)
	if(TString(((TH1D*)histList2->At(j))->GetName()).CompareTo(H1->GetName())==0)
	  H2=(TH1D*)histList2->At(j) ;

      if(!H2){
	cout<<"Warning : did not find matching histogram for "<<H1->GetName()<<endl;
	cout<<"F1: "<<F1.GetName()<<endl;
	cout<<"F2: "<<F2.GetName()<<endl;
	continue;
      }

      cout<<i<<" "<<H1->GetName()<<" "<<H2->GetName()<<endl;

      
      //H1->GetTitle() is used to describe the histogram content
      H1->GetXaxis()->SetTitle(HBkg->GetXaxis()->GetTitle());
      H1->GetYaxis()->SetTitle(Label1);
      H2->GetYaxis()->SetTitle(Label2);
      compareWithRatio(H1,H2,outpath+"/"+H1->GetName(),0.5);

    }

  }

  gROOT->ProcessLine(".q");

}
