#include "../reader/ZHeebbPlotter.h"

ClassImp(ZHeebbPlotter)

ZHeebbPlotter::ZHeebbPlotter(): Plotter("",""){}

ZHeebbPlotter::ZHeebbPlotter(const char * name, const char * title):
  Plotter(name,title)
{

}

ZHeebbPlotter::~ZHeebbPlotter(){}
