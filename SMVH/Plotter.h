#ifndef Plotter_H
#define Plotter_H

#include <vector>
using namespace std;

#include <TNamed.h>
#include <TString.h>
#include <TH1D.h>
#include <THStack.h>
#include <TList.h>

#include "Sample.h"

class Plotter : public TNamed {

public:
  
  Plotter();
  Plotter(const char * name, const char * title);
  virtual ~Plotter();
  
  virtual void plot(TString variable, Int_t nbins, Float_t xmin, Float_t xmax, TString sel="", 
		    TString xlabel="", TString ylabel="", Float_t* legendcoords=0, TString filetag="",
		    bool signal=0, TString blindSel="");
  
  void setSelection(TString sel){selection_=sel;}//selection to be applied for category
  TString getSelection(){return selection_;}
  void setCategory(TString sel){category_=sel;}//selection to be applied for category
  TString getCategory(){return category_;}
  void setOutputPath(TString path){outputpath_=path;}
  void setSamplesPath(TString path){samplespath_=path;}
  void setSystNames(std::vector<std::string> systNames){systNames_=systNames;}
  void setCurrSyst(std::string variation){currSyst_=variation;}
  void setFakeLumi(float lumi){fakeLumi_=lumi;}
  float getFakeLumi(){return fakeLumi_;}
  void setLumisFile(TString file){lumisFile_=file;}
  void setCrossectionsFile(TString file){crossectionsFile_=file;}
  void addSample(Sample* sample);
  void addData(TString path, TString sample);//lumi in /pb
  void addAllData(TString path);// will search directory for all data* samples, lumi in /pb
  void orderSamples();
  void defineBackground(TString name,TString sampleNames,int color,TString title);
  void defineSignal(TString name,TString sampleNames,int color,TString title,int factor=1);
  bool loadBackgroundSamples(TString name,TString match,TString path,TString weight="1");
  bool setBackgroundSampleNames(TString name, TString sampleNames);
  bool skimSamples(TString selection, TString match="");
  bool scaleSamplesLumi();  
  TH1D* getSample(TString samplename);
  TH1D* getTotalData();
  TH1D * getBackground(TString name);
  TH1D * getSignal(TString name);
  Float_t getTotalDataLumi();


  void setBinning(TString var, Int_t nbins, Float_t xmin, Float_t xmax){
    plotvar_=var;nbins_=nbins;xmin_=xmin;xmax_=xmax;
  }
  void setBinning(TString var, Int_t nbins, Float_t * xbins){
    if(nbins<2||xbins==0)cout<<" bad variable bins"<<endl;
    plotvar_=var;  nbinsVariable_=nbins;  xbinsVariable_=xbins;
  }
  TH1D * getPlotHisto(TString hname);
  void makeDensityHisto(TH1D*h);


  bool printRawYields(TString selection="");
  void plotYieldPerLumi();
  void plotProductionEfficiency();
  void printGenEvents();
  void printEventList(TString SampleName, TString selection, TString variables, TString outfile="");


  Sample * findSample(TString sampleName){
    for( std::vector<Sample*>::const_iterator s=samples_.begin(); s!=samples_.end(); ++s)
      if( sampleName.CompareTo((*s)->GetName()) == 0){
	return *s;
      }  
    return NULL;
  }

  //clean up
  void deleteSamples(){
    for(std::vector<Sample*>::const_iterator s=samples_.begin();s!=samples_.end();s++)
      delete *s;
    samples_.clear();
  }  


  //selections used for each plot made inside this class
  TString eventWeight_;
  
  //plotting options
  void setPlotRatioRange(float range){ratioRange=range;}


protected:
  
  TString selection_;
  TString category_;

  TString blindcut_;//only used for specific plots (both must be set)

  TString plotvar_;
  Int_t nbins_;
  Float_t xmin_;
  Float_t xmax_;
   
  Int_t nbinsVariable_;
  Float_t* xbinsVariable_;

  TString samplespath_;
  TString outputpath_;

  std::vector<std::string> systNames_;
  std::string currSyst_;

  float fakeLumi_;
  TString lumisFile_;
  float getSampleLumi(TString sample);

  TString crossectionsFile_;
  float findCrossection(Sample * sample);

  std::vector<Sample*> samples_;   

  std::vector<TString> backgrounds_;
  std::vector<TString> backgroundSampleNames_;
  std::vector<int> backgroundColors_;
  std::vector<TString> backgroundTitles_;
 
  std::vector<TString> signals_;
  std::vector<TString> signalSampleNames_;
  std::vector<int> signalColors_;
  std::vector<TString> signalTitles_;
  std::vector<int> signalScaleFactors_;

  vector<TString> listDir(const char * path);
 

  float ratioRange;
  void makePlot(TString filename,TH1D* hData, THStack * hStack, TString xlabel, TString ylabel,
		Float_t* legendcoords=0, TList* signalList=0);

  ClassDef(Plotter, 1);
};

#endif 
