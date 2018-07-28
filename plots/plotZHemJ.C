#include "plotVH.C"
#include "plotHiggsBoost.C"

void plotZHemJ(Plotter* analysis){
  plotVH(analysis);
  plotHiggsBoost(analysis);

  //V
  analysis->plot("em_m[vh_v[vh]]/1000",25,0,500,"","e^{+}#mu^{-} mass [GeV]","",c2,"vh_v_m_ttbar");
  analysis->plot("em_pt[vh_v[vh]]/1000",20,0,1000,"","e^{+}#mu^{-} p_{T} [GeV]","",c2,"vh_v_pt");
  analysis->plot("em_eta[vh_v[vh]]",50,-5,5,"","e^{+}#mu^{-} eta ","",c2,"vh_v_eta");
  analysis->plot("em_dR[vh_v[vh]]",50,0,10,""," #DeltaR(e^{+}#mu^{-}) [GeV]","",c1,"vh_v_dR");

  //electron
  analysis->plot("ele_pt[em_leg1[vh_v[vh]]]/1000",50,0,500,"","electron  p_{T} [GeV]","",c2,"vh_v_e_pt");
  analysis->plot("ele_eta[em_leg1[vh_v[vh]]]",12,-3.0,3.0,"","electron #eta","",c2,"vh_v_e_eta");
  analysis->plot("ele_ptiso[em_leg1[vh_v[vh]]]/ele_pt[em_leg1[vh_v[vh]]]",100,0,0.5,"","electron track isolation","",c2,"vh_v_e_ptiso");
  analysis->plot("ele_etiso[em_leg1[vh_v[vh]]]/ele_pt[em_leg1[vh_v[vh]]]",100,0,0.5,"","electron calo. isolation","",c2,"vh_v_e_etiso");

  //muon
  analysis->plot("muo_pt[em_leg2[vh_v[vh]]]/1000",50,0,500,"","muon p_{T}  [GeV]","",c2,"vh_v_mu_pt");
  analysis->plot("muo_eta[em_leg2[vh_v[vh]]]",12,-3.0,3.0,"","muon #eta","",c2,"vh_v_mu_eta");
  analysis->plot("muo_ptiso[em_leg2[vh_v[vh]]]/muo_pt[em_leg2[vh_v[vh]]]",100,0,0.5,"","muon track isolation","",c2,"vh_v_mu_ptiso");
  analysis->plot("muo_etiso[em_leg2[vh_v[vh]]]/muo_pt[em_leg2[vh_v[vh]]]",100,0,0.5,"","muon calo. isolation","",c2,"vh_v_mu_etiso");

}

