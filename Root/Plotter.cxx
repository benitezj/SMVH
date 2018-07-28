#include "SMVH/Plotter.h"
#include "SMVH/tools.h"

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <stdio.h>
#include <sstream>

#include <TSystemDirectory.h>
#include <TSystemFile.h>
#include <TList.h>
#include <TCanvas.h>
#include <TLegend.h>
#include <TLine.h>
#include <TPaveText.h>
#include <TF1.h>
#include <TTreePlayer.h>

ClassImp(Plotter)

Plotter::Plotter(): TNamed("",""){}

Plotter::Plotter(const char * name, const char * title):
  TNamed(name,title),
  eventWeight_("1"),
  selection_("1"),
  category_("1"),
  blindcut_("1"),
  plotvar_(""),
  nbins_(0),
  xmin_(0.),
  xmax_(1.),
  nbinsVariable_(0),
  xbinsVariable_(0),
  currSyst_(""),
  fakeLumi_(0.),
  lumisFile_(""),
  crossectionsFile_(""),
  ratioRange(0.2)
{

}

Plotter::~Plotter(){
}



void Plotter::addSample(Sample* sample){
  if(!sample) return;
  for( std::vector<Sample*>::const_iterator s1=samples_.begin(); s1!=samples_.end(); ++s1)
    if(TString(sample->GetName()).CompareTo((*s1)->GetName())==0){
      cout<<"sample is a duplicate:"<<sample->GetName()<<endl;
      return;
    }
  
  if(sample->getDataType().CompareTo("Data")!=0)
    sample->setCrossection(findCrossection(sample));
  cout<<"L="<<sample->getLumi()<<" X="<<sample->getCrossection()<<" "<<sample->GetName()<<endl;

  samples_.push_back(sample);
}   

void Plotter::defineBackground(TString name,TString sampleNames,int color,TString title){
  cout<<"Plotter::defineBackground  "<<name<<"("<<sampleNames<<") color="<<color<<"  title="<<title<<endl;
  for( std::vector<TString>::const_iterator bkg=backgrounds_.begin(); bkg!=backgrounds_.end(); ++bkg)
    if((*bkg).CompareTo(name.Data()) == 0){
      cout<<"Background "<<name<<" was already defined. "<<endl; return;
    }
  backgrounds_.push_back(name);
  backgroundSampleNames_.push_back(sampleNames);
  backgroundColors_.push_back(color);
  backgroundTitles_.push_back(title);

}

void Plotter::defineSignal(TString name,TString sampleNames,int color,TString title,int factor){
  cout<<"Plotter::defineSignal  "<<name<<"("<<sampleNames<<")  color="<<color<<" title="<<title<<" scale factor="<<factor<<endl;
  for( std::vector<TString>::const_iterator sig=signals_.begin(); sig!=signals_.end(); ++sig)
    if((*sig).CompareTo(name.Data()) == 0){
      cout<<"Signal "<<name<<" was already defined. "<<endl; return;
    }
  signals_.push_back(name);
  signalSampleNames_.push_back(sampleNames);
  signalColors_.push_back(color);
  signalTitles_.push_back(title);
  signalScaleFactors_.push_back(factor);
}




float Plotter::getSampleLumi(TString sample){
  //float lumi=getSampleValue(lumisFile_ , determineRunNumber(sample.Data()));
  float lumi=getSampleValueFromCSV(lumisFile_ , determineRunNumber(sample.Data()),6);//position 6 corresponds to corrected
  if(lumi==0.)
    cout<<"Plotter::getSampleLumi Warning : lumi for "<<sample<<" was not found or is 0 in "<<lumisFile_<<endl;

  return lumi;//values in file are pb^-1
}


float Plotter::findCrossection(Sample * sample){
  
  float crossection=0.;
  std::ifstream infile(crossectionsFile_.Data());
  std::string line;
  while (std::getline(infile, line)){
    std::istringstream iss(line);
    int run;
    iss >> run;
    float crosFinal=0.;
    float kFactor=0.;
    float filterEff=0.;
    iss >> crosFinal;
    iss >> kFactor;
    iss >> filterEff;

    if(run == sample->getRun()){
      crossection=crosFinal;
      if(kFactor!=0.) crossection*= kFactor;
      if(filterEff!=0.) crossection*= filterEff;
      break;
    }
  }
  if(crossection==0.)
    cout<<"Plotter::findCrossection Warning : crossection for "<<sample->GetTitle()<<" was not found or is 0 in "<<crossectionsFile_<<endl;

  return crossection;
}


