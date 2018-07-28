#include "../reader/WHmnubbPlotter.h"

ClassImp(WHmnubbPlotter)

WHmnubbPlotter::WHmnubbPlotter(): Plotter("",""){}

WHmnubbPlotter::WHmnubbPlotter(const char * name, const char * title):
  Plotter(name,title)
{

}

WHmnubbPlotter::~WHmnubbPlotter(){}
