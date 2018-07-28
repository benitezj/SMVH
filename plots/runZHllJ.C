#include "plotterGlobals.h"

#include "../reader/ZHmmJPlotter.C"
#include "plotZHmmJ.C"

#include "../reader/ZHeeJPlotter.C"
#include "plotZHeeJ.C"

#include "../reader/ZHemJPlotter.C"
#include "plotZHemJ.C"

#include "configZHllJ_13TeV.C"

#include "plotVHSigBkgComparison.C"
#include "plotZHllJTemplates.C"
#include "compareZHllJZModel.C"


void runZHllJ(TString channel,TString intag, TString region, TString outtag=""){  

  TString inpath=inputDir_+"/"+channel+"/"+intag;
  cout<<inpath<<endl;

  TString outpath=outputDir_+"/"+channel+"/"+intag+"_"+region+"_"+outtag;
  cout<<outpath<<endl;

  system(TString("rm -rf ")+outpath);
  system(TString("mkdir ")+outpath);

  Plotter * analysis = 0;
  if(channel.CompareTo("ZHmmJ")==0)
    analysis = new ZHmmJPlotter("analysis","");
  if(channel.CompareTo("ZHeeJ")==0)
    analysis = new ZHeeJPlotter("analysis","");
  if(channel.CompareTo("ZHemJ")==0)
    analysis = new ZHemJPlotter("analysis","");

  if(!analysis){
    cout<<"invalid channel"<<endl;
    return;
  }
  
  /////Set the output path before configuring
  analysis->setOutputPath(outpath);  
  
  ////Configure (samples, event weight, ...)
  if(!(configZHllJ_13TeV(analysis,channel,inpath))){
    cout<<"Failed to config"<<endl;
    return;
  }

  ///Scale the MC samples to the data lumi
  if(!analysis->scaleSamplesLumi()){ 
    cout<<"Failed scaling the MC samles."<<endl; 
    return 0;
  }

  ////set the category selection
  analysis->setSelection(getSelection(channel,region));
  analysis->setPlotRatioRange(0.5);

  //Print the global selection
  cout<<"EVENT WEIGHT : "<< analysis->eventWeight_ <<endl;
  cout<<"EVENT SELECTION : "<< analysis->getSelection() <<endl;

  ///Print event tables
  analysis->printGenEvents();    

  
  /////pick the tuple to plot from
  //analysis->setCurrSyst("");
  //analysis->setCurrSyst("EG_SCALE_ALL__1up");
  //analysis->setCurrSyst("MUONS_SCALE__1down");

  /////Plots for testing
  //analysis->plot("eve_mu",50,0,50,"","# of interactions","",c2,"mu");
  //analysis->plot("vh_m[vh]/1000",25,0,5000,""," m_{VH}    [GeV]","",c2,"vh_m",1,""); //,vhmassBlindSel
  //analysis->plot("mm_m[vh_v[vh]]/1000",40,50,130,""," m(l^{+}l^{-}) (GeV)","",c2,"v_m"); 
  //analysis->plot("em_m[vh_v[vh]]/1000",100,0,1000,""," m(l^{+}l^{-}) (GeV)","",c2,"v_m"); 
  //analysis->plot("fatjet_m[vh_h[vh]]/1000",50,0,500,""," m(J) [GeV]","",c2,"vh_h_m");
  //analysis->plot("ele_eta[ee_leg1[vh_v[vh]]]",60,-3,3,""," lead electron eta ","",c2,"vh_v_l1_eta"); 
 
  ////Involved studies
  //plotVHSigBkgComparison(analysis,outpath);
  //plotZHllJTemplates(analysis,outpath);//no pileup reweighting
  //compareZHllJZModel(analysis,channel,intag,outpath);

  //gROOT->ProcessLine(".q");

  /////make all the plots
  if(channel.CompareTo("ZHmmJ")==0)
    plotZHmmJ(analysis); 
  if(channel.CompareTo("ZHeeJ")==0)
    plotZHeeJ(analysis); 
  if(channel.CompareTo("ZHemJ")==0)
    plotZHemJ(analysis); 


  gROOT->ProcessLine(".q");
}
