#include "PlotMaker.h"
#include "Utils.h"
#include "setStyleAtlas.h"

#include <TSystem.h>
#include <TCanvas.h>
#include <TPad.h>
#include <TLatex.h>
#include <TLegend.h>
#include <TLine.h> 
#include <TColor.h>

#include <iostream>
#include <fstream>
#include <iomanip> 

PlotMaker::PlotMaker() {

  m_systTool = new SystTool();
  m_latexMaker = new LatexMaker();
}

PlotMaker::~PlotMaker() {

  delete m_systTool;
}

void PlotMaker::makePlots(Config &config) {

  setStyleAtlas();

  {
    // TStyle* myStyle = new TStyle();
    const Int_t NRGBs = 5;
    const Int_t NCont = 255;
    
    Double_t stops[NRGBs] = { 0.20, 0.40, 0.60, 0.80, 1.00 };
    Double_t red[NRGBs]   = { 0.95, 0.40, 0.50, 1.00, 0.00 };
    Double_t green[NRGBs] = { 0.95, 0.40, 0.90, 0.10, 0.00 };
    Double_t blue[NRGBs]  = { 0.95, 0.95, 0.20, 0.02, 0.00 };
    
    TColor::CreateGradientColorTable(NRGBs, stops, red, green, blue, NCont);
    gStyle->SetNumberContours(NCont);
    
    //myStyle->cd();
    
  }
  
  if(config.getOverwrite()) {
    gSystem->Exec(("rm -rf "+config.getOutputPath()).c_str());
  }
  gSystem->Exec(("mkdir -p "+config.getOutputPath()).c_str());
    
  std::map<std::string, std::vector<Sensitivity> > sensitivityPlots;

  for(int iCR=0; iCR<config.getNRegions(); iCR++) {

    Config::Region region = *(config.getRegion(iCR));

    bool doTables = true;

    if(config.getMake1DPlots()) {
      for(int iVar=0; iVar<config.getNVariables(); iVar++) {
	
	Config::Variable var = config.getVariable(iVar);
	
	std::vector<Config::BDTTransform> trafos;
	trafos.push_back(config.makeBDTTransformation(""));
	if(var.type == Config::BDTOutput) {
	  trafos = config.getBDTTransformations();
	}

	for(unsigned int iTrafo=0; iTrafo<trafos.size(); iTrafo++) {
	  Config::BDTTransform trafo = trafos[iTrafo];
	  Sensitivity s = makePlot(config, var, region, trafo, doTables);
	  
	  std::vector<std::string> channelNames = config.getSensitivityPlots(var.name, region.name, trafo.name);
	  for(unsigned int iChan=0; iChan<channelNames.size(); iChan++) {
	    
	    std::map<std::string, std::vector<Sensitivity> >::iterator spItr = sensitivityPlots.find(channelNames[iChan]);
	    if(spItr == sensitivityPlots.end()) {
	      std::vector<Sensitivity> channels;
	      channels.push_back(s);
	      sensitivityPlots.insert(std::make_pair(channelNames[iChan], channels));
	    }else{
	      spItr->second.push_back(s);
	    }
	  }
	}
      } 
    }
    
    if(config.getMake2DPlots()) {
      for(int iVar1=0; iVar1<config.getNVariables(); iVar1++) {
	Config::Variable var1 = config.getVariable(iVar1);
	for(int iVar2 = iVar1+1; iVar2<config.getNVariables(); iVar2++) {
	  Config::Variable var2 = config.getVariable(iVar2);
	  make2DPlot(config, var1, var2, region);
	}
      }
    }
  }

  std::ofstream ofile ((config.getOutputPath()+"/sensitivities.txt").c_str(), std::ios::out);
 
  for(std::map<std::string, std::vector<Sensitivity> >::iterator spItr = sensitivityPlots.begin();
      spItr!=sensitivityPlots.end(); spItr++) {

    std::string name = spItr->first;
    ofile << "Sensitivity calculation: " << name << std::endl;
    double sigmaStat[2] = {0};
    double sigmaNorm[2] = {0};
    double sigmaSyst[2] = {0};
    double DLLR[2] = {0};
    for(unsigned int iChan=0; iChan<spItr->second.size(); iChan++) {
      Sensitivity s = spItr->second[iChan];
      ofile << "  -> Contribution (" << s.region << ", " <<  s.var << ", " << s.trafo << "): " 
	    << "DLLR = " << s.DLLR[0] << " +/- " << s.DLLR[1] << " - "
	    << "stat = " << s.sigmaStat[0] << " +/- " << s.sigmaStat[1] 
	    << " - norm = " << s.sigmaNorm[0] << " +/- " << s.sigmaNorm[1]
	    << " - syst = " << s.sigmaSyst[0] << " +/- " << s.sigmaSyst[1]
	    << std::endl;
      sigmaStat[0] += s.sigmaStat[0] * s.sigmaStat[0];
      sigmaNorm[0] += s.sigmaNorm[0] * s.sigmaNorm[0];
      sigmaSyst[0] += s.sigmaSyst[0] * s.sigmaSyst[0];
      DLLR[0] += s.DLLR[0] * s.DLLR[0];
      sigmaStat[1] += s.sigmaStat[0] * s.sigmaStat[0] * s.sigmaStat[1] * s.sigmaStat[1];
      sigmaNorm[1] += s.sigmaNorm[0] * s.sigmaNorm[0] * s.sigmaNorm[1] * s.sigmaNorm[1];
      sigmaSyst[1] += s.sigmaSyst[0] * s.sigmaSyst[0] * s.sigmaSyst[1] * s.sigmaSyst[1];
      DLLR[1] += s.DLLR[0] * s.DLLR[0] * s.DLLR[1] * s.DLLR[1];
    }
    
    sigmaStat[0] = sqrt(sigmaStat[0]);
    sigmaNorm[0] = sqrt(sigmaNorm[0]);
    sigmaSyst[0] = sqrt(sigmaSyst[0]);
    DLLR[0] = sqrt(DLLR[0]);
    if(sigmaStat[0] > 0) sigmaStat[1] = sqrt(sigmaStat[1])/sigmaStat[0];
    if(sigmaNorm[0] > 0) sigmaNorm[1] = sqrt(sigmaNorm[1])/sigmaNorm[0];
    if(sigmaSyst[0] > 0) sigmaSyst[1] = sqrt(sigmaSyst[1])/sigmaSyst[0];
    if(DLLR[0] > 0) DLLR[1] = sqrt(DLLR[1])/DLLR[0];
    ofile << "  -> Combination: " 
	  << "DLLR = " << DLLR[0] << " +/- " << DLLR[1] << " - "
	  << "stat = " << sigmaStat[0] << " +/- " << sigmaStat[1]
	  << " - norm = " << sigmaNorm[0] << " +/- " << sigmaNorm[1]
	  << " - syst = " << sigmaSyst[0] << " +/- " << sigmaSyst[1]
	  << std::endl;
  }
  ofile.close();
  
  m_latexMaker->makeLatex(config.getOutputPath()+"/slides.tex");

}

