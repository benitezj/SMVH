
TH1F * getHistoSpyros(TString path,long M){


  //////comparison of new Fixed DAOD's
   // std::vector<std::string> region;
   // region.push_back("0tag1pfat0pjet_500ptv_mBBcr_mVH");
   // region.push_back("0tag1pfat0pjet_0_500ptv_mBBcr_mVH");
   // region.push_back("0tag1pfat0pjet_500ptv_SR_mVH");
   // region.push_back("0tag1pfat0pjet_0_500ptv_SR_mVH");
   // region.push_back("1tag1pfat0pjet_500ptv_mBBcr_mVH");
   // region.push_back("1tag1pfat0pjet_0_500ptv_mBBcr_mVH");
   // region.push_back("1tag1pfat0pjet_500ptv_SR_mVH");
   // region.push_back("1tag1pfat0pjet_0_500ptv_SR_mVH");
   // region.push_back("2tag1pfat0pjet_500ptv_SR_mVH");
   // region.push_back("2tag1pfat0pjet_0_500ptv_mBBcr_mVH");
   // region.push_back("2tag1pfat0pjet_500ptv_mBBcr_mVH");
   // region.push_back("2tag1pfat0pjet_0_500ptv_SR_mVH");


  /////comparisons of original Moriond Inputs
 std::vector<std::string> region;
 region.push_back("1tag1pfat0pjet_500ptv_SR_noaddbjetsr_mVH");
 region.push_back("1tag1pfat0pjet_500ptv_highmBBcr_noaddbjetsr_mVH");
 region.push_back("1tag1pfat0pjet_500ptv_lowmBBcr_noaddbjetsr_mVH");
 region.push_back("1tag1pfat0pjet_0_500ptv_SR_noaddbjetsr_mVH");
 region.push_back("1tag1pfat0pjet_0_500ptv_highmBBcr_noaddbjetsr_mVH");
 region.push_back("1tag1pfat0pjet_0_500ptv_lowmBBcr_noaddbjetsr_mVH");
 
 // std::vector<std::string> region;
 // region.push_back("2tag1pfat0pjet_500ptv_SR_noaddbjetsr_mVH");
 // region.push_back("2tag1pfat0pjet_500ptv_highmBBcr_noaddbjetsr_mVH");
 // region.push_back("2tag1pfat0pjet_500ptv_lowmBBcr_noaddbjetsr_mVH");
 // region.push_back("2tag1pfat0pjet_0_500ptv_SR_noaddbjetsr_mVH");
 // region.push_back("2tag1pfat0pjet_0_500ptv_highmBBcr_noaddbjetsr_mVH");
 // region.push_back("2tag1pfat0pjet_0_500ptv_lowmBBcr_noaddbjetsr_mVH");

  
    TFile File1(path.Data(),"read");
    gROOT->cd();
    TH1F*H1=0;

     for(std::vector<std::string>::iterator r=region.begin();r!=region.end();r++){
      TString Hname=TString("HVTZHllqq")+M+"_"+(*r).c_str();
      
      TH1F* h=(TH1F*)File1.Get(Hname.Data());
      //cout<<Hname<<" h="<<h<<endl;
      
      if(!h){
	cout<<"NOT FOUND: "<<Hname<<endl;
	continue;
      }
      if(!H1)H1=(TH1F*)(h->Clone("H"));
      else H1->Add(h);
    }
    
    File1.Close();    


    H1->Scale(3.2/5.8);
    return H1;
}

TH1F * getHistoJose(TString path,long M){

    /////////Jose
    std::vector<std::string> mbb2;
    mbb2.push_back("lowMH");
    mbb2.push_back("SR");
    mbb2.push_back("highMH");
    TH1F*H2=0;
    for(std::vector<std::string>::iterator m=mbb2.begin();m!=mbb2.end();m++){
      //TString fname=TString("HVTZHllqq")+M+"_llJ_presel_0addtag_"+(*m).c_str()+"_mVH.root";

      TString fname=TString("HVTZHllqq")+M+"_llJ_1tag_0addtag_"+(*m).c_str()+"_mVH.root";
      
      //TString fname=TString("HVTZHllqq")+M+"_llJ_2tag_0addtag_"+(*m).c_str()+"_mVH.root";

      TFile File2(path+"/"+fname.Data(),"read");
      gROOT->cd();
      TH1F* h=(TH1F*)File2.Get("nominal");
      if(!h){
	cout<<"NOT FOUND: "<<File2.GetName()<<endl;
	continue;
      }
      if(!H2)H2=(TH1F*)(h->Clone("H"));
      else H2->Add(h);
    }
 
    return H2;
}


void compareInputYieldsMoriond(){

  TGraph G1;
  TGraph G2;
  TGraph R;
  int c=0;
  for(long M=1000;M<=5000;M+=1000){ 

    //TH1F*H1=getHistoSpyros("/afs/cern.ch/user/s/sargyrop/public/ForJose/HVT_Spyros_Maker20_Reader20.root",M);
    //TH1F*H2=getHistoJose("~/public/analysis/LimitInputs/LimitInputs_ZHllJ_DB00-07-02_3Aug2016_NoSystsFixORFixDAOD",M);
 
   
    //TH1F*H1=getHistoJose("~/public/analysis/LimitInputs/LimitInputs_ZHllJ_DB00-07-02",M);
    ///TH1F*H1=getHistoJose("~/public/analysis/LimitInputs/LimitInputs_ZHllJ_DB00-07-02_3Aug2016_NoSysts",M);
    //TH1F*H2=getHistoJose("~/public/analysis/LimitInputs/LimitInputs_ZHllJ_DB00-07-02_3Aug2016_NoSystsFixORFixDAOD",M);

    TH1F*H1=getHistoSpyros("~/public/analysis/LimitInputs/LimitInputs.llbb.ICHEP2016.13TeV.Freiowa.Merged.HVT.280716.root",M);
    TH1F*H2=getHistoJose("~/public/analysis/LimitInputs/LimitInputs_ZHllJ_DB00-07-02",M);


    ////Fill Graphs
    G1.SetPoint(c,M,H1->Integral());
    G2.SetPoint(c,M,H2->Integral());
    R.SetPoint(c,M,H2->Integral()/H1->Integral());
    c++;
  }

  TCanvas C;

  C.Clear();
  G1.Draw();
  G2.Draw("pesame");
  C.Print("/afs/cern.ch/user/b/benitezj/www/Moriond2017Studies/compareInputYieldsMoriond.png");

  C.Clear();
  R.GetYaxis()->SetRangeUser(0.5,1.5);
  R.Draw();
  TLine line;
  line.DrawLine(1000,1,5000,1);
  C.Print("/afs/cern.ch/user/b/benitezj/www/Moriond2017Studies/compareInputYieldsMoriond_ratio.png");


}
