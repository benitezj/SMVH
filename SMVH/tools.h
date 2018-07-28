#ifndef SMVHTOOLS
#define SMVHTOOLS

#include <stddef.h>
#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

#include <iostream>
#include <vector>
#include <string.h>
#include <TString.h>
#include <TH1.h>

using namespace std;

//Cannot create a namespace because CINT cannot deal with it
//Functions will not be loaded into ROOT
//namespace SMVH{
//}

std::vector<string> split(const string &text, char sep);
std::string findMatchInDir(const char* dirpath, const char* match);
std::vector<std::string> findSamplesInDir(const char* dirpath, const char* match);
float getSampleValue(TString file, int run);
float getSampleValueFromCSV(TString file, int run, unsigned int position=1);
int determineRunNumber(TString sampleName);
TString determineDataSetId(TString sampleName);
double * getExpectedSignificance(TH1 *hBkg, TH1 *hSig, int method=0);

double factorial(int n);
float estimateLimit(float b);//returns upper limit on number of signal events
float likelihoodLimit(std::vector<TH1F*> Hb,std::vector<TH1F*> Hs,std::vector<TH1F*> Hdata,float maxCrossection);

double DeltaR(float eta1, float phi1, float eta2, float phi2);

#endif
