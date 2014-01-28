#define addWeightToTree_cxx
#include "addWeightToTree.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>

using namespace std;

void addWeightToTree::Loop()
{
  if (fChain == 0) return;
  
  // isolation weight files
  TFile* fileWeights  = TFile::Open("histo_v6/genIso/isoWeight/HLT135/isoWeights.root");
  
  // loading histos with weights
  TH1F* h1_isoW_EB = (TH1F*)fileWeights->Get("h_isoWeight_EB");
  TH1F* h1_isoW_EE = (TH1F*)fileWeights->Get("h_isoWeight_EE");
  
  // output tree, with modified weight
  TFile* outFile=TFile::Open("outputWithWeight.root","recreate");
  TTree* treeWithWeights= new TTree();
  treeWithWeights->SetName("myTrees_withWeight");
  createBranches(treeWithWeights);
  
  Long64_t nentries = fChain->GetEntriesFast();
  
  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    
    if(jentry%50000==0) cout<<jentry<<endl;
    
    // remove events not to be analyzed
    if (weight==0) continue;
    
    // computing the isolation weight according eta/pT of the photon
    float isWeb,       isWee;
    isWeb = h1_isoW_EB->GetBinContent(h1_isoW_EB->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isWee = h1_isoW_EE->GetBinContent(h1_isoW_EE->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    
    // saving in the tree
    bool isEB = true;
    if ( fabs(etaPhot)>1.4442 ) isEB = false;      
    
    if (isEB) {
      isoW_EB_t = isWeb;
    } else {
      isoW_EB_t = -1000.;
    }
    
    if (!isEB) {
      isoW_EE_t = isWee;
    } else {
      isoW_EE_t = -1000.;
    }

    treeWithWeights->Fill();
  }
  
  cout << "done with the loop. Ready to write" << endl;
  treeWithWeights->Write();
  cout << "done with the writing" << endl;
  outFile->Write();
  outFile->Close();
}
