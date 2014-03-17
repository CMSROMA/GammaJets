#include "TGraphErrors.h"
#include "TCanvas.h"
#include "TFile.h"
#include "TH2D.h"
#include "TLegend.h"
#include "TStyle.h"
#include <iostream>

void plotsEff() {

  // hardcoded: efficiency on data, mva 005 - no R9 weights
  Float_t dataEffPtEB_noR9[3];
  dataEffPtEB_noR9[0] = 0.671203;
  dataEffPtEB_noR9[1] = 0.712225;
  dataEffPtEB_noR9[2] = 0.779166;

  Float_t dataErrPtEB_noR9[3];
  dataErrPtEB_noR9[0] = 0.000593589;
  dataErrPtEB_noR9[1] = 0.00139562;
  dataErrPtEB_noR9[2] = 0.00259561;
  
  Float_t dataEffPtEE_noR9[3];
  dataEffPtEE_noR9[0] = 0.537583;
  dataEffPtEE_noR9[1] = 0.597507;
  dataEffPtEE_noR9[2] = 0.73674;

  Float_t dataErrPtEE_noR9[3];
  dataErrPtEE_noR9[0] = 0.0000234;
  dataErrPtEE_noR9[1] = 0.0023899;
  dataErrPtEE_noR9[2] = 0.0047549;


  // hardcoded: efficiency on data, mva 005 - with R9 weights
  Float_t dataEffPtEB_withR9[3];
  dataEffPtEB_withR9[0] = 0.804925;
  dataEffPtEB_withR9[1] = 0.836127;
  dataEffPtEB_withR9[2] = 0.890458;

  Float_t dataErrPtEB_withR9[3];
  dataErrPtEB_withR9[0] = 0.0001599;
  dataErrPtEB_withR9[1] = 0.0003854;
  dataErrPtEB_withR9[2] = 0.0011849;
  
  Float_t dataEffPtEE_withR9[3];
  dataEffPtEE_withR9[0] = 0.721732;
  dataEffPtEE_withR9[1] = 0.773054;
  dataEffPtEE_withR9[2] = 0.859369;

  Float_t dataErrPtEE_withR9[3];
  dataErrPtEE_withR9[0] = 0.000381;
  dataErrPtEE_withR9[1] = 0.001309;
  dataErrPtEE_withR9[2] = 0.002285;


  // hardcoded: efficiency on mc, mva 005  - no R9weights
  Float_t mcEffPtEB_noR9[3];
  mcEffPtEB_noR9[0] = 0.700561;
  mcEffPtEB_noR9[1] = 0.74049;
  mcEffPtEB_noR9[2] = 0.816703;

  Float_t mcErrPtEB_noR9[3];
  mcErrPtEB_noR9[0] = 0.0004633;
  mcErrPtEB_noR9[1] = 0.0010107;
  mcErrPtEB_noR9[2] = 0.00231458;
  
  Float_t mcEffPtEE_noR9[3];
  mcEffPtEE_noR9[0] = 0.557706;
  mcEffPtEE_noR9[1] = 0.619868;
  mcEffPtEE_noR9[2] = 0.781187;

  Float_t mcErrPtEE_noR9[3];
  mcErrPtEE_noR9[0] = 0.000799;
  mcErrPtEE_noR9[1] = 0.001686;
  mcErrPtEE_noR9[2] = 0.003506;


  // hardcoded: efficiency on mc, mva 005  - with R9weights
  Float_t mcEffPtEB_withR9[3];
  mcEffPtEB_withR9[0] = 0.826119;
  mcEffPtEB_withR9[1] = 0.858034;
  mcEffPtEB_withR9[2] = 0.911685;

  Float_t mcErrPtEB_withR9[3];
  mcErrPtEB_withR9[0] = 0.0870652;
  mcErrPtEB_withR9[1] = 0.0005138;
  mcErrPtEB_withR9[2] = 0.0010309;
  
  Float_t mcEffPtEE_withR9[3];
  mcEffPtEE_withR9[0] = 0.744627;
  mcEffPtEE_withR9[1] = 0.791297;
  mcEffPtEE_withR9[2] = 0.899105;

  Float_t mcErrPtEE_withR9[3];
  mcErrPtEE_withR9[0] = 0.0004714;
  mcErrPtEE_withR9[1] = 0.0009149;
  mcErrPtEE_withR9[2] = 0.0015189;


  // -------------------------------------
  // histograms: 2D plots
  Float_t LowerEta[3];
  LowerEta[0]=0.0;
  LowerEta[1]=1.5;
  LowerEta[2]=2.5;

  Float_t LowerPt[4];
  LowerPt[0]=40.0;
  LowerPt[1]=50.0;
  LowerPt[2]=70.0;
  LowerPt[3]=200.0;

  TH2F *DataEffMap_noR9   = new TH2F( "DataEffMap_noR9",   "data efficiency map", 2, LowerEta, 3, LowerPt);
  TH2F *MCEffMap_noR9     = new TH2F( "MCEffMap_noR9",     "MC efficiency map",   2, LowerEta, 3, LowerPt);
  TH2F *DataEffMap_withR9 = new TH2F( "DataEffMap_withR9", "data efficiency map", 2, LowerEta, 3, LowerPt);
  TH2F *MCEffMap_withR9   = new TH2F( "MCEffMap_withR9",   "MC efficiency map",   2, LowerEta, 3, LowerPt);
  
  for (int jj=1; jj<4; jj++) {
    int theindex = jj-1;
    DataEffMap_noR9->SetBinContent(1,jj,dataEffPtEB_noR9[theindex]);
    DataEffMap_noR9->SetBinContent(2,jj,dataEffPtEE_noR9[theindex]);
    DataEffMap_noR9->SetBinError(1,jj,dataErrPtEB_noR9[theindex]);
    DataEffMap_noR9->SetBinError(2,jj,dataErrPtEE_noR9[theindex]);

    MCEffMap_noR9->SetBinContent(1,jj,mcEffPtEB_noR9[theindex]);
    MCEffMap_noR9->SetBinContent(2,jj,mcEffPtEE_noR9[theindex]);
    MCEffMap_noR9->SetBinError(1,jj,mcErrPtEB_noR9[theindex]);
    MCEffMap_noR9->SetBinError(2,jj,mcErrPtEE_noR9[theindex]);

    DataEffMap_withR9->SetBinContent(1,jj,dataEffPtEB_withR9[theindex]);
    DataEffMap_withR9->SetBinContent(2,jj,dataEffPtEE_withR9[theindex]);
    DataEffMap_withR9->SetBinError(1,jj,dataErrPtEB_withR9[theindex]);
    DataEffMap_withR9->SetBinError(2,jj,dataErrPtEE_withR9[theindex]);

    MCEffMap_withR9->SetBinContent(1,jj,mcEffPtEB_withR9[theindex]);
    MCEffMap_withR9->SetBinContent(2,jj,mcEffPtEE_withR9[theindex]);
    MCEffMap_withR9->SetBinError(1,jj,mcErrPtEB_withR9[theindex]);
    MCEffMap_withR9->SetBinError(2,jj,mcErrPtEE_withR9[theindex]);
  }

  DataEffMap_noR9->SetTitle("data");
  DataEffMap_noR9->GetXaxis()->SetTitle("probe #eta");
  DataEffMap_noR9->GetYaxis()->SetTitle("probe pT [GeV]");

  DataEffMap_withR9->SetTitle("data");
  DataEffMap_withR9->GetXaxis()->SetTitle("probe #eta");
  DataEffMap_withR9->GetYaxis()->SetTitle("probe pT [GeV]");

  MCEffMap_noR9->SetTitle("MC");
  MCEffMap_noR9->GetXaxis()->SetTitle("probe #eta");
  MCEffMap_noR9->GetYaxis()->SetTitle("probe pT [GeV]");

  MCEffMap_withR9->SetTitle("MC");
  MCEffMap_withR9->GetXaxis()->SetTitle("probe #eta");
  MCEffMap_withR9->GetYaxis()->SetTitle("probe pT [GeV]");
  

  // -------------------------------------
  // data: eff vs pT - no R9
  TH1F *DataEffVsPt_barrel_noR9 = new TH1F( "DataEffVsPt_barrel_noR9" , "DataEffVsPt_barrel_noR9", 3, LowerPt);
  TH1F *DataEffVsPt_endcap_noR9 = new TH1F( "DataEffVsPt_endcap_noR9" , "DataEffVsPt_endcap_noR9", 3, LowerPt);
  for (int jj=1; jj<4; jj++) {
    int theindex = jj-1;
    DataEffVsPt_barrel_noR9->SetBinContent(jj,dataEffPtEB_noR9[theindex]);
    DataEffVsPt_barrel_noR9->SetBinError(jj,dataErrPtEB_noR9[theindex]);
    DataEffVsPt_endcap_noR9->SetBinContent(jj,dataEffPtEE_noR9[theindex]);
    DataEffVsPt_endcap_noR9->SetBinError(jj,dataErrPtEE_noR9[theindex]);
  }
  DataEffVsPt_barrel_noR9->SetMarkerColor(4);
  DataEffVsPt_barrel_noR9->SetLineColor(4);
  DataEffVsPt_barrel_noR9->SetMarkerStyle(20);
  DataEffVsPt_barrel_noR9->SetMarkerSize(0.9);
  DataEffVsPt_barrel_noR9->GetXaxis()->SetTitle("probe pT [GeV]");
  DataEffVsPt_barrel_noR9->SetTitle("photonID efficiency, without R9 weights");

  DataEffVsPt_endcap_noR9->SetLineColor(4);
  DataEffVsPt_endcap_noR9->SetMarkerColor(4);
  DataEffVsPt_endcap_noR9->SetMarkerStyle(20);
  DataEffVsPt_endcap_noR9->SetMarkerSize(0.9);
  DataEffVsPt_endcap_noR9->GetXaxis()->SetTitle("probe pT [GeV]");
  DataEffVsPt_endcap_noR9->SetTitle("photonID efficiency, without R9 weights");

  // -------------------------------------
  // data: eff vs pT - with R9
  TH1F *DataEffVsPt_barrel_withR9 = new TH1F( "DataEffVsPt_barrel_withR9" , "DataEffVsPt_barrel_withR9", 3, LowerPt);
  TH1F *DataEffVsPt_endcap_withR9 = new TH1F( "DataEffVsPt_endcap_withR9" , "DataEffVsPt_endcap_withR9", 3, LowerPt);
  for (int jj=1; jj<4; jj++) {
    int theindex = jj-1;
    DataEffVsPt_barrel_withR9->SetBinContent(jj,dataEffPtEB_withR9[theindex]);
    DataEffVsPt_barrel_withR9->SetBinError(jj,dataErrPtEB_withR9[theindex]);
    DataEffVsPt_endcap_withR9->SetBinContent(jj,dataEffPtEE_withR9[theindex]);
    DataEffVsPt_endcap_withR9->SetBinError(jj,dataErrPtEE_withR9[theindex]);
  }
  DataEffVsPt_barrel_withR9->SetMarkerColor(4);
  DataEffVsPt_barrel_withR9->SetLineColor(4);
  DataEffVsPt_barrel_withR9->SetMarkerStyle(20);
  DataEffVsPt_barrel_withR9->SetMarkerSize(0.9);
  DataEffVsPt_barrel_withR9->GetXaxis()->SetTitle("probe pT [GeV]");
  DataEffVsPt_barrel_withR9->SetTitle("photonID efficiency, with R9 weights");

  DataEffVsPt_endcap_withR9->SetLineColor(4);
  DataEffVsPt_endcap_withR9->SetMarkerColor(4);
  DataEffVsPt_endcap_withR9->SetMarkerStyle(20);
  DataEffVsPt_endcap_withR9->SetMarkerSize(0.9);
  DataEffVsPt_endcap_withR9->GetXaxis()->SetTitle("probe pT [GeV]");
  DataEffVsPt_endcap_withR9->SetTitle("photonID efficiency, with R9 weights");


  // ---------------------------------------
  // mc: eff vs pT - no R9
  TH1F *McEffVsPt_barrel_noR9 = new TH1F( "McEffVsPt_barrel_noR9" , "McEffVsPt_barrel_noR9", 3, LowerPt);
  TH1F *McEffVsPt_endcap_noR9 = new TH1F( "McEffVsPt_endcap_noR9" , "McEffVsPt_endcap_noR9", 3, LowerPt);
  for (int jj=1; jj<4; jj++) {
    int theindex = jj-1;
    McEffVsPt_barrel_noR9->SetBinContent(jj,mcEffPtEB_noR9[theindex]);
    McEffVsPt_barrel_noR9->SetBinError(jj,mcErrPtEB_noR9[theindex]);
    McEffVsPt_endcap_noR9->SetBinContent(jj,mcEffPtEE_noR9[theindex]);
    McEffVsPt_endcap_noR9->SetBinError(jj,mcErrPtEE_noR9[theindex]);
  }
  McEffVsPt_barrel_noR9->SetMarkerColor(2);
  McEffVsPt_barrel_noR9->SetLineColor(2);
  McEffVsPt_barrel_noR9->SetMarkerStyle(21);
  McEffVsPt_barrel_noR9->SetMarkerSize(0.9);
  McEffVsPt_barrel_noR9->SetTitle("photonID efficiency, without R9 weights");
  McEffVsPt_barrel_noR9->GetXaxis()->SetTitle("probe pT [GeV]");

  McEffVsPt_endcap_noR9->SetMarkerColor(2);
  McEffVsPt_endcap_noR9->SetLineColor(2);
  McEffVsPt_endcap_noR9->SetMarkerStyle(21);
  McEffVsPt_endcap_noR9->SetMarkerSize(0.9);
  McEffVsPt_endcap_noR9->SetTitle("photonID efficiency, without R9 weights");
  McEffVsPt_endcap_noR9->GetXaxis()->SetTitle("probe pT [GeV]");


  // ---------------------------------------
  // mc: eff vs pT - with R9
  TH1F *McEffVsPt_barrel_withR9 = new TH1F( "McEffVsPt_barrel_withR9" , "McEffVsPt_barrel_withR9", 3, LowerPt);
  TH1F *McEffVsPt_endcap_withR9 = new TH1F( "McEffVsPt_endcap_withR9" , "McEffVsPt_endcap_withR9", 3, LowerPt);
  for (int jj=1; jj<4; jj++) {
    int theindex = jj-1;
    McEffVsPt_barrel_withR9->SetBinContent(jj,mcEffPtEB_withR9[theindex]);
    McEffVsPt_barrel_withR9->SetBinError(jj,mcErrPtEB_withR9[theindex]);
    McEffVsPt_endcap_withR9->SetBinContent(jj,mcEffPtEE_withR9[theindex]);
    McEffVsPt_endcap_withR9->SetBinError(jj,mcErrPtEE_withR9[theindex]);
  }
  McEffVsPt_barrel_withR9->SetMarkerColor(2);
  McEffVsPt_barrel_withR9->SetLineColor(2);
  McEffVsPt_barrel_withR9->SetMarkerStyle(21);
  McEffVsPt_barrel_withR9->SetMarkerSize(0.9);
  McEffVsPt_barrel_withR9->SetTitle("photonID efficiency, with R9 weights");
  McEffVsPt_barrel_withR9->GetXaxis()->SetTitle("probe pT [GeV]");

  McEffVsPt_endcap_withR9->SetMarkerColor(2);
  McEffVsPt_endcap_withR9->SetLineColor(2);
  McEffVsPt_endcap_withR9->SetMarkerStyle(21);
  McEffVsPt_endcap_withR9->SetMarkerSize(0.9);
  McEffVsPt_endcap_withR9->SetTitle("photonID efficiency, with R9 weights");
  McEffVsPt_endcap_withR9->GetXaxis()->SetTitle("probe pT [GeV]");


  // plots
  gStyle->SetOptStat(0);

  TLegend *leg1;
  leg1 = new TLegend(0.4,0.4,0.65,0.65);
  leg1->SetFillStyle(0);
  leg1->SetBorderSize(0);
  leg1->SetTextSize(0.05);
  leg1->SetFillColor(0);
  leg1->AddEntry(DataEffVsPt_endcap_noR9, "data", "lp");
  leg1->AddEntry(McEffVsPt_endcap_noR9,   "MC",   "lp");

  TCanvas myC1("c1", "c1", 1);
  DataEffMap_noR9->Draw("colz");
  DataEffMap_noR9->Draw("textsame");
  myC1.SaveAs("dataMap_noR9.png");

  TCanvas myC11("c11", "c11", 1);
  DataEffMap_withR9->Draw("colz");
  DataEffMap_withR9->Draw("textsame");
  myC11.SaveAs("dataMap_withR9.png");

  TCanvas myC1b("c1b", "c1b", 1);
  MCEffMap_noR9->Draw("colz");
  MCEffMap_noR9->Draw("textsame");
  myC1b.SaveAs("mcMap_noR9.png");

  TCanvas myC11b("c11b", "c11b", 1);
  MCEffMap_withR9->Draw("colz");
  MCEffMap_withR9->Draw("textsame");
  myC11b.SaveAs("mcMap_withR9.png");

  TCanvas myC2("c2", "c2", 1);
  DataEffVsPt_barrel_noR9->SetMinimum(0.5);
  DataEffVsPt_barrel_noR9->SetMaximum(1.);
  DataEffVsPt_barrel_noR9->Draw();
  myC2.SaveAs("dataEffVsPt_barrel_noR9.png");

  TCanvas myC21("c21", "c21", 1);
  DataEffVsPt_barrel_withR9->SetMinimum(0.5);
  DataEffVsPt_barrel_withR9->SetMaximum(1.);
  DataEffVsPt_barrel_withR9->Draw();
  myC21.SaveAs("dataEffVsPt_barrel_withR9.png");

  TCanvas myC3("c3", "c3", 1);
  DataEffVsPt_endcap_noR9->SetMinimum(0.5);
  DataEffVsPt_endcap_noR9->SetMaximum(1.);
  DataEffVsPt_endcap_noR9->Draw();
  myC3.SaveAs("dataEffVsPt_endcap_noR9.png");

  TCanvas myC31("c31", "c31", 1);
  DataEffVsPt_endcap_withR9->SetMinimum(0.5);
  DataEffVsPt_endcap_withR9->SetMaximum(1.);
  DataEffVsPt_endcap_withR9->Draw();
  myC31.SaveAs("dataEffVsPt_endcap_withR9.png");

  TCanvas myC4("c4", "c4", 1);
  McEffVsPt_barrel_noR9->SetMinimum(0.5);
  McEffVsPt_barrel_noR9->SetMaximum(1.);
  McEffVsPt_barrel_noR9->Draw();
  myC4.SaveAs("mcEffVsPt_barrel_noR9.png");

  TCanvas myC41("c41", "c41", 1);
  McEffVsPt_barrel_withR9->SetMinimum(0.5);
  McEffVsPt_barrel_withR9->SetMaximum(1.);
  McEffVsPt_barrel_withR9->Draw();
  myC41.SaveAs("mcEffVsPt_barrel_withR9.png");

  TCanvas myC5("c5", "c5", 1);
  McEffVsPt_endcap_noR9->SetMinimum(0.5);
  McEffVsPt_endcap_noR9->SetMaximum(1.);
  McEffVsPt_endcap_noR9->Draw();
  myC5.SaveAs("mcEffVsPt_endcap_noR9.png");

  TCanvas myC51("c51", "c51", 1);
  McEffVsPt_endcap_withR9->SetMinimum(0.5);
  McEffVsPt_endcap_withR9->SetMaximum(1.);
  McEffVsPt_endcap_withR9->Draw();
  myC51.SaveAs("mcEffVsPt_endcap_withR9.png");

  TCanvas myC6("c6", "c6", 1);
  DataEffVsPt_barrel_noR9->Draw();
  McEffVsPt_barrel_noR9->Draw("same");
  leg1->Draw();
  myC6.SaveAs("compEffVsPt_barrel_noR9.png");

  TCanvas myC61("c61", "c61", 1);
  DataEffVsPt_barrel_withR9->Draw();
  McEffVsPt_barrel_withR9->Draw("same");
  leg1->Draw();
  myC61.SaveAs("compEffVsPt_barrel_withR9.png");

  TCanvas myC7("c7", "c7", 1);
  DataEffVsPt_endcap_noR9->Draw();
  McEffVsPt_endcap_noR9->Draw("same");
  leg1->Draw();
  myC7.SaveAs("compEffVsPt_endcap_noR9.png");

  TCanvas myC71("c71", "c71", 1);
  DataEffVsPt_endcap_withR9->Draw();
  McEffVsPt_endcap_withR9->Draw("same");
  leg1->Draw();
  myC71.SaveAs("compEffVsPt_endcap_withR9.png");
}




