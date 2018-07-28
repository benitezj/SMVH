#include "../plots/plotterGlobals.h"

void plotProductionEfficiency(TString inpath){
  
  gStyle->SetCanvasDefH(700);
  gStyle->SetCanvasDefW(1100);


  Plotter plotter("analysis","");
  plotter.setSamplesPath(inpath);//needed to look for the counters 
  plotter.setLumisFile(lumisfile13TeV);//need for the lumi plot
  plotter.setOutputPath(outputDir_); //plots will be written here
  
  //does not work because it tries to load the root files
  //plotter.setLumisFile(lumisfile13TeV);
  //plotter.addAllData(inpath);

  //this is a hack
  plotter.defineBackground("data","",1,"data");
  plotter.loadBackgroundSamples("data","data",inpath);

  plotter.plotProductionEfficiency();
  gROOT->ProcessLine(".q");
}