PlotMaker::Sensitivity PlotMaker::makePlot(Config &config, 
					   Config::Variable varOrig,
					   Config::Region region,
					   Config::BDTTransform trafo,
					   bool &doTables) {


  // write yield .txt file for each plot in addition to region (taken from first variable added to that region)
  bool yieldForEveryPlot=true;

  Config::Variable var = varOrig;
  if(trafo.name != "") {
    var.xmin = -1;
    var.xmax = 1;
  }

  std::cout << "Making plot for " << var.name << " in " << region.name << std::endl;

  std::string cname = "C_"+region.name+"_"+var.name;
  if(trafo.name != "") {
    cname += "_"+trafo.name;
  }

  Histos h;

  if(!config.getOverwrite() && Utils::doesFileExist(config.getOutputPath()+"/"+cname+"_Log.eps")) {
    m_latexMaker->addFigure(cname, 
			    "Plots: "+region.slideTitle,
			    region.slideTitle,
			    region.title,
			    //var.title+" "+trafo.name+" ; "+region.slideTitle,
			    //var.title+" "+trafo.name+" ; "+region.title,
			    0);

    h.sensitivity.var = var.name;
    h.sensitivity.region = region.name;
    h.sensitivity.trafo = trafo.name;
    h.sensitivity.sigmaStat = 0;
    h.sensitivity.sigmaNorm = 0;
    h.sensitivity.sigmaSyst = 0;
    h.sensitivity.DLLR = 0;
    return h.sensitivity;
  }

  std::string fname;
  if(trafo.method == 0) {
    fname = config.getInputFileFullName(trafo.name);
  }else{
    fname = config.getInputFileFullName("");
  }
  m_file = TFile::Open(fname.c_str(), "read");
  if(!m_file || m_file->IsZombie()) {
    std::cout << "Error: could not open file " << fname << std::endl;
    return h.sensitivity;
  }

  h = readHistos(config, var, region, trafo);

  m_file->Clear();
  m_file->Close();
  delete m_file;

  if(!h.isValid) {
    return h.sensitivity;
  }

  if(doTables) {
    makeSysTable(config, h, region);
    makeYieldTable(config, h, region, false);
    doTables = false;
  }
  if (yieldForEveryPlot)
    makeYieldTable(config, h,region, true);

  Config::SystematicPlot sysPlot = config.getDetailedSystematicsPlots(var.name, trafo.name, region.name);
  if(!sysPlot.isDummy) {
    makeSystPlots(config, sysPlot, h, var, region, trafo);
  }

  TCanvas *C = new TCanvas(cname.c_str(), cname.c_str(), 950, 700);
  C->cd();

  TPad *P_1 = new TPad((cname+"_1").c_str(), (cname+"_1").c_str(), 0, 0, 0.75, 0.3);
  TPad *P_2 = new TPad((cname+"_2").c_str(), (cname+"_2").c_str(), 0, 0.3, 0.75, 1);
  TPad *P_3 = new TPad((cname+"_3").c_str(), (cname+"_3").c_str(), 0.75, 0, 1, 1);
  P_1->Draw();
  P_2->Draw();
  P_3->Draw();
  P_1->SetBottomMargin(0.3);
  P_1->SetTopMargin(0);
  P_1->SetRightMargin(0.08);
  P_2->SetTopMargin(0.05);
  P_2->SetBottomMargin(0.02);
  P_2->SetRightMargin(0.08);
  P_3->SetTopMargin(0);
  P_3->SetLeftMargin(0);
  P_3->SetBottomMargin(0);
  P_3->SetRightMargin(0);

  P_2->cd();

  // which stack histogram to draw - with/without signal
  THStack* hsbkg = (config.getNoSignalStack()) ? h.hs_bkgOnly : h.hs_bkg;

  hsbkg->SetMaximum(1.4 * ( hsbkg->GetMaximum() > h.h_data->GetMaximum() ? 
			       hsbkg->GetMaximum() : h.h_data->GetMaximum() ) );

  std::vector<TH1*> h_tmp_sigs;
  std::vector<TH1*> signals;
  if (config.getMultiSignal()) signals = h.h_signals;
  else signals.push_back(h.h_signal);
  
  for (TH1* sig : signals) {
    if (config.getNoSignalStack() && sig) {
      h_tmp_sigs.push_back((TH1*)sig->Clone());
      if (config.getScaleSignalToBackground()) {
	h_tmp_sigs.back()->Scale(h.h_bkg->Integral(0, h.h_bkg->GetNbinsX()+1)/h_tmp_sigs.back()->Integral(0, h_tmp_sigs.back()->GetNbinsX()+1));
      }
      if (h_tmp_sigs.back()->GetMaximum() > hsbkg->GetMaximum()) hsbkg->SetMaximum(1.4 * h_tmp_sigs.back()->GetMaximum());
    }
  }

  hsbkg->SetTitle("");
  TString drawOption = "hist";
  if(config.getNoStack()) drawOption += "nostack";
  hsbkg->Draw(drawOption);
  hsbkg->GetYaxis()->SetTitle("Events");
  hsbkg->GetYaxis()->SetTitleSize(0.05);
  hsbkg->GetYaxis()->SetTitleOffset(1.15);
  hsbkg->GetXaxis()->SetLabelSize(0.);
  hsbkg->GetYaxis()->SetLabelSize(0.04);
  hsbkg->GetXaxis()->SetRangeUser(var.xmin, var.xmax);
  h.h_data->SetMarkerStyle(20);
  h.h_data->SetLineWidth(2);
  h.h_data->Draw("epsames");

  // and draw the signal as non-stack if requested
  if (config.getNoSignalStack()) {
    for (TH1* h_tmp_sig : h_tmp_sigs) {
      if (!h_tmp_sig) continue;
      h_tmp_sig->SetFillStyle(0);
      h_tmp_sig->SetLineWidth(2);
      h_tmp_sig->Draw("same hist");   
    }
  }

  ATLAS_LABEL(0.19, 0.88, 1);
  myText(0.31, 0.88, 1, config.getAnalysisStatus().c_str());

  TLatex l_LS;
  l_LS.SetNDC();
  l_LS.SetTextSize(0.04);
  l_LS.SetTextColor(1);
  l_LS.DrawLatex(0.19, 0.81, TString::Format("#intLdt = %s fb^{-1}   #sqrt{s} = %s TeV",
					     config.getLuminosity().c_str(), config.getCME().c_str()));

  TLatex l_Ana;
  l_Ana.SetNDC();
  l_Ana.SetTextSize(0.04);
  l_Ana.SetTextColor(1);
  l_Ana.DrawLatex(0.19, 0.74, TString::Format("%s, %s", 
					      config.getAnalysisTitle().c_str(),
					      region.title.c_str()));

  TLegend *L_Chi2 = new TLegend(0.6, 0.7, 0.9, 0.93);
  L_Chi2->SetBorderSize(0);
  L_Chi2->SetFillColor(0);
  L_Chi2->SetFillStyle(0);
  L_Chi2->SetTextSize(0.04);
  L_Chi2->SetNColumns(3);
  L_Chi2->AddEntry("", " ", "");
  L_Chi2->AddEntry("", "#chi^{2}", "");
  L_Chi2->AddEntry("", "KS", "");
  L_Chi2->AddEntry("", "Stat", "");
  L_Chi2->AddEntry("", TString::Format("%.3g", Utils::getChi2(h.h_data, h.h_bkg, false)), "");
  L_Chi2->AddEntry("", TString::Format("%.3g", Utils::getKSProb(h.h_data, h.h_bkg)), "");
  L_Chi2->AddEntry("", "Syst", "");
  L_Chi2->AddEntry("", TString::Format("%.3g", Utils::getChi2(h.h_data, h.h_bkgWithSys, false)), "");
  L_Chi2->AddEntry("", TString::Format("%.3g", Utils::getKSProb(h.h_data, h.h_bkgWithSys)), "");
  L_Chi2->AddEntry("", "Shape", "");
  L_Chi2->AddEntry("", TString::Format("%.3g", Utils::getChi2(h.h_data, h.h_bkgWithShapeSys, false)), "");
  L_Chi2->AddEntry("", TString::Format("%.3g", Utils::getKSProb(h.h_data, h.h_bkgWithShapeSys)), "");
  //L_Chi2->Draw();

  P_1->cd();

  h.h_bkgSys->SetTitle("");
  h.h_bkgSys->GetYaxis()->SetRangeUser(-0.38, 0.38);
  h.h_bkgSys->GetYaxis()->SetTitle("(Data-Bkg)/Bkg");
  h.h_bkgSys->GetXaxis()->SetTitle(var.title.c_str());
  h.h_bkgSys->GetXaxis()->SetTitleSize(0.13);
  h.h_bkgSys->GetXaxis()->SetTitleOffset(0.95);
  h.h_bkgSys->GetXaxis()->SetLabelSize(0.1);
  h.h_bkgSys->GetYaxis()->SetTitleSize(0.12);
  h.h_bkgSys->GetYaxis()->SetTitleOffset(0.47);
  h.h_bkgSys->GetYaxis()->SetLabelSize(0.1);
  h.h_bkgSys->GetXaxis()->SetRangeUser(var.xmin, var.xmax);
  h.h_bkgSys->SetMarkerSize(0);
  h.h_bkgSys->SetLineColor(2);
  h.h_bkgSys->SetLineWidth(2);
  h.h_bkgSys->SetFillColor(0);
  h.h_bkgSys->SetFillStyle(0);
  h.h_bkgSys->Draw("phist");
  drawErrorBand(h.h_bkgSys);
  h.h_bkgShapeSys->SetMarkerSize(0);
  h.h_bkgShapeSys->SetLineColor(4);
  h.h_bkgShapeSys->SetLineWidth(2);
  h.h_bkgShapeSys->SetFillColor(0);
  h.h_bkgShapeSys->SetFillStyle(0);
  drawErrorBand(h.h_bkgShapeSys);
  h.h_bkgStat->SetMarkerSize(0);
  h.h_bkgStat->SetFillColor(kOrange + 6);
  h.h_bkgStat->SetLineColor(1);
  h.h_bkgStat->SetFillStyle(3001);
  h.h_bkgStat->Draw("e2sames");
  TLine *L_One = new TLine(var.xmin, 0, var.xmax, 0);
  L_One->SetLineWidth(2);
  L_One->SetLineColor(1);
  L_One->SetLineStyle(2);
  L_One->Draw();

  TH1 *h_ratio = Utils::getDataMCComparison(h.h_data, h.h_bkg);
  h_ratio->Draw("epsames");

  P_3->cd();

  std::map<std::string, bool> addedSample;
  std::string dataTitle = "";
  for(int iSample=0; iSample<config.getNSamples(); iSample++) {
    Config::Sample sample = config.getSample(iSample);
    addedSample[sample.title] = false;
    if(sample.type == Config::Data) dataTitle = sample.title;
  }

  TLegend *L = new TLegend(0.01, 0.317, 0.965, 0.965);
  L->SetFillColor(0);
  L->SetBorderSize(1);
  L->SetTextSize(0.08);
  L->AddEntry(h.h_data, dataTitle.c_str(), "lp");
  for(int iSample=config.getNSamples()-1; iSample>=0; iSample--) {
    Config::Sample sample = config.getSample(iSample);
    if(sample.type != Config::Signal) continue;
    if(!addedSample[sample.title]) {
      addedSample[sample.title] = true;
      TString legendOption = "f";
      if(config.getNoStack()||config.getNoSignalStack()) legendOption = "l";

      TString name = TString(sample.title.c_str());
      if (config.getScaleSignalToBackground() && h.h_signal) {
	name += " x ";
	name += Form("%.1f", h.h_bkg->Integral(0, h.h_bkg->GetNbinsX()+1)/h.h_signal->Integral(0, h.h_signal->GetNbinsX()+1));
      }
      L->AddEntry(h.hs_bkg->GetStack()->At(sample.stackIndex+config.getBkgCount()), name, legendOption);
    }
  }
  double I = h.h_bkg->Integral(0, h.h_bkg->GetNbinsX()+1);
  for(int iSample=config.getNSamples()-1; iSample>=0; iSample--) {
    Config::Sample sample = config.getSample(iSample);
    if(sample.type != Config::Background) continue;
    TH1 *h_this = (TH1*)h.hs_bkg->GetHists()->At(sample.stackIndex);
    double f = h_this->Integral(0, h_this->GetNbinsX()+0) / I;
    if(f < config.getLegendThreshold()) continue;
    if(!addedSample[sample.title]) {
      addedSample[sample.title] = true;
      TString legendOption = "f";
      if(config.getNoStack()) legendOption = "l";
      L->AddEntry(h.hs_bkg->GetStack()->At(sample.stackIndex), sample.title.c_str(), legendOption);
    }
  }
  L->Draw();

  L = new TLegend(0.01, 0.13, 0.965, 0.3);
  L->SetFillColor(0);
  L->SetBorderSize(1);
  L->SetTextSize(0.08);
  L->AddEntry(h_ratio, "(Data-Bkg)/Bkg", "lp");
  L->AddEntry(h.h_bkgStat, "Stat", "f");
  L->AddEntry(h.h_bkgShapeSys, "Stat+Shape", "f");
  L->AddEntry(h.h_bkgSys, "Stat+Sys", "f");
  L->Draw();

  C->SaveAs((config.getOutputPath()+"/"+cname+".png").c_str());
  C->SaveAs((config.getOutputPath()+"/"+cname+".eps").c_str());

  P_2->cd();
  P_2->SetLogy();
  h.hs_bkg->SetMaximum(1000 * ( h.hs_bkg->GetMaximum() > h.h_data->GetMaximum() ? 
			       h.hs_bkg->GetMaximum() : h.h_data->GetMaximum() ) );
  h.hs_bkg->SetMinimum(1e-5);

  C->Update();

  C->SaveAs((config.getOutputPath()+"/"+cname+"_Log.png").c_str());
  C->SaveAs((config.getOutputPath()+"/"+cname+"_Log.eps").c_str());

  m_latexMaker->addFigure(cname, 
			  "Plots: "+region.slideTitle,
			  region.slideTitle,
			  region.title,
			  //var.title+" "+trafo.name+" ; "+region.slideTitle,
			  //var.title+" "+trafo.name+" ; "+region.title,
			  0);

  return h.sensitivity;
}

