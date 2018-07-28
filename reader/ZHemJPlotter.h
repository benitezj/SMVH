#ifndef ZHemJPlotter_H
#define ZHemJPlotter_H

#include "../SMVH/Plotter.h"

class ZHemJPlotter :  public  Plotter {

public:
  
  ZHemJPlotter();
  ZHemJPlotter(const char * name, const char * title);
  virtual ~ZHemJPlotter();
  
  ClassDef(ZHemJPlotter, 1);
};

#endif 
