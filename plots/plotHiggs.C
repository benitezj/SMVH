#ifndef PLOTHiggs_C
#define PLOTHiggs_C
#include "plotJet.C"

void plotHiggs(Plotter* analysis){
  //H
  analysis->plot("jj_m[vh_h[vh]]/1000",25,0,500,""," M_{jj} [GeV]","",c2,"vh_h_m",1);
  analysis->plot("jj_pt[vh_h[vh]]/1000",50,0,500,""," p_{T}_{jj} [GeV]","",c2,"vh_h_pt");
  analysis->plot("jj_dR[vh_h[vh]]",50,0,10,""," #DeltaR_{jj} [GeV]","",c1,"vh_h_dRjj");

  //Higgs Jets (pT ordered)
  analysis->plot("vh_njet",10,0,10,""," # of central jets","",c2,"vh_njet");
  plotJet(analysis,"jj_leg1[vh_h[vh]]","vh_leadjet");
  plotJet(analysis,"jj_leg2[vh_h[vh]]","vh_subleadjet");
  
  //////b-tagged jets
  analysis->plot("vh_nbjet",4,0,4,""," # of b-tagged jets","",c2,"vh_nbjet");
  plotJet(analysis,"vh_bjet1","vh_leadbjet");
  plotJet(analysis,"vh_bjet2","vh_subleadbjet");


}

#endif
