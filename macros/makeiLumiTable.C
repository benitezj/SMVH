void makeiLumiTable(TString iLumiCalc){
  TFile _file0(iLumiCalc.Data(),"READ");
  TTree*LumiMetaData=(TTree*)_file0.Get("LumiMetaData");
  UInt_t runNbr=0;Float_t intLumi=0;UInt_t lbn=0; Float_t mu=0.;
  LumiMetaData->SetBranchAddress("RunNbr",&runNbr);
  LumiMetaData->SetBranchAddress("AvergeInteractionPerXing",&mu);
  LumiMetaData->SetBranchAddress("LBStart",&lbn);
  for(int i=0;i<LumiMetaData->GetEntries();i++){
    LumiMetaData->GetEntry(i);
    cout<<runNbr<<" "<<lbn<<" "<<mu<<endl;
  }
  gROOT->ProcessLine(".q");
}
