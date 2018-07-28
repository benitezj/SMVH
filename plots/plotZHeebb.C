#include "plotVH.C"
#include "plotHiggs.C"

void plotZHeebb(Plotter* analysis){
  plotVH(analysis);
  plotHiggs(analysis);

  //V
  analysis->plot("ee_m[vh_v[vh]]/1000",80,50,130,"","e^{+}e^{-} mass [GeV]","",c2,"vh_v_m");
  analysis->plot("ee_pt[vh_v[vh]]/1000",60,0,300,"","e^{+}e^{-} p_{T} [GeV]","",c2,"vh_v_pt");
  analysis->plot("ee_dR[vh_v[vh]]",50,0,10,"","e^{+}e^{-} #DeltaR [GeV]","",c1,"vh_v_dR");

  //high pT lepton
  analysis->plot("ele_pt[ee_leg1[vh_v[vh]]]/1000",60,0,300,"","leading electron  p_{T} [GeV]","",c2,"vh_v_l1_pt");
  analysis->plot("ele_eta[ee_leg1[vh_v[vh]]]",12,-3.0,3.0,"","leading electron #eta","",c2,"vh_v_l1_eta");
  analysis->plot("ele_ptiso[ee_leg1[vh_v[vh]]]/ele_pt[ee_leg1[vh_v[vh]]]",100,0,0.5,"","leading electron track isolation","",c2,"vh_v_l1_ptiso");
  analysis->plot("ele_etiso[ee_leg1[vh_v[vh]]]/ele_pt[ee_leg1[vh_v[vh]]]",100,0,0.5,"","leading electron calo. isolation","",c2,"vh_v_l1_etiso");

  //Low pT lepton
  analysis->plot("ele_pt[ee_leg2[vh_v[vh]]]/1000",60,0,300,"","subleading electron p_{T}  [GeV]","",c2,"vh_v_l2_pt");
  analysis->plot("ele_eta[ee_leg2[vh_v[vh]]]",12,-3.0,3.0,"","subleading electron #eta","",c2,"vh_v_l2_eta");

}