void PlotMaker::make2DPlot(Config &config, Config::Variable var1, Config::Variable var2, Config::Region region) {

  std::cout << "Making 2D plot for " << var1.name << " vs. " << var2.name << " in " << region.name << std::endl;
  
  Histos h;

  std::string cname = "C_"+region.name+"_"+var1.name+"_"+var2.name;

  if(!config.getOverwrite()) {

    bool fileExists = false;
    if(Utils::doesFileExist(config.getOutputPath()+"/"+cname+".eps")) {
      fileExists = true;
    }else{
      cname = "C_"+region.name+"_"+var1.name+"_"+var2.name;
      if(Utils::doesFileExist(config.getOutputPath()+"/"+cname+".eps")) {
	fileExists = true;
      }
    }

    if(fileExists) {
      m_latexMaker->addFigure(cname, 
			      "Plots 2D: "+region.slideTitle,
			      var2.title+" vs. "+var1.title+" ; "+region.slideTitle,
			      var2.title+" vs. "+var1.title+" ; "+region.title,
			      2);
      return;
    }
  }

  std::string fname = config.getInputFileFullName("");

  m_file = TFile::Open(fname.c_str(), "read");
  if(!m_file || m_file->IsZombie()) {
    std::cout << "Error: could not open file " << fname << std::endl;
    return;
  }

  h = readHistos2D(config, var1, var2, region);

  m_file->Clear();
  m_file->Close();
  delete m_file;

  if(!h.isValid) {
    return;
  }

  cname = "C_"+region.name+"_"+h.varName;

  TCanvas *C = new TCanvas(cname.c_str(), cname.c_str(), 1300, 625);
  C->cd();

  TPad *P1 = new TPad((cname+"_p1").c_str(), (cname+"_p1").c_str(), 0.01, 0.01, 0.49, 0.99);
  TPad *P2 = new TPad((cname+"_p2").c_str(), (cname+"_p2").c_str(), 0.51, 0.51, 0.99, 0.99);
  TPad *P3 = new TPad((cname+"_p3").c_str(), (cname+"_p3").c_str(), 0.51, 0.01, 0.99, 0.49);
  P1->Draw();
  P2->Draw();
  P3->Draw();

  P1->SetRightMargin(0.2);
  P1->cd();
  h.h_bkg->GetXaxis()->SetTitle(var1.title.c_str());
  h.h_bkg->GetXaxis()->SetTitleSize(0.05);
  h.h_bkg->GetXaxis()->SetTitleOffset(1.15);
  h.h_bkg->GetXaxis()->SetLabelSize(0.04);
  h.h_bkg->GetXaxis()->SetRangeUser(var1.xmin, var1.xmax);
  h.h_bkg->GetYaxis()->SetTitle(var2.title.c_str());
  h.h_bkg->GetYaxis()->SetTitleSize(0.05);
  h.h_bkg->GetYaxis()->SetTitleOffset(1.15);
  h.h_bkg->GetYaxis()->SetLabelSize(0.04);
  h.h_bkg->GetYaxis()->SetRangeUser(var2.xmin, var2.xmax);
  h.h_bkg->GetZaxis()->SetTitleSize(0.05);
  h.h_bkg->GetZaxis()->SetTitleOffset(1.15);
  h.h_bkg->GetZaxis()->SetLabelSize(0.04);
  h.h_bkg->GetZaxis()->SetTitle("Events");
  h.h_bkg->SetLineColor(2);
  h.h_bkg->Draw("colz");
  h.h_data->SetLineColor(1);
  h.h_data->Draw("boxsames");

  ATLAS_LABEL(0.19, 0.88, 1);
  myText(0.35, 0.88, 1, config.getAnalysisStatus().c_str());

  TLatex l_LS;
  l_LS.SetNDC();
  l_LS.SetTextSize(0.04);
  l_LS.SetTextColor(1);
  l_LS.DrawLatex(0.19, 0.81, TString::Format("#sqrt{s} = %s TeV  #intLdt = %s fb^{-1}", config.getCME().c_str(),
					     config.getLuminosity().c_str()));
  TLatex l_Ana;
  l_Ana.SetNDC();
  l_Ana.SetTextSize(0.035);
  l_Ana.SetTextColor(1);
  l_Ana.DrawLatex(0.19, 0.74, TString::Format("#bf{%s, %s}", 
					      config.getAnalysisTitle().c_str(),
					      region.title.c_str()));


  P2->cd();
  Utils::adjustMax(h.h_bkg_profileX_RMS, h.h_data_profileX_RMS, !h.isBlindedY, 1.4);
  h.h_bkg_profileX_RMS->GetXaxis()->SetTitle(var1.title.c_str());
  h.h_bkg_profileX_RMS->GetXaxis()->SetLabelSize(0.06);
  h.h_bkg_profileX_RMS->GetXaxis()->SetTitleSize(0.07);
  h.h_bkg_profileX_RMS->GetXaxis()->SetTitleOffset(0.85);
  h.h_bkg_profileX_RMS->GetYaxis()->SetTitle(var2.title.c_str());
  h.h_bkg_profileX_RMS->GetYaxis()->SetLabelSize(0.06);
  h.h_bkg_profileX_RMS->GetYaxis()->SetTitleSize(0.07);
  h.h_bkg_profileX_RMS->GetYaxis()->SetTitleOffset(1);
  h.h_bkg_profileX_RMS->SetLineColor(1);
  h.h_bkg_profileX_RMS->SetFillColor(kRed-7);
  h.h_bkg_profileX_RMS->SetLineWidth(2);
  h.h_bkg_profileX_RMS->SetLineStyle(3);
  h.h_bkg_profileX_RMS->SetMarkerStyle(1);
  h.h_bkg_profileX_RMS->DrawClone("e2p");
  h.h_bkg_profileX_RMS->SetLineColor(2);
  h.h_bkg_profileX_RMS->SetFillColor(0);
  h.h_bkg_profileX_RMS->SetLineStyle(1);
  h.h_bkg_profileX_RMS->DrawClone("histsames");
  h.h_bkg_profileX_stat->SetLineColor(2);
  h.h_bkg_profileX_stat->SetFillColor(0);
  h.h_bkg_profileX_stat->SetLineStyle(1);
  h.h_bkg_profileX_stat->SetLineWidth(2);
  h.h_bkg_profileX_stat->DrawClone("epsames");
  h.h_data_profileX_RMS->SetMarkerStyle(1);
  h.h_data_profileX_RMS->SetMarkerColor(1);
  h.h_data_profileX_RMS->SetLineColor(1);
  h.h_data_profileX_RMS->SetFillColor(1);
  h.h_data_profileX_RMS->SetFillStyle(3003);
  h.h_data_profileX_RMS->SetLineWidth(2);
  if(!h.isBlindedY) {
    h.h_data_profileX_RMS->DrawClone("e1psames");
  }
  h.h_data_profileX_stat->SetMarkerStyle(23);
  h.h_data_profileX_stat->SetMarkerColor(1);
  h.h_data_profileX_stat->SetLineColor(1);
  h.h_data_profileX_stat->SetFillColor(0);
  h.h_data_profileX_stat->SetLineWidth(2);
  if(!h.isBlindedY) {
    h.h_data_profileX_stat->DrawClone("e1psames");
  }

  ATLAS_LABEL(0.19, 0.88, 1);
  myText(0.27, 0.88, 1, config.getAnalysisStatus().c_str());

  l_LS.DrawLatex(0.19, 0.81, TString::Format("#intLdt = %s fb^{-1}   #sqrt{s} = %s TeV",
					     config.getLuminosity().c_str(), config.getCME().c_str()));

  l_Ana.DrawLatex(0.19, 0.74, TString::Format("#bf{%s, %s}", 
					      config.getAnalysisTitle().c_str(),
					      region.title.c_str()));

  TLegend *L = new TLegend(0.5,0.79,0.89,0.89);
  L->SetBorderSize(0);
  L->SetFillColor(0);
  L->SetTextSize(0.06);
  L->SetNColumns(3);

  L->AddEntry("", "MC: ", "");
  h.h_bkg_profileX_RMS->SetLineColor(2);
  L->AddEntry(h.h_bkg_profileX_RMS->Clone(), "mean", "l");
  h.h_bkg_profileX_RMS->SetLineColor(1);
  h.h_bkg_profileX_RMS->SetLineWidth(1);
  h.h_bkg_profileX_RMS->SetFillColor(kRed-7);
  L->AddEntry(h.h_bkg_profileX_RMS->Clone(), "RMS", "f");
  L->AddEntry("", "Data 2012: ", "");
  L->AddEntry(h.h_data_profileX_stat->Clone(), "mean", "p");
  h.h_data_profileX_RMS->SetLineWidth(1);
  L->AddEntry(h.h_data_profileX_RMS->Clone(), "RMS", "f");

  L->DrawClone();

  P3->cd();
  Utils::adjustMax(h.h_bkg_profileY_RMS, h.h_data_profileY_RMS, !h.isBlindedX, 1.4);
  h.h_bkg_profileY_RMS->GetXaxis()->SetTitle(var2.title.c_str());
  h.h_bkg_profileY_RMS->GetXaxis()->SetLabelSize(0.06);
  h.h_bkg_profileY_RMS->GetXaxis()->SetTitleSize(0.07);
  h.h_bkg_profileY_RMS->GetXaxis()->SetTitleOffset(0.85);
  h.h_bkg_profileY_RMS->GetYaxis()->SetTitle(var1.title.c_str());
  h.h_bkg_profileY_RMS->GetYaxis()->SetLabelSize(0.06);
  h.h_bkg_profileY_RMS->GetYaxis()->SetTitleSize(0.07);
  h.h_bkg_profileY_RMS->GetYaxis()->SetTitleOffset(1);
  h.h_bkg_profileY_RMS->SetLineColor(1);
  h.h_bkg_profileY_RMS->SetFillColor(kRed-7);
  h.h_bkg_profileY_RMS->SetLineWidth(2);
  h.h_bkg_profileY_RMS->SetLineStyle(3);
  h.h_bkg_profileY_RMS->SetMarkerStyle(1);
  h.h_bkg_profileY_RMS->DrawClone("e2p");
  h.h_bkg_profileY_RMS->SetLineColor(2);
  h.h_bkg_profileY_RMS->SetFillColor(0);
  h.h_bkg_profileY_RMS->SetLineStyle(1);
  h.h_bkg_profileY_RMS->Draw("histsames");
  h.h_bkg_profileY_stat->SetLineColor(2);
  h.h_bkg_profileY_stat->SetFillColor(0);
  h.h_bkg_profileY_stat->SetLineStyle(1);
  h.h_bkg_profileY_stat->SetLineWidth(2);
  h.h_bkg_profileY_stat->DrawClone("epsames");
  h.h_data_profileY_RMS->SetMarkerStyle(1);
  h.h_data_profileY_RMS->SetMarkerColor(1);
  h.h_data_profileY_RMS->SetLineColor(1);
  h.h_data_profileY_RMS->SetFillColor(1);
  h.h_data_profileY_RMS->SetFillStyle(3003);
  h.h_data_profileY_RMS->SetLineWidth(2);
  if(!h.isBlindedX) {
    h.h_data_profileY_RMS->Draw("e1psames");
  }
  h.h_data_profileY_stat->SetMarkerStyle(23);
  h.h_data_profileY_stat->SetMarkerColor(1);
  h.h_data_profileY_stat->SetLineColor(1);
  h.h_data_profileY_stat->SetFillColor(0);
  h.h_data_profileY_stat->SetLineWidth(2);
  if(!h.isBlindedX) {
    h.h_data_profileY_stat->Draw("e1psames");
  }

  ATLAS_LABEL(0.19, 0.88, 1);
  myText(0.27, 0.88, 1, config.getAnalysisStatus().c_str());

  l_LS.DrawLatex(0.19, 0.81, TString::Format("#intLdt = %s fb^{-1}   #sqrt{s} = %s TeV",
					     config.getLuminosity().c_str(), config.getCME().c_str()));

  l_Ana.DrawLatex(0.19, 0.74, TString::Format("#bf{%s, %s}", 
					      config.getAnalysisTitle().c_str(),
					      region.title.c_str()));

  L->DrawClone();

  C->Update();


  TCanvas *ctemp = new TCanvas((cname+"tmp1").c_str(), (cname+"tmp1").c_str(), 650, 625);
  ctemp->cd();
  TPad *ptemp = (TPad*)P1->Clone();
  ptemp->SetPad(0.01, 0.01, 0.99, 0.99);
  ptemp->Draw();
  ctemp->SaveAs((config.getOutputPath()+"/"+cname+"_pad1.png").c_str());
  ctemp->SaveAs((config.getOutputPath()+"/"+cname+"_pad1.eps").c_str());
  delete ptemp;
  delete ctemp;

  ctemp = new TCanvas((cname+"tmp2").c_str(), (cname+"tmp2").c_str(), 650, 312);
  ctemp->cd();
  ptemp = (TPad*)P2->Clone();
  ptemp->SetPad(0.01, 0.01, 0.99, 0.99);
  ptemp->Draw();
  ctemp->SaveAs((config.getOutputPath()+"/"+cname+"_pad2.png").c_str());
  ctemp->SaveAs((config.getOutputPath()+"/"+cname+"_pad2.eps").c_str());
  delete ptemp;
  delete ctemp;

  ctemp = new TCanvas((cname+"tmp3").c_str(), (cname+"tmp3").c_str(), 650, 312);
  ctemp->cd();
  ptemp = (TPad*)P3->Clone();
  ptemp->SetPad(0.01, 0.01, 0.99, 0.99);
  ptemp->Draw();
  ctemp->SaveAs((config.getOutputPath()+"/"+cname+"_pad3.png").c_str());
  ctemp->SaveAs((config.getOutputPath()+"/"+cname+"_pad3.eps").c_str());
  delete ptemp;
  delete ctemp;

  C->SaveAs((config.getOutputPath()+"/"+cname+".png").c_str());
  C->SaveAs((config.getOutputPath()+"/"+cname+".eps").c_str());

  m_latexMaker->addFigure(cname, 
			  "Plots 2D: "+region.slideTitle,
			  var2.title+" vs. "+var1.title+" ; "+region.slideTitle,
			  var2.title+" vs. "+var1.title+" ; "+region.title,
			  2);
}

