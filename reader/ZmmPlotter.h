#ifndef ZmmPlotter_H
#define ZmmPlotter_H

#include "../SMVH/Plotter.h"

class ZmmPlotter :  public  Plotter {

public:
  
  ZmmPlotter();
  ZmmPlotter(const char * name, const char * title);
  virtual ~ZmmPlotter();
  
  // void plot(TString variable, Int_t nbins, Float_t xmin, Float_t xmax, TString sel="", 
  // 	    TString xlabel="", TString ylabel="", Float_t* legendcoords=0, TString filetag="");
  

  ClassDef(ZmmPlotter, 1);
};

#endif 
