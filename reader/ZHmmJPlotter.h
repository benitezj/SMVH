#ifndef ZHmmJPlotter_H
#define ZHmmJPlotter_H

#include "../SMVH/Plotter.h"

class ZHmmJPlotter :  public  Plotter {

public:
  
  ZHmmJPlotter();
  ZHmmJPlotter(const char * name, const char * title);
  virtual ~ZHmmJPlotter();
  
  ClassDef(ZHmmJPlotter, 1);
};

#endif 
