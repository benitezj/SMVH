#include "WmunuPlotter.h"

ClassImp(WmunuPlotter)

WmunuPlotter::WmunuPlotter(): Plotter("",""){}

WmunuPlotter::WmunuPlotter(const char * name, const char * title):
  Plotter(name,title)
{
}

WmunuPlotter::~WmunuPlotter(){
}

