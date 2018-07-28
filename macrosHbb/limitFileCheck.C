#include "SMVH/macrosHbb/limitFileCheckTools.C"

void limitFileCheck(int channel=0) {

  vector<string> regions;

  ///0lepton
  if(channel==0){
    regions.push_back("2tag2jet_150ptv_SR_mva");
    regions.push_back("2tag3jet_150ptv_SR_mva");
    
    // m_plotDir = "/afs/cern.ch/user/b/benitezj/www/Moriond2017Studies/0lep/InputComparisons/UIowa.v1_LAL.v20_p2840/";
    // m_refName = "UIowa.v1";
    // m_fileNameRef = "root://eosatlas.cern.ch//eos/atlas/atlascerngroupdisk/phys-higgs/HSG5/Run2/ICHEP2016/UIowa/LimitHistograms.VH.vvbb.13TeV.UIowa.v1.root";
    // m_testName = "LAL.v20_p2840";
    // m_fileNameTest = "root://eosatlas.cern.ch//eos/atlas/atlascerngroupdisk/phys-higgs/HSG5/Run2/ICHEP2016/LAL/LimitHistograms.VH.vvbb.13TeV.LAL.v20_p2840.root";

    /////0lepton ICHEP vs Moriond  LimitHistograms.VH.vvbb.13TeV.LAL.v14wPU.root
    m_plotDir = "/afs/cern.ch/user/b/benitezj/www/Moriond2017Studies/0lep/InputComparisons/UIowa.v1_LALICHEP/";
    m_refName = "UIowa.v1";
    m_fileNameRef = "root://eosatlas.cern.ch//eos/atlas/atlascerngroupdisk/phys-higgs/HSG5/Run2/ICHEP2016/UIowa/LimitHistograms.VH.vvbb.13TeV.UIowa.v1.root";
    m_testName = "LALICHEP";
    m_fileNameTest = "root://eosatlas.cern.ch//eos/atlas/atlascerngroupdisk/phys-higgs/HSG5/Run2/ICHEP2016/LAL/LimitHistograms.VH.vvbb.13TeV.LAL.v14wPU.root";
  }

  // ///1lepton
  if(channel==0){
    regions.push_back("2tag3jet_150ptv_WhfSR_mva");
    regions.push_back("2tag2jet_150ptv_WhfSR_mva");

    m_plotDir = "/afs/cern.ch/user/b/benitezj/www/Moriond2017Studies/0lep/InputComparisons/Andyv13_Faigv06/";
    m_refName = "UCL.v13";
    m_fileNameRef = "root://eosatlas.cern.ch//eos/atlas/atlascerngroupdisk/phys-higgs/HSG5/Run2/ICHEP2016/UCL/LimitHistograms.VH.lvbb.13TeV.UCL.v13.root";
    m_testName = "JINR.v06";
    m_fileNameTest = "root://eosatlas.cern.ch//eos/atlas/atlascerngroupdisk/phys-higgs/HSG5/Run2/ICHEP2016/JINR/LimitHistograms.VH.lvbb.13TeV.JINR.v06.root";
  }



  
  ////////////////////////////////////
  system(TString("rm -rf ")+m_plotDir);
  if(!createOutputDir()) return;
  cout<<m_plotDir<<endl;



  ///////////////////////////////////////////////////////
  // sample used for comparing systematics
  m_nominalOnly = false; //produces only plots for nominal if m_drawCompare is set to true
  string sample = "ttbar";



  ///////////////////////////////////////////////////////////////////////////////////////////////
  for (unsigned int j = 0; j < regions.size(); j++) {
    m_region = regions[j];

    /////////////////////////////////////////////////////////
    // this won't work for sample names with underscores, e.g. stop_t
    vector<string> samples = getListOfSamples(getFile(m_fileNameTest));


    cout << "================================================================================" << endl;
    cout << "Reading yields from test file: " << m_fileNameTest << endl;
    vector<Yield> yieldsTest = readYields(m_fileNameTest, samples, m_region);
    cout << "Reading yields from reference file: " << m_fileNameRef << endl;
    vector<Yield> yieldsRef = readYields(m_fileNameRef, samples, m_region);


    cout << "================================================================================" << endl;
    cout << "Yield comparison in " << m_region << ": " << endl;
    compareYields(yieldsTest, yieldsRef);



    ////////////////
    cout << "================================================================================" << endl;
    cout << "Reading systematics on " << sample << " in " << m_region << " from test file: " << m_fileNameTest << endl;
    vector<SysParam*> sysParamsTest = readSysFromLimitFile(m_fileNameTest, sample, m_region);
    cout << "Reading systematics on " << sample << " in " << m_region << " from reference file: " << m_fileNameRef << endl;
    vector<SysParam*> sysParamsRef = readSysFromLimitFile(m_fileNameRef, sample, m_region);


    // cout << "================================================================================" << endl;
    // cout << "Printing systematics on " << sample << " in " << m_region << " from test file: " << m_fileNameTest << endl;
    // printSysParam(sysParamsTest);

    // cout << "================================================================================" << endl;
    // cout << "Printing systematics on " << sample << " in " << m_region << " from reference file: " << m_fileNameRef << endl;
    // printSysParam(sysParamsRef);

    cout << "================================================================================" << endl;
    checkForMissingSys(sysParamsTest, sysParamsRef);


    cout << "================================================================================" << endl;
    cout << "Comparing systematics on " << sample << " in " << m_region << endl;
    compareSys(sysParamsTest, sysParamsRef);


    // cout << "================================================================================" << endl;
    // if (m_drawSingle) {
    //   cout << "Drawing systematics from test file..." << endl;
    //   plotSys(sysParamsTest, m_testName);
    //   cout << "Drawing systematics from reference file..." << endl;
    //   plotSys(sysParamsRef, m_refName);
    // }
    // if (m_drawGroup) {
    //   cout << "Drawing systematics groups from test file..." << endl;
    //   plotGroupSys(sysParamsTest, m_testName);
    // }
    // if (m_drawCompare) {
    //   cout << "Drawing systematics comparing both files..." << endl;
    //   plotCompareSys(sysParamsTest, sysParamsRef);
    // }


    // if (m_drawSingle || m_drawCompare) {
    //   cout << "================================================================================" << endl;
    // }  
    // if (m_drawSingle || m_drawGroup || m_drawCompare) {
    //   for (unsigned int i = 0; i < sysParamsTest.size(); i++) {
    // 	SysParam* param = sysParamsTest.at(i);
    // 	if (i==0) {
    // 	  delete param->h_nominal;
    // 	}
    // 	delete param->h_sysUp;
    // 	delete param->h_sysDo;
    // 	delete param->h_sysUpNorm;
    // 	delete param->h_sysDoNorm;
    // 	delete param;
    //   }
    //   for (unsigned int i = 0; i < sysParamsRef.size(); i++) {
    // 	SysParam* param = sysParamsRef.at(i);
    // 	if (i==0) {
    // 	  delete param->h_nominal;
    // 	}
    // 	delete param->h_sysUp;
    // 	delete param->h_sysDo;
    // 	delete param->h_sysUpNorm;
    // 	delete param->h_sysDoNorm;
    // 	delete param;
    //   }
    // }

  
  }
  gSystem->Exit(0);
}
