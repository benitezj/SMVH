


void plotZH125BoostedTruth(Plotter*analysis,TString outpath){

  TCanvas C;

  analysis->setBinning("truth_pt[truth_H0bb]/1000",50,0,1000);
  TH1D* HpT= analysis->getSignal("SMZh"); 
  if(!HpT){cout<<"analysis->getSignal SMZh HpT failed "<<endl; return;}
  HpT->SetName("HpT");
  HpT->SetTitle("");
  HpT->GetXaxis()->SetTitle("higgs pT  [GeV]");
  HpT->Scale(1./HpT->Integral());
  HpT->GetYaxis()->SetTitle("unit norm");
  C.Clear();
  HpT->Draw("hist");
  C.Print(outpath+"/ZH125BoostedTruth_HpT.gif");


  analysis->setBinning("sqrt(pow(abs(truth_eta[truth_H0bb_b2]-truth_eta[truth_H0bb_b1]),2)+(abs(truth_phi[truth_H0bb_b2]-truth_phi[truth_H0bb_b1]) < 3.14 ? pow(abs(truth_phi[truth_H0bb_b2]-truth_phi[truth_H0bb_b1]),2) : pow(2*3.14 - abs(truth_phi[truth_H0bb_b2]-truth_phi[truth_H0bb_b1]),2)))",30,0,3);
  TH1D* HbbdR= analysis->getSignal("SMZh"); 
  if(!HbbdR){cout<<"analysis->getSignal SMZh HbbdR failed "<<endl; return;}
  HbbdR->SetName("HbbdR");
  HbbdR->SetTitle("");
  HbbdR->GetXaxis()->SetTitle("deltaR(b,b)");
  HbbdR->Scale(1./HbbdR->Integral());
  HbbdR->GetYaxis()->SetTitle("unit norm");
  C.Clear();
  HbbdR->Draw("hist");
  C.Print(outpath+"/ZH125BoostedTruth_HbbdR.gif");
  cout<<"Integral above dR=0.8 : "<<HbbdR->Integral(9,31)<<endl;
  
  gROOT->ProcessLine(".q");

}
