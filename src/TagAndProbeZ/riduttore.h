//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu May 30 13:56:37 2013 by ROOT version 5.32/00
// from TTree AnaTree/Reduced tree for final analysis
// found on file: /xrootdfs/cms/local/meridian/Higgs/reduced/redntp.53xv2_extra.tandp2012.paolo.v2/redntp_DYJetsToLL_M-50_TuneZ2Star_8TeV-madgraph-tarball_Summer12_DR53X-PU_S10_START53_V7A-v1_00.root
//////////////////////////////////////////////////////////

#ifndef riduttore_h
#define riduttore_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include <vector>

// Fixed size dimensions of array or collections stored in the TTree if any.

class riduttore {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Int_t           run;
   Int_t           event;
   Int_t           lumi;
   Int_t           isMC;
   Int_t           nvtx;
   Int_t           vtxId;
   Int_t           npu;
   Int_t           NtotEvents;
   Float_t         xsection;
   Float_t         EquivLumi;
   Int_t           SampleID;
   Float_t         pu_weight;
   Float_t         pu_weight30;
   Float_t         pu_weight50;
   Float_t         pu_weight75;
   Float_t         pu_weight90;
   Float_t         rhoAllJets;
   Float_t         rhoPF;
   Int_t           nEleMC;
   Int_t           idEleMC[50];   //[nEleMC]
   Int_t           pdgIdEleMC[50];   //[nEleMC]
   Int_t           statusEleMC[50];   //[nEleMC]
   Int_t           motherIDEleMC[50];   //[nEleMC]
   Float_t         ptEleMC[50];   //[nEleMC]
   Float_t         eEleMC[50];   //[nEleMC]
   Float_t         etaEleMC[50];   //[nEleMC]
   Float_t         phiEleMC[50];   //[nEleMC]
   Int_t           nPhot;
   Float_t         ptPhot[50];   //[nPhot]
   Int_t           isGenMatchPhot[50];   //[nPhot]
   Int_t           genMatchIndexPhot[50];   //[nPhot]
   Int_t           isProbePreselPhot[50];   //[nPhot]
   Int_t           isProbeTightPhot[50];   //[nPhot]
   Int_t           isProbeMediumPhot[50];   //[nPhot]
   Int_t           isProbeLoosePhot[50];   //[nPhot]
   Float_t         mvaIDPhot[50];   //[nPhot]
   Float_t         ePhot[50];   //[nPhot]
   Float_t         escPhot[50];   //[nPhot]
   Float_t         escRegrPhot[50];   //[nPhot]
   Float_t         escRegrPhotError[50];   //[nPhot]
   Float_t         escPhFixPhot[50];   //[nPhot]
   Float_t         escPhFixPhotError[50];   //[nPhot]
   Float_t         escRawPhot[50];   //[nPhot]
   Float_t         etascPhot[50];   //[nPhot]
   Float_t         phiscPhot[50];   //[nPhot]
   Float_t         xscPhot[50];   //[nPhot]
   Float_t         yscPhot[50];   //[nPhot]
   Float_t         zscPhot[50];   //[nPhot]
   Float_t         xcaloPhot[50];   //[nPhot]
   Float_t         ycaloPhot[50];   //[nPhot]
   Float_t         zcaloPhot[50];   //[nPhot]
   Float_t         eseedPhot[50];   //[nPhot]
   Float_t         etaPhot[50];   //[nPhot]
   Float_t         phiPhot[50];   //[nPhot]
   Float_t         timePhot;
   Float_t         e4SwissCrossPhot[50];   //[nPhot]
   Int_t           hasPixelSeedPhot[50];   //[nPhot]
   Int_t           hasMatchedPromptElePhot[50];   //[nPhot]
   Int_t           hasMatchedConvPhot[50];   //[nPhot]
   Bool_t          isEBPhot[50];   //[nPhot]
   Bool_t          isEEPhot[50];   //[nPhot]
   Bool_t          isEBEEGapPhot[50];   //[nPhot]
   Float_t         pid_scetawid[50];   //[nPhot]
   Float_t         pid_scphiwid[50];   //[nPhot]
   Float_t         pid_lambdaRatio[50];   //[nPhot]
   Float_t         pid_esXwidth[50];   //[nPhot]
   Float_t         pid_esYwidth[50];   //[nPhot]
   Float_t         sMajMajPhot[50];   //[nPhot]
   Float_t         sMinMinPhot[50];   //[nPhot]
   Float_t         alphaPhot[50];   //[nPhot]
   Float_t         sEtaEtaPhot[50];   //[nPhot]
   Float_t         sEtaPhiPhot[50];   //[nPhot]
   Float_t         sPhiPhiPhot[50];   //[nPhot]
   Float_t         E1Phot[50];   //[nPhot]
   Float_t         E2OverE9Phot[50];   //[nPhot]
   Float_t         E4Phot[50];   //[nPhot]
   Float_t         E9Phot[50];   //[nPhot]
   Float_t         E25Phot[50];   //[nPhot]
   Float_t         r9Phot[50];   //[nPhot]
   Float_t         s4RatioPhot[50];   //[nPhot]
   Float_t         sigmaRRPhot[50];   //[nPhot]
   Float_t         pid_deltaRToTrackPhot[50];   //[nPhot]
   Bool_t          pid_isEMPhot[50];   //[nPhot]
   Bool_t          pid_isLoosePhot[50];   //[nPhot]
   Bool_t          pid_isTightPhot[50];   //[nPhot]
   Float_t         pid_jurECALPhot[50];   //[nPhot]
   Float_t         pid_twrHCALPhot[50];   //[nPhot]
   Float_t         pid_HoverE[50];   //[nPhot]
   Float_t         pid_hlwTrackPhot[50];   //[nPhot]
   Float_t         pid_hlwTrackNoDz[50];   //[nPhot]
   Float_t         pid_etawid[50];   //[nPhot]
   Float_t         pid_jurECAL03[50];   //[nPhot]
   Float_t         pid_twrHCAL03[50];   //[nPhot]
   Float_t         pid_hlwTrack03[50];   //[nPhot]
   Float_t         pid_hlwTrack0oDz[50];   //[nPhot]
   Float_t         pid_hlwTrack03NoDz[50];   //[nPhot]
   Float_t         pid_hlwTrack03ForCiC[50];   //[nPhot]
   Float_t         pid_hlwTrackForCiC[50];   //[nPhot]
   Float_t         pid_pfIsoCharged01ForCiC[50];   //[nPhot]
   Float_t         pid_pfIsoCharged02ForCiC[50];   //[nPhot]
   Float_t         pid_pfIsoCharged03ForCiC[50];   //[nPhot]
   Float_t         pid_pfIsoCharged04ForCiC[50];   //[nPhot]
   Float_t         pid_pfIsoCharged05ForCiC[50];   //[nPhot]
   Float_t         pid_pfIsoCharged06ForCiC[50];   //[nPhot]
   Float_t         pid_pfIsoPhotons01ForCiC[50];   //[nPhot]
   Float_t         pid_pfIsoPhotons02ForCiC[50];   //[nPhot]
   Float_t         pid_pfIsoPhotons03ForCiC[50];   //[nPhot]
   Float_t         pid_pfIsoPhotons04ForCiC[50];   //[nPhot]
   Float_t         pid_pfIsoPhotons05ForCiC[50];   //[nPhot]
   Float_t         pid_pfIsoPhotons06ForCiC[50];   //[nPhot]
   Float_t         pid_pfIsoNeutrals01ForCiC[50];   //[nPhot]
   Float_t         pid_pfIsoNeutrals02ForCiC[50];   //[nPhot]
   Float_t         pid_pfIsoNeutrals03ForCiC[50];   //[nPhot]
   Float_t         pid_pfIsoNeutrals04ForCiC[50];   //[nPhot]
   Float_t         pid_pfIsoNeutrals05ForCiC[50];   //[nPhot]
   Float_t         pid_pfIsoNeutrals06ForCiC[50];   //[nPhot]
   Float_t         ptiso004Phot[50];   //[nPhot]
   Int_t           ntrkiso004Phot[50];   //[nPhot]
   Float_t         ptiso035Phot[50];   //[nPhot]
   Int_t           ntrkiso035Phot[50];   //[nPhot]
   Float_t         ptiso04Phot[50];   //[nPhot]
   Int_t           ntrkiso04Phot[50];   //[nPhot]
   Float_t         hcalovecal04Phot[50];   //[nPhot]
   Float_t         ecaliso04Phot[50];   //[nPhot]
   Int_t           nEle;
   Int_t           isGenMatchEle[50];   //[nEle]
   Int_t           genMatchIndexEle[50];   //[nEle]
   Float_t         electron_pt[50];   //[nEle]
   Float_t         electron_eta[50];   //[nEle]
   Float_t         electron_phi[50];   //[nEle]
   Int_t           isTagTightEle[50];   //[nEle]
   Int_t           isTagMediumEle[50];   //[nEle]
   Int_t           isTagLooseEle[50];   //[nEle]
   vector<string>  *firedHLTNames;
   Float_t         epfMet;

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_event;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_isMC;   //!
   TBranch        *b_nvtx;   //!
   TBranch        *b_vtxId;   //!
   TBranch        *b_npu;   //!
   TBranch        *b_NtotEvents;   //!
   TBranch        *b_xsection;   //!
   TBranch        *b_EquivLumi;   //!
   TBranch        *b_SampleID;   //!
   TBranch        *b_pu_weight;   //!
   TBranch        *b_pu_weight30;   //!
   TBranch        *b_pu_weight50;   //!
   TBranch        *b_pu_weight75;   //!
   TBranch        *b_pu_weight90;   //!
   TBranch        *b_rhoAllJets;   //!
   TBranch        *b_rhoPF;   //!
   TBranch        *b_nEleMC;   //!
   TBranch        *b_idEleMC;   //!
   TBranch        *b_pdgIdEleMC;   //!
   TBranch        *b_statusEleMC;   //!
   TBranch        *b_motherIDEleMC;   //!
   TBranch        *b_ptEleMC;   //!
   TBranch        *b_eEleMC;   //!
   TBranch        *b_etaEleMC;   //!
   TBranch        *b_phiEleMC;   //!
   TBranch        *b_nPhot;   //!
   TBranch        *b_ptPhot;   //!
   TBranch        *b_isGenMatchPhot;   //!
   TBranch        *b_genMatchIndexPhot;   //!
   TBranch        *b_isProbePreselPhot;   //!
   TBranch        *b_isProbeTightPhot;   //!
   TBranch        *b_isProbeMediumPhot;   //!
   TBranch        *b_isProbeLoosePhot;   //!
   TBranch        *b_mvaIDPhot;   //!
   TBranch        *b_ePhot;   //!
   TBranch        *b_escPhot;   //!
   TBranch        *b_escRegrPhot;   //!
   TBranch        *b_escRegrPhotError;   //!
   TBranch        *b_escPhFixPhot;   //!
   TBranch        *b_escPhFixPhotError;   //!
   TBranch        *b_escRawPhot;   //!
   TBranch        *b_etascPhot;   //!
   TBranch        *b_phiscPhot;   //!
   TBranch        *b_xscPhot;   //!
   TBranch        *b_yscPhot;   //!
   TBranch        *b_zscPhot;   //!
   TBranch        *b_xcaloPhot;   //!
   TBranch        *b_ycaloPhot;   //!
   TBranch        *b_zcaloPhot;   //!
   TBranch        *b_eseedPhot;   //!
   TBranch        *b_etaPhot;   //!
   TBranch        *b_phiPhot;   //!
   TBranch        *b_timePhot;   //!
   TBranch        *b_e4SwissCrossPhot;   //!
   TBranch        *b_hasPixelSeedPhot;   //!
   TBranch        *b_hasMatchedPromptElePhot;   //!
   TBranch        *b_hasMatchedConvPhot;   //!
   TBranch        *b_isEBPhot;   //!
   TBranch        *b_isEEPhot;   //!
   TBranch        *b_isEBEEGapPhot;   //!
   TBranch        *b_pid_scetawid;   //!
   TBranch        *b_pid_scphiwid;   //!
   TBranch        *b_pid_lambdaRatio;   //!
   TBranch        *b_pid_esXwidth;   //!
   TBranch        *b_pid_esYwidth;   //!
   TBranch        *b_sMajMajPhot;   //!
   TBranch        *b_sMinMinPhot;   //!
   TBranch        *b_alphaPhot;   //!
   TBranch        *b_sEtaEtaPhot;   //!
   TBranch        *b_sEtaPhiPhot;   //!
   TBranch        *b_sPhiPhiPhot;   //!
   TBranch        *b_E1Phot;   //!
   TBranch        *b_E2OverE9Phot;   //!
   TBranch        *b_E4Phot;   //!
   TBranch        *b_E9Phot;   //!
   TBranch        *b_E25Phot;   //!
   TBranch        *b_r9Phot;   //!
   TBranch        *b_s4RatioPhot;   //!
   TBranch        *b_sigmaRRPhot;   //!
   TBranch        *b_pid_deltaRToTrackPhot;   //!
   TBranch        *b_pid_isEMPhot;   //!
   TBranch        *b_pid_isLoosePhot;   //!
   TBranch        *b_pid_isTightPhot;   //!
   TBranch        *b_pid_jurECALPhot;   //!
   TBranch        *b_pid_twrHCALPhot;   //!
   TBranch        *b_pid_HoverE;   //!
   TBranch        *b_pid_hlwTrackPhot;   //!
   TBranch        *b_pid_hlwTrackNoDz;   //!
   TBranch        *b_pid_etawid;   //!
   TBranch        *b_pid_jurECAL03;   //!
   TBranch        *b_pid_twrHCAL03;   //!
   TBranch        *b_pid_hlwTrack03;   //!
   TBranch        *b_pid_hlwTrack0oDz;   //!
   TBranch        *b_pid_hlwTrack03NoDz;   //!
   TBranch        *b_pid_hlwTrack03ForCiC;   //!
   TBranch        *b_pid_hlwTrackForCiC;   //!
   TBranch        *b_pid_pfIsoCharged01ForCiC;   //!
   TBranch        *b_pid_pfIsoCharged02ForCiC;   //!
   TBranch        *b_pid_pfIsoCharged03ForCiC;   //!
   TBranch        *b_pid_pfIsoCharged04ForCiC;   //!
   TBranch        *b_pid_pfIsoCharged05ForCiC;   //!
   TBranch        *b_pid_pfIsoCharged06ForCiC;   //!
   TBranch        *b_pid_pfIsoPhotons01ForCiC;   //!
   TBranch        *b_pid_pfIsoPhotons02ForCiC;   //!
   TBranch        *b_pid_pfIsoPhotons03ForCiC;   //!
   TBranch        *b_pid_pfIsoPhotons04ForCiC;   //!
   TBranch        *b_pid_pfIsoPhotons05ForCiC;   //!
   TBranch        *b_pid_pfIsoPhotons06ForCiC;   //!
   TBranch        *b_pid_pfIsoNeutrals01ForCiC;   //!
   TBranch        *b_pid_pfIsoNeutrals02ForCiC;   //!
   TBranch        *b_pid_pfIsoNeutrals03ForCiC;   //!
   TBranch        *b_pid_pfIsoNeutrals04ForCiC;   //!
   TBranch        *b_pid_pfIsoNeutrals05ForCiC;   //!
   TBranch        *b_pid_pfIsoNeutrals06ForCiC;   //!
   TBranch        *b_ptiso004Phot;   //!
   TBranch        *b_ntrkiso004Phot;   //!
   TBranch        *b_ptiso035Phot;   //!
   TBranch        *b_ntrkiso035Phot;   //!
   TBranch        *b_ptiso04Phot;   //!
   TBranch        *b_ntrkiso04Phot;   //!
   TBranch        *b_hcalovecal04Phot;   //!
   TBranch        *b_ecaliso04Phot;   //!
   TBranch        *b_nEle;   //!
   TBranch        *b_isGenMatchEle;   //!
   TBranch        *b_genMatchIndexEle;   //!
   TBranch        *b_electron_pt;   //!
   TBranch        *b_electron_eta;   //!
   TBranch        *b_electron_phi;   //!
   TBranch        *b_isTagTightEle;   //!
   TBranch        *b_isTagMediumEle;   //!
   TBranch        *b_isTagLooseEle;   //!
   TBranch        *b_firedHLTNames;   //!
   TBranch        *b_epfMet;   //!

