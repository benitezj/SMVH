#include "plotterGlobals.h"

TH1F* makeHistRatio(TH1* HNum,TH1* HDenom,float maxerr=0.5){
  if(HNum==NULL || HDenom == NULL){ 
    cout<<"Histograms are NULL"<<endl;
    return 0;
  }
  if(HNum->GetNbinsX() != HDenom->GetNbinsX()){ 
    cout<<"Histograms bins don't match"<<endl;
    return 0;
  }
  
  TH1F* HRatio=(TH1F*)HNum->Clone(TString("HRatio")+HNum->GetName());
  for(int b=0;b<=HNum->GetNbinsX()+1;b++){
    //if(HDenom->GetBinContent(b)>0. &&  HNum->GetBinError(b)/HNum->GetBinContent(b)<maxerr){
    if(HDenom->GetBinContent(b)>0.){
      HRatio->SetBinContent(b,HNum->GetBinContent(b)/HDenom->GetBinContent(b));
      HRatio->SetBinError(b,HNum->GetBinError(b)/HDenom->GetBinContent(b));
    }else {
      HRatio->SetBinContent(b,0.);
      HRatio->SetBinError(b,0.);
    }
  }

  return HRatio;
}

TGraphErrors* makeGraphRatio(TH1* HNum,TH1* HDenom,float maxerr=0.5,bool yerr=1,bool xerr=1){
  if(HNum==NULL || HDenom == NULL){ 
    cout<<"Histograms are NULL"<<endl;
    return 0;
  }
  if(HNum->GetNbinsX() != HDenom->GetNbinsX()){ 
    cout<<"Histograms bins don't match"<<endl;
    return 0;
  }
  
  //TH1F* HRatio=(TH1F*)HNum->Clone("HRatio");
  TGraphErrors * HRatio=new TGraphErrors();
  int counter=0;
  for(int b=0;b<=HNum->GetNbinsX()+1;b++){
    if(HDenom->GetBinContent(b)>0. &&
       HNum->GetBinError(b)/HNum->GetBinContent(b)<maxerr
       ){  

      float ratio=HNum->GetBinContent(b)/HDenom->GetBinContent(b);
      HRatio->SetPoint(counter,HNum->GetBinCenter(b),ratio);


      //float ERROR = HNum->GetBinError(b)/HDenom->GetBinContent(b);//only include numerator unc
      float ERROR = sqrt(HNum->GetBinError(b)*HNum->GetBinError(b) + HDenom->GetBinError(b)*HDenom->GetBinError(b))/HDenom->GetBinContent(b);//include both 

      HRatio->SetPointError(counter,
			    xerr ? HNum->GetBinWidth(b)/2:0.,
			    yerr ? ERROR : 0.);

      
      std::cout<<ratio<<"*("<<HNum->GetBinLowEdge(b)<<"<x&&x<"<<HNum->GetBinLowEdge(b)+HNum->GetBinWidth(b)<<")+";  
      counter++;
    }
  }

  std::cout<<std::endl;

  return HRatio;
}