void PlotMaker::makeSysTable(Config &config, Histos h, Config::Region region) {

  std::string fname = config.getOutputPath()+"/syst_"+region.name;
  std::ofstream ofile((fname+".txt").c_str(), std::ios::out);
  if(!ofile) {
    std::cout << "Error: could not open file: " << fname << ".txt for writing" << std::endl;
    return;
  }
  std::ofstream otex((fname+".tex").c_str(), std::ios::out);
  if(!otex) {
    std::cout << "Error: could not open file: " << fname << ".tex for writing" << std::endl;
    return;
  }

  int nCols = 2;
  std::string strCols = "";
  for(int i=0; i<nCols; i++) {
    if(i>0) strCols += "||";
    strCols += "c|c";
  }

  int nLines = (h.systHolders.size()/nCols) + 1;
  std::vector<std::string> lines;
  std::vector<int> lineColCounts;
  lines.resize(nLines);
  lineColCounts.resize(nLines);
  for(unsigned int iLine=0; iLine<lines.size(); iLine++) {
    lines[iLine] = "";
    lineColCounts[iLine] = 0;
  }

  otex << "\\footnotesize" << std::endl
       << "\\begin{table}[p]" << std::endl
       << "\\begin{center}" << std::endl
       << "\\begin{tabular}{" << strCols << "}" << std::endl
       << "\\hline \\hline" << std::endl;

  for(int i=0; i<nCols; i++) {
    if(i != 0) {
      otex << " & ";
    }
    otex << "Uncertainty & Up/Down";
  }
  otex << " \\\\" << std::endl
       << "\\hline \\hline" << std::endl;

  for(unsigned int iSys=0; iSys<h.systHolders.size(); iSys++) {

    SystTool::SystHolder systHolder = h.systHolders[iSys];

    double I = h.h_bkg->Integral(0, h.h_bkg->GetNbinsX()+1);
    double I_Up = systHolder.m_systUp->Integral(0, systHolder.m_systUp->GetNbinsX()+1);
    double I_Do = systHolder.m_systDo->Integral(0, systHolder.m_systDo->GetNbinsX()+1);

    std::string strValUp(TString::Format("%.3g", 100*(I_Up - I)/I).Data());
    std::string strValDo(TString::Format("%.3g", 100*(I_Do - I)/I).Data());

    if(iSys == 0) {
      ofile << "Nominal " << I << std::endl;
    }

    ofile << systHolder.name << "Up " << strValUp << std::endl
	  << systHolder.name << "Do " << strValDo << std::endl;

    int iLine = iSys % nLines;
    if((iSys / nLines) != 0) {
      lines[iLine] += " & ";
    }
    lines[iLine] += systHolder.name+" & "+strValDo+"/"+strValUp;
    lineColCounts[iLine]++;
  }

  for(unsigned int iLine=0; iLine<lines.size(); iLine++) {
    for(int i=lineColCounts[iLine]; i<nCols; i++) {
      if(i != 0) {
	lines[iLine] += " & ";
      }
      lines[iLine] += " & ";
    }
    lines[iLine] += " \\\\";

    otex << lines[iLine] << std::endl;
  }

  otex << "\\hline \\hline" << std::endl
       << "\\end{tabular}" << std::endl
       << "\\end{center}" << std::endl
       << "\\end{table}" << std::endl
       << "\\normalsize" << std::endl;

  ofile.close();
  otex.close();
}

