#ifndef PLOTJET_C
#define PLOTJET_C

void plotJet(Plotter* analysis,TString index,TString tag,float maxpt=200){
  
  analysis->plot("jet_pt["+index+"]/1000",40,0,maxpt,index+">=0","jet p_{T} (GeV)","",c2,tag+"_pt");
  analysis->plot("jet_eta["+index+"]",20,-5.0,5.0,index+">=0"," jet #eta","",c2,tag+"_eta");
  analysis->plot("jet_m["+index+"]/1000",20,0,100,index+">=0"," jet mass","",c2,tag+"_mass");
  analysis->plot("jet_jvf["+index+"]",50,0,1,index+">=0"," jet JVF","",c2,tag+"_jvf");
  //analysis->plot("jet_jvt["+index+"]",50,0,1,index+">=0"," jet JVT","",c2,tag+"_jvt");
  //analysis->plot("jet_mv1["+index+"]",100,-10,10,index+">=0"," jet MV1","",c2,tag+"_mv1");
  //analysis->plot("jet_mvb["+index+"]",100,-10,10,index+">=0"," jet MVB","",c2,tag+"_mvb");
  //analysis->plot("jet_sv1ip3d["+index+"]",60,-20,40,index+">=0"," jet sv1_ip3d","",c2,tag+"_sv1ip3d");
  //analysis->plot("jet_mv2c00["+index+"]",40,-1.0001,1.0001,index+">=0"," jet mv2c00","",c2,tag+"_mv2c00");
  //analysis->plot("jet_mv2c10["+index+"]",40,-1.0001,1.0001,index+">=0"," jet mv2c10","",c2,tag+"_mv2c10");
  analysis->plot("jet_mv2c20["+index+"]",40,-1.0001,1.0001,index+">=0"," jet mv2c20","",c2,tag+"_mv2c20");
 
}

void plotFatJet(Plotter* analysis,TString index,TString tag,float maxpt=500){

  analysis->plot("fatjet_pt["+index+"]/1000",40,0,maxpt,index+">=0","fat jet p_{T} (GeV)","",c2,tag+"_pt");
  analysis->plot("fatjet_eta["+index+"]",20,-5.0,5.0,index+">=0"," fat jet #eta","",c2,tag+"_eta");
  analysis->plot("fatjet_m["+index+"]/1000",50,0,500,index+">=0"," fat jet mass","",c2,tag+"_mass");
 
}


void plotTrackJet(Plotter* analysis,TString index,TString tag,float maxpt=100){

  analysis->plot("trkjet_pt["+index+"]/1000",40,0,maxpt,index+">=0","track jet p_{T} (GeV)","",c2,tag+"_pt");
  analysis->plot("trkjet_eta["+index+"]",20,-5.0,5.0,index+">=0"," track jet #eta","",c2,tag+"_eta");
  //analysis->plot("trkjet_m["+index+"]/1000",20,0,100,index+">=0"," track jet mass","",c2,tag+"_mass");
  //analysis->plot("trkjet_sv1ip3d["+index+"]",60,-20,40,index+">=0"," track jet sv1ip3d","",c2,tag+"_sv1ip3d");
  //analysis->plot("trkjet_mv2c00["+index+"]",40,-1.01,1.01,index+">=0"," track jet mv2c00","",c2,tag+"_mv2c00");
  //analysis->plot("trkjet_mv2c10["+index+"]",40,-1.01,1.01,index+">=0"," track jet mv2c10","",c2,tag+"_mv2c10");
  analysis->plot("trkjet_mv2c20["+index+"]",40,-1.01,1.01,index+">=0"," track jet mv2c20","",c2,tag+"_mv2c20");
  analysis->plot("trkjet_btag["+index+"]",3,0,3,index+">=0"," track jet btag","",c2,tag+"_btag");

}

#endif
