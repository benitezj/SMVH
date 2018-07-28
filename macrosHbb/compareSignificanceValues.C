void printValue(TString path){

  TFile F1(TString("WSMaker/root-files/")+path.Data()+"/125.root","read");
  TH1F*h1=(TH1F*)F1.Get("hypo");
  if(!h1){
    cout<<"No result in: "<<path<<endl;
    return;
  }
  cout<<h1->GetBinContent(2)<<" "<<F1.GetName()<<endl;
}

///////////////////////////////////////////////
void compareSignificanceValues(){
  printValue("SMVH_mva_v14puw.test_limits_VHbbRun2_13TeV_test_0_125_Systs_use1tagFalse_use4pjetFalse_mva_obs_p0");
  printValue("SMVH_mva_ICHEP.ICHEP_limits_VHbbRun2_13TeV_ICHEP_0_125_Systs_use1tagFalse_use4pjetFalse_mva_obs_p0");
  printValue("SMVH_mva_ICHEP_ExtStats.ICHEP_ExtStats_limits_VHbbRun2_13TeV_ICHEP_ExtStats_0_125_Systs_use1tagFalse_use4pjetFalse_mva_obs_p0");
  printValue("SMVH_mva_ICHEP_MAXHTPTV.ICHEP_MAXHTPTV_limits_VHbbRun2_13TeV_ICHEP_MAXHTPTV_0_125_Systs_use1tagFalse_use4pjetFalse_mva_obs_p0");

}