void PlotMaker::makeYieldTable(Config &config, Histos h, Config::Region region,  bool yieldForEveryPlot) {


  std::string fname = config.getOutputPath()+"/yield_";
  if(yieldForEveryPlot) 
    fname+=region.name+"_"+h.varName;
  else
    fname+=region.name;
  

  std::ofstream ofile((fname+".txt").c_str(), std::ios::out);
  if(!ofile) {
    std::cout << "Error: could not open file: " << fname << ".txt for writing" << std::endl;
    return;
  }

  std::string dataTitle = "";
  std::string signalTitle = "";
  for(int iSample=0; iSample<config.getNSamples(); iSample++) {
    Config::Sample sample = config.getSample(iSample);
    if(sample.type == Config::Data) dataTitle = sample.name;
    if(sample.type == Config::Signal) signalTitle = sample.name;
  }

  std::vector<std::string> sampleNames;
  std::vector<double> yields;

  int nwid=14;
  ofile << setw(nwid) << "sampleName" << setw(nwid) << "entries" << setw(nwid) << "integral" << setw(nwid) << "error" << setw(nwid) << "error/integ."  << std::endl;

  for(int iSample=config.getNSamples()-1; iSample>=0; iSample--) {
    Config::Sample sample = config.getSample(iSample);
    if(sample.type != Config::Signal) continue;
    int stackIdx = sample.stackIndex+config.getBkgCount();
    // Get the histogram directly rather than the summed stack
    //    TH1 *h_sample = (TH1*)h.hs_bkg->GetStack()->At(stackIdx);
    TH1 *h_sample = (TH1*)h.hs_bkg->GetHists()->At(stackIdx);
    int N_sample = h_sample->GetEntries();
    double err = 0;
    double I_sample = h_sample -> IntegralAndError(0, h_sample->GetNbinsX()+1, err);
    double relErr = TMath::IsNaN(err/I_sample) ? 0.0 : err/I_sample;
    ofile << setw(nwid) << sample.name << setw(nwid) << N_sample << setw(nwid) << I_sample << setw(nwid) << err << setw(nwid) << relErr << std::endl;

    sampleNames.push_back(sample.name);
    yields.push_back(I_sample);
  }

  for(int iSample=config.getNSamples()-1; iSample>=0; iSample--) {
    Config::Sample sample = config.getSample(iSample);
    if(sample.type != Config::Background) continue;
    int stackIdx = sample.stackIndex;
    // Get the histogram directly rather than the summed stack
    //    TH1 *h_sample = (TH1*)h.hs_bkg->GetStack()->At(stackIdx);
    TH1 *h_sample = (TH1*)h.hs_bkg->GetHists()->At(stackIdx);
    int N_sample = h_sample->GetEntries();
    double err = 0;
    double I_sample = h_sample -> IntegralAndError(0, h_sample->GetNbinsX()+1, err);
    double relErr = TMath::IsNaN(err/I_sample) ? 0.0 : err/I_sample;
    ofile << setw(nwid) << sample.name << setw(nwid) << N_sample << setw(nwid) << I_sample << setw(nwid) << err << setw(nwid) << relErr << std::endl;

    sampleNames.push_back(sample.name);
    yields.push_back(I_sample);
  }

  ofile << "bkg: " << h.h_bkg->GetEntries() << " " << h.h_bkg->Integral(0, h.h_bkg->GetNbinsX()) << std::endl;
  ofile << dataTitle << " " << h.h_dataUnblinded->GetEntries() << " " << h.h_dataUnblinded->Integral(0, h.h_dataUnblinded->GetNbinsX()) << std::endl;

  sampleNames.push_back("background");
  yields.push_back(h.h_bkg->Integral(0, h.h_bkg->GetNbinsX()+1));

  sampleNames.push_back(dataTitle);
  yields.push_back(h.h_dataUnblinded->Integral(0, h.h_dataUnblinded->GetNbinsX()+1));

  ofile.close();

  m_latexMaker->addTableColumn("Yields", "Yields: "+region.slideTitle,
			       region.title, sampleNames, yields);

}

void PlotMaker::makeSystPlots(Config &config, Config::SystematicPlot &sysPlot, Histos h,
			      Config::Variable var, Config::Region region, Config::BDTTransform trafo) {
  
  std::cout << "  -> Making detailed systematics plots:" << std::endl;
  for(unsigned int iSys=0; iSys<h.systHolders.size(); iSys++) {
    
    SystTool::SystHolder syst = h.systHolders[iSys];
    std::cout << "     - " << syst.name << std::endl;
    
    if(!syst.isValid()) {
      continue;
    }
    
    TH1 *h_bkg = (TH1*)syst.m_nominal->Clone();
    TH1 *h_bkg_SysUp = (TH1*)syst.m_systUp->Clone();
    TH1 *h_bkg_SysDo = (TH1*)syst.m_systDo->Clone();
    
    double I_nominal = h_bkg->Integral(0, h_bkg->GetNbinsX()+1);
    double I_SysUp = h_bkg_SysUp->Integral(0, h_bkg_SysUp->GetNbinsX()+1);
    double I_SysDo = h_bkg_SysDo->Integral(0, h_bkg_SysDo->GetNbinsX()+1);
    
    double f_SysUp = 100 * (I_SysUp - I_nominal) / I_nominal;
    double f_SysDo = 100 * (I_SysDo - I_nominal) / I_nominal;
    
    h_bkg->SetLineColor(1);
    h_bkg->SetLineWidth(2);
    h_bkg->SetFillColor(0);

    h_bkg_SysUp->SetLineColor(4);
    h_bkg_SysUp->SetLineWidth(2);
    h_bkg_SysUp->SetFillColor(0);

    h_bkg_SysDo->SetLineColor(2);
    h_bkg_SysDo->SetLineWidth(2);
    h_bkg_SysDo->SetFillColor(0);

    std::string suffix = region.name+"_"+h.varName+"_"+syst.name;

    std::string cname = "C_"+suffix;
    TCanvas *C = new TCanvas(cname.c_str(), cname.c_str(), 850, 600);
    C->cd();
    TPad *P_1 = new TPad(("P_"+suffix+"_1").c_str(), ("P_"+suffix+"_1").c_str(), 0.01, 0.01, 0.99, 0.3);
    TPad *P_2 = new TPad(("P_"+suffix+"_2").c_str(), ("P_"+suffix+"_2").c_str(), 0.01, 0.3, 0.99, 0.99);
    P_2->Draw();
    P_1->Draw();
    P_1->SetBottomMargin(0.3);
    P_1->SetTopMargin(0.1);
    P_2->SetBottomMargin(0.005);

    P_2->cd();
    P_2->SetGrid();

    double max = h_bkg->GetMaximum();
    if(h_bkg_SysUp->GetMaximum() > max) max = h_bkg_SysUp->GetMaximum();
    if(h_bkg_SysDo->GetMaximum() > max) max = h_bkg_SysDo->GetMaximum();
    max *= 1.1;

    h_bkg->Draw("hist");
    h_bkg->GetYaxis()->SetTitle("Events");
    h_bkg->GetYaxis()->SetTitleSize(0.05);
    h_bkg->GetYaxis()->SetRangeUser(0, max);
    h_bkg->GetXaxis()->SetRangeUser(var.xmin, var.xmax);
    h_bkg_SysUp->Draw("histsame");
    h_bkg_SysDo->Draw("histsame");

    TLatex L_sysUp(0.7,0.85,TString::Format("Up: %.3g %%", f_SysUp ));
    L_sysUp.SetNDC();
    L_sysUp.SetTextColor(4);
    L_sysUp.DrawClone();
    
    TLatex L_sysDo(0.7,0.8,TString::Format("Dn: %.3g %%", f_SysDo ));
    L_sysDo.SetNDC();
    L_sysDo.SetTextColor(2);
    L_sysDo.DrawClone();
    
    TLatex L_status(0.7, 0.75, f_SysUp*f_SysDo < 0 ? "OK" : "Same Sign");
    L_status.SetNDC();
    L_status.SetTextColor(f_SysUp*f_SysDo < 0 ? 8 : 46);
    L_status.DrawClone();
    
    P_1->cd();
    P_1->SetGrid();
    TH1 *h_ratioUp = (TH1*)h_bkg_SysUp->Clone("h_ratioUp");
    h_ratioUp->Add(h_bkg, -1);
    h_ratioUp->Divide(h_bkg);
    h_ratioUp->Scale(100);
    TH1 *h_ratioDo = (TH1*)h_bkg_SysDo->Clone("h_ratioDo");
    h_ratioDo->Add(h_bkg, -1);
    h_ratioDo->Divide(h_bkg);
    h_ratioDo->Scale(100);
    
    max = (h_ratioUp->GetMaximum() > h_ratioDo->GetMaximum() ? h_ratioUp->GetMaximum() : h_ratioDo->GetMaximum() );
    max *= (max > 0 ? 1.1 : 0.9);
    double min = (h_ratioUp->GetMinimum() < h_ratioDo->GetMinimum() ? h_ratioUp->GetMinimum() : h_ratioDo->GetMinimum() );
    min *= (min < 0 ? 1.1 : 0.9);
    
    if(max > 20) max = 20;
    if(min < -20) min = -20;
    
    h_ratioUp->SetMaximum(max);
    h_ratioUp->SetMinimum(min);
    
    h_ratioUp->SetTitle("");
    h_ratioUp->Draw("hist");
    h_ratioUp->GetXaxis()->SetRangeUser(var.xmin, var.xmax);
    h_ratioUp->GetXaxis()->SetTitle(var.title.c_str());
    h_ratioUp->GetYaxis()->SetTitle("Variation (%)");
    h_ratioUp->GetXaxis()->SetTitleSize(0.13);
    h_ratioUp->GetYaxis()->SetTitleSize(0.13);
    h_ratioUp->GetYaxis()->SetTitleOffset(0.4);
    h_ratioUp->GetXaxis()->SetLabelSize(0.09);
    h_ratioUp->GetYaxis()->SetLabelSize(0.09);
    h_ratioDo->Draw("histsame");
    
    std::string relPath = "systs/"+region.name+"/"+h.varName;
    std::string outPath = config.getOutputPath()+"/"+relPath;
    gSystem->Exec(("mkdir -p "+outPath).c_str());
    
    C->SaveAs((outPath+"/"+cname+".eps").c_str());
    C->SaveAs((outPath+"/"+cname+".png").c_str());

    m_latexMaker->addFigure(relPath+"/"+cname, 
			    "Systematics",
			    sysPlot.slideTitle+" "+syst.name,
			    var.title+" "+trafo.name+" ; "+region.title,
			    1);
  }
}

