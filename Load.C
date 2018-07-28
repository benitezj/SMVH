void Load(){
  gROOT->ProcessLine(".x ./SMVH/plots/rootlogon.C");
  gSystem->Load("libSMVH.so");  
}

