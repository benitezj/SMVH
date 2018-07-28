#include "Plotter.h"
#include "plotEvent.C"

void plotWH(Plotter* analysis){
  plotEvent(analysis);

  //VH
  analysis->plot("vh_m[vh]/1000",50,0,1000,""," VH mass [GeV]","",c2,"vh_m",1);
  analysis->plot("vh_pt[vh]/1000",50,0,500,""," VH p_{T} [GeV]","",c2,"vh_pt");
  analysis->plot("vh_dR[vh]",50,0,5,""," #DeltaR(Z-H)","",c1,"vh_dR");

  //H
  analysis->plot("jj_m[vh_h[vh]]/1000",25,0,500,""," mass(bb) [GeV]","",c2,"vh_h_m",1);
  analysis->plot("jj_pt[vh_h[vh]]/1000",50,0,500,""," p_{T}(bb) [GeV]","",c2,"vh_h_pt");
  analysis->plot("jj_dR[vh_h[vh]]",50,0,5,""," #DeltaR(bb) [GeV]","",c1,"vh_h_dR");

  //lead b
  analysis->plot("jet_pt[jj_leg1[vh_h[vh]]]/1000",100,.0,200,""," leading b-jet p_{T}","",c2,"vh_leadbjet_pt");
  analysis->plot("jet_eta[jj_leg1[vh_h[vh]]]",100,-5.0,5.0,""," leading b-jet #eta","",c2,"vh_leadbjet_eta");
  
  //sub-lead b
  analysis->plot("jet_pt[jj_leg2[vh_h[vh]]]/1000",100,.0,200,""," subleading b-jet p_{T}","",c2,"vh_subleadbjet_pt");
  analysis->plot("jet_eta[jj_leg2[vh_h[vh]]]",100,-5.0,5.0,"","subleading b-jet #eta","",c2,"vh_subleadbjet_eta");


  //extra Central jets
  analysis->plot("vh_njet",10,0,10,""," # of central jets","",c2,"vh_njet",1);
  analysis->plot("jet_pt[vh_jet]/1000",50,0,200,"vh_jet>=0","lead central jet p_{T} [GeV]","",c2,"vh_leadjet_pt");
  analysis->plot("jet_eta[vh_jet]",50,-5.0,5.0,"vh_jet>=0"," lead central jet #eta","",c2,"vh_leadjet_eta");
  analysis->plot("jet_sv1ip3d[vh_jet]",50,-20,30,"vh_jet>=0"," lead central jet SV1_IP3D","",c2,"vh_leadjet_sv1ip3d");

  //Forward jets
  analysis->plot("vh_njetfw",10,0,10,""," # of forward jets","",c2,"vh_njetfw");
  analysis->plot("jet_pt[vh_jetfw]/1000",100,0,200,"vh_jetfw>=0","lead forward jet p_{T} [GeV]","",c2,"vh_leadjetfw_pt");
  analysis->plot("jet_eta[vh_jetfw]",100,-5.0,5.0,"vh_jetfw>=0"," lead forward jet #eta","",c2,"vh_leadjetfw_eta");
 
}