bool Plotter::setBackgroundSampleNames(TString name, TString sampleNames){
  int i=0;
  for( std::vector<TString>::const_iterator bkg=backgrounds_.begin(); bkg!=backgrounds_.end(); ++bkg){
    if((*bkg).CompareTo(name.Data()) == 0){
      backgroundSampleNames_[i] = backgroundSampleNames_[i] + "," + sampleNames;
      return 1;
    }
    i++;
  }
  cout<<"setBackgroundSampleNames: did not find "<<name<<endl;
  return 0;
}

bool Plotter::skimSamples(TString selection, TString match){
  cout<<"Skiming samples:"<<endl;
  for( std::vector<Sample*>::const_iterator s = samples_.begin(); s != samples_.end(); ++s){
    TString title((*s)->GetTitle());
    //only skim samples which contain "match"
    if( title.Contains(match.Data()) || match.CompareTo("") == 0 ){
      if(!((*s)->skim(selection))) return 0;
      cout<<(*s)->GetName()<<" entries :"<<(*s)->getEntries()<<endl;
    }
  }
  return 1;
}



void Plotter::addData(TString path,TString sample){
  float lumi=getSampleLumi(sample);
  if(lumi<=0.){
    cout<<sample<<" has bad lumi. Sample will be removed."<<endl;
    return;
  }
  
  Sample* Data = new Sample(sample,sample,path,systNames_);
  Data->setDataType("Data");
  
  if(Data->getNFiles()==0){//DataType needs to be set 
    cout<<sample<<" has no files. Sample will be removed."<<endl;
    return;
  }

  Data->setSampleLumi(lumi);
  this->addSample(Data);
}


Float_t Plotter::getTotalDataLumi(){
  float totalDataLumi=fakeLumi_;
  for( std::vector<Sample*>::const_iterator s=samples_.begin(); s!=samples_.end(); ++s)
    if((*s)->getDataType()=="Data")
      totalDataLumi+=(*s)->getLumi();
  //cout<<"Total Data lumi = "<<totalDataLumi<<endl;
  return totalDataLumi;
}


vector<TString> Plotter::listDir(const char * path){
  vector<TString> samples;
  TSystemDirectory dir(path,path);
  TList *files = dir.GetListOfFiles();
  if (files) {
    TSystemFile *file;    
    TIter next(files);
    while ((file=(TSystemFile*)next())) {
      TString fname = file->GetName();
      if (file->IsDirectory()) {
	samples.push_back(fname);
      }
    }
  }

  return samples;
}


void Plotter::addAllData(TString path){
  vector<TString> samples = listDir(path.Data());
  for( std::vector<TString>::const_iterator s=samples.begin(); s!=samples.end(); ++s){
    if((*s).Contains("data15_13TeV") 
       || (*s).Contains("data12_8TeV") ){
      addData(path,*s);
    }
  }

  // //Print summary of data samples:
  // for( std::vector<Sample*>::const_iterator s=samples_.begin(); s!=samples_.end(); ++s)
  //   if((*s)->getDataType()=="Data"){
  //     cout<<"L="<<(*s)->getLumi()<<" "<<(*s)->GetName()<<endl;
  //   }

}

bool Plotter::scaleSamplesLumi(){

  orderSamples();//need to order the samples first so plots have run number in increasing value

  cout<<"---------> Scaling all MC samples to Lumi "<<endl;
  for( std::vector<Sample*>::const_iterator s=samples_.begin(); s!=samples_.end(); ++s)
    (*s)->resetScale();

  float totalDataLumi=getTotalDataLumi();
  cout<<"totalDataLumi = "<<totalDataLumi<<endl;

  for( std::vector<Sample*>::const_iterator s=samples_.begin(); s!=samples_.end(); ++s)
    if((*s)->getDataType()=="MC" 
       ){
      //cout<<(*s)->GetName()<<" lumi scale "<<totalDataLumi/(*s)->getLumi()<<endl;
      if((*s)->getLumi()>0.){
	cout<<"Scaling "<<(*s)->GetName()<<"  by "<<totalDataLumi/(*s)->getLumi()<<endl;
	(*s)->scale(totalDataLumi/(*s)->getLumi());
      } else{
	cout<<"Plotter::scaleSamplesLumi : "<<(*s)->GetName()<<" has a negative luminosity"<<endl;
	(*s)->scale(0.);
      }
    }


  return 1;
}


