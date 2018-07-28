#include <TSystem.h>
#include <TROOT.h>
#include <iostream>
using namespace std;

#include "PlottingTool/Config.h"
#include "PlottingTool/PlotMaker.h"


void plot0Lepton(std::string InputPath="./",std::string InputFile="inputsFile",std::string OutputDir="./plots",bool CUTBASED=0,bool APPLYSF=0){

  gROOT->ProcessLine(".L PlottingTool/Utils.cxx+");
  gROOT->ProcessLine(".L PlottingTool/SystTool.cxx+");
  gROOT->ProcessLine(".L PlottingTool/Config.cxx+");
  gROOT->ProcessLine(".L PlottingTool/LatexMaker.cxx+");
  gROOT->ProcessLine(".L PlottingTool/PlotMaker.cxx+");

  Config config;

  // should we overwrite existing plots or only do missing ones?
  config.setOverwrite(true);

  // path to the input file: can be local or on eos
  config.setInputPath(InputPath);
  config.setInputFile(InputFile);

  // read lumi from input file
  std::string lumi_str("36.1");
  cout << "Using luminosity " << lumi_str << endl;

  ////////////////
  /// General info
  config.setAnalysis( Config::ZeroLepton,  // Type = ZeroLepton, OneLepton or TwoLepton: Appears on the plots
		      "Internal",         // Status: Appear on the plots next to ATLAS label
		      "Moriond2017",      // Name = "LHCP2013": only useful for the above naming convention
		      "13",                // Center of mass energy: Appears on the plots
		      lumi_str,           // Integrated luminosity: Appears on the plots
		      "125",              // Mass of the generated higgs boson: only useful for the above naming convention
		      "",           // Name of your institute: only usefule for the above naming convention
		      "");          // Input file version: only useful for the above naming convention

  ///////////
  config.setAnalysisTitle("0 lep.");
  

  //////////
  /// Output

  // path to output plots
  config.setOutputPath(OutputDir);

  // path to sys plots
  //config.setSystematicDir("Systematics");
  //config.readSetup();

  // BDT transformations:
  config.addBDTTransformation("trafoD", // name to be reffered to later                         
        		      6,        // Algorithm: 6 is trafo D in Daniel's tool                
        		      10,5);    // Transformation parameters                                 



  ///////////////////////////
  /// blinding
  ////////////////////////
  // config.addWindowBlinding("mBB", "2tag2jet_150ptv_SR", "",100,139);
  // config.addWindowBlinding("mBB", "2tag3jet_150ptv_SR", "",100,139);
  // config.addWindowBlinding("dRBB", "2tag2jet_150ptv_SR", "",1.0,1.4);
  // config.addWindowBlinding("dRBB", "2tag3jet_150ptv_SR", "",1.0,1.4);
  // config.setThresholdBlinding(0.05);

  // declare the samples
  config.addDataSample("data",       // name: as it appears in the histogram names
		       "Data",       // title: as it should appear in the legend 
		       1);           // color: this is marker(line+fill) color for data(MC) 
  
  ///// SM Higgs
  config.addSignalSample("qqZllH125", "VH(bb)", kRed);
  config.addSignalSample("ggZllH125", "VH(bb)", kRed);
  config.addSignalSample("qqZvvH125", "VH(bb)", kRed); 
  config.addSignalSample("ggZvvH125", "VH(bb)", kRed); 
  config.addSignalSample("qqWlvH125", "VH(bb)", kRed);



  /////////////////////////////////////////////////////////////////////////////
  ////// all Z 
  config.addBackgroundSample("Zbb", "Z+bb", kAzure + 2);
  config.addBackgroundSample("Zbc", "Z+bc", kAzure + 2);
  config.addBackgroundSample("Zbl", "Z+bl", kAzure + 1);
  config.addBackgroundSample("Zcc", "Z+cc", kAzure - 4);
  config.addBackgroundSample("Zcl", "Z+cl", kAzure - 8);
  config.addBackgroundSample("Zl", "Z+l",   kAzure - 9);
  // //// Z combined
  // config.addBackgroundSample( "Zbb","Z+(bb,bc,cc,bl)", kAzure + 2);
  // config.addBackgroundSample( "Zbc","Z+(bb,bc,cc,bl)", kAzure + 2);
  // config.addBackgroundSample( "Zcc","Z+(bb,bc,cc,bl)", kAzure + 2);
  // config.addBackgroundSample( "Zbl","Z+(bb,bc,cc,bl)", kAzure + 2);


  ///////All W
  config.addBackgroundSample("Wbb", "W+bb", kGreen + 3);
  config.addBackgroundSample("Wbc", "W+bb", kGreen + 3);
  config.addBackgroundSample("Wbl", "W+bl", kGreen + 2);
  config.addBackgroundSample("Wcc", "W+cc", kGreen + 1);
  config.addBackgroundSample("Wcl", "W+cl", kGreen - 6);
  config.addBackgroundSample("Wl", "W+l", kGreen - 9);
  // ///// W combined
  // config.addBackgroundSample( "Wbb","W+(bb,bc,cc,bl)", kGreen + 3);
  // config.addBackgroundSample( "Wbc","W+(bb,bc,cc,bl)", kGreen + 3);
  // config.addBackgroundSample( "Wcc","W+(bb,bc,cc,bl)", kGreen + 3);
  // config.addBackgroundSample( "Wbl","W+(bb,bc,cc,bl)", kGreen + 3);

  ///single top
  config.addBackgroundSample( "stops", "Single top", kOrange - 1); // Two samples sharing the same title appear only once in the legend
  config.addBackgroundSample( "stopt", "Single top", kOrange - 1);
  config.addBackgroundSample( "stopWt", "Single top",  kOrange - 1);

  ///ttbar
  config.addBackgroundSample("ttbar", "ttbar", kOrange);

  ///diboson
  config.addBackgroundSample("WW","Diboson",  kGray );
  config.addBackgroundSample("WZ","Diboson",  kGray );
  config.addBackgroundSample("ZZ","Diboson",  kGray );

  //dijetJZW
  //config.addBackgroundSample("dijetJZW", "multijet", kPink + 1);


  //////These are produced with doOnlyInputs
  config.addVariable(Config::BDTOutput, "mva28", "BDT discriminant", -1, 1,1);//rebinning does not apply to BDTOutput, binning set by trafo params
  config.addVariable(Config::BDTOutput, "mva_mvadiboson28", "Diboson BDT discriminant", -1, 1, 50);
  config.addVariable(Config::BDTInput, "mBB", "m(bb) [GeV]",30,210,2);

  ///MET
  config.addVariable(Config::BDTInput, "MET", "MET [GeV]",0,500,5);//for David's binning 100,950,5  
  config.addVariable(Config::BDTInput, "MET_Track", "MET_Track [GeV]", 0, 450, 20);

  ///jets
  config.addVariable(Config::BDTInput, "Njets", "Njets", 0, 25, 1);
  config.addVariable(Config::BDTInput, "pTB1", "p_{T}(b_{1}) [GeV]", 0, 500, 5);
  config.addVariable(Config::BDTInput, "pTB2", "p_{T}(b_{2}) [GeV]", 0, 500, 5);
  config.addVariable(Config::BDTInput, "EtaB1", "#{eta}(b_{1})", -5, 5, 5);
  config.addVariable(Config::BDTInput, "EtaB2", "#{eta}(b_{2})", -5, 5, 5);
  config.addVariable(Config::BDTInput, "MV2cB1", "MV2cB1", -1, 1, 5); 
  config.addVariable(Config::BDTInput, "MV2cB2", "MV2cB2", -1, 1, 5);  
  config.addVariable(Config::BDTInput,"NTags","NTags",0,5,5);

  ///Higgs
  config.addVariable(Config::BDTInput, "pTBB", "p_{T}(bb) [GeV]", 0, 2000, 5);
  config.addVariable(Config::BDTInput, "dEtaBB", "|#Delta#eta(b,b)|", 0, 5, 5);
  config.addVariable(Config::BDTInput, "dRBB", "#DeltaR(b,b)", 0, 3, 5);
  config.addVariable(Config::BDTInput,"dPhiBB","dPhiBB",0,3.14159,2);
  config.addVariable(Config::BDTInput,"yBB","yBB",0,2.5,25);
  config.addVariable(Config::BDTInput, "pTBBoverMET", "p_{T}(bb)/MET", 0, 500, 5);  
  config.addVariable(Config::BDTInput,"costheta","costheta",-1,1,20);

  ///MET-Higgs
  config.addVariable(Config::BDTInput, "dPhiVBB", "#Delta#phi(V,bb)", 0, 3.15, 5);
  config.addVariable(Config::BDTInput,"pTBBMETAsym","pTBBMETAsym",-0.5,0.5,20);

  ///3jet vars
  config.addVariable(Config::BDTInput, "mBBJ", "m(bbj) [GeV]", 0, 500, 10);
  config.addVariable(Config::BDTInput, "pTJ3", "p_{T}(j_{3}) [GeV]", 0, 500, 10);
  config.addVariable(Config::BDTInput,"mindRBJ3","mindRBJ3",0,5,20);
  config.addVariable(Config::BDTInput,"maxdRBJ3","maxdRBJ3",0,5,25);
  config.addVariable(Config::BDTInput,"dRB1J3","dRB1J3",0,5,25);
  config.addVariable(Config::BDTInput,"dRB2J3","dRB2J3",0,5,25);

  ///anti-QCD
  config.addVariable(Config::BDTInput, "MEff3", "MEff3 = p_{T}(b_{1}) + p_{T}(b_{2}) + p_{T}(b_{3}) + MET [GeV]", 0, 1000, 10);
  config.addVariable(Config::BDTInput, "MEff", "MEff = p_{T}(b_{1}) + p_{T}(b_{2}) + MET [GeV]", 0, 1000, 5);
  config.addVariable(Config::BDTInput, "MindPhiMETJet", "min(#Delta#phi(MET,jet))", 0, 3.15, 2);
  config.addVariable(Config::BDTInput, "dPhiMETMPT", "#Delta#phi(MET,MPT)", 0, 3.15, 5);
  config.addVariable(Config::BDTInput,"SumPtJet","SumPtJet",0,500,25);


  ///
  config.addVariable(Config::BDTInput,"nTaus","nTaus",0,5,5);



  ///////////////////////////////////////////////
  config.clearRegions();
 
  if(CUTBASED){    //CUT BASED 
    config.addRegion("2tag2jet_150_200ptv_SRcuts","2jet, 2tag, 150 GeV #leq p_{T}^{V} #leq 150 GeV","");
    config.addRegion("2tag2jet_200ptv_SRcuts",    "2jet, 2tag, p_{T}^{V} #geq 150 GeV","");
    config.addRegion("2tag3jet_150_200ptv_SRcuts","2jet, 2tag, 150 GeV #leq p_{T}^{V} #leq 150 GeV","");
    config.addRegion("2tag3jet_200ptv_SRcuts",    "2jet, 2tag, p_{T}^{V} #geq 150 GeV","");
  }else {         //MVA
    config.addRegion("2tag2jet_150ptv_SR","2jet, 2tag, p_{T}^{V}#geq 150 GeV","");
    config.addRegion("2tag3jet_150ptv_SR","3jet, 2tag, p_{T}^{V}#geq 150 GeV","");
  }


  // ///////n tag inclusive plots, seem not produced with doOnlyInputs
  // for(long tag=0;tag<=2;tag++){
  //   config.addRegion((TString("")+tag+"tag2jet_150ptv_SR").Data(),(TString("")+tag+"tag2pjet_150ptv_SR").Data(),(TString("")+tag+"tag2pjet_150ptv_SR").Data(),"");
  //   config.addRegion((TString("")+tag+"tag3jet_150ptv_SR").Data(),(TString("")+tag+"tag2pjet_150ptv_SR").Data(),(TString("")+tag+"tag2pjet_150ptv_SR").Data(),"");
  //   config.addRegion((TString("")+tag+"tag4jet_150ptv_SR").Data(),(TString("")+tag+"tag2pjet_150ptv_SR").Data(),(TString("")+tag+"tag2pjet_150ptv_SR").Data(),"");
  //   config.addRegion((TString("")+tag+"tag5pjet_150ptv_SR").Data(),(TString("")+tag+"tag2pjet_150ptv_SR").Data(),(TString("")+tag+"tag2pjet_150ptv_SR").Data(),"");
  // }



  // To optimize plot readability , samples that contribute less than a fraction X are dropped from the legend
  // config.setLegendThreshold(1.e-8);

  // To draw the histograms in no-stack mode
  //  config.setNoStack();


  //////////////////////////////////
  //// Scale factors
  /////////////////////////////////
  if(APPLYSF){
    //  std::string scaleFactorsTag = "SF_1L_nJ_0107";
    // config.readScaleFactors("scaleFactors/"+scaleFactorsTag+".txt");
    // config.setOutputPath(config.getOutputPath()+"/"+scaleFactorsTag);

    ///Scale factors from Changqiao May2, 2017.
    config.addScaleFactor("Zbb","2tag2jet_150ptv_SR",1.54);
    config.addScaleFactor("Zbc","2tag2jet_150ptv_SR",1.54);
    config.addScaleFactor("Zbl","2tag2jet_150ptv_SR",1.54);
    config.addScaleFactor("Zcc","2tag2jet_150ptv_SR",1.54);
    config.addScaleFactor("Zcl","2tag2jet_150ptv_SR",0.98);
    config.addScaleFactor("Zl","2tag2jet_150ptv_SR",1.11);
    config.addScaleFactor("Wbb","2tag2jet_150ptv_SR",1.22);
    config.addScaleFactor("Wbc","2tag2jet_150ptv_SR",1.22);
    config.addScaleFactor("Wbl","2tag2jet_150ptv_SR",1.22);
    config.addScaleFactor("Wcc","2tag2jet_150ptv_SR",1.22);
    config.addScaleFactor("Wcl","2tag2jet_150ptv_SR",1.00);
    config.addScaleFactor("Wl","2tag2jet_150ptv_SR",1.08);
    config.addScaleFactor("stops","2tag2jet_150ptv_SR",0.97);
    config.addScaleFactor("stopt","2tag2jet_150ptv_SR",0.97);
    config.addScaleFactor("stopWt","2tag2jet_150ptv_SR",0.97);
    config.addScaleFactor("ttbar","2tag2jet_150ptv_SR",0.94);
    config.addScaleFactor("WW","2tag2jet_150ptv_SR",0.89);
    config.addScaleFactor("WZ","2tag2jet_150ptv_SR",0.89);
    config.addScaleFactor("ZZ","2tag2jet_150ptv_SR",0.89);

    config.addScaleFactor("Zbb","2tag3jet_150ptv_SR",1.49);
    config.addScaleFactor("Zbc","2tag3jet_150ptv_SR",1.49);
    config.addScaleFactor("Zbl","2tag3jet_150ptv_SR",1.49);
    config.addScaleFactor("Zcc","2tag3jet_150ptv_SR",1.49);
    config.addScaleFactor("Zcl","2tag3jet_150ptv_SR",1.06);
    config.addScaleFactor("Zl","2tag3jet_150ptv_SR",1.12);
    config.addScaleFactor("Wbb","2tag3jet_150ptv_SR",1.17);
    config.addScaleFactor("Wbc","2tag3jet_150ptv_SR",1.17);
    config.addScaleFactor("Wbl","2tag3jet_150ptv_SR",1.17);
    config.addScaleFactor("Wcc","2tag3jet_150ptv_SR",1.17);
    config.addScaleFactor("Wcl","2tag3jet_150ptv_SR",0.99);
    config.addScaleFactor("Wl","2tag3jet_150ptv_SR",1.10);
    config.addScaleFactor("stops","2tag3jet_150ptv_SR",0.89);
    config.addScaleFactor("stopt","2tag3jet_150ptv_SR",0.89);
    config.addScaleFactor("stopWt","2tag3jet_150ptv_SR",0.89);
    config.addScaleFactor("ttbar","2tag3jet_150ptv_SR",0.95);
    config.addScaleFactor("WW","2tag3jet_150ptv_SR",0.87);
    config.addScaleFactor("WZ","2tag3jet_150ptv_SR",0.87);
    config.addScaleFactor("ZZ","2tag3jet_150ptv_SR",0.87);
  }


  ////////////////////
  //// Sensitivity
  /////////////////////
  if(CUTBASED){    //CUT BASED 
    config.addSensitivityPlot( "mBB", "mBB", "2tag2jet_150_200ptv_SRcuts");
    config.addSensitivityPlot( "mBB", "mBB", "2tag2jet_200ptv_SRcuts");
    config.addSensitivityPlot( "mBB", "mBB", "2tag3jet_150_200ptv_SRcuts");
    config.addSensitivityPlot( "mBB", "mBB", "2tag3jet_200ptv_SRcuts");
  }else {
    config.addSensitivityPlot( "mva28", "mva28", "2tag2jet_150ptv_SR", "trafoD");
    config.addSensitivityPlot( "mva28", "mva28", "2tag3jet_150ptv_SR", "trafoD");
  }





  // check for errors in configuration
  if(!config.isValid()) {
    std::cout << "Error in configuration: ===> Aborting..." << std::endl;
    return;
  }


  ///////////////////////////
  /// Now ready to make plots
  PlotMaker plotter;
  plotter.makePlots(config);
}


