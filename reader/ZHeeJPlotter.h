#ifndef ZHeeJPlotter_H
#define ZHeeJPlotter_H

#include "../SMVH/Plotter.h"

class ZHeeJPlotter :  public  Plotter {

public:
  
  ZHeeJPlotter();
  ZHeeJPlotter(const char * name, const char * title);
  virtual ~ZHeeJPlotter();
  
  ClassDef(ZHeeJPlotter, 1);
};

#endif 
