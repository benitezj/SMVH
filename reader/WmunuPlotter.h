#ifndef WmunuPlotter_H
#define WmunuPlotter_H

#include "Plotter.h"

class WmunuPlotter : public  Plotter {

public:
  
  WmunuPlotter();
  WmunuPlotter(const char * name, const char * title);
  virtual ~WmunuPlotter();
  
  // void plot(TString variable, Int_t nbins, Float_t xmin, Float_t xmax, TString sel="",
  // 	    TString xlabel="", TString ylabel="", Float_t* legendcoords=0, TString filetag="");
  
  ClassDef(WmunuPlotter, 1);
};

#endif 