PlotMaker::Histos PlotMaker::readHistos(Config &config, Config::Variable var, Config::Region region, Config::BDTTransform trafo) {

  Histos h;
  h.varName = var.name;
  if(trafo.name != "") h.varName += "_"+trafo.name;
  h.hs_bkg = 0;
  h.hs_bkgOnly = 0;
  h.h_bkg = 0;
  h.h_bkgWithSys = 0;
  h.h_bkgSys = 0;
  h.h_bkgWithShapeSys = 0;
  h.h_bkgShapeSys = 0;
  h.h_bkgStat = 0;
  h.h_data = 0;
  h.h_signal = 0;
  h.h_signalUnscaled = 0;
  h.h_signals.clear();
  h.isValid = false;

  std::string hsname = "hs_bkg_"+region.name+"_"+var.name;

  std::string dirName = config.getInputTDirectory();
  if(dirName != "") dirName += "/";

  TH1 *h_dummy = 0;

  h.hs_bkg = new THStack(hsname.c_str(), hsname.c_str());

  for(int iSample=0; iSample<config.getNSamples(); iSample++) {
    Config::Sample sample = config.getSample(iSample);

    TH1 *h_sample = 0;
    TH1 *h_sampleUnscaled = 0;
    for(unsigned int iSubRegion=0; iSubRegion<region.subRegions.size(); iSubRegion++) {
      Config::Region subRegion = *(region.subRegions[iSubRegion]);

      std::string hname = config.getHistoName(dirName, sample.name, subRegion.name, var.name, "Nominal");
      TH1 *h_subSample = Utils::readHist(m_file, hname.c_str(), false, var.xscale);
      
      if (sample.removeNeg && h_subSample) {
	for (int i(1); i < h_subSample->GetNbinsX()+1; i++) {
	  if (h_subSample->Integral(i,i) < 0) { 
	    h_subSample->SetBinContent(i, 0);
	    h_subSample->SetBinError(i, 0);
	  }
	}
      }

      if(h_subSample == 0) {
	if(h_dummy == 0) {
	  for(int jSample=0; jSample<config.getNSamples(); jSample++) {
	    for(unsigned int jSubRegion=0; jSubRegion<region.subRegions.size(); jSubRegion++) {
	      h_dummy = Utils::readHist(m_file, 
					config.getHistoName(dirName, 
							    config.getSample(jSample).name,
							    region.subRegions[jSubRegion]->name,
							    var.name,
							    "Nominal"
							    ).c_str(),
					false, var.xscale
					);
	      if(h_dummy != 0) break;
	    }
	    if(h_dummy != 0) break;
	  }
	  if(h_dummy == 0) {
	    std::cout << "Error: all histograms are missing..." << std::endl;
	    return h;
	  }
	  h_dummy->Reset();
	}
	h_subSample = (TH1*)h_dummy -> Clone();
      }
      if(h_dummy == 0) {
	h_dummy = (TH1*)h_subSample->Clone();
	h_dummy->Reset();
      }
      
      TH1* h_subSampleUnscaled=0; 
      if (sample.type==Config::Signal)
	h_subSampleUnscaled=(TH1*)h_subSample->Clone();

      if (!(config.getScaleSignalToBackground() && sample.type == Config::Signal)) {
	h_subSample->Scale(config.getScaleFactor(sample.name, subRegion.name));     
      }

      if(h_sample == 0) {
	h_sample = h_subSample;
	if (sample.type==Config::Signal)
	  h_sampleUnscaled = h_subSampleUnscaled;
      }else{
	h_sample->Add(h_subSample);
	delete h_subSample;

	if (sample.type==Config::Signal) {
	  h_sampleUnscaled->Add(h_subSampleUnscaled);
	  delete h_subSampleUnscaled;
	}
      }
    }

    if(trafo.name == "" || var.type == Config::BDTInput) {
      if (var.binning.size()) {
	h_sample = h_sample->Rebin(var.binning.size()-1, TString(h_sample->GetName()) + "_rebin", &var.binning[0]);
	if (var.divide_width) h_sample->Scale(1, "width");
      } else {
	h_sample->Rebin(var.ngroup);
      }
      if (sample.type==Config::Signal) {
	if (var.binning.size()) {
	  h_sampleUnscaled = h_sampleUnscaled->Rebin(var.binning.size()-1, TString(h_sampleUnscaled->GetName()) + "_rebin", &var.binning[0]);
	  if (var.divide_width) h_sampleUnscaled->Scale(1, "width");
	} else {
	  h_sampleUnscaled->Rebin(var.ngroup);
	}
      }
    }
    h_sample->SetMarkerColor(sample.lineColor);
    h_sample->SetLineColor(sample.lineColor);
    h_sample->SetFillColor(sample.fillColor);
    if(config.getNoStack()) {
      h_sample->SetFillColor(0);
      h_sample->SetLineWidth(2);
    }

    switch(sample.type) {
    case Config::Data:
      if(h.h_data == 0) {
	h.h_data = h_sample;
      }else{
	h.h_data->Add(h_sample);
	delete h_sample;
      }
      break;
    case Config::Signal:
      if(h.h_signal == 0) {
	h.h_signal = (TH1*)h_sample->Clone();
	h.h_signalUnscaled = (TH1*)h_sampleUnscaled->Clone();
      }else{
	h.h_signal->Add(h_sample);
	h.h_signalUnscaled->Add(h_sampleUnscaled);
      }
      h.h_signals.push_back(h_sample);
      break;
    case Config::Background:
      h.hs_bkg->Add(h_sample);

      break;
    default:
      break;
    }

  }

  if(h_dummy != 0) delete h_dummy;

  // background before adding signal
  h.h_bkg = (TH1*)h.hs_bkg->GetStack()->Last()->Clone();

  h.hs_bkgOnly = (THStack*)h.hs_bkg->Clone();


  for(unsigned int i=0; i<h.h_signals.size(); i++) {
    h.hs_bkg->Add(h.h_signals[i]);
  }

  h.systHolders = readSystHolders(config, h.h_bkg, var, region, trafo);

  if(trafo.method != 0) {

    // use unscaled signals for transformation
    TH1* signalhist=h.h_signalUnscaled;
    //  TH1* signalhist=h.h_signal;

    std::vector<int> bins = Utils::getRebinBins(h.h_bkg, signalhist, trafo.method, trafo.par1, trafo.par2);

    //    std::cout << " number of bins " << trafo.name << " " << h.h_bkg->GetName() << " " <<  bins.size() << std::endl;
    
    for(int iStack=0; iStack<h.hs_bkg->GetStack()->GetEntries();  iStack++) {
      Utils::rebinHisto((TH1*)h.hs_bkg->GetStack()->At(iStack), bins, var.equidist, var.relabel);
    }
    for(int iStack=0; iStack<h.hs_bkgOnly->GetStack()->GetEntries();  iStack++) {
      Utils::rebinHisto((TH1*)h.hs_bkgOnly->GetStack()->At(iStack), bins, var.equidist, var.relabel);
    }
    Utils::rebinHisto(h.h_bkg, bins, var.equidist, var.relabel);
    Utils::rebinHisto(h.h_data, bins, var.equidist, var.relabel);
    Utils::rebinHisto(h.h_signal, bins, var.equidist, var.relabel);
    Utils::rebinHisto(h.h_signalUnscaled, bins, var.equidist, var.relabel);
    // Try blinding for traf
    applyBlinding(config, h, var.name, region, trafo);

    for(unsigned int iSys=0; iSys<h.systHolders.size(); iSys++) {
      Utils::rebinHisto(h.systHolders[iSys].m_nominal, bins, var.equidist, var.relabel);
      Utils::rebinHisto(h.systHolders[iSys].m_systUp, bins, var.equidist, var.relabel);
      Utils::rebinHisto(h.systHolders[iSys].m_systDo, bins, var.equidist, var.relabel);
    }
  }
    
  TH1 **h_sys = m_systTool->getSymmetricShapeUncertainties(h.h_bkg, h.systHolders);
  h.h_bkgWithSys = h_sys[0];
  h.h_bkgWithShapeSys = h_sys[1];
  h.h_bkgShapeSys = Utils::getRelErrors(h.h_bkgWithShapeSys);
  h.h_bkgSys = Utils::getRelErrors(h.h_bkgWithSys);
  h.h_bkgStat = Utils::getRelErrors(h.h_bkg);

  h.h_dataUnblinded = (TH1*)h.h_data->Clone();
  applyBlinding(config, h, var.name, region, trafo);

  // Use unscaled signal for sensitivity by default
  // change here if you want to test effect of scaling signal 
  TH1* signalhist=h.h_signalUnscaled;
  //  TH1* signalhist=h.h_signal;

  h.sensitivity.var = var.name;
  h.sensitivity.region = region.name;
  h.sensitivity.trafo = trafo.name;
  h.sensitivity.sigmaStat = Utils::getExpectedSignificance(h.h_bkg, signalhist, Utils::Normal);
  h.sensitivity.sigmaNorm = Utils::getExpectedSignificance(h.h_bkg, signalhist, Utils::Normal, h.h_bkgWithSys, true);
  h.sensitivity.sigmaSyst = Utils::getExpectedSignificance(h.h_bkg, signalhist, Utils::Normal, h.h_bkgWithSys, false);
  h.sensitivity.DLLR      = Utils::getExpectedSignificance(h.h_bkg, signalhist, Utils::DeltaLLR);

  h.isValid = true;

  return h;
}

