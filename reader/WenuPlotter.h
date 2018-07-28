#ifndef WenuPlotter_H
#define WenuPlotter_H

#include "Plotter.h"

class WenuPlotter : public Plotter {

public:
  
  WenuPlotter();
  WenuPlotter(const char * name, const char * title);
  virtual ~WenuPlotter();
  
  // void plot(TString variable, Int_t nbins, Float_t xmin, Float_t xmax, TString sel="",
  // 	    TString xlabel="", TString ylabel="", Float_t* legendcoords=0, TString filetag="");
  
  ClassDef(WenuPlotter, 1);
};

#endif 
