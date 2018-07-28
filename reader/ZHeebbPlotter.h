#ifndef ZHeebbPlotter_H
#define ZHeebbPlotter_H

#include "../SMVH/Plotter.h"

class ZHeebbPlotter :  public  Plotter {

public:
  
  ZHeebbPlotter();
  ZHeebbPlotter(const char * name, const char * title);
  virtual ~ZHeebbPlotter();
  
  ClassDef(ZHeebbPlotter, 1);
};

#endif 
