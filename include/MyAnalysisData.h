//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sat Feb 22 14:33:31 2020 by ROOT version 6.10/05
// from TTree IIHEAnalysis/IIHEAnalysis
// found on file: /pnfs/iihe/cms/store/user/schenara/SYS_2018/TTTo2L2Nu_hdampUP_TuneCP5_13TeV-powheg-pythia8/crab_TTTo2L2Nu_hdampUP_2018/200225_122927/0000/outfile_5_2016_71.root
//////////////////////////////////////////////////////////

#ifndef MyAnalysis_h
#define MyAnalysis_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"

using namespace std;
class MyAnalysis {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t          fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

// max array length is 25 here
// actual array length is nJets or nMuons etc dependig on collection

// Declaration of leaf types
   int          event;
   int          run;
   int          luminosityBlock;




   int            nElectron;
   float                      Electron_deltaEtaSC[25];
   float                      Electron_dr03EcalRecHitSumEt[25];
   float                      Electron_dr03HcalDepth1TowerSumEt[25];
   float                      Electron_dr03TkSumPt[25];
   float                      Electron_dr03TkSumPtHEEP[25];
   float                      Electron_dxy[25];
   float                      Electron_dxyErr[25];
   float                      Electron_dz[25];
   float                      Electron_dzErr[25];
   float                      Electron_eCorr[25];
   float                      Electron_eInvMinusPInv[25];
   float                      Electron_energyErr[25];
   float                      Electron_eta[25];
   float                      Electron_hoe[25];
   float                      Electron_ip3d[25];
   float                      Electron_jetPtRelv2[25];
   float                      Electron_jetRelIso[25];
   float                      Electron_mass[25];
   float                      Electron_miniPFRelIso_all[25];
   float                      Electron_miniPFRelIso_chg[25];
   float                      Electron_mvaFall17V1Iso[25];
   float                      Electron_mvaFall17V1noIso[25];
   float                      Electron_mvaFall17V2Iso[25];
   float                      Electron_mvaFall17V2noIso[25];
   float                      Electron_pfRelIso03_all[25];
   float                      Electron_pfRelIso03_chg[25];
   float                      Electron_phi[25];
   float                      Electron_pt[25];
   float                      Electron_r9[25];
   float                      Electron_sieie[25];
   float                      Electron_sip3d[25];
   float                      Electron_mvaTOP[25];
   float                      Electron_mvaTTH[25];


   int           Electron_charge[25];
   int           Electron_cutBased[25];
   int           Electron_cutBased_Fall17_V1[25];
   int           Electron_jetIdx[25];
   int           Electron_jetNDauChargedMVASel[25];
   int           Electron_pdgId[25];
   int           Electron_photonIdx[25];
   int           Electron_tightCharge[25];
   int           Electron_vidNestedWPBitmap[25];
   int           Electron_vidNestedWPBitmapHEEP[25];
   int           Electron_convVeto[25];
   int           Electron_cutBased_HEEP[25];
   int           Electron_isPFcand[25];
   int           Electron_lostHits[25];
   int           Electron_mvaFall17V1Iso_WP80[25];
   int           Electron_mvaFall17V1Iso_WP90[25];
   int           Electron_mvaFall17V1Iso_WPL[25];
   int           Electron_mvaFall17V1noIso_WP80[25];
   int           Electron_mvaFall17V1noIso_WP90[25];
   int           Electron_mvaFall17V1noIso_WPL[25];
   int           Electron_mvaFall17V2Iso_WP80[25];
   int           Electron_mvaFall17V2Iso_WP90[25];
   int           Electron_mvaFall17V2Iso_WPL[25];
   int           Electron_mvaFall17V2noIso_WP80[25];
   int           Electron_mvaFall17V2noIso_WP90[25];
   int           Electron_mvaFall17V2noIso_WPL[25];
   int           Electron_seedGain[25];



   int                  nMuon;
    int                       Muon_genPartIdx[25];

