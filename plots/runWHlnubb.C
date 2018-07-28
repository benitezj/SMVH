#include "../reader/WHmnubbPlotter.C"
#include "configWHmnubb_13TeV.C"
#include "plotWHmnubb.C"

#include "../reader/WHenubbPlotter.C"
#include "configWHenubb_13TeV.C"
#include "plotWHenubb.C"


void runWHlnubb(TString channel,TString intag,TString outtag=""){  
    
  TString inpath=inputDir_+"/CxTupleSamples/"+channel+"/"+intag;
  cout<<inpath<<endl;

  TString outpath=outputDir_+"/DC14Studies/"+channel+"/"+intag;
  if(outtag.CompareTo("")!=0)outpath+="_"+outtag;//version of the plots
  cout<<outpath<<endl;

  system(TString("rm -rf ")+outpath);
  system(TString("mkdir ")+outpath);

  Plotter * analysis = 0;
  if(channel.CompareTo("WHmnubb")==0){
    analysis = new WHmnubbPlotter("analysis","");
    analysis->setOutputPath(outpath);  
    if(!(configWHmnubb_13TeV(analysis,inpath))){
      cout<<"Failed to config"<<endl;
      return;
    }
  }
  if(channel.CompareTo("WHenubb")==0){
    analysis = new WHenubbPlotter("analysis","");
    analysis->setOutputPath(outpath);  
    if(!(configWHenubb_13TeV(analysis,inpath))){
      cout<<"Failed to config"<<endl;
      return;
    }
  }

  if(!analysis){cout<<"invalid channel"<<endl; return; }


  if(channel.CompareTo("WHmnubb")==0){
    plotWHmnubb(analysis); 
  }
  if(channel.CompareTo("WHenubb")==0){
    plotWHenubb(analysis); 
  }
  gROOT->ProcessLine(".q");
}
