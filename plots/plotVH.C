#ifndef PLOTVH_C
#define PLOTVH_C
#include "plotEvent.C"
//#include "plotJet.C"

void plotVH(Plotter* analysis){
  plotEvent(analysis);

  //VH
  analysis->plot("vh_m[vh]/1000",25,0,5000,""," m_{VH}    [GeV]","",c2,"vh_m_blinded",1,vhmassBlindSel);
  analysis->plot("vh_m[vh]/1000",25,0,5000,""," m_{VH}    [GeV]","",c2,"vh_m",1);
  analysis->plot("vh_m[vh]/1000",40,0,2000,""," m_{VH}    [GeV]","",c2,"vh_m_low",1);
  analysis->plot("vh_pt[vh]/1000",25,0,500,""," p_{T}(VH) [GeV]","",c2,"vh_pt");
  analysis->plot("vh_dR[vh]",50,0,10,""," #DeltaR(V,H)","",c1,"vh_dR");

}

#endif
