#include "SMVH/tools.h"
#include <fstream>
#include <sstream>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <TMath.h>


double DeltaR(float eta1, float phi1, float eta2, float phi2) {
  double deta= fabs(eta1 - eta2), dphi= fabs(phi1 - phi2);
  if (dphi > TMath::Pi() ) dphi = 2*(TMath::Pi()) - dphi;
  return sqrt((dphi*dphi)+(deta*deta));
}
double factorial(int n){
  if(n==0) return 1;
  
  double ans=1.0;
  for(int i=1; i <= n; i++)
    ans *= i;
  return ans;

  //for large n use Stirlings approximation
  //if(n>10) return sqrt(2*3.14159*n) * pow(n/2.71828,n) ;
  //but not useful here as pow will evaluate to abnormal value, so use only in conjunction with other factors

}


std::vector<string> split(const string &text, char sep) {
  std::vector<string> tokens;
  int start = 0, end = 0;
  while ((end = text.find(sep, start)) != int(string::npos) ) {
    string tok=text.substr(start, end - start);
    //cout<<tok<<endl;
    tokens.push_back(tok);
    start = end + 1;
  }
  tokens.push_back(text.substr(start));
  return tokens;
}

std::string findMatchInDir(const char* dirpath, const char* match){
  DIR * Dir = opendir(dirpath);
  if(Dir == NULL){ cout<<"path not found: "<<dirpath<<endl; return "";}
  struct dirent * DirEntry;
  while((DirEntry=readdir(Dir)) != NULL )
    if ( TString(DirEntry->d_name).Contains(match))
      return std::string(DirEntry->d_name);
  closedir(Dir);
  return "";
}


std::vector<std::string> findSamplesInDir(const char* dirpath, const char* match){
  std::vector<std::string> samples;
  DIR * Dir = opendir(dirpath);
  if(Dir == NULL){ cout<<"findSamplesInDir() : path not found: "<<dirpath<<endl; return samples;}
  struct dirent * DirEntry;
  while((DirEntry=readdir(Dir)) != NULL )
    if ( TString(DirEntry->d_name).Contains(match))
      samples.push_back(std::string(DirEntry->d_name));
  closedir(Dir);  
  return samples;
}



float getSampleValue(TString file, int run){
  //Input file must have first column as the run number and second column as some number
  float value=0.;
  std::ifstream infile(file.Data());
  std::string line;
  int RUN;
  float VALUE;
  while (std::getline(infile, line)){
    std::istringstream iss(line);
    iss >> RUN;
    iss >> VALUE;
    if(run==RUN){ value=VALUE; break;}
  }

  return value;
}

float getSampleValueFromCSV(TString file, int run, unsigned int position){
  float value=0.;
  std::ifstream infile(file.Data());
  std::string line;
  int RUN;
  while (std::getline(infile, line)){
    std::vector<std::string> vector=split(line,',');
    if(vector.size() >= position){
      RUN=atoi(vector[0].c_str());

      if(run==RUN){ 
	//value=atoi(vector[position].c_str());
	//value=std::stof(vector[position].c_str()); 
	value=strtof(vector[position].c_str(),NULL); 
	break;
      }
    }
  }

  return value;
}



