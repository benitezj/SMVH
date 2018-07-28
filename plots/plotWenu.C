#include "plotV.C"

void plotWenu(Plotter* analysis){
  plotV(analysis);

  //W
  analysis->plot("eMet_mT[wlnu_lMet]/1000",100,0,200,""," m_{T}(e-MET) (GeV)","",c2,"wenu_mT");
  
  //Lepton
  analysis->plot("ele_pt[wlnu_lMet]/1000",100,0,150,""," p_{T}(e) (GeV)","",c2,"wenu_ele_pt");
  analysis->plot("ele_eta[wlnu_lMet]",100,-3,3,""," #eta(e) ","",c2,"wenu_ele_eta");
  analysis->plot("ele_ptiso[wlnu_lMet]/ele_pt[wlnu_lMet]",100,0,0.5,"","electron track isolation","",c2,"wenu_ele_ptiso");
  analysis->plot("ele_etiso[wlnu_lMet]/ele_pt[wlnu_lMet]",100,0,0.5,"","electron calo. isolation","",c2,"wenu_ele_etiso");

}
