#include "plotVH.C"

void plotWHmnubb(Plotter* analysis){
  plotVH(analysis);

  //W
  analysis->plot("muMet_mT[vh_v[vh]]/1000",60,0,300,""," m_{T}(#mu,MET) [GeV]","",c2,"vh_v_mT");
  analysis->plot("muMet_pt[vh_v[vh]]/1000",60,0,300,""," p_{T}(#mu,MET) [GeV]","",c2,"vh_v_pT");
  analysis->plot("muMet_pt[vh_v[vh]]/vh_m[vh]",40,0,2,""," p_{T}(#mu,MET)/m(VH)","",c2,"vh_v_pToverMvh",10);

  //Lepton
  analysis->plot("muo_pt[muMet_mu[vh_v[vh]]]/1000",60,0,300,"","muon p_{T} [GeV]","",c2,"vh_v_l_pt");
  analysis->plot("muo_eta[muMet_mu[vh_v[vh]]]",24,-3.0,3.0,"","muon #eta","",c2,"vh_v_l_eta");
  analysis->plot("muo_ptiso[muMet_mu[vh_v[vh]]]/muo_pt[muMet_mu[vh_v[vh]]]",100,0,0.5,"","muon track isolation","",c2,"vh_v_l_ptiso");
  analysis->plot("muo_etiso[muMet_mu[vh_v[vh]]]/muo_pt[muMet_mu[vh_v[vh]]]",100,0,0.5,"","muon calo. isolation","",c2,"vh_v_l_etiso");

}