   float                      Muon_dxy[25];
   float                      Muon_dxyErr[25];
   float                      Muon_dz[25];
   float                      Muon_dzErr[25];
   float                      Muon_eta[25];
   float                      Muon_ip3d[25];
   float                      Muon_jetPtRelv2[25];
   float                      Muon_jetRelIso[25];
   float                      Muon_mass[25];
   float                      Muon_miniPFRelIso_all[25];
   float                      Muon_miniPFRelIso_chg[25];
   float                      Muon_pfRelIso03_all[25];
   float                      Muon_pfRelIso03_chg[25];
   float                      Muon_pfRelIso04_all[25];
   float                      Muon_phi[25];
   float                      Muon_pt[25];
   float                      Muon_ptErr[25];
   float                      Muon_segmentComp[25];
   float                      Muon_sip3d[25];
   float                      Muon_tkRelIso[25];
   float                      Muon_tunepRelPt[25];
   float                      Muon_mvaLowPt[25];
   float                      Muon_mvaTOP[25];
   float                      Muon_mvaTTH[25];
   int           Muon_charge[25];
   int           Muon_jetIdx[25];
   int           Muon_jetNDauChargedMVASel[25];
   int           Muon_nStations[25];
   int           Muon_nTrackerLayers[25];
   int           Muon_pdgId[25];
   int           Muon_tightCharge[25];
   int           Muon_fsrPhotonIdx[25];
   int           Muon_highPtId[25];
   int           Muon_inTimeMuon[25];
   int           Muon_isGlobal[25];
   int           Muon_isPFcand[25];
   int           Muon_isTracker[25];
   int           Muon_looseId[25];
   int           Muon_mediumId[25];
   int           Muon_mediumPromptId[25];
   int           Muon_miniIsoId[25];
   int           Muon_multiIsoId[25];
   int           Muon_mvaId[25];
   int           Muon_pfIsoId[25];
   int           Muon_softId[25];
   int           Muon_softMvaId[25];
   int           Muon_tightId[25];
   int           Muon_tkIsoId[25];
   int           Muon_triggerIdLoose[25];

   float                  MET_phi;
   float                  MET_pt;

    int                         nJet; 
   float                      Jet_area[25];
   float                      Jet_btagCMVA[25];
   float                      Jet_btagCSVV2[25]; 
   int           Jet_btagDeepB[25];
   int           Jet_btagDeepC[25];
   float                      Jet_btagDeepFlavB[25];
   float                      Jet_btagDeepFlavC[25];
   float                      Jet_chEmEF[25];
   float                      Jet_chHEF[25];
   float                      Jet_eta[25];
   float                      Jet_jercCHF[25]; 
   float                      Jet_jercCHPUF[25];
   float                      Jet_mass[25];
   float                      Jet_muEF[25];
   float                      Jet_muonSubtrFactor[25];
   float                      Jet_neEmEF[25];
   float                      Jet_neHEF[25];
   float                      Jet_phi[25];
   float                      Jet_pt[25];
   float                      Jet_qgl[25];
   float                      Jet_rawFactor[25];

   float                      Jet_bRegCorr[25];
   float                      Jet_bRegRes[25];
   int           Jet_electronIdx1[25];
   int           Jet_electronIdx2[25];
   int           Jet_jetId[25];
   int           Jet_muonIdx1[25];
   int           Jet_muonIdx2[25];
   int           Jet_nConstituents[25];
   int           Jet_nElectrons[25];
   int           Jet_nMuons[25];
   int           Jet_puId[25];
   int           Jet_partonFlavour[25];



      bool        HLT_Ele35_WPTight_Gsf;

      bool        HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL;

      bool        HLT_IsoMu27;

      bool        HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8;


      bool        HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ; 
      bool        HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL;

      bool        HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;

      bool        Flag_goodVertices;
      bool        Flag_globalSuperTightHalo2016Filter;
      bool        Flag_HBHENoiseIsoFilter;
      bool        Flag_HBHENoiseFilter;
      bool        Flag_EcalDeadCellTriggerPrimitiveFilter;
      bool        Flag_BadPFMuonFilter;
      bool        Flag_eeBadScFilter;
      bool        Flag_ecalBadCalibFilterV2;

      int         PV_npvsGood;

   float             L1PreFiringWeight_Dn;
   float             L1PreFiringWeight_Nom;
   float             L1PreFiringWeight_Up;

    int             nGenPart;
   float             GenPart_mass[25];
   float             GenPart_phi[25];
   float             GenPart_pt[25];
   float             GenPart_eta[25];
   int           GenPart_genPartIdxMother[25];
   int           GenPart_pdgId[25];
   int           GenPart_status[25];
   float         Pileup_nTrueInt;

