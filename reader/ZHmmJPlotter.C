#include "../reader/ZHmmJPlotter.h"

ClassImp(ZHmmJPlotter)

ZHmmJPlotter::ZHmmJPlotter(): Plotter("",""){}

ZHmmJPlotter::ZHmmJPlotter(const char * name, const char * title):
  Plotter(name,title)
{

}

ZHmmJPlotter::~ZHmmJPlotter(){}