void compareWithRatio(TH1* H1, TH1* H2, TString outfilename, float yrange=0.5, float xmin=0, float xmax=0, float logy=0.){
  if(!H1 || !H2){
    std::cout<<"compareWithRatio: Input histograms are NULL"<<std::endl;
    return;
  }

  TCanvas C("C","C");  
  TPad pad1("pad1","",0,0.2,1,1);
  TPad pad2("pad2","",0,0,1,0.2);
  
  float maxH1=0;
  float maxH2=0;
  
  if(xmin!=xmax){
    for(int b=1;b<=H1->GetNbinsX();b++){
      if(xmin<H1->GetBinCenter(b) && H1->GetBinCenter(b)<xmax){
	if(maxH1<H1->GetBinContent(b)) maxH1 = H1->GetBinContent(b);
	if(maxH2<H2->GetBinContent(b)) maxH2 = H2->GetBinContent(b);
      }
    }
  }else{
    maxH1=(H1->GetMaximum());//+H1->GetBinError(H1->GetMaximumBin()));
    maxH2=(H2->GetMaximum());//+H2->GetBinError(H2->GetMaximumBin()));
  }


  

  TLegend leg(0.73,0.85,0.88,0.95);
  //leg.SetFillColor(0);
  //leg.SetFillStyle(1);
  leg.SetTextSize(0.035);
  leg.AddEntry(H1,H1->GetYaxis()->GetTitle(),"p");//Use y-axis titles for legend, remove y-axis titles below
  leg.AddEntry(H2,H2->GetYaxis()->GetTitle(),"p");


  //H1 is the reference 
  

  pad1.cd();
  H1->SetTitle("");
  H1->GetXaxis()->SetTitleSize(0.05);
  H1->GetYaxis()->SetTitle("");
  H1->GetYaxis()->SetRangeUser(0, maxH1 > maxH2 ? maxH1*1.2 : maxH2*1.2);
  H1->SetFillColor(0);
  H1->SetLineColor(1);
  H1->SetMarkerStyle(20);
  if(xmin!=xmax) H1->GetXaxis()->SetRangeUser(xmin,xmax);
  H1->Draw("histpE1");//draw with error bars to compare uncertainties

  H2->GetYaxis()->SetTitle("");
  H2->SetFillColor(2);
  H2->SetLineColor(2);
  H2->SetMarkerColor(2);
  H2->SetMarkerStyle(20);
  H2->Draw("histpE1same");//
  leg.Draw();


  pad2.cd();
  //TH1D* ratio=(TH1D*)H2->Clone("ratio");
  //ratio->Divide(H1);
  TH1F* ratio=makeHistRatio(H2,H1,yrange);
  //TH1F* ratioRef=makeHistRatio(H1,H1,0.8);
  ratio->SetTitle("");
  ratio->GetXaxis()->SetTitle("");
  ratio->GetYaxis()->SetRangeUser(1-(yrange<=1.?yrange:1),1.+yrange);
  ratio->GetYaxis()->SetTitle("ratio");
  ratio->GetYaxis()->SetNdivisions(5);
  ratio->GetYaxis()->SetLabelSize(0.10);
  ratio->GetYaxis()->SetTitleSize(0.15);
  ratio->GetYaxis()->SetTitleOffset(0.20);
  ratio->GetXaxis()->SetNdivisions(-1);
  ratio->GetXaxis()->SetLabelSize(0.0001);
  if(xmin!=xmax) ratio->GetXaxis()->SetRangeUser(xmin,xmax);
  ratio->Draw("hist pe");
  //ratioRef->Draw("histe1same");
  //ratio->Draw("histpesame");
  TLine line;
  if(xmin!=xmax)line.DrawLine(xmin,1,xmax,1);
  else line.DrawLine(ratio->GetXaxis()->GetXmin(),1,ratio->GetXaxis()->GetXmax(),1);

  C.Clear();
  pad1.Draw();
  pad2.Draw();
  C.Update();
  if(logy!=0.){
    H1->GetYaxis()->SetRangeUser(logy,maxH1 *10);
    pad1.SetLogy(logy);
    C.Update();
  }
  C.Print(outfilename+".png");   


}

void compareSignalAndBkg(Sample* S, TString selection1, Sample* B, TString selection2,
			 TString var, int nbins, float xmin, float xmax,
			 TString xlabel, TCanvas*C,TString outpath,bool scale=1){
  if(!S || !B) return;

  TH1F* HS=new TH1F("HS","",nbins,xmin,xmax);
  HS->GetXaxis()->SetTitle(xlabel);
  S->fillHisto(HS,var,selection1.Data());
  if(scale) HS->Scale(1./HS->Integral());
  
  TH1F* HB=new TH1F("HB","",nbins,xmin,xmax);
  HB->GetXaxis()->SetTitle(xlabel);
  B->fillHisto(HB,var,selection2.Data());
  if(scale) HB->Scale(1./HB->Integral());
  

  ////Linear Plot
  C->Clear();
  HS->GetYaxis()->SetRangeUser(0, HS->GetMaximum() > HB->GetMaximum() ? 1.2*HS->GetMaximum() : 1.2*HB->GetMaximum());
  HS->Draw("histp");
  HB->Draw("histsame");
  C->Print(outpath+".png");
  
  //Log Plot
  HS->GetYaxis()->SetRangeUser( HS->GetMaximum() < HB->GetMaximum() ? 1e-5*HS->GetMaximum() : 1e-5*HB->GetMaximum(),
  				HS->GetMaximum() > HB->GetMaximum() ? 10*HS->GetMaximum() : 10*HB->GetMaximum());
  C->SetLogy(1);
  C->Update();
  C->Print(outpath+".log.png");
  C->SetLogy(0);

  delete HS;
  delete HB;
}