TH1D* Plotter::getSample(TString samplename){
  TH1D* h=getPlotHisto(samplename);
  TCut sel=TCut(eventWeight_+"*"+selection_+"*"+category_);//have to use *, + will give an integer for the final event weight
  //cout<<sel<<endl;
  for( std::vector<Sample*>::const_iterator s=samples_.begin(); s!=samples_.end(); ++s)
    if(samplename.CompareTo((*s)->GetName()) == 0){
      (*s)->fillHisto(h,plotvar_,sel,currSyst_);
      return h;
    }  
  cout<<"Plotter::getSample : '"<<samplename<<"' not found"<<endl;
  return 0;
}

TH1D* Plotter::getTotalData(){
  TString tmpsel=selection_;
  selection_=selection_+"*"+blindcut_;
  
  cout<<"Selection: "<<selection_<<endl;
  
  TH1D* h=getPlotHisto("hData");
  for( std::vector<Sample*>::const_iterator s=samples_.begin(); s!=samples_.end(); ++s)
    if((*s)->getDataType()=="Data"){
      TH1D*hd=getSample((*s)->GetName());
      if(hd){
	h->Add(hd);
	delete hd;
      }
    }
  selection_=tmpsel;
  return h;
}

bool Plotter::printRawYields(TString selection){
  
  for( std::vector<Sample*>::const_iterator s=samples_.begin(); s!=samples_.end(); ++s){
    TH1D*h=(*s)->getHistoNtpFile("1",1,0,2,selection.Data());
    cout<<h->GetName()<<" "<<(int)(h->Integral())<<endl;
    delete h;
  }
  
  return 1;
}


TH1D * Plotter::getBackground(TString name){
  TH1D* H=getPlotHisto(name+"Bkg");
  int i=0;
  for( std::vector<TString>::const_iterator bkg=backgrounds_.begin(); bkg!=backgrounds_.end(); ++bkg){
    if(backgrounds_[i].CompareTo(name.Data()) == 0){
      
      //look for the samples that compose this background
      cout<<name<<": ";
      vector<string> samples = split(backgroundSampleNames_[i].Data(),',');

      //set the attributes 
      H->SetTitle(backgroundTitles_[i]);
      H->SetFillColor(backgroundColors_[i]);

      for( std::vector<string>::const_iterator s=samples.begin(); s!=samples.end(); ++s){
	TString S(*s);
	if( S.CompareTo("") != 0){
	  TH1D* h = getSample((*s).c_str());
	  if(!h){cout<<"Plotter::getBackground :  sample "<<(*s)<<"  not found"<<endl; return 0;}
	  H->Add(h);	
	  cout<<*s<<" "<<(int)(h->Integral())<<",";
	  delete h;

	}
      }
      
      //calculate error on yield
      float err=0.;
      for(int b=1;b<=H->GetNbinsX();b++)
	err+=H->GetBinError(b) * H->GetBinError(b);
      
      printf(" TOTAL = %.2f +- %.2f\n",H->Integral(),sqrt(err));
      //cout<<" TOTAL = "<<(int)(H->Integral())<<endl;
    }

    i++;
  }
  
  //if(H->Integral()==0){cout<<"Plotter::getBackground : "<<name<<" not found"<<endl;}
  return H;
}