   // List of branches
   TBranch        *b_event;
   TBranch        *b_run;
   TBranch        *b_luminosityBlock;

   TBranch        *b_nElectron;
   TBranch        *b_Electron_deltaEtaSC;
   TBranch        *b_Electron_dr03EcalRecHitSumEt;
   TBranch        *b_Electron_dr03HcalDepth1TowerSumEt;
   TBranch        *b_Electron_dr03TkSumPt;
   TBranch        *b_Electron_dr03TkSumPtHEEP;
   TBranch        *b_Electron_dxy;
   TBranch        *b_Electron_dxyErr;
   TBranch        *b_Electron_dz;
   TBranch        *b_Electron_dzErr;
   TBranch        *b_Electron_eCorr;
   TBranch        *b_Electron_eInvMinusPInv;
   TBranch        *b_Electron_energyErr;
   TBranch        *b_Electron_eta;
   TBranch        *b_Electron_hoe;
   TBranch        *b_Electron_ip3d;
   TBranch        *b_Electron_jetPtRelv2;
   TBranch        *b_Electron_jetRelIso;
   TBranch        *b_Electron_mass;
   TBranch        *b_Electron_miniPFRelIso_all;
   TBranch        *b_Electron_miniPFRelIso_chg;
   TBranch        *b_Electron_mvaFall17V1Iso;
   TBranch        *b_Electron_mvaFall17V1noIso;
   TBranch        *b_Electron_mvaFall17V2Iso;
   TBranch        *b_Electron_mvaFall17V2noIso;
   TBranch        *b_Electron_pfRelIso03_all;
   TBranch        *b_Electron_pfRelIso03_chg;
   TBranch        *b_Electron_phi;
   TBranch        *b_Electron_pt;
   TBranch        *b_Electron_r9;
   TBranch        *b_Electron_sieie;
   TBranch        *b_Electron_sip3d;
   TBranch        *b_Electron_mvaTOP;
   TBranch        *b_Electron_mvaTTH;


   TBranch        *b_Electron_charge;
   TBranch        *b_Electron_cutBased;
   TBranch        *b_Electron_cutBased_Fall17_V1;
   TBranch        *b_Electron_jetIdx;
   TBranch        *b_Electron_jetNDauChargedMVASel;
   TBranch        *b_Electron_pdgId;
   TBranch        *b_Electron_photonIdx;
   TBranch        *b_Electron_tightCharge;
   TBranch        *b_Electron_vidNestedWPBitmap;
   TBranch        *b_Electron_vidNestedWPBitmapHEEP;
   TBranch        *b_Electron_convVeto;
   TBranch        *b_Electron_cutBased_HEEP;
   TBranch        *b_Electron_isPFcand;
   TBranch        *b_Electron_lostHits;
   TBranch        *b_Electron_mvaFall17V1Iso_WP80;
   TBranch        *b_Electron_mvaFall17V1Iso_WP90;
   TBranch        *b_Electron_mvaFall17V1Iso_WPL;
   TBranch        *b_Electron_mvaFall17V1noIso_WP80;
   TBranch        *b_Electron_mvaFall17V1noIso_WP90;
   TBranch        *b_Electron_mvaFall17V1noIso_WPL;
   TBranch        *b_Electron_mvaFall17V2Iso_WP80;
   TBranch        *b_Electron_mvaFall17V2Iso_WP90;
   TBranch        *b_Electron_mvaFall17V2Iso_WPL;
   TBranch        *b_Electron_mvaFall17V2noIso_WP80;
   TBranch        *b_Electron_mvaFall17V2noIso_WP90;
   TBranch        *b_Electron_mvaFall17V2noIso_WPL;
   TBranch        *b_Electron_seedGain;

