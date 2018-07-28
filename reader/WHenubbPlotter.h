#ifndef WHenubbPlotter_H
#define WHenubbPlotter_H

#include "../SMVH/Plotter.h"

class WHenubbPlotter :  public  Plotter {

public:
  
  WHenubbPlotter();
  WHenubbPlotter(const char * name, const char * title);
  virtual ~WHenubbPlotter();
  
  ClassDef(WHenubbPlotter, 1);
};

#endif 
