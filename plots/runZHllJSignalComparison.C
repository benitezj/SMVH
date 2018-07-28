#include "plotterGlobals.h"
#include "plottingTools.C"


void runZHllJSignalComparison(TString intag,TString outtag=""){  
    
  TString inpath1=inputDir_+"/ZHmmJ/"+intag;
  TString inpath2=inputDir_+"/ZHeeJ/"+intag;

  Sample * S1 = new Sample("S1",findMatchInDir(inpath1.Data(),TString("VzZH_llqq_m1500")).c_str(),inpath1); 
  Sample * S2 = new Sample("S2",findMatchInDir(inpath2.Data(),TString("VzZH_llqq_m1500")).c_str(),inpath2);

  ///////////Selection should be synched
  TString selection="eve_mc_w";
  selection+=TString("*")+"(fatjet_pt[vh_h[vh]]>250000)";
  selection+=TString("*")+"(eve_passTrig==1)";
  selection+=TString("*")+"(eve_passTrigMatch==1)";
  selection+=TString("*")+"(eve_passVHMultiLepVeto==1)";

  TString sel1=selection+"*"+"(60000.<mm_m[vh_v[vh]]&&mm_m[vh_v[vh]]<120000.)";
  TString sel2=selection+"*"+"(60000.<ee_m[vh_v[vh]]&&ee_m[vh_v[vh]]<120000.)";


  TString outpath=outputDir_+"/ZHllJSignalComparison/"+intag+"_"+outtag;
  system(TString("rm -rf ")+outpath);
  system(TString("mkdir ")+outpath);
  
  TCanvas C;
 
  compareSignalAndBkg(S1,sel1,S2,sel2,"vh_m[vh]/1000",100,500,2500,"ZH mass [GeV]",&C,outpath+"/vh_m");
  compareSignalAndBkg(S1,sel1,S2,sel2,"vh_mass[vh]/1000",100,500,2500,"ZH mass [GeV]",&C,outpath+"/vh_mass");
  compareSignalAndBkg(S1,sel1,S2,sel2,"vh_mass[vh]/1000",100,500,2500,"ZH mass [GeV]",&C,outpath+"/vh_mass_noNorm",0);//no normalization

  gROOT->ProcessLine(".q");
}
