#include "WenuPlotter.h"

ClassImp(WenuPlotter)

WenuPlotter::WenuPlotter():Plotter("",""){}

WenuPlotter::WenuPlotter(const char * name, const char * title):
  Plotter(name,title)
{
}

WenuPlotter::~WenuPlotter(){
}

