#ifndef PLOTZLL_C
#define PLOTZLL_C

#include "plotV.C"
#include "plotMuon.C"
#include "plotElectron.C"

void plotZll(Plotter* analysis,TString channel, TString index, TString tag){
  analysis->plot(channel+"_m["+index+"]/1000",40,50,130,""," m(l^{+}l^{-}) (GeV)","",c2,tag+"_m");
  analysis->plot(channel+"_pt["+index+"]/1000",40,0,200,""," p_{T}(l^{+}l^{-}) (GeV)","",c2,tag+"_pt");
  analysis->plot(channel+"_dR["+index+"]",50,0,5,""," #DeltaR(l^{+}l^{-}) (GeV)","",c1,tag+"_dR");

  //jet variables
  plotV(analysis);
 
}

void plotZmm(Plotter* analysis){
  plotZll(analysis,"mm","zll_ll","Z");

  //high pT lepton
  plotMuon(analysis,"zll_l1","leadlepton");

  //low pT lepton
  plotMuon(analysis,"zll_l2","sleadlepton");

}

void plotZee(Plotter* analysis){
  plotZll(analysis,"ee","zll_ll","Z");

  //high pT lepton
  plotElectron(analysis,"zll_l1","leadlepton");

  //low pT lepton
  plotElectron(analysis,"zll_l2","sleadlepton");

}

#endif
