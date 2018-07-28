#ifndef PLOTV_C
#define PLOTV_C

#include "plotEvent.C"
#include "plotJet.C"

void plotV(Plotter* analysis){
  plotEvent(analysis);


  ///Central Jets
  analysis->plot("v_njet",10,0,10,""," # of central jets","",c2,"njet");
  plotJet(analysis,"v_jet","leadjet");

  //FW Jets
  analysis->plot("v_njetfw",10,0,10,""," # of forward jets","",c2,"njetfw");
  plotJet(analysis,"v_jetfw","leadjetfw");
  
  //fat Jets
  analysis->plot("v_nfatjet",10,0,10,""," # of fat jets","",c2,"nfatjet");
  plotFatJet(analysis,"v_fatjet","leadfatjet");

  //trk Jets
  analysis->plot("v_ntrkjet",30,0,30,""," # of track jets","",c2,"ntrkjet");
  plotTrackJet(analysis,"v_trkjet","leadtrakjet");
 

}

#endif