PlotMaker::Histos PlotMaker::readHistos2D(Config &config, Config::Variable &var1, Config::Variable &var2, Config::Region region) {

  Histos h;
  h.varName = var1.name+"_"+var2.name;
  h.hs_bkg = 0;
  h.h_bkg = 0;
  h.h_bkgWithSys = 0;
  h.h_bkgSys = 0;
  h.h_bkgWithShapeSys = 0;
  h.h_bkgShapeSys = 0;
  h.h_bkgStat = 0;
  h.h_data = 0;
  h.h_signal = 0;
  h.isValid = false;

  TH1 *h_dummy = 0;
  bool testFlipped = true;

  bool allowMissing = true;

  std::string dirName = config.getInputTDirectory();
  if(dirName != "") dirName += "/";
    
  for(int iSample=0; iSample<config.getNSamples(); iSample++) {

    Config::Sample sample = config.getSample(iSample);

    TH1 *h_sample = 0;

    for(unsigned int iSubRegion=0; iSubRegion<region.subRegions.size(); iSubRegion++) {

      Config::Region subRegion = *(region.subRegions[iSubRegion]);

      std::string hname = config.getHistoName(dirName, sample.name, subRegion.name, h.varName, "Nominal");
      TH1 *h_subSample = Utils::readHist(m_file, hname.c_str(), allowMissing, var1.xscale, var2.xscale);
      if(h_subSample == 0) {
	if(testFlipped) {
	  std::string varNameFlipped = var2.name+"_"+ var1.name;
	  std::string hnameFlipped = config.getHistoName(dirName, sample.name, subRegion.name, varNameFlipped, "Nominal");
	  h_subSample = Utils::readHist(m_file, hnameFlipped.c_str(), allowMissing, var2.xscale, var1.xscale);
	  if(h_subSample != 0) {
	    Config::Variable varTmp = var1;
	    var1 = var2;
	    var2 = varTmp;
	    h.varName = varNameFlipped;
	  }
	}
      }
      if(h_subSample != 0) {
	testFlipped = false;
      }

      if(h_subSample == 0) {
	if(h_dummy == 0) {
	  for(int jSample=0; jSample<config.getNSamples(); jSample++) {
	    for(unsigned int jSubRegion=0; jSubRegion<region.subRegions.size(); jSubRegion++) {
	      std::string hnameDummy = config.getHistoName(dirName, config.getSample(jSample).name, region.subRegions[jSubRegion]->name, h.varName, "Nominal");
	      h_dummy = Utils::readHist(m_file, hnameDummy.c_str(), allowMissing, var1.xscale, var2.xscale);
	      if(h_dummy == 0) {
		if(testFlipped) {
		  std::string varNameFlipped = var2.name+"_"+ var1.name;
		  std::string hnameFlipped = config.getHistoName(dirName, config.getSample(jSample).name, region.subRegions[jSubRegion]->name, varNameFlipped, "Nominal");
		  h_dummy = Utils::readHist(m_file, hnameFlipped.c_str(), allowMissing, var2.xscale, var1.xscale);
		  if(h_dummy != 0) {
		    Config::Variable varTmp = var1;
		    var1 = var2;
		    var2 = varTmp;
		    h.varName = varNameFlipped;
		  }
		}
	      }
	      if(h_dummy != 0) break;
	    }
	    if(h_dummy != 0) break;
	  }
	  if(h_dummy != 0) {
	    testFlipped = false;
	  }
	  if(h_dummy == 0) {
	    std::cout << "Error: all histograms are missing..." << std::endl;
	    return h;
	  }
	  h_dummy->Reset();
	}
	h_subSample = (TH1*)h_dummy -> Clone();
      }
      if(h_dummy == 0) {
	h_dummy = (TH1*)h_subSample->Clone();
	h_dummy->Reset();
      }

      h_subSample->Scale(config.getScaleFactor(sample.name, subRegion.name));

      if(h_sample == 0) {
	h_sample = h_subSample;
      }else{
	h_sample->Add(h_subSample);
	delete h_subSample;
      }
    }

    switch(sample.type) {
    case Config::Data:
      if(h.h_data == 0) {
	h.h_data = h_sample;
      }else{
	h.h_data->Add(h_sample);
	delete h_sample;
      }
      break;
    case Config::Signal:
      if(h.h_signal == 0) {
	h.h_signal = (TH1*)h_sample->Clone();
      }else{
	h.h_signal->Add(h_sample);
      }
      break;
    case Config::Background:
      if(h.h_bkg == 0) {
	h.h_bkg = (TH1*)h_sample->Clone();
      }else{
	h.h_bkg->Add(h_sample);
      }
      break;

    default:
      break;
    }
  }

  h.h_dataUnblinded = (TH1*)h.h_data->Clone();
  applyBlinding2D(config, h, var1.name, var2.name, region);

  Utils::getProfileX((TH2*)h.h_bkg, &h.h_bkg_profileX_RMS, &h.h_bkg_profileX_stat);
  Utils::getProfileY((TH2*)h.h_bkg, &h.h_bkg_profileY_RMS, &h.h_bkg_profileY_stat);

  Utils::getProfileX((TH2*)h.h_signal, &h.h_signal_profileX_RMS, &h.h_signal_profileX_stat);
  Utils::getProfileY((TH2*)h.h_signal, &h.h_signal_profileY_RMS, &h.h_signal_profileY_stat);

  Utils::getProfileX((TH2*)h.h_data, &h.h_data_profileX_RMS, &h.h_data_profileX_stat);
  Utils::getProfileY((TH2*)h.h_data, &h.h_data_profileY_RMS, &h.h_data_profileY_stat);

  h.isValid = true;

  return h;
}

std::vector<SystTool::SystHolder> PlotMaker::readSystHolders(Config &config,
							     TH1 *h_nominal,
							     Config::Variable var,
							     Config::Region region,
							     Config::BDTTransform trafo) {

  std::vector<SystTool::SystHolder> systHolders;

  std::string totBkgName = config.getTotalBackgroundName();

  std::string dirName = config.getInputTDirectory();
  if(dirName != "") dirName += "/";
  
  // new featue of all systematics in a single sub-directrory - read from config
  std::string sysdir=config.getSystematicDir();

  for(int iSys=0; iSys<config.getNSystematics(); iSys++) {

    Config::Systematic syst = config.getSystematic(iSys);
    std::string sysName = syst.name;

    // choose systematic directory
    std::string sysDirName(dirName);
    if (sysdir=="")
      sysDirName+=sysName; 
    else
      sysDirName+=sysdir; 

    SystTool::SystHolder systHolder;
    systHolder.name = sysName;
    systHolder.m_nominal = (TH1*)h_nominal->Clone();
    systHolder.m_systUp = 0;
    systHolder.m_systDo = 0;

    for(unsigned int iSubRegion=0; iSubRegion<region.subRegions.size(); iSubRegion++) {
      
      Config::Region subRegion = *(region.subRegions[iSubRegion]);

      TH1 *h_systUp = 0;
      TH1 *h_systDo = 0;
      
      std::string sysDirNameUp(sysDirName);
      std::string sysDirNameDown(sysDirName);
      // if you keep systematics in a separate rather than one directory
      if (sysdir=="") {
	sysDirNameUp+="__1up";
	sysDirNameDown+="__1down";
      }

      if(config.canUseTotalBackground()) {
	
	if(syst.isOneSided) {
	  
	  std::string hnameUp = config.getHistoName(sysDirName, totBkgName, subRegion.name, var.name, sysName);
	  
	  h_systUp = Utils::readHist(m_file, hnameUp.c_str(), false, var.xscale);

	}else{
	  std::string hnameUp = config.getHistoName(sysDirNameUp, totBkgName, subRegion.name, var.name, sysName+"__1up");
	  std::string hnameDo = config.getHistoName(sysDirNameDown, totBkgName, subRegion.name, var.name, sysName+"__1down");
	  
	  h_systUp = Utils::readHist(m_file, hnameUp.c_str(), false, var.xscale);
	  h_systDo = Utils::readHist(m_file, hnameDo.c_str(), false, var.xscale);
	}
      }else{
	
	for(int iSample=0; iSample<config.getNSamples(); iSample++) {
	  
	  Config::Sample sample = config.getSample(iSample);
	  
	  if(sample.type != Config::Background) continue;
	  
	  TH1 *h_sampleSystUp = 0;
	  TH1 *h_sampleSystDo = 0;
	  
	  if(syst.isOneSided) {
	    
	    std::string hnameUp = config.getHistoName(sysDirName, sample.name, subRegion.name, var.name, sysName);
	    
	    h_sampleSystUp = Utils::readHist(m_file, hnameUp.c_str(), true, var.xscale);
	    
	    if(h_sampleSystUp == 0) {
	      hnameUp = config.getHistoName(dirName, sample.name, subRegion.name, var.name, "Nominal");
	      h_sampleSystUp = Utils::readHist(m_file, hnameUp.c_str(), true, var.xscale);
	    }

	  }else{
	    
	    
	    std::string hnameUp = config.getHistoName(sysDirNameUp, sample.name, subRegion.name, var.name, sysName+"__1up");
	    std::string hnameDo = config.getHistoName(sysDirNameDown, sample.name, subRegion.name, var.name, sysName+"__1down");
	    
	    h_sampleSystUp = Utils::readHist(m_file, hnameUp.c_str(), true, var.xscale);
	    h_sampleSystDo = Utils::readHist(m_file, hnameDo.c_str(), true, var.xscale);

	    if(h_sampleSystUp == 0 || h_sampleSystDo == 0) {
	      hnameUp = config.getHistoName(dirName, sample.name, subRegion.name, var.name, "Nominal");
	      hnameDo = config.getHistoName(dirName, sample.name, subRegion.name, var.name, "Nominal");
	  
	      h_sampleSystUp = Utils::readHist(m_file, hnameUp.c_str(), true, var.xscale);
	      h_sampleSystDo = Utils::readHist(m_file, hnameDo.c_str(), true, var.xscale);
	    }
	  }

	  if(h_sampleSystUp) h_sampleSystUp->Scale(config.getScaleFactor(sample.name, subRegion.name));
	  if(h_sampleSystDo) h_sampleSystDo->Scale(config.getScaleFactor(sample.name, subRegion.name));

	  if(h_systUp == 0) {
	    h_systUp = h_sampleSystUp;
	  }else{
	    if(h_sampleSystUp) {
	      h_systUp->Add(h_sampleSystUp);
	      delete h_sampleSystUp;
	    }
	  }

	  if(h_systDo == 0) {
	    h_systDo = h_sampleSystDo;
	  }else{
	    if(h_sampleSystDo) {
	      h_systDo->Add(h_sampleSystDo);
	      delete h_sampleSystDo;
	    }
	  }
	}
      }

      if(systHolder.m_systUp == 0) {
	systHolder.m_systUp = h_systUp;
      }else{
	if(h_systUp) {
	  systHolder.m_systUp->Add(h_systUp);
	  delete h_systUp;
	}
      }
      
      if(systHolder.m_systDo == 0) {
	systHolder.m_systDo = h_systDo;
      }else{
	if(h_systDo) {
	  systHolder.m_systDo->Add(h_systDo);
	  delete h_systDo;
	}
      }
    }

    if(systHolder.m_systUp != 0) {

      if(trafo.name == "" || var.type == Config::BDTInput) {
	if (var.binning.size()) { 
	  systHolder.m_systUp = systHolder.m_systUp->Rebin(var.binning.size()-1, TString(systHolder.m_systUp->GetName()) + "_rebin", &var.binning[0]);
	  if (var.divide_width) systHolder.m_systUp->Scale(1, "width");
	} else { 
	  systHolder.m_systUp->Rebin(var.ngroup);
	}
      }

      if(syst.isOneSided) {
	if (var.binning.size()) {
	  systHolder.m_systDo = systHolder.m_systDo->Rebin(var.binning.size()-1, TString(systHolder.m_systDo->GetName()) + "_rebin", &var.binning[0]);
	  if (var.divide_width) systHolder.m_systDo->Scale(1, "width");
	} else { 
	  systHolder.m_systDo = Utils::getSymmetricVariation(h_nominal, systHolder.m_systUp);
	}
      }

      if(systHolder.m_systDo != 0) {
	
	if(!syst.isOneSided) {
	  if(trafo.name == "" || var.type == Config::BDTInput) {
	    if (var.binning.size()) {
	      systHolder.m_systDo = systHolder.m_systDo->Rebin(var.binning.size()-1, TString(systHolder.m_systDo->GetName()) + "_rebin", &var.binning[0]);
	      if (var.divide_width) systHolder.m_systDo->Scale(1, "width");
	    } else {
	      systHolder.m_systDo->Rebin(var.ngroup);
	    }
	  }
	}
      }
    }

    if(systHolder.m_systUp == 0) systHolder.m_systUp = (TH1*)h_nominal->Clone();
    if(systHolder.m_systDo == 0) systHolder.m_systDo = (TH1*)h_nominal->Clone();

    systHolders.push_back(systHolder);
  }

  return sortSystHolders(systHolders);
}

