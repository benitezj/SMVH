#include "Config.h"

#include <TFile.h>
#include <TKey.h>
#include <TList.h>
#include <TClass.h>
#include <TRegexp.h>

#include <iostream>
#include <fstream>

#include "Utils.h"

Config::Config() {

  m_totalBkgName = "";
  m_analysis.type = DummyAnalysis;
  m_analysis.title = "";
  m_analysis.inputPath = ".";
  m_analysis.outputPath = "./plots";
  m_analysis.inputFile = "";
  m_analysis.inputTDirectory = "";
  m_isValid = true;
  m_bkgCount = 0;
  m_sigCount = 0;
  m_legendThreshold = 0;
  m_noStack = false;
  m_noSignalStack = false;
  m_make2DPlots = false;
  m_make1DPlots = true;
  m_overwrite = true;
  m_scaleSignalToBackground = false;
  m_multiSignal = false;
}

Config::~Config() {

}

bool Config::isValid() {

  return m_isValid;
}

void Config::addSample(SampleType type,
		       std::string name,
		       std::string title,
		       int fillColor,
		       int lineColor,
		       int markerColor,
		       int stackIndex,
		       bool removeNeg) {

  Sample sample;
  sample.type = type;
  sample.name = name;
  sample.title = title;
  sample.fillColor = fillColor;
  sample.lineColor = lineColor;
  sample.markerColor = markerColor;
  sample.stackIndex = stackIndex;
  sample.removeNeg = removeNeg;

  m_samples.push_back(sample);
}

void Config::addBackgroundSample(std::string name, std::string title, int color, double ) {

  addBackgroundSample(name, title, color);
}

void Config::addBackgroundSample(std::string name, std::string title, int color, bool removeNeg) {

  addSample(Background, 
	    name,
	    title,
	    color,
	    color,
	    1,
	    m_bkgCount,
	    removeNeg);
  m_bkgCount++;
}

void Config::addSignalSample(std::string name, std::string title, int color, double ) {

  addSignalSample(name, title, color);
}

void Config::addSignalSample(std::string name, std::string title, int color) {

  addSample(Signal,
	    name,
	    title,
	    color,
	    color,
	    1,
	    m_sigCount);
  m_sigCount++;
}

void Config::addDataSample(std::string name, std::string title, int color) {

  addSample(Data,
	    name,
	    title,
	    0,
	    color,
	    color,
	    -1);
}

void Config::setTotalBackgroundName(std::string name) {

  m_totalBkgName = name;
}

void Config::addScaleFactor(std::string sample, std::string regionExp, double value) {

  ScaleFactor sf;
  sf.sample = sample;
  sf.regionExp = regionExp;
  sf.value = value;

  m_scaleFactors.push_back(sf);
}

double Config::getScaleFactor(std::string sample, std::string region) {

  double SF = 1;

  for(unsigned int i=0; i<m_scaleFactors.size(); i++) {
    ScaleFactor sf = m_scaleFactors[i];
    if(sample != sf.sample) continue;

    TRegexp regExp(sf.regionExp.c_str(), true);
    Ssiz_t len = region.size();
    if(regExp.Index(region, &len) == -1) continue;

    SF = sf.value;
  }

  return SF;
}

void Config::readScaleFactors(std::string sfFileName) {

  std::ifstream ifile(sfFileName.c_str(), std::ios::in);
  if(!ifile) {
    std::cout << "Error: could not open file " << sfFileName << std::endl;
    m_isValid = false;
    return;
  }

  m_scaleFactors.clear();

  while(!ifile.eof()) {
    std::string sample;
    std::string regionExp;
    double scaleFactor;
    ifile >> sample >> regionExp >> scaleFactor;
    if(ifile.good()) {
      addScaleFactor(sample, regionExp, scaleFactor);
    }
  }
}

int Config::getNSamples() {

  return m_samples.size();
}

Config::Sample Config::getSample(int i) {

  Sample sample;
  sample.type = DummySample;

  if(i >= 0 && i < getNSamples()) {
    sample = m_samples[i];
  }

  return sample;
}

std::vector<Config::Sample> Config::getSamples() {

  return m_samples;
}

std::string Config::getTotalBackgroundName() {

  return m_totalBkgName;
}

bool Config::canUseTotalBackground() {

  if(m_totalBkgName == "") {
    return false;
  }

  for(int i=0; i<getNSamples(); i++) {

    if(m_samples[i].type != Background){
      continue;
    }
  }

  for(unsigned int iSF=0; iSF<m_scaleFactors.size(); iSF++) {
    if(fabs(m_scaleFactors[iSF].value - 1) > 1e-6) {
      return false;
    }
  }
  
  return true;
}

