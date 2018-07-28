#ifndef PLOTEVENT_C
#define PLOTEVENT_C

void plotEvent(Plotter* analysis){
  analysis->plotYieldPerLumi();
  
  ///////pile up
  analysis->plot("eve_mu",50,0,50,"","# of interactions","",c2,"mu");
  analysis->plot("nvtx",50,0,50,"","# of rec. vertices","",c2,"nvtx");
  
  //MET
  analysis->plot("met_pt/1000",15,0,300,""," MET (GeV)","",c2,"met");
  analysis->plot("met_phi",20,-4,4,""," MET Phi ","",c2,"metphi");

}

#endif