TH1D * Plotter::getSignal(TString name){
  TH1D* H=getPlotHisto(name+"Sig");
  int i=0;
  for( std::vector<TString>::const_iterator sig=signals_.begin(); sig!=signals_.end(); ++sig){
    if(signals_[i].CompareTo(name.Data()) == 0){
      
      cout<<name<<": ";
      vector<string> samples = split(signalSampleNames_[i].Data(),',');

      H->SetTitle(signalTitles_[i] + (signalScaleFactors_[i]>1 ? TString("(x")+(long)signalScaleFactors_[i]+")" : ""));
      H->SetLineColor(signalColors_[i]);
      //H->SetFillColor(signalColors_[i]);
      
      for( std::vector<string>::const_iterator s=samples.begin(); s!=samples.end(); ++s){
	TString S(*s);
	if( S.CompareTo("") != 0){
	  TH1D* h = getSample((*s).c_str());
	  if(!h){cout<<"Plotter::getSignal :  sample "<<(*s)<<"  not found"<<endl; return 0;}
	  h->Scale(signalScaleFactors_[i]);//Note this makes getSignal() different from getBackground()
	  H->Add(h);	
	  cout<<*s<<" "<<(int)(h->Integral())<<",";
	  delete h;

	}
      }
      printf(" TOTAL = %.2f\n",H->Integral());
      //cout<<" TOTAL = "<<(int)(H->Integral())<<endl;
    }

    i++;
  }

  //if(H->Integral()==0){cout<<"Plotter::getSignal : "<<name<<" not found"<<endl;}
  return H;
}



TH1D * Plotter::getPlotHisto(TString hname){
  //cout<<"Making histo "<<hname<<endl;
  TH1D* h=0;
  if(nbins_>0) h=new TH1D(hname,hname,nbins_,xmin_,xmax_);
  else if(nbinsVariable_>0) h=new TH1D(hname,hname,nbinsVariable_,xbinsVariable_);
  else{ cout<<" histo binning not recognized"<<endl; return 0;}
  h->GetXaxis()->SetTitle(plotvar_);
  h->Sumw2();
  h->SetLineWidth(1);
  h->SetLineColor(1);
  return h;
}

void Plotter::makeDensityHisto(TH1D*h){
  for(Int_t b=1;b<=h->GetNbinsX();b++){
    h->SetBinContent(b,h->GetBinContent(b)/h->GetBinWidth(b));
    h->SetBinError(b,h->GetBinError(b)/h->GetBinWidth(b));//scale the error too
  }
}




void Plotter::plot(TString variable, Int_t nbins, Float_t xmin, Float_t xmax, TString sel,
		   TString xlabel, TString ylabel,Float_t* legendcoords, 
		   TString filetag, bool signal, TString blindSel){

  plotvar_=variable;
  nbins_=nbins;
  xmin_=xmin;
  xmax_=xmax;

  if(blindSel.CompareTo("")!=0) blindcut_ = blindSel;
  
  if(sel.CompareTo("")!=0)  category_ = TString("(") + sel + ")"; 
 
  TH1D* hData=getTotalData();
  if(!hData){cout<<"No Data histo."<<endl; return;}
  hData->SetName(TString("hData")+filetag);

  ///Backgrounds
  THStack hBkgStack("hBkgStack","hBkgStack");//dont't set any of the regular histogram properties on the THStack, it will crash.
  for( std::vector<TString>::const_iterator bkg=backgrounds_.begin(); bkg!=backgrounds_.end(); ++bkg){
    TH1D*H=getBackground((*bkg).Data());
    if(H->Integral()==0.){ delete H; continue;}
    H->SetName((*bkg)+"_"+filetag);
    hBkgStack.Add(H,"hist");
  }

  //Signals
  TList* SignalList=0;
  if(signal){
    SignalList=new TList();
    for( std::vector<TString>::const_iterator sig=signals_.begin(); sig!=signals_.end(); ++sig){
      TH1D* H=getSignal((*sig).Data());
      if(H->Integral()==0.){delete H; continue;}
      H->SetName((*sig)+"_"+filetag);
      SignalList->Add(H,"hist");
    }
    if(SignalList->GetSize()==0){ delete SignalList; SignalList=NULL;}
  }


  makePlot(outputpath_+"/"+filetag,hData,&hBkgStack,xlabel,ylabel,legendcoords,SignalList);

  blindcut_="1";
}


