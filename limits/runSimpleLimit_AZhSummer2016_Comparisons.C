#include "../SMVH/plots/plottingTools.C"

void runSimpleLimit_AZhSummer2016_Comparisons(TString inpath){

  compareFiles(inpath+"/lvJ_14May2016_data2015_1tag.txt",inpath+"/lvJ_22July2016_data2015_1tag.txt",1,"M_{HVT}","signal yield");
  compareFiles(inpath+"/lvJ_14May2016_data2015_1tag.txt",inpath+"/lvJ_22July2016_data2015_1tag.txt",2,"M_{HVT}","background yield"); 
  compareFiles(inpath+"/lvJ_14May2016_data2015_1tag.txt",inpath+"/lvJ_22July2016_data2015_1tag.txt",3,"M_{HVT}","limit [pb]",1);


  compareFiles(inpath+"/lvJ_14May2016_data2015_2tag.txt",inpath+"/lvJ_22July2016_data2015_2tag.txt",1,"M_{HVT}","signal yield");
  compareFiles(inpath+"/lvJ_14May2016_data2015_2tag.txt",inpath+"/lvJ_22July2016_data2015_2tag.txt",2,"M_{HVT}","background yield"); 
  compareFiles(inpath+"/lvJ_14May2016_data2015_2tag.txt",inpath+"/lvJ_22July2016_data2015_2tag.txt",3,"M_{HVT}","limit [pb]",1);

  compareFiles(inpath+"/lvJ_14May2016_data2015_1tag2tag.txt",inpath+"/lvJ_22July2016_data2015_1tag2tag.txt",3,"M_{HVT}","limit [pb]",1);
  
  
  gROOT->ProcessLine(".q");
}