void PlotMaker::applyBlinding(Config &config, Histos  &h, std::string varName, Config::Region region, Config::BDTTransform trafo) {

  h.isBlindedX = false;
  h.isBlindedY = false;

  for(int iBlind=0; iBlind<config.getNBlindings(); iBlind++) {

    Config::Blinding blinding = config.getBlinding(iBlind);
    switch (blinding.type) {

    case Config::Threshold:
      if(blinding.threshold > 0 &&
	 blinding.threshold < 1) {
	applyThresholdBlinding(h, blinding.threshold);
      }
      break;

    case Config::Window:
      if(blinding.varName == varName &&
	 blinding.region == region.name &&
	 blinding.trafo == trafo.name &&
	 blinding.xmin < blinding.xmax ) {
	applyWindowBlinding(h, blinding.xmin, blinding.xmax);
      }
      break;
    default:
      break;
    }
  }
}

void PlotMaker::applyBlinding2D(Config &config, Histos  &h, std::string varName1, std::string varName2, Config::Region region) {

  h.isBlindedX = false;
  h.isBlindedY = false;

  for(int iBlind=0; iBlind<config.getNBlindings(); iBlind++) {

    Config::Blinding blinding = config.getBlinding(iBlind);
    switch (blinding.type) {

    case Config::Threshold:
      if(blinding.threshold > 0 &&
	 blinding.threshold < 1) {
	applyThresholdBlinding2D(h, blinding.threshold);
      }
      break;

    case Config::Window:
      if(blinding.region == region.name &&
	 blinding.trafo == "" &&
	 blinding.xmin < blinding.xmax ) {
	if(blinding.varName == varName1) { 
	  applyWindowBlinding2D(h, blinding.xmin, blinding.xmax, 0);
	}
	if(blinding.varName == varName2) { 
	  applyWindowBlinding2D(h, blinding.xmin, blinding.xmax, 1);
	}
      }
      break;
    default:
      break;
    }
  }
}

void PlotMaker::applyThresholdBlinding(Histos  &h, double threshold) {

  for(int bin=1; bin<=h.h_data->GetNbinsX(); bin++) {
    double B = h.h_bkg->GetBinContent(bin);
    // use unscaled signal for blinding
    double S = h.h_signalUnscaled->GetBinContent(bin);
 
    if(S+B == 0) continue;

    if( S / (S+B) > threshold ) {
      //      std::cout << " blinding data " <<  h.h_data->GetName() << " S "  << S << " " << B << " " << S/(S+B) << " " << threshold << std::endl;
      h.h_data->SetBinContent(bin, 0);
      h.h_data->SetBinError(bin, 0);
      h.isBlindedX = true;
    }
  }
}

void PlotMaker::applyWindowBlinding(Histos  &h, double xmin, double xmax) {

  int binMin = h.h_data->FindBin(xmin);
  int binMax = h.h_data->FindBin(xmax);

  for(int bin=binMin; bin<=binMax; bin++) {

    h.h_data->SetBinContent(bin, 0);
    h.h_data->SetBinError(bin, 0);
    h.isBlindedX = true;
  }
}

void PlotMaker::applyThresholdBlinding2D(Histos  &h,  double threshold) {

  TH1 *hx_bkg = ((TH2*)h.h_bkg)->ProjectionX();
  TH1 *hx_sig = ((TH2*)h.h_signal)->ProjectionX();

  TH1 *hy_bkg = ((TH2*)h.h_bkg)->ProjectionY();
  TH1 *hy_sig = ((TH2*)h.h_signal)->ProjectionY();

  for(int binx = 1; binx<=((TH2*)h.h_bkg)->GetNbinsX(); binx++) {

    double B = hx_bkg->GetBinContent(binx);
    double S = hx_sig->GetBinContent(binx);

    if(S+B == 0) continue;

    if(S / (S+B) > threshold) {
      for(int biny=1; biny<=((TH2*)h.h_bkg)->GetNbinsY(); biny++) {
	((TH2*)h.h_data)->SetBinContent(binx, biny, 0);
	((TH2*)h.h_data)->SetBinError(binx, biny, 0);
      }
      h.isBlindedX = true;
    }
  }

  for(int biny = 1; biny<=((TH2*)h.h_bkg)->GetNbinsY(); biny++) {

    double B = hy_bkg->GetBinContent(biny);
    double S = hy_sig->GetBinContent(biny);

    if(S+B == 0) continue;

    if(S / (S+B) > threshold) {
      for(int binx=1; binx<=((TH2*)h.h_bkg)->GetNbinsX(); binx++) {
	((TH2*)h.h_data)->SetBinContent(binx, biny, 0);
	((TH2*)h.h_data)->SetBinError(binx, biny, 0);
      }
      h.isBlindedY = true;
    }
  }
}

void PlotMaker::applyWindowBlinding2D(Histos  &h, double xmin, double xmax, int iAxis) {

  int binMin = 0;
  int binMax = 0;
  
  switch(iAxis) {

  case 0:
    binMin = h.h_data->GetXaxis()->FindBin(xmin);
    binMax = h.h_data->GetXaxis()->FindBin(xmax);

    for(int binx=binMin; binx<=binMax; binx++) {
      for(int biny=1; biny<=((TH2*)h.h_data)->GetNbinsY(); biny++) {

	h.h_data->SetBinContent(binx, biny, 0);
	h.h_data->SetBinError(binx, biny, 0);
	h.isBlindedX = true;
      }
    }
    break;
  case 1:
    binMin = h.h_data->GetYaxis()->FindBin(xmin);
    binMax = h.h_data->GetYaxis()->FindBin(xmax);

    for(int biny=binMin; biny<=binMax; biny++) {
      for(int binx=1; binx<=((TH2*)h.h_data)->GetNbinsX(); binx++) {

	h.h_data->SetBinContent(binx, biny, 0);
	h.h_data->SetBinError(binx, biny, 0);
	h.isBlindedY = true;
      }
    }
    break;
  default:
    std::cout << "Error in PlotMaker::applyWindowBlinding2D(): Unknown axis " << iAxis << std::endl;
    break;
  }

}

void PlotMaker::drawErrorBand(TH1 *h) {

  TH1 *h_Up = (TH1*)h->Clone();
  TH1 *h_Do = (TH1*)h->Clone();
  h_Up->Reset();
  h_Do->Reset();

  for(int bin=1; bin<=h->GetNbinsX(); bin++) {

    double content = h->GetBinContent(bin);
    double error = h->GetBinError(bin);

    h_Up->SetBinContent(bin, content+error);
    h_Do->SetBinContent(bin, content-error);
  }

  h_Up->Draw("same");
  h_Do->Draw("same");
}
