#include "plotterGlobals.h"
#include "../reader/ZHmmbbPlotter.C"
#include "configZHmmbb_13TeV.C"
#include "plotZHmmbb.C"

#include "../reader/ZHeebbPlotter.C"
#include "configZHeebb_13TeV.C"
#include "plotZHeebb.C"

void runZHllbb(TString channel,TString intag,TString outtag=""){  

  //TString inpath=inputDir_+"/CxTupleSamples/"+channel+"/"+intag;
  TString inpath=inputDir_+"/"+channel+"/"+intag;
  cout<<inpath<<endl;

  //TString outpath=outputDir_+"/DC14Studies/"+channel+"/"+intag;
  TString outpath=outputDir_+"/"+channel+"/"+intag+"_"+outtag;
  cout<<outpath<<endl;

  system(TString("rm -rf ")+outpath);
  system(TString("mkdir ")+outpath);

  Plotter * analysis = 0;
  
  if(channel.CompareTo("ZHmmbb")==0){
    analysis = new ZHmmbbPlotter("analysis","");
    analysis->setOutputPath(outpath);  
    if(!(configZHmmbb_13TeV(analysis,inpath))){
      cout<<"Failed to config"<<endl;
      return;
    }
  }
  if(channel.CompareTo("ZHeebb")==0){
    analysis = new ZHeebbPlotter("analysis","");
    analysis->setOutputPath(outpath);  
    if(!(configZHeebb_13TeV(analysis,inpath))){
      cout<<"Failed to config"<<endl;
      return;
    }
  }
  if(!analysis){cout<<"invalid channel"<<endl; return; }

  //Print the global selection
  cout<<"EVENT SELECTION : "<<analysis->eventWeight_<<endl;
    

  ///Scale the MC samples to the data lumi
  if(!analysis->scaleSamplesLumi()){ 
    cout<<"Failed scaling the MC samles."<<endl; 
    return 0;
  }


  //  ///for testing use only these plots
  // analysis->plot("eve_mu",40,0,40,"","# of interactions","",c2,"mu");
  //analysis->plot("vh_mass[vh]/1000",100,0,3000,""," VH mass (GeV)","",c2,"vh_mass",1); 
  // analysis->plot("mm_m[vh_v[vh]]/1000",40,50,130,""," mass(#mu^{+}#mu^{-}) (GeV)","",c2,"v_m"); 
  //gROOT->ProcessLine(".q");


  /////make all the plots
  if(channel.CompareTo("ZHmmbb")==0){
    plotZHmmbb(analysis); 
  }
  if(channel.CompareTo("ZHeebb")==0){
    plotZHeebb(analysis); 
  }


  gROOT->ProcessLine(".q");
}