TGraphErrors * makeROC(Sample* S, Sample* B, TString var, int n, float min, float max, TString type=""){
  if(!S || !B || n<=0){
    cout<<"invalid inputs"<<endl; return 0;
  }

  TGraphErrors * Graph = new TGraphErrors();
  
  //Get the total 
  TH1D HSigTot("HSigTot","",n,min,max);
  S->fillHisto(&HSigTot,var);
  TH1D HBkgTot("HBkgTot","",n,min,max);
  B->fillHisto(&HBkgTot,var);

  if(HSigTot.Integral(0,n+1) <= 0. 
     || HBkgTot.Integral(0,n+1) <= 0.){
    cout<<"Samples have 0 integral. "<<endl; return 0;
  }


  int counter=0;
  for(int i=0;i<n;i++){
    char cut[100];
    sprintf(cut,"%s>%.3e",var.Data(),min+i*(max-min)/n);
    
    TH1D HSig(TString("HSig")+(long)i,"",n,min,max);
    S->fillHisto(&HSig,var,cut);
    TH1D HBkg(TString("HBkg")+(long)i,"",n,min,max);
    B->fillHisto(&HBkg,var,cut);

    //calculate efficiencies
    double sigEff= HSig.Integral(0,n+1)/HSigTot.Integral(0,n+1);
    double bkgEff= HBkg.Integral(0,n+1)/HBkgTot.Integral(0,n+1);
    
    if(sigEff<=0. || bkgEff<=0.) continue;

    //Estimate the stat error on the efficiency
    double sigErr=0.;
    double bkgErr=0.;
    for(int b=0;b<=n;b++){
      //include underflow and overflow 
      sigErr += HSig.GetBinError(b)*HSig.GetBinError(b);
      bkgErr += HBkg.GetBinError(b)*HBkg.GetBinError(b);
    }
    sigErr=sqrt(sigErr)/HSig.Integral(0,n+1);//these are the relative errors
    bkgErr=sqrt(bkgErr)/HBkg.Integral(0,n+1);

    cout<<i<<" "<<cut<<" : SignalEff="<<sigEff<<"+/-"<<sigEff<<"%, BkgEff="<<bkgEff<<"+/-"<<bkgEff<<"%"<<endl;
    if(sigErr>0.6 || bkgErr>0.6 || sigErr<=0. || bkgErr<=0.)  continue;
    

    ////Fill the graph
    if(type.CompareTo("efficiency")==0){ 
      Graph->SetPoint(counter,sigEff,bkgEff);
      Graph->SetPointError(counter,
			   sigEff*sigErr,
			   bkgEff*bkgErr
			   );
    }
    if(type.CompareTo("rejection")==0){
      double rej=1/bkgEff;
      Graph->SetPoint(counter,sigEff,rej);
      Graph->SetPointError(counter,
			   sigEff*sigErr,
			   rej*bkgErr
			   );
    }


    counter++;
  }
  

  return Graph;
}