   TBranch        *b_nMuon;
   TBranch        *b_Muon_genPartIdx;
   TBranch        *b_Muon_dxy;
   TBranch        *b_Muon_dxyErr;
   TBranch        *b_Muon_dz;
   TBranch        *b_Muon_dzErr;
   TBranch        *b_Muon_eta;
   TBranch        *b_Muon_ip3d;
   TBranch        *b_Muon_jetPtRelv2;
   TBranch        *b_Muon_jetRelIso;
   TBranch        *b_Muon_mass;
   TBranch        *b_Muon_miniPFRelIso_all;
   TBranch        *b_Muon_miniPFRelIso_chg;
   TBranch        *b_Muon_pfRelIso03_all;
   TBranch        *b_Muon_pfRelIso03_chg;
   TBranch        *b_Muon_pfRelIso04_all;
   TBranch        *b_Muon_phi;
   TBranch        *b_Muon_pt;
   TBranch        *b_Muon_ptErr;
   TBranch        *b_Muon_segmentComp;
   TBranch        *b_Muon_sip3d;
   TBranch        *b_Muon_tkRelIso;
   TBranch        *b_Muon_tunepRelPt;
   TBranch        *b_Muon_mvaLowPt;
   TBranch        *b_Muon_mvaTOP;
   TBranch        *b_Muon_mvaTTH;
   TBranch        *b_Muon_charge;
   TBranch        *b_Muon_jetIdx;
   TBranch        *b_Muon_jetNDauChargedMVASel;
   TBranch        *b_Muon_nStations;
   TBranch        *b_Muon_nTrackerLayers;
   TBranch        *b_Muon_pdgId;
   TBranch        *b_Muon_tightCharge;
   TBranch        *b_Muon_fsrPhotonIdx;
   TBranch        *b_Muon_highPtId;
   TBranch        *b_Muon_inTimeMuon;
   TBranch        *b_Muon_isGlobal;
   TBranch        *b_Muon_isPFcand;
   TBranch        *b_Muon_isTracker;
   TBranch        *b_Muon_looseId;
   TBranch        *b_Muon_mediumId;
   TBranch        *b_Muon_mediumPromptId;
   TBranch        *b_Muon_miniIsoId;
   TBranch        *b_Muon_multiIsoId;
   TBranch        *b_Muon_mvaId;
   TBranch        *b_Muon_pfIsoId;
   TBranch        *b_Muon_softId;
   TBranch        *b_Muon_softMvaId;
   TBranch        *b_Muon_tightId;
   TBranch        *b_Muon_tkIsoId;
   TBranch        *b_Muon_triggerIdLoose;

   TBranch        *b_MET_phi;
   TBranch        *b_MET_pt;


   TBranch        *b_nJet; 
   TBranch        *b_Jet_partonFlavour; 
   TBranch        *b_Jet_area;
   TBranch        *b_Jet_btagCMVA;
   TBranch        *b_Jet_btagCSVV2; 
   TBranch        *b_Jet_btagDeepB;
   TBranch        *b_Jet_btagDeepC;
   TBranch        *b_Jet_btagDeepFlavB;
   TBranch        *b_Jet_btagDeepFlavC;
   TBranch        *b_Jet_chEmEF;
   TBranch        *b_Jet_chHEF;
   TBranch        *b_Jet_eta;
   TBranch        *b_Jet_jercCHF; 
   TBranch        *b_Jet_jercCHPUF;
   TBranch        *b_Jet_mass;
   TBranch        *b_Jet_muEF;
   TBranch        *b_Jet_muonSubtrFactor;
   TBranch        *b_Jet_neEmEF;
   TBranch        *b_Jet_neHEF;
   TBranch        *b_Jet_phi;
   TBranch        *b_Jet_pt;
   TBranch        *b_Jet_qgl;
   TBranch        *b_Jet_rawFactor;
   TBranch        *b_Jet_bRegCorr;
   TBranch        *b_Jet_bRegRes;
   TBranch        *b_Jet_electronIdx1;
   TBranch        *b_Jet_electronIdx2;
   TBranch        *b_Jet_jetId;
   TBranch        *b_Jet_muonIdx1;
   TBranch        *b_Jet_muonIdx2;
   TBranch        *b_Jet_nConstituents;
   TBranch        *b_Jet_nElectrons;
   TBranch        *b_Jet_nMuons;
   TBranch        *b_Jet_puId;
         



   TBranch        *b_HLT_Ele35_WPTight_Gsf;

   TBranch        *b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL;

   TBranch        *b_HLT_IsoMu27;

   TBranch        *b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8;


   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ; 
   TBranch        *b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL;
   TBranch        *b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;
    

   TBranch        *b_PV_npvsGood;