void Plotter::makePlot(TString filename, TH1D* Data, THStack * BkgStack, TString xlabel, TString ylabel,
		       Float_t* legendcoords,TList* signalList){

  TPaveText titlePaveText(.20,.90,.92,.999,"NDC");
  titlePaveText.SetBorderSize(   0 );
  titlePaveText.SetFillStyle(    0 );
  titlePaveText.SetTextAlign(   12 );
  titlePaveText.SetTextSize ( 0.034 ); //do not increase size power on fb will get separated
  titlePaveText.SetTextColor(    1 );
  titlePaveText.SetTextFont (   62 );

  char title[100];
  sprintf(title,GetTitle(),getTotalDataLumi()/1000.);
  //sprintf(title,GetTitle(),getTotalDataLumi());
  titlePaveText.AddText(title);

  TLegend legend;
  legend.SetFillStyle (0);
  legend.SetFillColor (0);
  legend.SetBorderSize(0);
  legend.SetTextSize(.04);


  cout<<"Total Data "<<(int)(Data->Integral())<<endl; 
  Data->SetMarkerSize(1);
  if(Data->Integral()>0) legend.AddEntry(Data,"data","P");  

  //create a histo with the total Background
  TH1D* hBkg=getPlotHisto("hBkg");
  hBkg->SetFillColor(0);
  hBkg->SetLineColor(1);
  TList* histList= BkgStack->GetHists();
  if(!histList){
    cout<<"Plotter makePlot: histList is NULL"<<endl;
    return;
  }
  for(Int_t i=histList->GetSize()-1 ; i>=0 ;i--){
    hBkg->Add((TH1D*)(histList->At(i)));
    legend.AddEntry((TH1D*)(histList->At(i)),((TH1D*)(histList->At(i)))->GetTitle(),"F");
  }
  cout<<"Total Bkg "<<(int)(hBkg->Integral())<<endl;  


  //Add the total background to the signals so they show on top
  if(signalList!=NULL && signalList->GetSize()>0)
    for(Int_t i=0;i<signalList->GetSize();i++){
      ((TH1D*)(signalList->At(i)))->Add(hBkg);
      legend.AddEntry((TH1D*)(signalList->At(i)),((TH1D*)(signalList->At(i)))->GetTitle(),"F");
    }

  TCanvas C("C",filename);  

  C.Clear();

  Data->SetTitle("");
  float maxyData=(Data->GetMaximum()+Data->GetBinError(Data->GetMaximumBin()))*1.25;
  float maxyMC=(hBkg->GetMaximum()+hBkg->GetBinError(hBkg->GetMaximumBin()))*1.25;
  Data->GetYaxis()->SetRangeUser(0,maxyData>maxyMC ? maxyData : maxyMC);
  Data->SetStats(0);
  Data->GetXaxis()->SetTitle(xlabel);
  Data->GetYaxis()->SetTitle(ylabel);

  Data->Draw("hist pe");
  if(signalList)
    for(Int_t i=0;i<signalList->GetSize();i++){
      ((TH1D*)(signalList->At(i)))->Draw("histsame");
    }
  BkgStack->Draw("hist same");  
  Data->Draw("hist pe same");//bring Data points back to front
  hBkg->Draw("histsame");//draw outline of MC on top of data        
  BkgStack->GetHistogram()->Draw("same");//bring axes back to front 

  if(legendcoords){
    legend.SetX1NDC(legendcoords[0]);
    legend.SetY1NDC(legendcoords[1]);
    legend.SetX2NDC(legendcoords[2]);
    legend.SetY2NDC(legendcoords[3]);
  }
  legend.Draw();

  titlePaveText.Draw(); //Add the title

  C.RedrawAxis();
  C.Update();
  // C.Print(filename+".png");  
  // C.Print(filename+".eps");  


  // Data->GetYaxis()->SetRangeUser(0.2,Data->GetMaximum()*100);
  // C.Update();
  // C.SetLogy(1);
  // C.Print(filename+"_log.png");   
  // C.Print(filename+"_log.eps");   
  // C.SetLogy(0);

  
  TLine line;


  //make the ratio plot
  TH1D* hRatio=getPlotHisto("hRatio");
  hRatio->Add(Data);
  hRatio->Divide(hBkg);
  
  TPad * pad1=new TPad("pad1","",0,0.2,1,1);
  TPad * pad2=new TPad("pad2","",0,0,1,0.2);
  
  pad1->cd();
  Data->GetYaxis()->SetRangeUser(0,maxyData>maxyMC ? maxyData : maxyMC);
  Data->Draw("hist pe");
  if(signalList)
    for(Int_t i=0;i<signalList->GetSize();i++){
      ((TH1D*)(signalList->At(i)))->Draw("histsame");
    }
  BkgStack->Draw("hist same");  
  Data->Draw("hist pe same");
  hBkg->Draw("histsame");
  BkgStack->GetHistogram()->Draw("same");
  legend.Draw();
  titlePaveText.Draw();
  
 
  pad2->cd();
  hRatio->SetStats(0);
  hRatio->SetTitle("");
  hRatio->GetYaxis()->SetTitle("Data/MC");
  hRatio->GetXaxis()->SetTitle("");
  hRatio->GetYaxis()->SetNdivisions(5);
  hRatio->GetYaxis()->SetLabelSize(0.15);
  hRatio->GetYaxis()->SetTitleSize(0.2);
  hRatio->GetYaxis()->SetTitleOffset(0.20);
  hRatio->GetXaxis()->SetNdivisions(-1);
  hRatio->GetXaxis()->SetLabelSize(0.0001);
  hRatio->GetYaxis()->SetRangeUser(1.-ratioRange,1.+ratioRange);
  hRatio->Draw("hist pe");
  line.DrawLine(xmin_,1,xmax_,1);
  
  C.Clear();
  pad1->Draw();
  pad2->Draw();
  C.Print(filename+"_ratio.png");   
  C.Print(filename+"_ratio.eps");   



  Data->GetYaxis()->SetRangeUser(0.2,Data->GetMaximum()*100);
  C.Update();
  pad1->SetLogy(1);
  C.Print(filename+"_ratio_log.png");   
  C.Print(filename+"_ratio_log.eps");   
  pad1->SetLogy(0);




  //write root file with histos for replotting/merging
  TFile OutRootFile(filename+".root","recreate");
  BkgStack->SetName("BkgStack"); BkgStack->Write();
  Data->SetName("Data"); Data->Write();
  hBkg->SetName("Bkg"); hBkg->Write();
  if(signalList)
    for(Int_t i=0;i<signalList->GetSize();i++){
      ((TH1D*)(signalList->At(i)))->SetName("Signal");
      ((TH1D*)(signalList->At(i)))->Write();
    }
  legend.SetName("Legend"); legend.Write();
  titlePaveText.SetName("Title"); titlePaveText.Write();

  hRatio->SetName("Ratio"); hRatio->Write();
  OutRootFile.Close();


  for(Int_t i=0;i<histList->GetSize();i++)
    delete histList->At(i);

  delete hBkg;
  delete hRatio; 
}