   riduttore(TTree *tree=0);
   virtual ~riduttore();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);

   bool isHLT_TandP();
};

#endif

#ifdef riduttore_cxx
riduttore::riduttore(TTree *tree) : fChain(0)
{
  // if parameter tree is not specified (or zero), connect the file 
  // used to generate this class and read the Tree.                                                
  if (tree == 0) {
    TChain * chain = new TChain("AnaTree","");
    chain->Add("/xrootdfs/cms/local/meridian/Higgs/reduced/redntp.53xv2_extra.tandp2012.paolo.v2/redntp*.root/AnaTree");
    // chain->Add("/xrootdfs/cms/local/meridian/Higgs/reduced/redntp.53xv3_data.tandp2012.paolo.v2/redntp*.root/AnaTree");
    tree = chain;
  }
  Init(tree);
}

riduttore::~riduttore()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t riduttore::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t riduttore::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void riduttore::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   firedHLTNames = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("lumi", &lumi, &b_lumi);
   fChain->SetBranchAddress("isMC", &isMC, &b_isMC);
   fChain->SetBranchAddress("nvtx", &nvtx, &b_nvtx);
   fChain->SetBranchAddress("vtxId", &vtxId, &b_vtxId);
   fChain->SetBranchAddress("npu", &npu, &b_npu);
   fChain->SetBranchAddress("NtotEvents", &NtotEvents, &b_NtotEvents);
   fChain->SetBranchAddress("xsection", &xsection, &b_xsection);
   fChain->SetBranchAddress("EquivLumi", &EquivLumi, &b_EquivLumi);
   fChain->SetBranchAddress("SampleID", &SampleID, &b_SampleID);
   fChain->SetBranchAddress("pu_weight", &pu_weight, &b_pu_weight);
   fChain->SetBranchAddress("pu_weight30", &pu_weight30, &b_pu_weight30);
   fChain->SetBranchAddress("pu_weight50", &pu_weight50, &b_pu_weight50);
   fChain->SetBranchAddress("pu_weight75", &pu_weight75, &b_pu_weight75);
   fChain->SetBranchAddress("pu_weight90", &pu_weight90, &b_pu_weight90);
   fChain->SetBranchAddress("rhoAllJets", &rhoAllJets, &b_rhoAllJets);
   fChain->SetBranchAddress("rhoPF", &rhoPF, &b_rhoPF);
   fChain->SetBranchAddress("nEleMC", &nEleMC, &b_nEleMC);
   fChain->SetBranchAddress("idEleMC", idEleMC, &b_idEleMC);
   fChain->SetBranchAddress("pdgIdEleMC", pdgIdEleMC, &b_pdgIdEleMC);
   fChain->SetBranchAddress("statusEleMC", statusEleMC, &b_statusEleMC);
   fChain->SetBranchAddress("motherIDEleMC", motherIDEleMC, &b_motherIDEleMC);
   fChain->SetBranchAddress("ptEleMC", ptEleMC, &b_ptEleMC);
   fChain->SetBranchAddress("eEleMC", eEleMC, &b_eEleMC);
   fChain->SetBranchAddress("etaEleMC", etaEleMC, &b_etaEleMC);
   fChain->SetBranchAddress("phiEleMC", phiEleMC, &b_phiEleMC);
   fChain->SetBranchAddress("nPhot", &nPhot, &b_nPhot);
   fChain->SetBranchAddress("ptPhot", ptPhot, &b_ptPhot);
   fChain->SetBranchAddress("isGenMatchPhot", isGenMatchPhot, &b_isGenMatchPhot);
   fChain->SetBranchAddress("genMatchIndexPhot", genMatchIndexPhot, &b_genMatchIndexPhot);
   fChain->SetBranchAddress("isProbePreselPhot", isProbePreselPhot, &b_isProbePreselPhot);
   fChain->SetBranchAddress("isProbeTightPhot", isProbeTightPhot, &b_isProbeTightPhot);
   fChain->SetBranchAddress("isProbeMediumPhot", isProbeMediumPhot, &b_isProbeMediumPhot);
   fChain->SetBranchAddress("isProbeLoosePhot", isProbeLoosePhot, &b_isProbeLoosePhot);
   fChain->SetBranchAddress("mvaIDPhot", mvaIDPhot, &b_mvaIDPhot);
   fChain->SetBranchAddress("ePhot", ePhot, &b_ePhot);
   fChain->SetBranchAddress("escPhot", escPhot, &b_escPhot);
   fChain->SetBranchAddress("escRegrPhot", escRegrPhot, &b_escRegrPhot);
   fChain->SetBranchAddress("escRegrPhotError", escRegrPhotError, &b_escRegrPhotError);
   fChain->SetBranchAddress("escPhFixPhot", escPhFixPhot, &b_escPhFixPhot);
   fChain->SetBranchAddress("escPhFixPhotError", escPhFixPhotError, &b_escPhFixPhotError);
   fChain->SetBranchAddress("escRawPhot", escRawPhot, &b_escRawPhot);
   fChain->SetBranchAddress("etascPhot", etascPhot, &b_etascPhot);
   fChain->SetBranchAddress("phiscPhot", phiscPhot, &b_phiscPhot);
   fChain->SetBranchAddress("xscPhot", xscPhot, &b_xscPhot);
   fChain->SetBranchAddress("yscPhot", yscPhot, &b_yscPhot);
   fChain->SetBranchAddress("zscPhot", zscPhot, &b_zscPhot);
   fChain->SetBranchAddress("xcaloPhot", xcaloPhot, &b_xcaloPhot);
   fChain->SetBranchAddress("ycaloPhot", ycaloPhot, &b_ycaloPhot);
   fChain->SetBranchAddress("zcaloPhot", zcaloPhot, &b_zcaloPhot);
   fChain->SetBranchAddress("eseedPhot", eseedPhot, &b_eseedPhot);
   fChain->SetBranchAddress("etaPhot", etaPhot, &b_etaPhot);
   fChain->SetBranchAddress("phiPhot", phiPhot, &b_phiPhot);
   fChain->SetBranchAddress("timePhot", &timePhot, &b_timePhot);
   fChain->SetBranchAddress("e4SwissCrossPhot", e4SwissCrossPhot, &b_e4SwissCrossPhot);
   fChain->SetBranchAddress("hasPixelSeedPhot", hasPixelSeedPhot, &b_hasPixelSeedPhot);
   fChain->SetBranchAddress("hasMatchedPromptElePhot", hasMatchedPromptElePhot, &b_hasMatchedPromptElePhot);
   fChain->SetBranchAddress("hasMatchedConvPhot", hasMatchedConvPhot, &b_hasMatchedConvPhot);
   fChain->SetBranchAddress("isEBPhot", isEBPhot, &b_isEBPhot);
   fChain->SetBranchAddress("isEEPhot", isEEPhot, &b_isEEPhot);
   fChain->SetBranchAddress("isEBEEGapPhot", isEBEEGapPhot, &b_isEBEEGapPhot);
   fChain->SetBranchAddress("pid_scetawid", pid_scetawid, &b_pid_scetawid);
   fChain->SetBranchAddress("pid_scphiwid", pid_scphiwid, &b_pid_scphiwid);
   fChain->SetBranchAddress("pid_lambdaRatio", pid_lambdaRatio, &b_pid_lambdaRatio);
   fChain->SetBranchAddress("pid_esXwidth", pid_esXwidth, &b_pid_esXwidth);
   fChain->SetBranchAddress("pid_esYwidth", pid_esYwidth, &b_pid_esYwidth);
   fChain->SetBranchAddress("sMajMajPhot", sMajMajPhot, &b_sMajMajPhot);
   fChain->SetBranchAddress("sMinMinPhot", sMinMinPhot, &b_sMinMinPhot);
   fChain->SetBranchAddress("alphaPhot", alphaPhot, &b_alphaPhot);
   fChain->SetBranchAddress("sEtaEtaPhot", sEtaEtaPhot, &b_sEtaEtaPhot);
   fChain->SetBranchAddress("sEtaPhiPhot", sEtaPhiPhot, &b_sEtaPhiPhot);
   fChain->SetBranchAddress("sPhiPhiPhot", sPhiPhiPhot, &b_sPhiPhiPhot);
   fChain->SetBranchAddress("E1Phot", E1Phot, &b_E1Phot);
   fChain->SetBranchAddress("E2OverE9Phot", E2OverE9Phot, &b_E2OverE9Phot);
   fChain->SetBranchAddress("E4Phot", E4Phot, &b_E4Phot);
   fChain->SetBranchAddress("E9Phot", E9Phot, &b_E9Phot);
   fChain->SetBranchAddress("E25Phot", E25Phot, &b_E25Phot);
   fChain->SetBranchAddress("r9Phot", r9Phot, &b_r9Phot);
   fChain->SetBranchAddress("s4RatioPhot", s4RatioPhot, &b_s4RatioPhot);
   fChain->SetBranchAddress("sigmaRRPhot", sigmaRRPhot, &b_sigmaRRPhot);
   fChain->SetBranchAddress("pid_deltaRToTrackPhot", pid_deltaRToTrackPhot, &b_pid_deltaRToTrackPhot);
   fChain->SetBranchAddress("pid_isEMPhot", pid_isEMPhot, &b_pid_isEMPhot);
   fChain->SetBranchAddress("pid_isLoosePhot", pid_isLoosePhot, &b_pid_isLoosePhot);
   fChain->SetBranchAddress("pid_isTightPhot", pid_isTightPhot, &b_pid_isTightPhot);
   fChain->SetBranchAddress("pid_jurECALPhot", pid_jurECALPhot, &b_pid_jurECALPhot);
   fChain->SetBranchAddress("pid_twrHCALPhot", pid_twrHCALPhot, &b_pid_twrHCALPhot);
   fChain->SetBranchAddress("pid_HoverE", pid_HoverE, &b_pid_HoverE);
   fChain->SetBranchAddress("pid_hlwTrackPhot", pid_hlwTrackPhot, &b_pid_hlwTrackPhot);
   fChain->SetBranchAddress("pid_hlwTrackNoDz", pid_hlwTrackNoDz, &b_pid_hlwTrackNoDz);
   fChain->SetBranchAddress("pid_etawid", pid_etawid, &b_pid_etawid);
   fChain->SetBranchAddress("pid_jurECAL03", pid_jurECAL03, &b_pid_jurECAL03);
   fChain->SetBranchAddress("pid_twrHCAL03", pid_twrHCAL03, &b_pid_twrHCAL03);
   fChain->SetBranchAddress("pid_hlwTrack03", pid_hlwTrack03, &b_pid_hlwTrack03);
   fChain->SetBranchAddress("pid_hlwTrack0oDz", pid_hlwTrack0oDz, &b_pid_hlwTrack0oDz);
   fChain->SetBranchAddress("pid_hlwTrack03NoDz", pid_hlwTrack03NoDz, &b_pid_hlwTrack03NoDz);
   fChain->SetBranchAddress("pid_hlwTrack03ForCiC", pid_hlwTrack03ForCiC, &b_pid_hlwTrack03ForCiC);
   fChain->SetBranchAddress("pid_hlwTrackForCiC", pid_hlwTrackForCiC, &b_pid_hlwTrackForCiC);
   fChain->SetBranchAddress("pid_pfIsoCharged01ForCiC", pid_pfIsoCharged01ForCiC, &b_pid_pfIsoCharged01ForCiC);
   fChain->SetBranchAddress("pid_pfIsoCharged02ForCiC", pid_pfIsoCharged02ForCiC, &b_pid_pfIsoCharged02ForCiC);
   fChain->SetBranchAddress("pid_pfIsoCharged03ForCiC", pid_pfIsoCharged03ForCiC, &b_pid_pfIsoCharged03ForCiC);
   fChain->SetBranchAddress("pid_pfIsoCharged04ForCiC", pid_pfIsoCharged04ForCiC, &b_pid_pfIsoCharged04ForCiC);
   fChain->SetBranchAddress("pid_pfIsoCharged05ForCiC", pid_pfIsoCharged05ForCiC, &b_pid_pfIsoCharged05ForCiC);
   fChain->SetBranchAddress("pid_pfIsoCharged06ForCiC", pid_pfIsoCharged06ForCiC, &b_pid_pfIsoCharged06ForCiC);
   fChain->SetBranchAddress("pid_pfIsoPhotons01ForCiC", pid_pfIsoPhotons01ForCiC, &b_pid_pfIsoPhotons01ForCiC);
   fChain->SetBranchAddress("pid_pfIsoPhotons02ForCiC", pid_pfIsoPhotons02ForCiC, &b_pid_pfIsoPhotons02ForCiC);
   fChain->SetBranchAddress("pid_pfIsoPhotons03ForCiC", pid_pfIsoPhotons03ForCiC, &b_pid_pfIsoPhotons03ForCiC);
   fChain->SetBranchAddress("pid_pfIsoPhotons04ForCiC", pid_pfIsoPhotons04ForCiC, &b_pid_pfIsoPhotons04ForCiC);
   fChain->SetBranchAddress("pid_pfIsoPhotons05ForCiC", pid_pfIsoPhotons05ForCiC, &b_pid_pfIsoPhotons05ForCiC);
   fChain->SetBranchAddress("pid_pfIsoPhotons06ForCiC", pid_pfIsoPhotons06ForCiC, &b_pid_pfIsoPhotons06ForCiC);
   fChain->SetBranchAddress("pid_pfIsoNeutrals01ForCiC", pid_pfIsoNeutrals01ForCiC, &b_pid_pfIsoNeutrals01ForCiC);
   fChain->SetBranchAddress("pid_pfIsoNeutrals02ForCiC", pid_pfIsoNeutrals02ForCiC, &b_pid_pfIsoNeutrals02ForCiC);
   fChain->SetBranchAddress("pid_pfIsoNeutrals03ForCiC", pid_pfIsoNeutrals03ForCiC, &b_pid_pfIsoNeutrals03ForCiC);
   fChain->SetBranchAddress("pid_pfIsoNeutrals04ForCiC", pid_pfIsoNeutrals04ForCiC, &b_pid_pfIsoNeutrals04ForCiC);
   fChain->SetBranchAddress("pid_pfIsoNeutrals05ForCiC", pid_pfIsoNeutrals05ForCiC, &b_pid_pfIsoNeutrals05ForCiC);
   fChain->SetBranchAddress("pid_pfIsoNeutrals06ForCiC", pid_pfIsoNeutrals06ForCiC, &b_pid_pfIsoNeutrals06ForCiC);
   fChain->SetBranchAddress("ptiso004Phot", ptiso004Phot, &b_ptiso004Phot);
   fChain->SetBranchAddress("ntrkiso004Phot", ntrkiso004Phot, &b_ntrkiso004Phot);
   fChain->SetBranchAddress("ptiso035Phot", ptiso035Phot, &b_ptiso035Phot);
   fChain->SetBranchAddress("ntrkiso035Phot", ntrkiso035Phot, &b_ntrkiso035Phot);
   fChain->SetBranchAddress("ptiso04Phot", ptiso04Phot, &b_ptiso04Phot);
   fChain->SetBranchAddress("ntrkiso04Phot", ntrkiso04Phot, &b_ntrkiso04Phot);
   fChain->SetBranchAddress("hcalovecal04Phot", hcalovecal04Phot, &b_hcalovecal04Phot);
   fChain->SetBranchAddress("ecaliso04Phot", ecaliso04Phot, &b_ecaliso04Phot);
   fChain->SetBranchAddress("nEle", &nEle, &b_nEle);
   fChain->SetBranchAddress("isGenMatchEle", isGenMatchEle, &b_isGenMatchEle);
   fChain->SetBranchAddress("genMatchIndexEle", genMatchIndexEle, &b_genMatchIndexEle);
   fChain->SetBranchAddress("electron_pt", electron_pt, &b_electron_pt);
   fChain->SetBranchAddress("electron_eta", electron_eta, &b_electron_eta);
   fChain->SetBranchAddress("electron_phi", electron_phi, &b_electron_phi);
   fChain->SetBranchAddress("isTagTightEle", isTagTightEle, &b_isTagTightEle);
   fChain->SetBranchAddress("isTagMediumEle", isTagMediumEle, &b_isTagMediumEle);
   fChain->SetBranchAddress("isTagLooseEle", isTagLooseEle, &b_isTagLooseEle);
   fChain->SetBranchAddress("firedHLTNames", &firedHLTNames, &b_firedHLTNames);
   fChain->SetBranchAddress("epfMet", &epfMet, &b_epfMet);
   Notify();
}

Bool_t riduttore::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void riduttore::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t riduttore::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef riduttore_cxx