int Config::getBkgCount() {

  return m_bkgCount;
}

int Config::getSigCount() {

  return m_sigCount;
}

void Config::setLegendThreshold(double threshold) {

  m_legendThreshold = threshold;
}

double Config::getLegendThreshold() {

  return m_legendThreshold;
}

void Config::setNoStack(bool noStack) {

  m_noStack = noStack;
}

bool Config::getNoStack() {

  return m_noStack;
}

void Config::setNoSignalStack(bool noSignalStack) {

  m_noSignalStack = noSignalStack;
}

bool Config::getNoSignalStack() {

  return m_noSignalStack;
}

void Config::setMake1DPlots(bool make1D) {

  m_make1DPlots = make1D;
}

bool Config::getMake1DPlots() {

  return m_make1DPlots;
}

void Config::setMake2DPlots(bool make2D) {

  m_make2DPlots = make2D;
}

bool Config::getMake2DPlots() {

  return m_make2DPlots;
}

void Config::setOverwrite(bool overwrite) {

  m_overwrite = overwrite;
}

bool Config::getOverwrite() {

  return m_overwrite;
}

void Config::setSystematicDir(std::string sys) {

  m_sysdir = sys;
}

std::string Config::getSystematicDir() {

  return m_sysdir;
}

void Config::setAnalysis(AnalysisType type,
			 std::string status,
			 std::string name,
			 std::string CME,
			 std::string luminosity,
			 std::string mH,
			 std::string institute,
			 std::string version) {

  m_analysis.type = type;
  m_analysis.status = status;
  m_analysis.name = name;
  m_analysis.CME = CME;
  m_analysis.luminosity = luminosity;
  m_analysis.mH = mH;
  m_analysis.institute = institute;
  m_analysis.version = version;
  m_analysis.title = getAnalysisTitleDefault(); // default per analysis type 
}

void Config::setInputPath(std::string inputPath) {

  m_analysis.inputPath = inputPath;
}

void Config::setInputFile(std::string inputFile) {

  m_analysis.inputFile = inputFile;
}

void Config::setInputTDirectory(std::string inputDir) {

  m_analysis.inputTDirectory = inputDir;
}

void Config::setOutputPath(std::string outputPath) {

  m_analysis.outputPath = outputPath;
}

void Config::setAnalysisTitle(std::string title) {

  m_analysis.title=title;
}

std::string Config::getInputTDirectory() {

  return m_analysis.inputTDirectory;
}

std::string Config::getAnalysisStatus() {

  return m_analysis.status;
}

std::string Config::getCME() {

  return m_analysis.CME;
}

std::string Config::getLuminosity() {

  return m_analysis.luminosity;
}

std::string Config::getAnalysisTitle() {

  return m_analysis.title;
}

std::string Config::getAnalysisTitleDefault() {

  std::string title = "";

  switch(m_analysis.type) {
  case ZeroLepton:
    title = "monoHbb";
    break;
  case OneLepton:
    title = "WH#rightarrowl#nubb";
    break;
  case TwoLepton:
    title = "ZH#rightarrowllbb";
    break;
  default:
    break;
  }

  return title;
}


Config::BDTTransform Config::makeBDTTransformation(std::string name, int method, float par1, float par2) {

  BDTTransform t;
  t.name = name;
  t.method = method;
  t.par1 = par1;
  t.par2 = par2;

  return t;
}

void Config::addBDTTransformation(std::string name, int method, float par1, float par2) {

  m_BDTTransformations.push_back(makeBDTTransformation(name, method, par1, par2));
}

std::vector<Config::BDTTransform> Config::getBDTTransformations() {

  return m_BDTTransformations;
}

void Config::setThresholdBlinding(double threshold) {

  bool found = false;
  for(int i=0; i<getNBlindings(); i++) {

    if(m_blindings[i].type == Threshold) {

      m_blindings[i].threshold = threshold;
      found = true;
      break;
    }
  }

  if(!found) {
    Blinding blinding;
    blinding.type = Threshold;
    blinding.threshold = threshold;
    blinding.xmin = 0;
    blinding.xmax = 0;

    m_blindings.push_back(blinding);
  }
}

void Config::addWindowBlinding(std::string varName, std::string region, std::string trafo, double xmin, double xmax) {

  Blinding blinding;
  blinding.type = Window;
  blinding.threshold = -1;
  blinding.varName = varName;
  blinding.region = region;
  blinding.trafo = trafo;
  blinding.xmin = xmin;
  blinding.xmax = xmax;

  m_blindings.push_back(blinding);
}

