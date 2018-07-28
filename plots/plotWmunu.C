#include "plotV.C"

void plotWmunu(Plotter* analysis){
  plotV(analysis);
  
  //W
  analysis->plot("muMet_mT[wlnu_lMet]/1000",100,0,200,""," m_{T}(#mu-MET) (GeV)","",c2,"wmunu_mT");
  
  //Lepton
  analysis->plot("muo_pt[wlnu_lMet]/1000",100,0,150,""," p_{T}(#mu) (GeV)","",c2,"wmunu_muo_pt");
  analysis->plot("muo_eta[wlnu_lMet]",100,-3,3,""," #eta(#mu) ","",c2,"wmunu_muo_eta");
  analysis->plot("muo_ptiso[wlnu_lMet]/muo_pt[wlnu_lMet]",100,0,0.5,"","#mu track isolation","",c2,"wmunu_muo_ptiso");
  analysis->plot("muo_etiso[wlnu_lMet]/muo_pt[wlnu_lMet]",100,0,0.5,"","#mu calo. isolation","",c2,"wmunu_muo_etiso");
  

}