void Plotter::plotYieldPerLumi(){

  int NDataRuns=0;
  for( std::vector<Sample*>::const_iterator s=samples_.begin(); s!=samples_.end(); ++s)
    if((*s)->getDataType()=="Data"){
      NDataRuns++;
    }
  
  TH1F HY("plotYield","",NDataRuns,0,1);
  HY.GetXaxis()->SetTitle("");
  HY.GetYaxis()->SetTitle("data yield");
  TH1F HL("plotLumi","",NDataRuns,0,1);
  HL.GetXaxis()->SetTitle("");
  HL.GetYaxis()->SetTitle("luminosity  [pb^{-1}]");
  TH1F HYpL("plotYieldPerLumi","",NDataRuns,0,1);
  HYpL.GetXaxis()->SetTitle("");
  HYpL.GetYaxis()->SetTitle("event yield / lumi ");

  int bin=0;
  for( std::vector<Sample*>::const_iterator s=samples_.begin(); s!=samples_.end(); ++s)
    if((*s)->getDataType()=="Data"){
      bin++;
      float yield=(*s)->getEntries(selection_);//NOTE: yield will be given without category selection
      HY.SetBinContent(bin,yield);
      HY.GetXaxis()->SetBinLabel(bin,TString("")+(long)((*s)->getRun()));

      HL.SetBinContent(bin,(*s)->getLumi());
      HL.GetXaxis()->SetBinLabel(bin,TString("")+(long)((*s)->getRun()));

      HYpL.SetBinContent(bin,yield/(*s)->getLumi());
      HYpL.SetBinError(bin,sqrt(yield)/(*s)->getLumi());
      HYpL.GetXaxis()->SetBinLabel(bin,TString("")+(long)((*s)->getRun()));
    }
  
  TCanvas C("C","C",1000,500);  

  C.Clear();
  //HY.GetXaxis()->SetNdivisions(0);
  HY.GetXaxis()->SetLabelSize(0.03);
  HY.Draw();
  C.Print(outputpath_+"/yield.png");   
  C.Print(outputpath_+"/yield.eps");   

  C.Clear();
  //HL.GetXaxis()->SetNdivisions(0);
  HL.GetXaxis()->SetLabelSize(0.03);
  HL.Draw();
  C.Print(outputpath_+"/lumi.png");   
  C.Print(outputpath_+"/lumi.eps");   

  C.Clear();
  //HYpL.GetXaxis()->SetNdivisions(0);
  TF1 Fconst("Const","[0]",HYpL.GetXaxis()->GetXmin(),HYpL.GetXaxis()->GetXmax());
  HYpL.Fit(&Fconst);
  HYpL.GetYaxis()->SetRangeUser(0,7);
  HYpL.GetXaxis()->SetLabelSize(0.03);
  HYpL.Draw();
  Fconst.SetLineColor(2);
  Fconst.Draw("lsame");
  C.Print(outputpath_+"/yieldperlumi.png");   
  C.Print(outputpath_+"/yieldperlumi.eps");   

}