   TBranch        *b_Flag_goodVertices;
   TBranch        *b_Flag_globalSuperTightHalo2016Filter;
   TBranch        *b_Flag_HBHENoiseIsoFilter;
   TBranch        *b_Flag_HBHENoiseFilter;
   TBranch        *b_Flag_EcalDeadCellTriggerPrimitiveFilter;
   TBranch        *b_Flag_BadPFMuonFilter;
   TBranch        *b_Flag_eeBadScFilter;
   TBranch        *b_Flag_ecalBadCalibFilterV2;


   TBranch        *b_L1PreFiringWeight_Dn;
   TBranch        *b_L1PreFiringWeight_Nom;
   TBranch        *b_L1PreFiringWeight_Up;


   TBranch        *b_nGenPart;
   TBranch        *b_GenPart_mass;
   TBranch        *b_GenPart_phi;
   TBranch        *b_GenPart_pt;
   TBranch        *b_GenPart_eta;
   TBranch        *b_GenPart_genPartIdxMother;
   TBranch        *b_GenPart_pdgId;
   TBranch        *b_GenPart_status;
   TBranch        *b_Pileup_nTrueInt;


   MyAnalysis(TTree *tree=0);
   virtual ~MyAnalysis();
   virtual int    Cut(Long64_t entry);
   virtual int    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop(TString, TString, TString, TString, TString, float,float,float);
   virtual bool   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef MyAnalysis_cxx
MyAnalysis::MyAnalysis(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/pnfs/iihe/cms/store/user/schenara/SYS_2018/TTTo2L2Nu_hdampUP_TuneCP5_13TeV-powheg-pythia8/crab_TTTo2L2Nu_hdampUP_2018/200225_122927/0000/outfile_5_2016_71.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/pnfs/iihe/cms/store/user/schenara/SYS_2018/TTTo2L2Nu_hdampUP_TuneCP5_13TeV-powheg-pythia8/crab_TTTo2L2Nu_hdampUP_2018/200225_122927/0000/outfile_5_2016_71.root");
      }
      f->GetObject("IIHEAnalysis",tree);

   }
   Init(tree);
}

MyAnalysis::~MyAnalysis()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

int MyAnalysis::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t MyAnalysis::LoadTree(Long64_t entry)
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

