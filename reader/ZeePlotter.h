#ifndef ZeePlotter_H
#define ZeePlotter_H

#include "../SMVH/Plotter.h"

class ZeePlotter : public Plotter {

public:
  
  ZeePlotter();
  ZeePlotter(const char * name, const char * title);
  virtual ~ZeePlotter();
  
  // void plot(TString variable, Int_t nbins, Float_t xmin, Float_t xmax, TString sel="",
  // 	    TString xlabel="", TString ylabel="", Float_t* legendcoords=0, TString filetag="");
  
  ClassDef(ZeePlotter, 1);
};

#endif 