void Plotter::printGenEvents(){

  for( std::vector<Sample*>::const_iterator s=samples_.begin(); s!=samples_.end(); ++s)
    //if((*s)->getDataType()!="Data")
    cout<<(*s)->getRun()<<" "<<(*s)->getLumi()<<" "<<(*s)->getGenEvents()<<" "<<(*s)->getGenEventsSumW()<<" "<<(*s)->GetTitle()<<endl;

}



void Plotter::orderSamples(){
  
  //cout<<"Going to order samples."<<endl;
  
  std::vector<Sample*> samplesOrdered;

  int lastRun=0;
  for( std::vector<Sample*>::const_iterator s1=samples_.begin(); s1!=samples_.end(); ++s1){
    //cout<<(*s1)->GetName()<<" : "<<(*s1)->getRun()<<endl;
 
    Sample* sample=NULL;
    int smallestRun=99999999;
    for( std::vector<Sample*>::const_iterator s2=samples_.begin(); s2!=samples_.end(); ++s2){
      if((*s2)->getRun() > lastRun && (*s2)->getRun() < smallestRun  ){
	//cout<<"   - "<<(*s2)->GetName()<<" : "<<(*s2)->getRun()<<endl;
    	sample = (*s2);
    	smallestRun = (*s2)->getRun();
      }
    }
    if(sample != NULL){
      samplesOrdered.push_back(sample);
      lastRun=sample->getRun();
    }
    //cout<<(*s1)->getRun()<<" "<<lastRun<<endl;
  }
  samples_=samplesOrdered;
  
}