int determineRunNumber(TString sampleName){
  int run=0;

  //determine an identifier from the sample name. Assume name is standard:
  //eg. mc14_8TeV.147807.PowhegPythia8_AU2CT10_Zmumu.merge.AOD.e1852_s1896_s1912_r5591_r5625
  //or group.phys-exotics.mc15_13TeV.361398.Sherpa_CT10_Zmumu_Pt0_70_BFilter.r6633_r6264.p2361_EXT2
  vector<string> tokens = split(sampleName.Data(),'.');
  //cout<<tokens[0]<<" "<<tokens[1]<<" "<<tokens[2]<<" "<<tokens[3]<<" "<<endl;
  // if(TString(tokens[0].c_str()).CompareTo("user") ==0
  //    || TString(tokens[0].c_str()).CompareTo("group")==0
  //    ){
  //   run=atoi(tokens[3].c_str());
  // }else{
  //   run=atoi(tokens[1].c_str());
  // }


  if(atoi(tokens[1].c_str()) != 0 ){
    run=atoi(tokens[1].c_str());
  }else if(atoi(tokens[2].c_str()) != 0){
    run=atoi(tokens[2].c_str());
  }else if(atoi(tokens[3].c_str()) != 0){
    run=atoi(tokens[3].c_str());
  }else if(atoi(tokens[4].c_str()) != 0){
    run=atoi(tokens[4].c_str());
  }

  if(run==0){
    cout<<"tools.cxx: Run number not determined properly for "<<sampleName<<endl;
  }

  return run;
}



TString determineDataSetId(TString sampleName){
  TString id="";

  //determine an identifier from the sample name. Assume name is standard:
  //eg. mc14_8TeV.147807.PowhegPythia8_AU2CT10_Zmumu.merge.AOD.e1852_s1896_s1912_r5591_r5625
  //or group.phys-exotics.mc15_13TeV.361398.Sherpa_CT10_Zmumu_Pt0_70_BFilter.r6633_r6264.p2361_EXT2
  vector<string> tokens = split(sampleName.Data(),'.');
  // if(TString(tokens[0].c_str()).CompareTo("user")==0
  //    || TString(tokens[0].c_str()).CompareTo("group")==0
  //    ){
  //   id=tokens[4].c_str();
  // }else{
  //   id=tokens[2].c_str();
  // }

  if(atoi(tokens[1].c_str()) != 0 ){
    id=tokens[2].c_str();
  }else if(atoi(tokens[2].c_str()) != 0){
    id=tokens[3].c_str();
  }else if(atoi(tokens[3].c_str()) != 0){
    id=tokens[4].c_str();
  }else if(atoi(tokens[4].c_str()) != 0){
    id=tokens[5].c_str();
  }


  if(id.CompareTo("")==0){
    cout<<"Sample:: Id not determined properly for "<<sampleName<<endl;
  }

  return id;
}



double * getExpectedSignificance(TH1 *hBkg, TH1 *hSig, int method) {
 
  double *sig = 0;
 
  if(!hBkg || !hSig) {
     return sig;
  }
 
  if(hBkg->GetNbinsX() != hSig->GetNbinsX()) {
    return sig;
  }
 
 
  sig = new double[2];
  sig[0] = 0;
  sig[1] = 0;
 
  int nbins = hSig->GetNbinsX();
 

 
  for(int bin=1; bin<=nbins; bin++) {
   
    double iS = hSig->GetBinContent(bin);
    double iB = hBkg->GetBinContent(bin);
    double idS = hSig->GetBinError(bin);
    double idB = hBkg->GetBinError(bin);
   
    double dB = 0;
 
    if( iB > 0 && iS > 0) {
 
      switch(method) {
      case 0:
        sig[0] += (iS*iS) / (iB + dB*dB);
        sig[1] += ( (iS*iS) / (iB*iB) ) * ( idS * idS + ( (iS*iS) / (4*iB*iB) ) * idB * idB );
        break;
      case 1:
        {
          double iLSB = log(1 + iS/iB);
          sig[0] += 2 * ( (iS+iB) * iLSB - iS );
          sig[1] += iLSB * iLSB * idS * idS + (iLSB - iS/iB) * (iLSB - iS/iB) * idB * idB;
        }
        break;
      default:
        break;
      }
    }
  }
 
  sig[0] = sqrt(sig[0]);
  if(sig[0] > 0) {
    sig[1] = sqrt(sig[1]) / sig[0];
  }
  return sig;
}
 