int Config::getNBlindings() {

  return m_blindings.size();
}

Config::Blinding Config::getBlinding(int i) {

  Blinding blinding;
  blinding.type = DummyBlinding;
  if(i >= 0 && i < getNBlindings()) {
    blinding = m_blindings[i];
  }

  return blinding;
}

std::vector<Config::Blinding> Config::getBlindings() {

  return m_blindings;
}

std::string Config::getOutputPath() {

  return m_analysis.outputPath;
}

std::string Config::getInputFileFullName(std::string trafo) {

  if(m_analysis.inputFile != "") {
    if(trafo == "") {
      return m_analysis.inputPath+"/"+m_analysis.inputFile+".root";
    }else{
      return m_analysis.inputPath+"/"+m_analysis.inputFile+"."+trafo+".root";
    }
  }

  std::string fname = "";

  std::string Vdecay = "";
  std::string Vtype = "";
  switch(m_analysis.type) {
  case ZeroLepton: Vtype = "Z"; Vdecay = "vv"; break;
  case OneLepton:  Vtype = "W"; Vdecay = "lv"; break;
  case TwoLepton:  Vtype = "Z"; Vdecay = "ll"; break;
  default: 
    break;
  }

  fname += m_analysis.inputPath+"/";
  fname += "LimitHistograms.";
  fname += Vdecay+"bb.";
  fname += m_analysis.name+".";
  fname += m_analysis.CME+"TeV.";
  fname += m_analysis.institute+".";
  fname += m_analysis.version+".";
  fname += Vtype+Vdecay+"H"+m_analysis.mH+".";
  if(trafo != ""){
    fname += trafo+".";
  }
  fname += "root";

  return fname;
}

void Config::addVariable( VariableType type,
			  std::string name,
			  std::string title,
			  double xmin,
			  double xmax,
			  int ngroup,
			  double xscale,
			  bool equidist,
			  bool relabel ) {

  Variable var;
  var.type = type;
  var.name = name;
  var.title = title;
  var.xmin = xmin;
  var.xmax = xmax;
  var.ngroup = ngroup;
  var.xscale = xscale;
  var.equidist = equidist;
  var.relabel = relabel;
  var.binning = {};
  var.divide_width = false;

  m_variables.push_back(var);
}

void Config::addVariable( VariableType type,
			  std::string name,
			  std::string title,
			  std::vector<double> binning,
			  bool divide_width,
			  double xscale,
			  bool equidist,
			  bool relabel ) {

  Variable var;
  var.type = type;
  var.name = name;
  var.title = title;
  var.xmin = binning.front();
  var.xmax = binning.back();
  var.ngroup = -1;
  var.xscale = xscale;
  var.equidist = equidist;
  var.relabel = relabel;
  var.binning = binning;
  var.divide_width = divide_width;

  m_variables.push_back(var);
}

int Config::getNVariables() {

  return m_variables.size();
}

Config::Variable Config::getVariable(int i) {

  Variable var;
  var.type = DummyVariable;
  if(i >= 0 && i < getNVariables()) {
    var = m_variables[i];
  }

  return var;
}

std::vector<Config::Variable> Config::getVariables() {

  return m_variables;
}

void Config::clearRegions() {

  m_regions.clear();
  m_regionsMap.clear();
}

void Config::clearVariables() {
  m_variables.clear();
}

void Config::clearSamples() {
  m_samples.clear();
  m_bkgCount = 0;
  m_sigCount = 0;

}

void Config::addRegion(std::string name, std::string title, std::string slideTitle) {

  addRegion(name, name, title, slideTitle);
}

void Config::addRegion(std::string name, std::string groupName, std::string title, std::string slideTitle) {

  Region *region = new Region;
  region->name = name;
  region->groupName = groupName;
  region->title = title;
  region->slideTitle = slideTitle;

  std::map<std::string, Region*>::iterator itr = m_regionsMap.find(groupName);

  if(itr == m_regionsMap.end()) {

    Region *parent = new Region;
    *parent = *region;
    parent->name = groupName;
    parent->subRegions.push_back(region);
    m_regions.push_back(parent);
    m_regionsMap.insert(std::make_pair(groupName, parent));
  }else{
    itr->second->subRegions.push_back(region);
  }

}

int Config::getNRegions() {

  return m_regions.size();
}

