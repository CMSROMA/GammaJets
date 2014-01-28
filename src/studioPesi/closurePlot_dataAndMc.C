#include "TFile.h"
#include "TCanvas.h"
#include "TChain.h"
#include "TTree.h"
#include "TLegend.h"
#include "TH1F.h"
#include "TStyle.h"

#include "iostream"

void closurePlot_dataAndMc(){

  // mc 
  TChain mcChain("myTrees_withWeight");
  mcChain.Add("outputWithWeight__Gjet__HLT135.root");
  mcChain.Add("outputWithWeight__QCD__HLT135.root");

  // data
  TChain dataChain("myTrees_withWeight");
  dataChain.Add("outputWithWeight__data2012__HLT135.root");   


  // -----------------------------------------------------------------------------
  // only to check the closure: bkg MC in the bkg region
  TH1F* mc_combFPR03Phot_isNotMatched_notPassMVA_EB = new TH1F("mc_combFPR03Phot_isNotMatched_notPassMVA_EB", "", 60, -5., 15.);
  TH1F* mc_combFPR03Phot_isNotMatched_notPassMVA_EE = new TH1F("mc_combFPR03Phot_isNotMatched_notPassMVA_EE", "", 60, -5., 15.);

  // for the real analysis: bkg MC in the sgn region
  TH1F* mc_combFPR03Phot_isNotMatched_passMVA_EB = new TH1F("mc_combFPR03Phot_isNotMatched_passMVA_EB"   , "", 60, -5., 15.);
  TH1F* mc_combFPR03Phot_isNotMatched_passMVA_EE = new TH1F("mc_combFPR03Phot_isNotMatched_passMVA_EE"   , "", 60, -5., 15.);

  // for the real analysis: data in the bkg region
  TH1F* data_combFPR03Phot_notPassMVA_EB = new TH1F("data_combFPR03Phot_notPassMVA_EB", "", 60, -5., 15.);
  TH1F* data_combFPR03Phot_notPassMVA_EE = new TH1F("data_combFPR03Phot_notPassMVA_EE", "", 60, -5., 15.);


  // -----------------------------------------------------------------------------
  mc_combFPR03Phot_isNotMatched_passMVA_EB -> Sumw2();
  mc_combFPR03Phot_isNotMatched_passMVA_EE -> Sumw2();

  mc_combFPR03Phot_isNotMatched_notPassMVA_EB -> Sumw2();
  mc_combFPR03Phot_isNotMatched_notPassMVA_EE -> Sumw2();

  data_combFPR03Phot_notPassMVA_EB -> Sumw2();
  data_combFPR03Phot_notPassMVA_EE -> Sumw2();


  
  // -----------------------------------------------------------------------------
  cout << "start projecting" << endl;

  // only to check the closure: bkg MC in the bkg region
  mcChain.Project("mc_combFPR03Phot_isNotMatched_notPassMVA_EB", "combinedPfIsoFPR03Phot", "( (weight>0 && weight<15000) && !(isMatchedPhot && iso03_gen<1.7175) && (TMath::Abs(etaPhot)<1.4442) && (mvaIdPhot>-1. && mvaIdPhot<0.766479) )*weight*isoW_EB");   
  mcChain.Project("mc_combFPR03Phot_isNotMatched_notPassMVA_EE", "combinedPfIsoFPR03Phot", "( (weight>0 && weight<15000) && !(isMatchedPhot && iso03_gen<1.7175) && (TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5) && (mvaIdPhot>-1. && mvaIdPhot<0.601807) )*weight*isoW_EE");

  // for the real analysis: bkg MC in the sgn region
  mcChain.Project("mc_combFPR03Phot_isNotMatched_passMVA_EB", "combinedPfIsoFPR03Phot", "( (weight>0 && weight<15000) && !(isMatchedPhot && iso03_gen<1.7175) && (TMath::Abs(etaPhot)<1.4442) && (mvaIdPhot<1. && mvaIdPhot>0.766479) )*weight");
  mcChain.Project("mc_combFPR03Phot_isNotMatched_passMVA_EE", "combinedPfIsoFPR03Phot", "( (weight>0 && weight<15000) && !(isMatchedPhot && iso03_gen<1.7175) && (TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5) && (mvaIdPhot<1. && mvaIdPhot>0.601807) )*weight");

  // for the real analysis: data in the bkg region 
  dataChain.Project("data_combFPR03Phot_notPassMVA_EB", "combinedPfIsoFPR03Phot", "( (TMath::Abs(etaPhot)<1.4442) && (mvaIdPhot>-1. && mvaIdPhot<0.766479) )*isoW_EB");
  dataChain.Project("data_combFPR03Phot_notPassMVA_EE", "combinedPfIsoFPR03Phot", "( (TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5) && (mvaIdPhot>-1. && mvaIdPhot<0.601807) )*isoW_EE");

  cout << "done with projecting" << endl;


  // Now plotting: cosmetics
  mc_combFPR03Phot_isNotMatched_passMVA_EB -> SetFillColor(kGreen-9);
  mc_combFPR03Phot_isNotMatched_passMVA_EE -> SetFillColor(kGreen-9);

  mc_combFPR03Phot_isNotMatched_notPassMVA_EB -> SetMarkerStyle(20);
  mc_combFPR03Phot_isNotMatched_notPassMVA_EE -> SetMarkerStyle(20);
  mc_combFPR03Phot_isNotMatched_notPassMVA_EB -> SetMarkerColor(2);
  mc_combFPR03Phot_isNotMatched_notPassMVA_EE -> SetMarkerColor(2);
  mc_combFPR03Phot_isNotMatched_notPassMVA_EB -> SetMarkerSize(0.8);
  mc_combFPR03Phot_isNotMatched_notPassMVA_EE -> SetMarkerSize(0.8);

  data_combFPR03Phot_notPassMVA_EB -> SetMarkerStyle(20);
  data_combFPR03Phot_notPassMVA_EE -> SetMarkerStyle(20);
  data_combFPR03Phot_notPassMVA_EB -> SetMarkerSize(0.8);
  data_combFPR03Phot_notPassMVA_EE -> SetMarkerSize(0.8);

  // titles 
  mc_combFPR03Phot_isNotMatched_passMVA_EB -> GetXaxis()->SetTitle("combined PFiso FPR [GeV]");
  mc_combFPR03Phot_isNotMatched_passMVA_EE -> GetXaxis()->SetTitle("combined PFiso FPR [GeV]");
  //
  data_combFPR03Phot_notPassMVA_EB -> GetXaxis()->SetTitle("combined PFiso FPR [GeV]");
  data_combFPR03Phot_notPassMVA_EE -> GetXaxis()->SetTitle("combined PFiso FPR [GeV]");


  // plots
  TLegend* leg=new TLegend(0.5,0.6,0.85, 0.8);
  leg->SetBorderSize(0);
  leg->SetFillColor(0);
  leg->AddEntry(data_combFPR03Phot_notPassMVA_EB, "weighted data (in bkg region)", "p");
  leg->AddEntry(mc_combFPR03Phot_isNotMatched_passMVA_EB, "MC in signal region", "l");

  TCanvas* c1 = new TCanvas("c1", "closureData EB", 1);
  mc_combFPR03Phot_isNotMatched_passMVA_EB->DrawNormalized("hist");
  data_combFPR03Phot_notPassMVA_EB->DrawNormalized("samepE");
  c1->SaveAs("dataMC_closure_isoFPR_EB.png");

  TCanvas* c2 = new TCanvas("c2", "by def, EB", 1);
  mc_combFPR03Phot_isNotMatched_passMVA_EB->DrawNormalized("hist");
  mc_combFPR03Phot_isNotMatched_notPassMVA_EB->DrawNormalized("pEsame");
  c2->SaveAs("closure_isoFPR_EB.png");

  TCanvas* c11 = new TCanvas("c11", "closureData EE", 1);
  mc_combFPR03Phot_isNotMatched_passMVA_EE->DrawNormalized("hist");
  data_combFPR03Phot_notPassMVA_EE->DrawNormalized("samepE");
  c11->SaveAs("dataMC_closure_isoFPR_EE.png");

  TCanvas* c12 = new TCanvas("c12", "by def, EE", 1);
  mc_combFPR03Phot_isNotMatched_passMVA_EE->DrawNormalized("hist");
  mc_combFPR03Phot_isNotMatched_notPassMVA_EE->DrawNormalized("pEsame");
  c12->SaveAs("closure_isoFPR_EE.png");
}
