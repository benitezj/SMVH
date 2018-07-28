#include "plotVH.C"
#include "plotHiggsBoost.C"

void plotZHmmJ(Plotter* analysis){
  plotVH(analysis);
  plotHiggsBoost(analysis);

  // //V
  analysis->plot("mm_m[vh_v[vh]]/1000",40,50,130,"","m(l^{+}l^{-})  [GeV]","",c2,"vh_v_m");
  analysis->plot("mm_pt[vh_v[vh]]/1000",20,0,1000,"","Z p_{T}  [GeV]","",c2,"vh_v_pt");
  analysis->plot("mm_dR[vh_v[vh]]",50,0,10,""," #DeltaR(l^{+}l^{-})  [GeV]","",c1,"vh_v_dR");
  //analysis->plot("(mm_pt[vh_v[vh]]-100000)/vh_m[vh]",30,-1,2,"","(l^{+}^{-} p_{T}  -  100 GeV )/ m(VH)","",c2,"vh_v_pToverMvh");

  //larger mass window for ttbar
  analysis->plot("mm_m[vh_v[vh]]/1000",50,0,500,"","m(l^{+}l^{-})  [GeV]","",c2,"vh_v_m_ttbar");


  // //high pT lepton
  analysis->plot("muo_pt[mm_leg1[vh_v[vh]]]/1000",20,0,1000,"","leading lepton p_{T}  [GeV]","",c2,"vh_v_l1_pt");
  analysis->plot("muo_eta[mm_leg1[vh_v[vh]]]",12,-3.0,3.0,"","leading lepton #eta","",c2,"vh_v_l1_eta");
  //analysis->plot("muo_ptiso[mm_leg1[vh_v[vh]]]/muo_pt[mm_leg1[vh_v[vh]]]",100,0,0.5,"","leading lepton track isolation","",c2,"vh_v_l1_ptiso");
  //analysis->plot("muo_etiso[mm_leg1[vh_v[vh]]]/muo_pt[mm_leg1[vh_v[vh]]]",100,0,0.5,"","leading lepton calo. isolation","",c2,"vh_v_l1_etiso");

  // //Low pT lepton
  analysis->plot("muo_pt[mm_leg2[vh_v[vh]]]/1000",20,0,500,"","subleading lepton p_{T}  [GeV]","",c2,"vh_v_l2_pt");
  analysis->plot("muo_eta[mm_leg2[vh_v[vh]]]",12,-3.0,3.0,"","subleading lepton #eta","",c2,"vh_v_l2_eta");
 

}

