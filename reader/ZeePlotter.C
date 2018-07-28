#include "../reader/ZeePlotter.h"

ClassImp(ZeePlotter)

ZeePlotter::ZeePlotter():
Plotter("","")
{
}

ZeePlotter::ZeePlotter(const char * name, const char * title):
  Plotter(name,title)
{
}

ZeePlotter::~ZeePlotter(){
}


// void ZeePlotter::plot(TString variable, Int_t nbins, Float_t xmin, Float_t xmax, TString sel,
// 		      TString xlabel, TString ylabel,Float_t* legendcoords, TString filetag){

//   plotvar_=variable;
//   nbins_=nbins;
//   xmin_=xmin;
//   xmax_=xmax;
//   selection_=TCut(sel.Data());
 
//   ////Total Data
//   TH1F* hData=getTotalData();
//   if(!hData){cout<<" Total Data not determined "<<endl; return;}
//   hData->SetName(TString("hData")+filetag);
 
//   THStack hMCStack("hBkgStack","BkgStack");//dont't set any of the regular histogram properties on the THStack will crash.
  
//   TH1F*hZee=getBackground("Zee");
//   if(hZee){
//     hZee->SetName(TString("Zee")+filetag);
//     hMCStack.Add(hZee,"hist");
//   }

//   TH1F*hWenu=getBackground("Wenu");
//   if(hWenu){
//     hWenu->SetName(TString("Wenu")+filetag);
//     hMCStack.Add(hWenu,"hist");
//   }

//   TH1F*htt=getBackground("ttbar");
//   if(htt){
//     htt->SetName(TString("ttbar")+filetag);
//     hMCStack.Add(htt,"hist");
//   }


//   makePlot(outputpath_+"/"+filetag,hData,&hMCStack,xlabel,ylabel,legendcoords);
// }