float estimateLimit(float b){

  //provide the background yield and the range to search
  //int n; //number of observed events
  //int b;  // expected background events
  float min=0;  // min of signal strength
  float max= b > 20 ? 2*sqrt(b) : 10 ;  // max of signal strength

  int n=int(b+0.5);//set observed = expected
  
  if(n>500){//note sqrt(500)~22
    //std::cout<<" estimateLimit() cannot operate on large background B="<<b<<" will return sqrt(B) as upper limit"<<std::endl;
    return sqrt(b);
  }


  //Print inputs
  //std::cout<<"  estimateLimit() : Computing limit for Obs="<<n<<"  B="<<b<<"  min="<<min<<"  max="<<max<<std::endl;
  
  //Formula is from PDG 2010 Section 33.3.1 Bayesian intervals 
  // 1 - a =  confidence level
  // b =  mean value of background yield (set to expected background)
  // s_up  = upper limit on the true mean of the signal yield
  // The following equation must be solved numerically
  // a * exp(s_up) * Sum(b^m/m!)  = Sum( (s_up + b)^m / m! )  
  // where the sum goes from m=0 to m=n (the number of observed events)
 
  int maxpower=140;


  double Sumb=0.;
  for(int m=0;m<=n;m++){

    if((b<maxpower&&m<maxpower)||m==0){
      if(!isnormal(pow(b,m))){
	cout<<"estimateLimit(): pow(b,m) evalutes to abnormal value"<<b<<" "<<m<<endl;
	return 0.;
      }

      Sumb += pow(b,m) / factorial(m);
    }else{
      //use stirlings formula for m!
	
      if(!isnormal(pow(b*2.71828/m,m))){
	cout<<"estimateLimit(): pow(b*2.71828/m,m) evalutes to abnormal value"<<b*2.71828/m<<","<<m<<endl;
	return 0.;
      }
      Sumb +=  (1./sqrt(2*3.14159*m)) * pow(b*2.71828/m,m);
    }

  }    

  
  ////////////////////////////
  float  a=0.10; //  90% CL
  float step= 0.01; // step size in s_up
  int nstep=(max-min)/step;

  //loop over test s_up values
  float limit=0.;
  int prev_sign=0;//track the sign of the difference and count the number of crossings
  int cross_counter=0;
  for(int i=0;i< nstep ;i++){
    
    float s_up = min + i * ( (max-min)/nstep );

    double Sumsb=0.;
    for(int m=0;m<=n;m++){

      if(((s_up+b)<maxpower&&m<maxpower)||m==0){
	if(!isnormal(pow( s_up + b, m))){
	  cout<<"estimateLimit(): pow( s_up + b, m) evalutes to abnormal value"<<s_up + b<<" "<<m<<endl;
	  return 0.;
	}

	Sumsb +=  (pow( s_up + b, m)  / factorial(m) ) / Sumb;
      }else{
	//use stirlings formula for m!
	
	if(m<=200){
	  if(!isnormal(pow((s_up+b)*2.71828/m,m))){
	    cout<<"estimateLimit(): pow((s_up+b)*2.71828/m,m) evalutes to abnormal value"<<(s_up+b)*2.71828/m<<" "<<m<<endl;
	    return 0.;
	  }
	  Sumsb +=  (1./sqrt(2*3.14159*m)) * pow((s_up+b)*2.71828/m,m) / Sumb ;
	}else {
	  if(!isnormal(pow((s_up+b)*2.71828/m,m-200))){
	    cout<<"estimateLimit(): pow((s_up+b)*2.71828/m,m-200) evalutes to abnormal value"<<(s_up+b)*2.71828/m<<" "<<m-200<<endl;
	    return 0.;
	  }
	  Sumsb +=  (1./sqrt(2*3.14159*m)) * (pow((s_up+b)*2.71828/m,200) / Sumb)  * pow((s_up+b)*2.71828/m,m-200);
	}

      }
    }

    //double ratio =   ( a * exp(s_up) ) * (Sumb/Sumsb) ;
    double ratio =   ( a * exp(s_up) ) / Sumsb  ;

    // check if the crossing point is passed
    int sign  = (1. - ratio) > 0. ? 1 : -1 ;
    if(i==0) prev_sign = sign; //initialize
    if(sign != prev_sign){
      limit = s_up; //current best estimate of limit 
      cross_counter++;
      prev_sign = sign;
    }

    //std::cout<<" s="<<s_up<<"  r="<<ratio<<" sign="<<sign<<" exp(s)="<<exp(s_up)<<"  Sumb="<<Sumb<<" Sumsb="<<Sumsb<<std::endl;
  }


  if(cross_counter!=1){
    std::cout<<" estimateLimit() Error number of crossings is not 1: "<< cross_counter <<std::endl;
    return 0.;
  }

  return limit;
}

