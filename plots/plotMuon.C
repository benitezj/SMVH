#ifndef PLOTMUON_C
#define PLOTMUON_C
void plotMuon(Plotter* analysis,TString index, TString tag){
  analysis->plot("muo_pt["+index+"]/1000",30,0,150,"","muon p_{T}  [GeV]","",c2,tag+"_pt");
  analysis->plot("muo_eta["+index+"]",30,-3.0,3.0,"","muon  #eta","",c2,tag+"_eta");
  analysis->plot("muo_z0["+index+"]",20,-2.0,2.0,"","muon  z0","",c2,tag+"_z0");
  analysis->plot("muo_d0["+index+"]",20,-.2,.2,"","muon  d0","",c2,tag+"_d0");
  analysis->plot("muo_ptiso["+index+"]/muo_pt["+index+"]",50,0,0.5,"","muon ptcone/pT iso.","",c2,tag+"_ptiso");
  analysis->plot("muo_etiso["+index+"]/muo_pt["+index+"]",50,0,0.5,"","muon etcone/pT iso.","",c2,tag+"_etiso");
}

#endif
