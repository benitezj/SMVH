#include "plotVH.C"

void plotWHenubb(Plotter* analysis){
  plotVH(analysis);

  //Z
  analysis->plot("eMet_mT[vh_v[vh]]/1000",60,0,300,""," m_{T}(e,MET) [GeV]","",c2,"vh_v_mT");
  analysis->plot("eMet_pt[vh_v[vh]]/1000",60,0,300,""," p_{T}(e,MET) [GeV]","",c2,"vh_v_pT");
  analysis->plot("eMet_pt[vh_v[vh]]/vh_m[vh]",40,0,2,""," p_{T}(e,MET)/m(VH)","",c2,"vh_v_pToverMvh",10);

  //high pT lepton
  analysis->plot("ele_pt[eMet_ele[vh_v[vh]]]/1000",60,0,300,"","electron p_{T} [GeV]","",c2,"vh_v_l_pt");
  analysis->plot("ele_eta[eMet_ele[vh_v[vh]]]",24,-3.0,3.0,"","electron #eta","",c2,"vh_v_l_eta");
  analysis->plot("ele_ptiso[eMet_ele[vh_v[vh]]]/ele_pt[eMet_ele[vh_v[vh]]]",100,0,0.5,"","electron track isolation","",c2,"vh_v_l_ptiso");
  analysis->plot("ele_etiso[eMet_ele[vh_v[vh]]]/ele_pt[eMet_ele[vh_v[vh]]]",100,0,0.5,"","electron calo. isolation","",c2,"vh_v_l_etiso");

}

