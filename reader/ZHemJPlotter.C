#include "../reader/ZHemJPlotter.h"

ClassImp(ZHemJPlotter)

ZHemJPlotter::ZHemJPlotter(): Plotter("",""){}

ZHemJPlotter::ZHemJPlotter(const char * name, const char * title):
  Plotter(name,title)
{

}

ZHemJPlotter::~ZHemJPlotter(){}