double likelihood(std::vector<TH1F*> Hb,std::vector<TH1F*> Hs,std::vector<TH1F*> Hdata,float sigma){
  if(Hb.size()!=Hs.size()||Hdata.size()!=Hb.size()) return 0.;
  
  double L=1.;
  for(unsigned int index=0;index<Hb.size();index++){
    
    if(Hb[index]->GetNbinsX()!=Hs[index]->GetNbinsX() 
       || Hdata[index]->GetNbinsX()!=Hs[index]->GetNbinsX()) return 0.;

    for(int i=1;i<=Hs[index]->GetNbinsX();i++){
      double S= Hs[index]->GetBinContent(i);
      double B= Hb[index]->GetBinContent(i);
      double D= Hdata[index]->GetBinContent(i);
      
      if(B<=0||D<0||sigma*S<0)continue;//skip negative bin contents

      double E=sigma*S+B;
      double d=D-E;

      if(isnormal(pow(E,D))){
	L *= pow(E,D) * exp(-E) / factorial(D);
      }else if(isnormal(pow( E/(E+d), E + d + 0.5 ))){
	//Uses Stirlings formula n! = sqrt(2*3.14159*n) * pow(n/2.71828,n)
	//and define D=E + d  , d will be some small number (0 in case data is set to asimov)
	//Then the above formula simplifies into:
	L *= (pow(2.71828,d) / sqrt(2 * 3.14159 * E)) * pow( E/(E+d), E + d + 0.5 ) ;  
      }else{
	cout<<"pow(E,D) evalutes to abnormal value: pow("<<E<<","<<D<<")"<<endl;
	cout<<"pow(E/(E+d), E + d + 0.5 ) evalutes to abnormal value: pow("<<E/(E+d)<<","<<E + d + 0.5<<")"<<endl;
	return -9999999;//protection for large numbers
      }

    }
  }

  return L;
}


float likelihoodLimit(std::vector<TH1F*> Hb,std::vector<TH1F*> Hs,std::vector<TH1F*> Hdata,float maxCrossection){
  //Reference: http://www-cdf.fnal.gov/physics/statistics/notes/cdf6428_comb_limits.pdf

  if(Hb.size()!=Hs.size()||Hdata.size()!=Hb.size()){
    cout<<"likelihoodLimit() Error: Hb.size()!=Hs.size() || Hdata.size()!=Hb.size()"<<endl;
    return 0.;
  }
  
  int Nstep=100;
  float step=maxCrossection/Nstep;
  
  double LTotal=0.;
  std::vector<double> LH;
  for(int i=0;i<=Nstep;i++){
    double L= likelihood(Hb,Hs,Hdata,step*i);
    LTotal += L;
    LH.push_back(L);//cache the likelihood
  }  

  double LIntegral=0.;
  for(int i=0;i<=Nstep;i++){
    LIntegral += LH[i];
    //cout<<i<<" "<<step<<" "<<LH[i]<<" "<<LIntegral<<" "<<LTotal<<endl;
    if(LIntegral>0.90*LTotal) return step*i;//  90% CL
  }
  
  return 0.;
}
