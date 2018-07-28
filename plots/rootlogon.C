
void setHttStyle(){
  TStyle * HttStyle = new TStyle("Htt-Style","The Perfect Style for Plots ;-)");

  // Canvas
  HttStyle->SetCanvasColor     (0);
  HttStyle->SetCanvasBorderSize(10);
  HttStyle->SetCanvasBorderMode(0);
  HttStyle->SetCanvasDefH      (700);
  HttStyle->SetCanvasDefW      (700);
  HttStyle->SetCanvasDefX      (100);
  HttStyle->SetCanvasDefY      (100);

  // color palette for 2D temperature plots
  HttStyle->SetPalette(1,0);
  
  // Pads
  HttStyle->SetPadColor       (0);
  HttStyle->SetPadBorderSize  (10);
  HttStyle->SetPadBorderMode  (0);
  HttStyle->SetPadBottomMargin(0.15);
  HttStyle->SetPadTopMargin   (0.08);
  HttStyle->SetPadLeftMargin  (0.20);
  //HttStyle->SetPadRightMargin (0.05);
  HttStyle->SetPadRightMargin (0.15);
  HttStyle->SetPadGridX       (0);
  HttStyle->SetPadGridY       (0);
  HttStyle->SetPadTickX       (1);
  HttStyle->SetPadTickY       (1);

  // Frames
  HttStyle->SetLineWidth(3);
  HttStyle->SetFrameFillStyle ( 0);
  HttStyle->SetFrameFillColor ( 0);
  HttStyle->SetFrameLineColor ( 1);
  HttStyle->SetFrameLineStyle ( 0);
  HttStyle->SetFrameLineWidth ( 2);
  HttStyle->SetFrameBorderSize(10);
  HttStyle->SetFrameBorderMode( 0);

//   // Histograms
//   HttStyle->SetHistFillColor(2);
//  HttStyle->SetHistFillStyle(0);
  HttStyle->SetHistLineColor(1);
  HttStyle->SetHistLineStyle(0);
  HttStyle->SetHistLineWidth(3);
  HttStyle->SetNdivisions(505);

  // Functions
  HttStyle->SetFuncColor(1);
  HttStyle->SetFuncStyle(0);
  HttStyle->SetFuncWidth(2);

  // Various
  HttStyle->SetMarkerStyle(20);
  HttStyle->SetMarkerColor(kBlack);
  HttStyle->SetMarkerSize (1.4);

  HttStyle->SetTitleBorderSize(0);
  HttStyle->SetTitleFillColor (0);
  HttStyle->SetTitleX         (0.2);

  HttStyle->SetTitleSize  (0.055,"X");
  HttStyle->SetTitleOffset(1.200,"X");
  HttStyle->SetLabelOffset(0.005,"X");
  HttStyle->SetLabelSize  (0.050,"X");
  HttStyle->SetLabelFont  (42   ,"X");

  HttStyle->SetStripDecimals(kFALSE);
  HttStyle->SetLineStyleString(11,"20 10");

  HttStyle->SetTitleSize  (0.055,"Y");
  HttStyle->SetTitleOffset(1.600,"Y");
  HttStyle->SetLabelOffset(0.010,"Y");
  HttStyle->SetLabelSize  (0.050,"Y");
  HttStyle->SetLabelFont  (42   ,"Y");

  HttStyle->SetTextSize   (0.055);
  HttStyle->SetTextFont   (42);

  HttStyle->SetStatFont   (42);
  HttStyle->SetTitleFont  (42);
  HttStyle->SetTitleFont  (42,"X");
  HttStyle->SetTitleFont  (42,"Y");

  HttStyle->SetOptStat    (0);

  gROOT->SetStyle("Htt-Style");

}

void rootlogon(){
  
  setHttStyle();

}
