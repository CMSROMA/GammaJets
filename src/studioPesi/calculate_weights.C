#include "TFile.h"
#include "TCanvas.h"
#include "TChain.h"
#include "TTree.h"
#include "TLegend.h"
#include "TH1F.h"
#include "TStyle.h"

#include "iostream"

using namespace std;

void calculate_weights(){

  // ---------------------------
  // to be changed
  int hltCut = 135;
  // ---------------------------


  gStyle->SetOptStat(0);

  // input: v6
  TChain mc("finalTree");
  if (hltCut==30) {
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT30/G_Pt*root");
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT30/QCDEM*root");
  } else if (hltCut==50) {
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT50/G_Pt*root");
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT50/QCDEM*root");
  } else if (hltCut==75) {
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT75/G_Pt*root");
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT75/QCDEM*root");
  } else if (hltCut==90) {
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT90/G_Pt*root");
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT90/QCDEM*root");
  } else if (hltCut==135) {
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT135/G_Pt*root");
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT135/QCDEM*root");
  } else if (hltCut==150) {
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT150/G_Pt*root");
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT150/QCDEM*root");
  } 

  // output
  std::string outputDir = "histo_v6/genIso/isoWeight/";
  TFile* outputFile = new TFile((outputDir+"isoWeights.root").c_str(), "RECREATE");
  outputFile->cd();

  // histos
  TH1F* combPfIsoFPR03Phot_notMatched_passMVA_EB    = new TH1F("combPfIsoFPR03Phot_notMatched_passMVA_EB"   , "", 60, -5., 15.);
  TH1F* combPfIsoFPR03Phot_notMatched_notPassMVA_EB = new TH1F("combPfIsoFPR03Phot_notMatched_notPassMVA_EB", "", 60, -5., 15.);
  TH1F* combPfIsoFPR03Phot_notMatched_passMVA_EE    = new TH1F("combPfIsoFPR03Phot_notMatched_passMVA_EE"   , "", 60, -5., 15.);
  TH1F* combPfIsoFPR03Phot_notMatched_notPassMVA_EE = new TH1F("combPfIsoFPR03Phot_notMatched_notPassMVA_EE", "", 60, -5., 15.);

  TH1F* combPfIsoFPR03Phot_matched_passMVA_EB    = new TH1F("combPfIsoFPR03Phot_matched_passMVA_EB"   , "", 60, -5., 15.);
  TH1F* combPfIsoFPR03Phot_matched_notPassMVA_EB = new TH1F("combPfIsoFPR03Phot_matched_notPassMVA_EB", "", 60, -5., 15.);
  TH1F* combPfIsoFPR03Phot_matched_passMVA_EE    = new TH1F("combPfIsoFPR03Phot_matched_passMVA_EE"   , "", 60, -5., 15.);
  TH1F* combPfIsoFPR03Phot_matched_notPassMVA_EE = new TH1F("combPfIsoFPR03Phot_matched_notPassMVA_EE", "", 60, -5., 15.);

  // errors
  combPfIsoFPR03Phot_notMatched_passMVA_EB    -> Sumw2();
  combPfIsoFPR03Phot_notMatched_notPassMVA_EB -> Sumw2();
  combPfIsoFPR03Phot_notMatched_passMVA_EE    -> Sumw2();
  combPfIsoFPR03Phot_notMatched_notPassMVA_EE -> Sumw2();

  combPfIsoFPR03Phot_matched_passMVA_EB    -> Sumw2();
  combPfIsoFPR03Phot_matched_notPassMVA_EB -> Sumw2();
  combPfIsoFPR03Phot_matched_passMVA_EE    -> Sumw2();
  combPfIsoFPR03Phot_matched_notPassMVA_EE -> Sumw2();
  
  // WP95
  std::string passMVA_EB, notPassMVA_EB, passMVA_EE, notPassMVA_EE;
  passMVA_EB    = "(weight>0 && weight<15000) && (TMath::Abs(etaPhot)<1.4442) && (mvaIdPhot<1. && mvaIdPhot>0.766479)";
  notPassMVA_EB = "(weight>0 && weight<15000) && (TMath::Abs(etaPhot)<1.4442) && (mvaIdPhot>-1. && mvaIdPhot<0.766479)";
  passMVA_EE    = "(weight>0 && weight<15000) && (TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5) && (mvaIdPhot<1. && mvaIdPhot>0.601807)";
  notPassMVA_EE = "(weight>0 && weight<15000) && (TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5) && (mvaIdPhot>-1. && mvaIdPhot<0.601807)";

  // ptcut 
  std::string pt;
  if (hltCut==30) {
    cout << "HLT cut = 30 ==> projecting 40-65" << endl;
    pt = "(ptPhot>40. && ptPhot<65.)"; 
  } else if (hltCut==50) {
    cout << "HLT cut = 50 ==> projecting 65-90" << endl;
    pt = "(ptPhot>65. && ptPhot<90.)"; 
  } else if (hltCut==75) {
    cout << "HLT cut = 75 ==> projecting 90-105" << endl;
    pt = "(ptPhot>90. && ptPhot<105.)"; 
  } else if (hltCut==90) {
    cout << "HLT cut = 90 ==> projecting 105-165" << endl;
    pt = "(ptPhot>105. && ptPhot<165.)"; 
  } else if (hltCut==135) {
    cout << "HLT cut = 135 ==> projecting 165-180" << endl;
    pt = "(ptPhot>165. && ptPhot<180.)"; 
  } else if (hltCut==150) {
    cout << "HLT cut = 150 ==> projecting >180" << endl;
    pt = "(ptPhot>180.)"; 
  }

  cout << "now projecting" << endl;
  mc.Project("combPfIsoFPR03Phot_matched_passMVA_EB",      "combinedPfIsoFPR03Phot",("((isMatchedPhot && iso03_gen<1.7175) && "+passMVA_EB+" && "+pt+")*weight").c_str());
  mc.Project("combPfIsoFPR03Phot_matched_notPassMVA_EB",   "combinedPfIsoFPR03Phot",("((isMatchedPhot && iso03_gen<1.7175) && "+notPassMVA_EB+" && "+pt+")*weight").c_str());
  mc.Project("combPfIsoFPR03Phot_matched_passMVA_EE",      "combinedPfIsoFPR03Phot",("((isMatchedPhot && iso03_gen<1.7175) && "+passMVA_EE+" && "+pt+")*weight").c_str());
  mc.Project("combPfIsoFPR03Phot_matched_notPassMVA_EE",   "combinedPfIsoFPR03Phot",("((isMatchedPhot && iso03_gen<1.7175) && "+notPassMVA_EE+" && "+pt+")*weight").c_str());
         
  mc.Project("combPfIsoFPR03Phot_notMatched_passMVA_EB",   "combinedPfIsoFPR03Phot",("(!(isMatchedPhot && iso03_gen<1.7175) && "+passMVA_EB+" && "+pt+")*weight").c_str());
  mc.Project("combPfIsoFPR03Phot_notMatched_notPassMVA_EB","combinedPfIsoFPR03Phot",("(!(isMatchedPhot && iso03_gen<1.7175) && "+notPassMVA_EB+" && "+pt+")*weight").c_str());
  mc.Project("combPfIsoFPR03Phot_notMatched_passMVA_EE",   "combinedPfIsoFPR03Phot",("(!(isMatchedPhot && iso03_gen<1.7175) && "+passMVA_EE+" && "+pt+")*weight").c_str());
  mc.Project("combPfIsoFPR03Phot_notMatched_notPassMVA_EE","combinedPfIsoFPR03Phot",("(!(isMatchedPhot && iso03_gen<1.7175) && "+notPassMVA_EE+" && "+pt+")*weight").c_str());
         
  cout << "done with the projections" << endl;

  // normalize histos
  float integral;
  integral = combPfIsoFPR03Phot_notMatched_passMVA_EB	->Integral();
  combPfIsoFPR03Phot_notMatched_passMVA_EB		->Scale(1./integral);
  integral = combPfIsoFPR03Phot_notMatched_notPassMVA_EB->Integral();
  combPfIsoFPR03Phot_notMatched_notPassMVA_EB		->Scale(1./integral);
  integral = combPfIsoFPR03Phot_notMatched_passMVA_EE	->Integral();
  combPfIsoFPR03Phot_notMatched_passMVA_EE		->Scale(1./integral);
  integral = combPfIsoFPR03Phot_notMatched_notPassMVA_EE->Integral();
  combPfIsoFPR03Phot_notMatched_notPassMVA_EE		->Scale(1./integral);

  integral = combPfIsoFPR03Phot_matched_passMVA_EB    ->Integral();
  combPfIsoFPR03Phot_matched_passMVA_EB		      ->Scale(1./integral);
  integral = combPfIsoFPR03Phot_matched_notPassMVA_EB ->Integral();
  combPfIsoFPR03Phot_matched_notPassMVA_EB	      ->Scale(1./integral);
  integral = combPfIsoFPR03Phot_matched_passMVA_EE    ->Integral();
  combPfIsoFPR03Phot_matched_passMVA_EE		      ->Scale(1./integral);
  integral = combPfIsoFPR03Phot_matched_notPassMVA_EE ->Integral();
  combPfIsoFPR03Phot_matched_notPassMVA_EE	      ->Scale(1./integral);

  // saving in the output file
  // combPfIsoFPR03Phot_notMatched_passMVA_EB	->Write();
  // combPfIsoFPR03Phot_notMatched_notPassMVA_EB	->Write();
  // combPfIsoFPR03Phot_notMatched_passMVA_EE	->Write();
  // combPfIsoFPR03Phot_notMatched_notPassMVA_EE	->Write();
  // combPfIsoFPR03Phot_matched_passMVA_EB    ->Write();
  // combPfIsoFPR03Phot_matched_notPassMVA_EB ->Write();
  // combPfIsoFPR03Phot_matched_passMVA_EE	   ->Write();
  // combPfIsoFPR03Phot_matched_notPassMVA_EE ->Write();

  cout << "done with first step. Moving to the weights" << endl;


  // now computing the weights
  TH1F* h_isoWeight_EB = (TH1F*)combPfIsoFPR03Phot_notMatched_passMVA_EB->Clone("h_isoWeight_EB");
  h_isoWeight_EB->Divide(combPfIsoFPR03Phot_notMatched_notPassMVA_EB);
  TH1F* h_isoWeight_EE = (TH1F*)combPfIsoFPR03Phot_notMatched_passMVA_EE->Clone("h_isoWeight_EE");
  h_isoWeight_EE->Divide(combPfIsoFPR03Phot_notMatched_notPassMVA_EE);

  // weights histos
  h_isoWeight_EB->GetXaxis()->SetTitle("combinedPfIsoFPR03");
  h_isoWeight_EE->GetXaxis()->SetTitle("combinedPfIsoFPR03");
  h_isoWeight_EB->GetYaxis()->SetTitle("weight");
  h_isoWeight_EE->GetYaxis()->SetTitle("weight");

  h_isoWeight_EB->SetMarkerSize(0.8);
  h_isoWeight_EE->SetMarkerSize(0.8);
  h_isoWeight_EB->SetMarkerSize(0.8);
  h_isoWeight_EE->SetMarkerSize(0.8);

  h_isoWeight_EB->SetLineWidth(1);
  h_isoWeight_EE->SetLineWidth(1);
  h_isoWeight_EB->SetLineWidth(1);
  h_isoWeight_EE->SetLineWidth(1);

  h_isoWeight_EB->GetYaxis()->SetRangeUser(-0.5,5.);
  h_isoWeight_EE->GetYaxis()->SetRangeUser(-0.5,5.);

  
  // plots
  TCanvas* c1 = new TCanvas("c1", "", 1);
  c1->cd();
  h_isoWeight_EB->Draw("PE1");
  c1->SaveAs((outputDir+"isoWeights_EB.png").c_str());
  c1->Clear();
  
  h_isoWeight_EE->Draw("PE1");
  c1->SaveAs((outputDir+"isoWeights_EE.png").c_str());
  c1->Clear();  

  h_isoWeight_EB->Write();
  h_isoWeight_EE->Write();


  // some basic checks
  combPfIsoFPR03Phot_notMatched_notPassMVA_EB->SetLineColor(6);
  combPfIsoFPR03Phot_notMatched_passMVA_EB->SetLineColor(3);
  TLegend* leg2=new TLegend(0.5,0.6,0.85, 0.8);
  leg2->SetBorderSize(0);
  leg2->SetFillColor(0);
  leg2->AddEntry(combPfIsoFPR03Phot_notMatched_notPassMVA_EB, "not matched, Bregion", "l");
  leg2->AddEntry(combPfIsoFPR03Phot_notMatched_passMVA_EB, "not matched, Sregion", "l");
  combPfIsoFPR03Phot_notMatched_passMVA_EB->DrawNormalized("hist");
  combPfIsoFPR03Phot_notMatched_notPassMVA_EB->DrawNormalized("histsame");
  leg2->Draw();
  c1->SaveAs((outputDir+"fotoniDiFondo_cheNONPassanoMVA_chePassanoMVA_EB.png").c_str());
  c1->Clear();


  combPfIsoFPR03Phot_notMatched_passMVA_EB->SetLineColor(4);
  combPfIsoFPR03Phot_matched_passMVA_EB->SetLineColor(2);
  TLegend* leg3=new TLegend(0.5,0.6,0.85, 0.8);
  leg3->SetBorderSize(0);
  leg3->SetFillColor(0);
  leg3->AddEntry(combPfIsoFPR03Phot_notMatched_passMVA_EB, "not matched, Sregion", "l");
  leg3->AddEntry(combPfIsoFPR03Phot_matched_passMVA_EB, "matched, Sregion", "l");
  combPfIsoFPR03Phot_matched_passMVA_EB->DrawNormalized("hist");
  combPfIsoFPR03Phot_notMatched_passMVA_EB->DrawNormalized("histsame");
  leg3->Draw();
  c1->SaveAs((outputDir+"fotoniDiSegnale_fotoniDiFondo_chePassanoMVA_EB.png").c_str());
  c1->Clear();

  combPfIsoFPR03Phot_notMatched_notPassMVA_EB->SetLineColor(4);
  combPfIsoFPR03Phot_matched_notPassMVA_EB->SetLineColor(2);
  TLegend* leg4=new TLegend(0.5,0.6,0.85, 0.8);
  leg4->SetBorderSize(0);
  leg4->SetFillColor(0);
  leg4->AddEntry(combPfIsoFPR03Phot_notMatched_notPassMVA_EB, "not matched, Bregion", "l");
  leg4->AddEntry(combPfIsoFPR03Phot_matched_notPassMVA_EB, "matched, Bregion", "l");
  combPfIsoFPR03Phot_matched_notPassMVA_EB->DrawNormalized("hist");
  combPfIsoFPR03Phot_notMatched_notPassMVA_EB->DrawNormalized("histsame");
  leg4->Draw();
  c1->SaveAs((outputDir+"fotoniDiSegnale_fotoniDiFondo_cheNonPassanoMVA_EB.png").c_str());
  c1->Clear();

  c1->Close();
  
  outputFile->Close();
}