Config::Region *Config::getRegion(int i) {

  if(i >= 0 && i < getNRegions()) {
    return m_regions[i];
  }

  Region *region = new Region;
  region->name = "";
  region->title = "";
  region->slideTitle = "";

  return region;
}

std::vector<Config::Region*> Config::getRegions() {

  return m_regions;
}

void Config::clearSystematics() {

  m_systematics.clear();
}

void Config::addSystematic(std::string name, bool isOneSided) {

  Systematic sys;
  sys.name = name;
  sys.isOneSided = isOneSided;

  m_systematics.push_back(sys);
}

int Config::getNSystematics() {

  return m_systematics.size();
}

Config::Systematic Config::getSystematic(int i) {

  Systematic systematic;
  systematic.name = "";
  if(i >= 0 && i < getNSystematics()) {
    systematic = m_systematics[i];
  }

  return systematic;
}

std::vector<Config::Systematic> Config::getSystematics() {

  return m_systematics;
}


Config::SystematicPlot Config::getDetailedSystematicsPlots(std::string varName, std::string trafoName, std::string regionName) {

  SystematicPlot sysPlot;
  sysPlot.isDummy = true;

  std::vector<SystematicPlot>::iterator itr;
  for(itr=m_systPlots.begin(); itr!= m_systPlots.end(); itr++) {

    if(itr->var == varName && 
       itr->region == regionName &&
       itr->trafo == trafoName) {
      sysPlot = *(itr);
      break;
    }
  }

  return sysPlot;
}

void Config::addDetailedSystematicsPlots(std::string varName, std::string trafoName, std::string regionName, std::string slideTitle) {

  SystematicPlot sysPlot;
  sysPlot.isDummy = false;
  sysPlot.var = varName;
  sysPlot.region = regionName;
  sysPlot.trafo = trafoName;
  sysPlot.slideTitle = slideTitle;

  m_systPlots.push_back(sysPlot);
}

