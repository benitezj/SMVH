  
void computeSignificanceVsMCStat(float scaleZ=1.0;float scaleW=1.0;float scaleTT=1.0){
  
  float yield2jet= 167;//13.2/fb
  float yield3jet= 501;//13.2/fb
  float sig2jet=16;//13.2/fb
  float sig3jet=18;//13.2/fb
  float lumiscale= 35/13.2;

  // Uncertainties 
  float Other2jet=5;
  float W2jet=1.88;
  float Z2jet=3.7;
  float tt2jet=3.01;

  float Other2jet=5;
  float W3jet=1.88;
  float Z3jet=3.7;
  float tt3jet=3.01;

  float unc2jet=sqrt(pow(Other2jet,2)+pow(scaleW*W2jet,2)+pow(scaleZ*Z2jet,2)+pow(scaleTT*tt2jet,2));
  float unc3jet=sqrt(pow(Other3jet,2)+pow(scaleW*W3jet,2)+pow(scaleZ*Z3jet,2)+pow(scaleTT*tt3jet,2));


  float sig2jet=lumiscale*sig2jet/sqrt(lumiscale*yield2jet+pow(lumiscale*unc2jet,2));
  float sig3jet=lumiscale*sig3jet/sqrt(lumiscale*yield3jet+pow(lumiscale*unc3jet,2));
  float sigcombined=sqrt(sig2jet*sig2jet+sig3jet*sig3jet);

  cout<<"2jet="<<sig2jet<<",  3jet="<<sig3jet<<" , comb="<<sigcombined<<endl;
}