void compareSamples(Sample* sample1, Sample* sample2, 
		    TString var, int N, float xmin, float xmax,
		    TString outpath, TString outname, TString selection=""){
  

  TH1F H1("H1","",N,xmin,xmax);
  H1.GetXaxis()->SetTitle(outname);
  sample1->fillHisto(&H1,var,selection.Data());

  TH1F H2("H2","",N,xmin,xmax);
  H2.GetXaxis()->SetTitle(outname);
  sample2->fillHisto(&H2,var,selection.Data());

  H1.SetTitle(TString("histogram=")+sample1->GetName()+",     points="+sample2->GetName());
  H2.SetTitle(H1.GetTitle());

  TH1F* hRatio = (TH1F*)H2.Clone("HRatio");
  for(Int_t b=1;b<=N;b++) {
    if(H1.GetBinContent(b)>0.) hRatio->SetBinContent(b, H2.GetBinContent(b) / H1.GetBinContent(b) );
    else  hRatio->SetBinContent(b,0);
    hRatio->SetBinError(b,0);//do not show error as these two samples should have the same events in principle 
  }
  
  TPad * pad1=new TPad("pad1","",0,0.2,1,1);
  TPad * pad2=new TPad("pad2","",0,0,1,0.2);
  
  pad1->cd();
  if(H1.GetMaximum()>H2.GetMaximum()){
    H1.Draw("hist");
    H2.Draw("histpsame");
  }else {
    H2.Draw("histp");//H2 is always the new production and should plotted with points
    H1.Draw("histsame");
  }
  
  pad2->cd();
  hRatio->SetStats(0);
  hRatio->SetTitle("");
  hRatio->GetYaxis()->SetTitle("ratio");
  hRatio->GetXaxis()->SetTitle("");
  hRatio->GetYaxis()->SetNdivisions(5);
  hRatio->GetYaxis()->SetLabelSize(0.15);
  hRatio->GetYaxis()->SetTitleSize(0.2);
  hRatio->GetYaxis()->SetTitleOffset(0.20);
  hRatio->GetXaxis()->SetNdivisions(-1);
  hRatio->GetXaxis()->SetLabelSize(0.0001);
  hRatio->GetYaxis()->SetRangeUser(0.8,1.2);
  hRatio->Draw("hist pe");
  TLine line;
  line.DrawLine(xmin,1,xmax,1);
  
  
  TCanvas C;    
  C.Clear();
  pad1->Draw();
  pad2->Draw();
  C.Print(outpath+"/"+outname+".png");

  pad1->SetLogy(1);
  pad1->Update();
  C.Print(outpath+"/"+outname+".log.png");
  pad1->SetLogy(0);

  delete hRatio;
}


void compareCollections(Sample* sample, TString coll1, TString coll2, 
			TString var, int N, float xmin, float xmax,
			TString outpath, TString outname, TString selection=""){
  

  TH1F H1("H1","",N,xmin,xmax);
  H1.GetXaxis()->SetTitle(outname);
  sample->fillHisto(&H1,coll1+"."+var,selection.Data());

  TH1F H2("H2","",N,xmin,xmax);
  H2.GetXaxis()->SetTitle(outname);
  sample->fillHisto(&H2,coll2+"."+var,selection.Data());
  
  TH1F* hRatio = (TH1F*)H2.Clone("HRatio");
  for(Int_t b=1;b<=N;b++) {
    if(H1.GetBinContent(b)>0.) hRatio->SetBinContent(b, H2.GetBinContent(b) / H1.GetBinContent(b) );
    else  hRatio->SetBinContent(b,0);
    hRatio->SetBinError(b,0);//do not show error as these two samples should have the same events in principle 
  }
  
  TPad * pad1=new TPad("pad1","",0,0.2,1,1);
  TPad * pad2=new TPad("pad2","",0,0,1,0.2);
  
  pad1->cd();
  if(H1.GetMaximum()>H2.GetMaximum()){
    H1.Draw("hist");
    H2.Draw("histpsame");
  }else {
    H2.Draw("histp");//H2 is always the new production and should plotted with points
    H1.Draw("histsame");
  }
  
  pad2->cd();
  hRatio->SetStats(0);
  hRatio->SetTitle("");
  hRatio->GetYaxis()->SetTitle("ratio");
  hRatio->GetXaxis()->SetTitle("");
  hRatio->GetYaxis()->SetNdivisions(5);
  hRatio->GetYaxis()->SetLabelSize(0.15);
  hRatio->GetYaxis()->SetTitleSize(0.2);
  hRatio->GetYaxis()->SetTitleOffset(0.20);
  hRatio->GetXaxis()->SetNdivisions(-1);
  hRatio->GetXaxis()->SetLabelSize(0.0001);
  hRatio->GetYaxis()->SetRangeUser(0.8,1.2);
  hRatio->Draw("hist pe");
  TLine line;
  line.DrawLine(xmin,1,xmax,1);
  
  TCanvas C;    
  C.Clear();
  pad1->Draw();
  pad2->Draw();
  C.Print(outpath+"/"+outname+".png");
  pad1->SetLogy(1);
  pad1->Update();
  C.Print(outpath+"/"+outname+".log.png");
  pad1->SetLogy(0);

  delete hRatio;
}