void Plotter::plotProductionEfficiency(){
  
  TH1F HL("ProdLumi","",samples_.size(),0,1);
  HL.GetXaxis()->SetTitle("run");
  //HL.GetXaxis()->SetLabelSize(0.03);
  HL.GetYaxis()->SetTitle("Luminosity");

  TH1F HI("ProdInput","",samples_.size(),0,1);
  HI.GetXaxis()->SetTitle("run");
  HI.GetYaxis()->SetTitle("input events");

  TH1F HO("ProdOutput","",samples_.size(),0,1);
  HO.GetXaxis()->SetTitle("run");
  HO.GetYaxis()->SetTitle("output events");

  TH1F HE("ProdEfficiency","",samples_.size(),0,1);
  HE.GetXaxis()->SetTitle("run");
  HE.GetYaxis()->SetTitle("selection efficiency");

  cout<<"RUN"<<" "<<"LUMI"<<" "<<"INPUT"<<" "<<"OUTPUT"<<" "<<"EFF"<<endl;
  int counter=0;
  for( std::vector<Sample*>::const_iterator s=samples_.begin(); s!=samples_.end(); ++s){
    counter++;

    int input =  getSampleValue(samplespath_+"/countin.txt",(*s)->getRun());
    int output = getSampleValue(samplespath_+"/countout.txt",(*s)->getRun());
    float eff=input > 0 ? ((float)output)/input : 0;
    float lumi=getSampleLumi((*s)->GetTitle());
    cout<<(*s)->getRun()<<" "<<lumi<<" "<<input<<" "<<output<<" "<<eff<<endl;

    HL.GetXaxis()->SetBinLabel(counter,TString("")+(long)((*s)->getRun()));
    HL.SetBinContent(counter,lumi);

    HI.GetXaxis()->SetBinLabel(counter,TString("")+(long)((*s)->getRun()));
    HI.SetBinContent(counter,input);

    HO.GetXaxis()->SetBinLabel(counter,TString("")+(long)((*s)->getRun()));
    HO.SetBinContent(counter,output);

    HE.GetXaxis()->SetBinLabel(counter,TString("")+(long)((*s)->getRun()));
    HE.SetBinContent(counter,eff);

  }
  
  TCanvas C("C");  
  C.Clear();
  HL.Draw();
  C.Print(outputpath_+"/productionLumi.png");   
  C.Clear();
  HI.Draw();
  C.Print(outputpath_+"/productionInput.png");   
  C.Clear();
  HO.Draw();
  C.Print(outputpath_+"/productionOutput.png");   
  C.Clear();
  HE.Draw();
  C.Print(outputpath_+"/productionEfficiency.png");   
}


bool Plotter::loadBackgroundSamples(TString name,TString match,TString path,TString weight){
  //load all samples which contain "match" and assign them to background "name"

  TString sampleNames;
  vector<string> words = split(match.Data(),'*');
  vector<TString> samples = listDir(path.Data());
  for( std::vector<TString>::const_iterator s=samples.begin(); s!=samples.end(); ++s){
    bool pass=0;
    if(words.size() == 1 && (*s).Contains(match.Data()) )
      pass=1;
    else {
      pass=1;
      for(unsigned int i=0;i<words.size();i++){
	if(! (*s).Contains(words[i].c_str()) ) pass=0;
      }
    }
      
    if(pass){
     
      vector<string> ids = split((*s).Data(),'.');
      TString id;
      if( ids.size() == 1 ) id = *s ;//in case name is simple
      else id = TString("")+(long)determineRunNumber((*s).Data()); //determineDataSetId((*s).Data()) ; //in case name is rucio format
      
      Sample* S = new Sample(id.Data(),(*s).Data(),path.Data(),systNames_); 
      S->setEventWeight(weight);
      addSample(S);
      sampleNames += id + ",";
    }
  }
  if(sampleNames.CompareTo("")==0){
    cout<<"No samples match "<<match<<" in "<<path<<endl;
    return 0;
  }

  return setBackgroundSampleNames(name,sampleNames);
}


void Plotter::printEventList(TString SampleName, TString selection, TString variables, TString outfile){

  if(!findSample(SampleName)){
    cout<<"Sample could be found: "<<SampleName<<endl;
    return;
  }

  TString outname;
  if(outfile.CompareTo("")==0)
    outname=SampleName;
  else outname=outfile;
  
  //NOTE: name does not get properly passed to TTreePlayer if passed by TString.Data()
  TString outnametmp=outname+".tmp"; 
  char * scanfile=new char[100];
  strlcpy(scanfile,outnametmp.Data(),strlen(outnametmp.Data())+10);

  TChain * T=findSample(SampleName)->getTChain();
  TTreePlayer* P=(TTreePlayer*)(T->GetPlayer());
  P->SetScanFileName(scanfile); 
  cout<<"Tree Scan output to :"<<P->GetScanFileName()<<endl;
  P->SetScanRedirect(1); 
  T->SetScanField(0); //print all events to file, do not ask for use input 
  system(TString("rm -f ")+outnametmp.Data());
  T->Scan(variables,selection,"");

  ////// sort the events with awk and sort
  //TTree::Scan always adds ROW and INSTANCE columns, removed with awk
  system(TString("rm -f ")+outname);
  system(TString("cat ")+outnametmp+" | grep -v Row | grep -v '\\*\\*' | awk -F'*' '{print $4,$5,$6,$7,$8}'  | sort -n -k 2 >> " + outname);
  system(TString("rm -f ")+outnametmp);

}
