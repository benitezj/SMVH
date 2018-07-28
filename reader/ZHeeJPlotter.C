#include "../reader/ZHeeJPlotter.h"

ClassImp(ZHeeJPlotter)

ZHeeJPlotter::ZHeeJPlotter(): Plotter("",""){}

ZHeeJPlotter::ZHeeJPlotter(const char * name, const char * title):
  Plotter(name,title)
{

}

ZHeeJPlotter::~ZHeeJPlotter(){}
