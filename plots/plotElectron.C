#ifndef PLOTELECTRON_C
#define PLOTELECTRON_C
void plotElectron(Plotter* analysis,TString index, TString tag){
  analysis->plot("ele_pt["+index+"]/1000",30,0,150,"","electron p_{T}  [GeV]","",c2,tag+"_pt");
  analysis->plot("ele_eta["+index+"]",30,-3,3,"","electron #eta","",c2,tag+"_eta");
  analysis->plot("ele_z0["+index+"]",100,-50.0,50.0,"","electron z0","",c2,tag+"_z0");
  analysis->plot("ele_d0["+index+"]",100,-1.0,1.0,"","electron d0","",c2,tag+"_d0");
  analysis->plot("ele_ptiso["+index+"]/ele_pt["+index+"]",100,0,0.5,"","electron  ptcone/pT iso.","",c2,tag+"_ptiso");
  analysis->plot("ele_etiso["+index+"]/ele_pt["+index+"]",100,0,0.5,"","electron  etcone/pT iso.","",c2,tag+"_etiso");
}
#endif