void MyAnalysis::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("luminosityBlock", &luminosityBlock, &b_luminosityBlock);

   fChain->SetBranchAddress("nElectron", &nElectron, &b_nElectron);
   fChain->SetBranchAddress("Electron_deltaEtaSC", &Electron_deltaEtaSC, &b_Electron_deltaEtaSC);
   fChain->SetBranchAddress("Electron_dr03EcalRecHitSumEt", &Electron_dr03EcalRecHitSumEt, &b_Electron_dr03EcalRecHitSumEt);
   fChain->SetBranchAddress("Electron_dr03EcalRecHitSumEt", &Electron_dr03EcalRecHitSumEt, &b_Electron_dr03EcalRecHitSumEt);
   fChain->SetBranchAddress("Electron_dr03HcalDepth1TowerSumEt", &Electron_dr03HcalDepth1TowerSumEt, &b_Electron_dr03HcalDepth1TowerSumEt);
   fChain->SetBranchAddress("Electron_dr03TkSumPt", &Electron_dr03TkSumPt, &b_Electron_dr03TkSumPt);
   fChain->SetBranchAddress("Electron_dr03TkSumPtHEEP", &Electron_dr03TkSumPtHEEP, &b_Electron_dr03TkSumPtHEEP);
   fChain->SetBranchAddress("Electron_dxy", &Electron_dxy, &b_Electron_dxy);
   fChain->SetBranchAddress("Electron_dxyErr", &Electron_dxyErr, &b_Electron_dxyErr);
   fChain->SetBranchAddress("Electron_eta", &Electron_eta, &b_Electron_eta);
   fChain->SetBranchAddress("Electron_mass", &Electron_mass, &b_Electron_mass);
   fChain->SetBranchAddress("Electron_dz", &Electron_dz, &b_Electron_dz);
   fChain->SetBranchAddress("Electron_eCorr", &Electron_eCorr, &b_Electron_eCorr);
   fChain->SetBranchAddress("Electron_phi", &Electron_phi, &b_Electron_phi);
   fChain->SetBranchAddress("Electron_pt", &Electron_pt, &b_Electron_pt);
   fChain->SetBranchAddress("Electron_miniPFRelIso_all", &Electron_miniPFRelIso_all, &b_Electron_miniPFRelIso_all);
   fChain->SetBranchAddress("Electron_miniPFRelIso_chg", &Electron_miniPFRelIso_chg, &b_Electron_miniPFRelIso_chg);
   fChain->SetBranchAddress("Electron_mvaFall17V2Iso", &Electron_mvaFall17V2Iso, &b_Electron_mvaFall17V2Iso);
   fChain->SetBranchAddress("Electron_mvaFall17V2noIso", &Electron_mvaFall17V2noIso, &b_Electron_mvaFall17V2noIso);
   fChain->SetBranchAddress("Electron_pfRelIso03_all", &Electron_pfRelIso03_all, &b_Electron_pfRelIso03_all);
   fChain->SetBranchAddress("Electron_pfRelIso03_chg", &Electron_pfRelIso03_chg, &b_Electron_pfRelIso03_chg);
   fChain->SetBranchAddress("Electron_mvaTOP", &Electron_mvaTOP, &b_Electron_mvaTOP);
   fChain->SetBranchAddress("Electron_mvaTTH", &Electron_mvaTTH, &b_Electron_mvaTTH);
   fChain->SetBranchAddress("Electron_sip3d", &Electron_sip3d, &b_Electron_sip3d);
   fChain->SetBranchAddress("Electron_pdgId", &Electron_pdgId, &b_Electron_pdgId);
   fChain->SetBranchAddress("Electron_charge", &Electron_charge, &b_Electron_charge);
   fChain->SetBranchAddress("Electron_cutBased", &Electron_cutBased, &b_Electron_cutBased);


   fChain->SetBranchAddress("nMuon", &nMuon, &b_nMuon);
   //  fChain->SetBranchAddress("Muon_genPartIdx", &Muon_genPartIdx, &b_Muon_genPartIdx);
   fChain->SetBranchAddress("Muon_dxy", &Muon_dxy, &b_Muon_dxy);
   fChain->SetBranchAddress("Muon_dxyErr", &Muon_dxyErr, &b_Muon_dxyErr);
   fChain->SetBranchAddress("Muon_dz", &Muon_dz, &b_Muon_dz);
   fChain->SetBranchAddress("Muon_dzErr", &Muon_dzErr, &b_Muon_dzErr);
   fChain->SetBranchAddress("Muon_eta", &Muon_eta, &b_Muon_eta);
   fChain->SetBranchAddress("Muon_ip3d", &Muon_ip3d, &b_Muon_ip3d);
   fChain->SetBranchAddress("Muon_mass", &Muon_mass, &b_Muon_mass);
   fChain->SetBranchAddress("Muon_pt", &Muon_pt, &b_Muon_pt);
   fChain->SetBranchAddress("Muon_eta", &Muon_eta, &b_Muon_eta);
   fChain->SetBranchAddress("Muon_phi", &Muon_phi, &b_Muon_phi);
   fChain->SetBranchAddress("Muon_miniPFRelIso_all", &Muon_miniPFRelIso_all, &b_Muon_miniPFRelIso_all);
   fChain->SetBranchAddress("Muon_pfRelIso03_all", &Muon_pfRelIso03_all, &b_Muon_pfRelIso03_all);
   fChain->SetBranchAddress("Muon_charge", &Muon_charge, &b_Muon_charge);
   fChain->SetBranchAddress("Muon_mvaTOP", &Muon_mvaTOP, &b_Muon_mvaTOP);
   fChain->SetBranchAddress("Muon_mvaTTH", &Muon_mvaTTH, &b_Muon_mvaTTH);
   fChain->SetBranchAddress("Muon_mediumId", &Muon_mediumId, &b_Muon_mediumId);
   fChain->SetBranchAddress("Muon_mvaId", &Muon_mvaId, &b_Muon_mvaId);
   fChain->SetBranchAddress("Muon_miniIsoId", &Muon_miniIsoId, &b_Muon_miniIsoId);


   fChain->SetBranchAddress("MET_pt", &MET_pt, &b_MET_pt);
   fChain->SetBranchAddress("MET_phi", &MET_phi, &b_MET_phi);


   fChain->SetBranchAddress("nJet", &nJet, &b_nJet); 
   //fChain->SetBranchAddress("Jet_partonFlavour", &Jet_partonFlavour, &b_Jet_partonFlavour); 

   fChain->SetBranchAddress("Jet_mass", &Jet_mass, &b_Jet_mass);
   fChain->SetBranchAddress("Jet_pt", &Jet_pt, &b_Jet_pt);
   fChain->SetBranchAddress("Jet_eta", &Jet_eta, &b_Jet_eta);
   fChain->SetBranchAddress("Jet_phi", &Jet_phi, &b_Jet_phi);
   fChain->SetBranchAddress("Jet_jetId", &Jet_jetId, &b_Jet_jetId);
   fChain->SetBranchAddress("Jet_btagDeepB", &Jet_btagDeepB, &b_Jet_btagDeepB);


   fChain->SetBranchAddress("HLT_Ele35_WPTight_Gsf", &HLT_Ele35_WPTight_Gsf, &b_HLT_Ele35_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL", &HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL, &b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL);
   fChain->SetBranchAddress("HLT_IsoMu27", &HLT_IsoMu27, &b_HLT_IsoMu27);
   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8", &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8, &b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8);
   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ", &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ, &b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ);
   fChain->SetBranchAddress("HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ", &HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ, &b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ);

   fChain->SetBranchAddress("PV_npvsGood", &PV_npvsGood, &b_PV_npvsGood);

   fChain->SetBranchAddress("Flag_HBHENoiseFilter", &Flag_HBHENoiseFilter, &b_Flag_HBHENoiseFilter);
   fChain->SetBranchAddress("Flag_ecalBadCalibFilterV2", &Flag_ecalBadCalibFilterV2, &b_Flag_ecalBadCalibFilterV2);
   fChain->SetBranchAddress("Flag_eeBadScFilter", &Flag_eeBadScFilter, &b_Flag_eeBadScFilter);
   fChain->SetBranchAddress("Flag_BadPFMuonFilter", &Flag_BadPFMuonFilter, &b_Flag_BadPFMuonFilter);
   fChain->SetBranchAddress("Flag_EcalDeadCellTriggerPrimitiveFilter", &Flag_EcalDeadCellTriggerPrimitiveFilter, &b_Flag_EcalDeadCellTriggerPrimitiveFilter);
   fChain->SetBranchAddress("Flag_HBHENoiseIsoFilter", &Flag_HBHENoiseIsoFilter, &b_Flag_HBHENoiseIsoFilter);
   fChain->SetBranchAddress("Flag_globalSuperTightHalo2016Filter", &Flag_globalSuperTightHalo2016Filter, &b_Flag_globalSuperTightHalo2016Filter);
   fChain->SetBranchAddress("Flag_goodVertices", &Flag_goodVertices, &b_Flag_goodVertices);


   fChain->SetBranchAddress("L1PreFiringWeight_Nom", &L1PreFiringWeight_Nom, &b_L1PreFiringWeight_Nom);
   fChain->SetBranchAddress("L1PreFiringWeight_Dn", &L1PreFiringWeight_Dn, &b_L1PreFiringWeight_Dn);
   fChain->SetBranchAddress("L1PreFiringWeight_Up", &L1PreFiringWeight_Up, &b_L1PreFiringWeight_Up);


   //fChain->SetBranchAddress("nGenPart", &nGenPart, &b_nGenPart);
   //fChain->SetBranchAddress("GenPart_mass", &GenPart_mass, &b_GenPart_mass);
   //fChain->SetBranchAddress("GenPart_phi", &GenPart_phi, &b_GenPart_phi);
   //fChain->SetBranchAddress("GenPart_pt", &GenPart_pt, &b_GenPart_pt);
   // fChain->SetBranchAddress("GenPart_eta", &GenPart_eta, &b_GenPart_eta);
   //fChain->SetBranchAddress("GenPart_pdgId", &GenPart_pdgId, &b_GenPart_pdgId);
   //fChain->SetBranchAddress("GenPart_status", &GenPart_status, &b_GenPart_status);
   //fChain->SetBranchAddress("GenPart_genPartIdxMother", &GenPart_genPartIdxMother, &b_GenPart_genPartIdxMother);
   //fChain->SetBranchAddress("Pileup_nTrueInt", &Pileup_nTrueInt, &b_Pileup_nTrueInt);


   Notify();


}

bool MyAnalysis::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void MyAnalysis::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
int MyAnalysis::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef MyAnalysis_cxx