void compareFiles(TString file1, TString file2, TString outfile, long position=0,TString xtitle="xtitle", TString ytitle="ytitle", bool logy=0, bool skipMissing=0, TString matchExpr=""){
  
  std::ifstream infile1(file1.Data());
  std::ifstream infile2(file2.Data());
  std::string line1;
  std::string line2;


  float index1;
  float index2;
  float value1;
  float value2;

  TGraph G1;
  TGraph G2;
  TGraph Ratio;

  float miny=1000000000;
  float maxy=-1000000000;
  float minx=1000000000;
  float maxx=-1000000000;

  int counter=0;
  while (std::getline(infile1, line1)){
    TString LINE1(line1.c_str());
    if(matchExpr.CompareTo("")!=0){
      if(! LINE1.Contains(matchExpr.Data())) continue;
    }

    std::istringstream iss1(line1);

    std::getline(infile2,line2);
    std::istringstream iss2(line2);

    iss1>>index1;
    iss2>>index2;
    if(position==0){//in case files have only column
      value1=index1; 
      index1=counter;
      value2=index2; 
      index2=counter;
    }else{//in case we want to compare a different column

      if(index1!=index2){ 
	///file2 is not in same order, must loop and find correct entry
	std::ifstream infile2tmp(file2.Data());
	std::string line2tmp;
	while (std::getline(infile2tmp, line2tmp)){
	  std::istringstream iss2tmp(line2tmp);
	  iss2tmp>>index2;
	  if(index2==index1){	
	    line2=line2tmp; 
	    break; 
	  }
	}
	
      }
      
      if(index1!=index2){
	cout<<"no match, f1 index="<<index1<<endl;  
	index2=index1;
	if(skipMissing){
	  value2=0.;
	  for(int i=1;i<=position;i++)
	    iss1>>value1;
	} else break;
      }else{
	std::istringstream iss2new(line2);
	iss2new>>index2;	  
	for(int i=1;i<=position;i++){
	  iss1>>value1;
	  iss2new>>value2;
	}
      }
    }


    printf("%d : %d %d\n",int(index1),int(value1),int(value2));
    G1.SetPoint(counter,index1,value1);
    G2.SetPoint(counter,index2,value2);
    if(value1!=0.) Ratio.SetPoint(counter,index1,value2/value1);
    else Ratio.SetPoint(counter,index1,0.);

    if(miny>value1) miny=value1;
    if(miny>value2) miny=value2;

    if(maxy<value1) maxy=value1;
    if(maxy<value2) maxy=value2;

    if(minx>index1) minx=index1;
    if(minx>index2) minx=index2;

    if(maxx<index1) maxx=index1;
    if(maxx<index2) maxx=index2;

    counter++;
  }


  TCanvas C;
  //C.SetTopMargin(0.2);
  TLine line;

  C.Clear();
  //G1.GetYaxis()->SetRangeUser(miny*0.5,maxy*1.2);
  G1.GetYaxis()->SetRangeUser(miny-(maxy-miny)*0.1,maxy+(maxy-miny)*0.2);
  G1.GetXaxis()->SetTitle(xtitle);
  G1.GetYaxis()->SetTitle(ytitle);
  G1.Draw("alp");
  G2.SetMarkerColor(2);
  G2.SetLineColor(2);
  G2.Draw("lpsame");

  TLatex latex1; latex1.SetTextColor(1); latex1.SetTextSize(0.03);
  latex1.DrawLatexNDC(0.21,0.87,file1);
  TLatex latex2; latex2.SetTextColor(2); latex2.SetTextSize(0.03);
  latex2.DrawLatexNDC(0.21,0.83,file2);

  if(logy)C.SetLogy(1);
  else   line.DrawLine(minx,0,maxx,0);
  C.Print(outfile+"_comparison_"+position+".gif");
  if(logy) C.SetLogy(0);

  C.Clear();
  Ratio.GetXaxis()->SetTitle(xtitle);
  Ratio.GetYaxis()->SetTitle(ytitle+" ratio");
  //Ratio.GetYaxis()->SetRangeUser(0,2);
  Ratio.SetMarkerColor(2);
  Ratio.SetLineColor(2);
  Ratio.Draw("alp");
  line.DrawLine(minx,1,maxx,1);
  C.Print(outfile+"_ratio_"+position+".gif");

}
