
void printBkgYields(TString inputpath, TString region="2tag2jet_150ptv_SR_mva", int rebin=1,float min=0., float max=0.){
    
  std::vector<std::string> bkgs;
  bkgs.push_back("data");
  bkgs.push_back("WW");
  bkgs.push_back("WZ");
  bkgs.push_back("ZZ");
  bkgs.push_back("Wl");
  bkgs.push_back("Wcl");
  bkgs.push_back("Wbb");
  bkgs.push_back("Wbl");
  bkgs.push_back("Wbc");
  bkgs.push_back("Zcc");
  bkgs.push_back("Zbl");
  bkgs.push_back("Zbb");
  bkgs.push_back("Zcl");
  bkgs.push_back("Zbc");
  bkgs.push_back("ttbar");
  bkgs.push_back("stopWt");
  bkgs.push_back("stopt");
  bkgs.push_back("stops");


  TFile input(inputpath,"read");
  if(input.IsZombie())return;
  gROOT->cd();

  //fill a map of the uncertainties that will be sorted.
  std::map<std::string,float> yield;//
  std::map<float,std::string> unc;  //will be used for sorting

  ///get histos
  for( std::vector<std::string>::iterator it=bkgs.begin();it!=bkgs.end();it++){
    TString histname=TString((*it).c_str())+"_"+region;

    TH1F* h=(TH1F*) input.Get(histname.Data());
    if(!h){
      cout<<" not found "<<histname<<" "<<endl; 
      //return;
      continue;
    }
    h=(TH1F*)(h->Rebin(rebin,(histname+"Rebin").Data())); 

    //print yield
    for(int b=1;b<=h->GetNbinsX();b++){
      if(min<h->GetBinCenter(b) &&  h->GetBinCenter(b)< max) {
	//cout<<"["<<h->GetBinLowEdge(b)<<" - "<<h->GetBinLowEdge(b)+h->GetBinWidth(b)<<"]"<<(*it).c_str()<<" : "<<h->GetBinContent(b)<<"+/-"<<h->GetBinError(b)<<endl;
	
	unc[h->GetBinError(b)] = (*it);
	yield[*it] = h->GetBinContent(b);
	
      }
    }
    
  }
  

  
  ///
  float totunc=0.;
  float totdataunc=0.;
  for( std::map<float,std::string>::iterator it=unc.begin(); it!=unc.end();it++){
    if(it->second.compare("data")==0)continue;
    //cout<<yield[it->second.c_str()]<<" +/- "<<it->first<<"   "<<it->second<<endl;
    printf("%.2f +/- %.2f : %s\n",yield[it->second.c_str()],it->first,it->second.c_str());
    totunc += (it->first)*(it->first);
    totdataunc += yield[it->second.c_str()];
  }
  cout<<"Total MC stat unc= "<<sqrt(totunc)<<endl;
  cout<<"Total Exp. data= "<<totdataunc<<" +/- "<<sqrt(totdataunc)<<endl;

}