void Config::readSetup() {

  std::cout << "Info: Reading setup" << std::endl;

  std::string fname = getInputFileFullName("");

  std::cout << "  - input file: " << fname << std::endl;

  TFile *f = TFile::Open(fname.c_str(), "READ");
  if(!f || f->IsZombie()) {
    std::cout << "Error: could not open input file: " << fname << std::endl;
    m_isValid = false;
    return;
  }

  TList *keys = 0;
  std::string dirName = getInputTDirectory();
  if(dirName != "") {
    bool dirExists=f->GetDirectory(dirName.c_str());
    keys = (dirExists) ? f->GetDirectory(dirName.c_str())->GetListOfKeys() : 0;
  }else{
    keys = f->GetListOfKeys();
  }

  int nkeys = (keys) ? keys->GetSize() : 0;
  int progress = -1;
  for(int i=0; i<nkeys; i++) {
    TKey *key = (TKey*)keys->At(i);
    TClass cl (key->GetClassName());

    int newProgress = ((i+1) * 100) / nkeys;
    if(newProgress != progress) {
      progress = newProgress;
      std::cout << "\r|";
      for(int p=0; p<100; p+=2) std::cout << (p<progress?"=":"-");
      std::cout << "| (" << progress << " %)";
      std::flush(std::cout);
    }

    // new way with systematics all in one directory
    if(cl.InheritsFrom("TDirectory")&&m_sysdir!="") {

      // loop over histograms in the m_sys directory 
      if (dirName!="") dirName+="/";
      TString systDir(dirName+m_sysdir);
      //      cout << "Looking at the systematics directory " << systDir << endl;       
      TDirectory* tsystDir(f->GetDirectory(systDir));
      if (!tsystDir) continue;
      TIter nextkey(tsystDir->GetListOfKeys());
      TKey* histkey;
      while ( (histkey = (TKey*) nextkey()) ) {
	TClass histcl(histkey->GetClassName());
	if(histcl.InheritsFrom("TH1") && !histcl.InheritsFrom("TH2")) {
	  Systematic syst;
	  TString syst_TStr(histkey->GetName());
	  if(!syst_TStr.Contains("_Sys")) continue;
	  syst_TStr.Remove(0,syst_TStr.Index("_Sys")+1);
	  //	  cout << " sys TString " << syst_TStr << endl;	  
	  syst.name = syst_TStr;
	  bool isUp=syst_TStr.EndsWith("1up");
	  bool isDo=syst_TStr.EndsWith("1down");
	  std::string varName("");
	  if (isUp) varName="__1up";
	  if (isDo) varName="__1down";
	  if(varName == "__1up" || varName == "__1down") {
	    syst.name = syst.name.substr(0, syst.name.length()-varName.length());	    
	    syst.isOneSided = false;
	  }else{
	    syst.isOneSided = true;
	  }
	  bool found = false;
	  for(unsigned int iSys=0; iSys<m_systematics.size(); iSys++) {
	    if(syst.name == m_systematics[iSys].name) {
	      found = true;
	      break;
	    }
	  }
	  if(!found) {
	    m_systematics.push_back(syst);
	  }
	} // end of check Systematic hist is TH1
      } // end of loop over TH1
      //
      // old way with separate systematic subdirectories
    } else if(cl.InheritsFrom("TDirectory")&&m_sysdir=="") {

      Systematic syst;
      syst.name = std::string(key->GetName());
      TString syst_TStr(syst.name);
      bool isUp=syst_TStr.EndsWith("1up");
      bool isDo=syst_TStr.EndsWith("1down");
      std::string varName("");
      //      std::string varName = syst.name.substr(syst.name.length()-2, 2);
      //      std::string varName(""); 		 
      if (isUp) varName="__1up";
      if (isDo) varName="__1down";
      if(varName == "__1up" || varName == "__1down") {
	syst.name = syst.name.substr(0, syst.name.length()-varName.length());
	syst.isOneSided = false;
      }else{
	syst.isOneSided = true;
      }
      bool found = false;
      for(unsigned int iSys=0; iSys<m_systematics.size(); iSys++) {
	if(syst.name == m_systematics[iSys].name) {
	  found = true;
	  break;
	}
      }
      if(!found) {
	m_systematics.push_back(syst);
      }
    }else if(cl.InheritsFrom("TH1") && !cl.InheritsFrom("TH2")) {

      std::string hname(key->GetName());
      std::vector<std::string> hnameParsed = Utils::tokenize(hname, "_");
      if(hnameParsed.size() < 2) {
	std::cout << "Warning: found histogram in input file with wierd name: " << hname << "  ==> ignored" << std::endl;
	continue;
      }
      if(hnameParsed[0] == "data") {
	// Run-II string has form sample_regions_variable
	//std::string crName = "";
	// int firstRegion=1;
	// int lastRegion=hnameParsed.size()-1;
	// for(int reg(firstRegion); reg<lastRegion; ++reg) {
	//   crName+=hnameParsed[reg];
	//   if(reg<lastRegion-1)
	//     crName+="_"; // keep the _ between subregions
	// }


	std::string  crName=hnameParsed[1]+"_"+hnameParsed[2]+"_"+hnameParsed[3];//this works for 0lepton

	if(m_regionsMap.find(crName) == m_regionsMap.end()) {
	  addRegion(crName, crName, crName);
	}
      }
    }
  }
  std::cout << std::endl;

  f->Clear();
  f->Close();
  delete f;

  std::cout << "  - Found " << m_regions.size() << " regions" << std::endl;
  for(unsigned int iCR=0; iCR<m_regions.size(); iCR++) {
    std::cout << m_regions[iCR]->name << std::endl;
  } 
  std::cout << "  - Found " << m_systematics.size() << " systematics" << std::endl; 
  for(unsigned int iSys=0; iSys<m_systematics.size(); iSys++) {
    std::cout << m_systematics[iSys].name << std::endl;
  }
}

std::vector<std::string> Config::getSensitivityPlots(std::string var, std::string region, std::string trafo) {

  std::vector<std::string> sensitivityNames;
  for(unsigned int i=0; i<m_sensitivityPlots.size(); i++) {
    SensitivityPlot s = m_sensitivityPlots[i];
    if(s.var == var &&
       s.region == region &&
       s.trafo == trafo) {
      sensitivityNames.push_back(s.name);
    }
  }

  return sensitivityNames;
}

void Config::addSensitivityPlot( std::string name, std::string var, std::string region, std::string trafo) {

  SensitivityPlot s;
  s.name = name;
  s.region = region;
  s.var = var;
  s.trafo = trafo;

  m_sensitivityPlots.push_back(s);
}

std::string Config::getHistoName(std::string dir, std::string sample, std::string region, std::string var, std::string sys) {

  std::string hname = "";

  if(dir != "") hname += dir+"/";
  hname += sample+"_"+region+"_"+var;
  if(sys != "Nominal") hname += "_"+sys;
  
  
  //cout << " dir " << dir << " sample " << sample << " region " << region << " var " << var << " sys " << sys << endl; 
  //cout << " hname " << hname <<  endl; 

  return hname;
}
