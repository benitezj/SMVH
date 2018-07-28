#include "plotterGlobals.h"

#include "../reader/ZmmPlotter.C"
#include "../reader/ZeePlotter.C"

#include "configZll_13TeV.C"

#include "plotZll.C"

void runZll(TString channel, TString intag, TString outtag=""){  
    
  TString inpath=inputDir_+"/"+channel+"/"+intag;
  cout<<"Input path: "<<inpath<<endl;

  TString outpath=outputDir_+"/"+channel+"/"+intag+"_"+outtag;
  cout<<"Output path: "<<outpath<<endl;
  system(TString("rm -rf ")+outpath);
  system(TString("mkdir ")+outpath);

  
  Plotter * analysis = 0;
  
  if(channel.CompareTo("Zmm")==0){
    analysis = new ZmmPlotter("analysis",atlasInternal8TeV);
  }else if(channel.CompareTo("Zee")==0){
    analysis = new ZeePlotter("analysis",atlasInternal8TeV);
  }else {
    cout<<"Invalid channel"<<endl;    return 0;
  }
  
  analysis->setOutputPath(outpath);  
  if(!configZll_13TeV(analysis,channel,inpath)){
    cout<<"Failed to config."<<endl; return 0;
  }

  if(!analysis->scaleSamplesLumi()){ 
    cout<<"Failed scaling the MC samles."<<endl; 
    return 0;
  }

  //Print the global selection
  cout<<"EVENT WEIGHT : "<< analysis->eventWeight_ <<endl;
  cout<<"EVENT SELECTION : "<< analysis->getSelection() <<endl;

  //Print the numbers of events used
  analysis->printGenEvents();    



  ///for testing use only these plots
  //analysis->plot("eve_mu",40,0,40,"","# of interactions","",c2,"mu");
  //analysis->plot("mm_m[zll_ll]/1000",40,50,130,""," mass(l^{+}l^{-}) (GeV)","",c2,"v_m",1); 
  // analysis->plot("v_njet",10,0,10,"","# of central jets","",c2,"v_njet",1);
  // analysis->plot("jet_pt[v_jet]/1000",100,0,1500,"v_njet>0","lead central jet p_{T} (GeV)","",c2,"leadjet_pt",1);
  //gROOT->ProcessLine(".q");
  
  analysis->setPlotRatioRange(0.3);

  if(channel.CompareTo("Zmm")==0){
    plotZmm(analysis); 
  }
  if(channel.CompareTo("Zee")==0){
    plotZee(analysis); 
  }

  gROOT->ProcessLine(".q");
}
