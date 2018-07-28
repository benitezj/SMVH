#ifndef PLOTHiggsBoost_C
#define PLOTHiggsBoost_C
#include "plotJet.C"

void plotHiggsBoost(Plotter* analysis){

  //  analysis->plot("vh_nfatjet",10,0,10,""," # of fat jets","",c2,"vh_nfatjet");
  analysis->plot("fatjet_m_cor[vh_h[vh]]/1000",30,0,300,""," jet mass [GeV]","",c2,"vh_h_m_blind",1,higgsmassBlindSel);
  analysis->plot("fatjet_m_cor[vh_h[vh]]/1000",30,0,300,""," jet mass [GeV]","",c2,"vh_h_m",1);
  analysis->plot("fatjet_pt[vh_h[vh]]/1000",40,0,2000,""," jet p_{T} [GeV]","",c2,"vh_h_pt");
  analysis->plot("fatjet_eta[vh_h[vh]]",30,-3,3,""," jet eta ","",c2,"vh_h_eta");
  
  // track jets
  analysis->plot("fatjet_ntrkjet[vh_h[vh]]",7,0,7,""," # of track jets","",c2,"vh_h_ntrkjet");
  analysis->plot("fatjet_ntrkjetb[vh_h[vh]]",7,0,7,""," # of b-tagged track jets","",c2,"vh_h_ntrkjetb");
  
  plotTrackJet(analysis,"fatjet_ltrkjet[vh_h[vh]]","vh_h_ltrkjet",500);
  //plotTrackJet(analysis,"fatjet_sltrkjet[vh_h[vh]]","vh_h_sltrkjet",500);


}

#endif
