//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Apr 17 10:55:07 2015 by ROOT version 5.34/25
// from TTree CollectionTree/xAOD event tree
// found on file: NTUPLES/CxAODSamples/00-08_00_00/p1845/mc14_13TeV.203918.MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_1500GeV_126.merge.DAOD_HIGG2D4.e3318_s1982_s2008_r5787_r5853_p1845/outputLabel_0.root
//////////////////////////////////////////////////////////

#ifndef CxAOD_00-08_h
#define CxAOD_00-08_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "/var/build/72a/x86_64-slc6-gcc48-opt-build/projects/ROOT-5.34.25/src/ROOT/5.34.25/cint/cint/lib/prec_stl/vector"
#include "vector.dll"
#include "/var/build/72a/x86_64-slc6-gcc48-opt-build/projects/ROOT-5.34.25/src/ROOT/5.34.25/cint/cint/lib/prec_stl/vector"
#include "/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/root/5.34.25-x86_64-slc6-gcc48-opt/cint/cint/lib/prec_stl/vector"
#include "/var/build/72a/x86_64-slc6-gcc48-opt-build/projects/ROOT-5.34.25/src/ROOT/5.34.25/cint/cint/lib/prec_stl/vector"

// Fixed size dimensions of array or collections stored in the TTree if any.
   const Int_t kMaxEventInfo___NominalAux = 1;
   const Int_t kMaxEventInfo___MUONSFSYS__1downAux = 1;
   const Int_t kMaxEventInfo___MUONSFSYS__1upAux = 1;
   const Int_t kMaxEventInfo___EL_EFF_CorrUncertainty__1downAux = 1;
   const Int_t kMaxEventInfo___EL_EFF_CorrUncertainty__1upAux = 1;
   const Int_t kMaxEventInfo___EL_EFF_UncorrUncertainty__1downAux = 1;
   const Int_t kMaxEventInfo___EL_EFF_UncorrUncertainty__1upAux = 1;
   const Int_t kMaxMuons___NominalAux = 1;
   const Int_t kMaxMuons___MUONS_SCALE__1downAux = 1;
   const Int_t kMaxMuons___MUONS_SCALE__1upAux = 1;
   const Int_t kMaxMuons___MUONS_ID__1downAux = 1;
   const Int_t kMaxMuons___MUONS_ID__1upAux = 1;
   const Int_t kMaxMuons___MUONS_MS__1downAux = 1;
   const Int_t kMaxMuons___MUONS_MS__1upAux = 1;
   const Int_t kMaxMuons___MUONSFSYS__1downAux = 1;
   const Int_t kMaxMuons___MUONSFSYS__1upAux = 1;
   const Int_t kMaxElectronCollection___NominalAux = 1;
   const Int_t kMaxElectronCollection___EG_RESOLUTION_ALL__1downAux = 1;
   const Int_t kMaxElectronCollection___EG_RESOLUTION_ALL__1upAux = 1;
   const Int_t kMaxElectronCollection___EG_SCALE_ALL__1downAux = 1;
   const Int_t kMaxElectronCollection___EG_SCALE_ALL__1upAux = 1;
   const Int_t kMaxElectronCollection___PH_SCALE_LEAKAGECONV__1downAux = 1;
   const Int_t kMaxElectronCollection___PH_SCALE_LEAKAGECONV__1upAux = 1;
   const Int_t kMaxElectronCollection___EL_EFF_CorrUncertainty__1downAux = 1;
   const Int_t kMaxElectronCollection___EL_EFF_CorrUncertainty__1upAux = 1;
   const Int_t kMaxElectronCollection___EL_EFF_UncorrUncertainty__1downAux = 1;
   const Int_t kMaxElectronCollection___EL_EFF_UncorrUncertainty__1upAux = 1;
   const Int_t kMaxAntiKt4LCTopoJets___NominalAux = 1;
   const Int_t kMaxAntiKt4LCTopoJets___JER__1upAux = 1;
   const Int_t kMaxCamKt12LCTopoJets___NominalAux = 1;
   const Int_t kMaxMET_RefFinal___NominalAux = 1;
   const Int_t kMaxMET_Track___NominalAux = 1;

class CxAOD_00-08 {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   xAOD::EventInfo_v1 *EventInfo___Nominal;
 //xAOD::AuxInfoBase *EventInfo___NominalAux_;
   string          EventInfo___NominalAux_m_name;
   xAOD::EventInfo_v1 *EventInfo___MUONSFSYS__1down;
 //xAOD::ShallowAuxInfo *EventInfo___MUONSFSYS__1downAux_;
   xAOD::ShallowAuxInfo *EventInfo___MUONSFSYS__1downAux_xAOD__ShallowAuxContainer;
   xAOD::EventInfo_v1 *EventInfo___MUONSFSYS__1up;
 //xAOD::ShallowAuxInfo *EventInfo___MUONSFSYS__1upAux_;
   xAOD::ShallowAuxInfo *EventInfo___MUONSFSYS__1upAux_xAOD__ShallowAuxContainer;
   xAOD::EventInfo_v1 *EventInfo___EL_EFF_CorrUncertainty__1down;
 //xAOD::ShallowAuxInfo *EventInfo___EL_EFF_CorrUncertainty__1downAux_;
   xAOD::ShallowAuxInfo *EventInfo___EL_EFF_CorrUncertainty__1downAux_xAOD__ShallowAuxContainer;
   xAOD::EventInfo_v1 *EventInfo___EL_EFF_CorrUncertainty__1up;
 //xAOD::ShallowAuxInfo *EventInfo___EL_EFF_CorrUncertainty__1upAux_;
   xAOD::ShallowAuxInfo *EventInfo___EL_EFF_CorrUncertainty__1upAux_xAOD__ShallowAuxContainer;
   xAOD::EventInfo_v1 *EventInfo___EL_EFF_UncorrUncertainty__1down;
 //xAOD::ShallowAuxInfo *EventInfo___EL_EFF_UncorrUncertainty__1downAux_;
   xAOD::ShallowAuxInfo *EventInfo___EL_EFF_UncorrUncertainty__1downAux_xAOD__ShallowAuxContainer;
   xAOD::EventInfo_v1 *EventInfo___EL_EFF_UncorrUncertainty__1up;
 //xAOD::ShallowAuxInfo *EventInfo___EL_EFF_UncorrUncertainty__1upAux_;
   xAOD::ShallowAuxInfo *EventInfo___EL_EFF_UncorrUncertainty__1upAux_xAOD__ShallowAuxContainer;
   DataVector<xAOD::Muon_v1> *Muons___Nominal;
 //xAOD::AuxContainerBase *Muons___NominalAux_;
   string          Muons___NominalAux_m_name;
   vector<int>     *Muons___NominalAuxDyn_partIndex;
   vector<float>   *Muons___NominalAuxDyn_topoetcone30;
   vector<float>   *Muons___NominalAuxDyn_pt;
   vector<int>     *Muons___NominalAuxDyn_isVHLooseMuon;
   vector<float>   *Muons___NominalAuxDyn_eta;
   vector<float>   *Muons___NominalAuxDyn_phi;
   vector<int>     *Muons___NominalAuxDyn_isZHSignalMuon;
   vector<float>   *Muons___NominalAuxDyn_effSF;
   vector<int>     *Muons___NominalAuxDyn_isWHSignalMuon;
   vector<float>   *Muons___NominalAuxDyn_ptcone20;
   vector<unsigned short> *Muons___NominalAuxDyn_muonType;
   vector<float>   *Muons___NominalAuxDyn_charge;
   DataVector<xAOD::Muon_v1> *Muons___MUONS_SCALE__1down;
 //xAOD::ShallowAuxContainer *Muons___MUONS_SCALE__1downAux_;
   DataLink<SG::IConstAuxStore> Muons___MUONS_SCALE__1downAux_m_parentLink;
   vector<float>   *Muons___MUONS_SCALE__1downAuxDyn_eta;
   vector<float>   *Muons___MUONS_SCALE__1downAuxDyn_phi;
   vector<float>   *Muons___MUONS_SCALE__1downAuxDyn_effSF;
   vector<int>     *Muons___MUONS_SCALE__1downAuxDyn_isVHLooseMuon;
   vector<float>   *Muons___MUONS_SCALE__1downAuxDyn_topoetcone30;
   vector<int>     *Muons___MUONS_SCALE__1downAuxDyn_isZHSignalMuon;
   vector<int>     *Muons___MUONS_SCALE__1downAuxDyn_isWHSignalMuon;
   vector<float>   *Muons___MUONS_SCALE__1downAuxDyn_ptcone20;
   vector<float>   *Muons___MUONS_SCALE__1downAuxDyn_pt;
   DataVector<xAOD::Muon_v1> *Muons___MUONS_SCALE__1up;
 //xAOD::ShallowAuxContainer *Muons___MUONS_SCALE__1upAux_;
   DataLink<SG::IConstAuxStore> Muons___MUONS_SCALE__1upAux_m_parentLink;
   vector<float>   *Muons___MUONS_SCALE__1upAuxDyn_eta;
   vector<float>   *Muons___MUONS_SCALE__1upAuxDyn_phi;
   vector<float>   *Muons___MUONS_SCALE__1upAuxDyn_effSF;
   vector<int>     *Muons___MUONS_SCALE__1upAuxDyn_isVHLooseMuon;
   vector<float>   *Muons___MUONS_SCALE__1upAuxDyn_topoetcone30;
   vector<int>     *Muons___MUONS_SCALE__1upAuxDyn_isZHSignalMuon;
   vector<int>     *Muons___MUONS_SCALE__1upAuxDyn_isWHSignalMuon;
   vector<float>   *Muons___MUONS_SCALE__1upAuxDyn_ptcone20;
   vector<float>   *Muons___MUONS_SCALE__1upAuxDyn_pt;
   DataVector<xAOD::Muon_v1> *Muons___MUONS_ID__1down;
 //xAOD::ShallowAuxContainer *Muons___MUONS_ID__1downAux_;
   DataLink<SG::IConstAuxStore> Muons___MUONS_ID__1downAux_m_parentLink;
   vector<float>   *Muons___MUONS_ID__1downAuxDyn_eta;
   vector<float>   *Muons___MUONS_ID__1downAuxDyn_phi;
   vector<float>   *Muons___MUONS_ID__1downAuxDyn_effSF;
   vector<int>     *Muons___MUONS_ID__1downAuxDyn_isVHLooseMuon;
   vector<float>   *Muons___MUONS_ID__1downAuxDyn_topoetcone30;
   vector<int>     *Muons___MUONS_ID__1downAuxDyn_isZHSignalMuon;
   vector<int>     *Muons___MUONS_ID__1downAuxDyn_isWHSignalMuon;
   vector<float>   *Muons___MUONS_ID__1downAuxDyn_ptcone20;
   vector<float>   *Muons___MUONS_ID__1downAuxDyn_pt;
   DataVector<xAOD::Muon_v1> *Muons___MUONS_ID__1up;
 //xAOD::ShallowAuxContainer *Muons___MUONS_ID__1upAux_;
   DataLink<SG::IConstAuxStore> Muons___MUONS_ID__1upAux_m_parentLink;
   vector<float>   *Muons___MUONS_ID__1upAuxDyn_eta;
   vector<float>   *Muons___MUONS_ID__1upAuxDyn_phi;
   vector<float>   *Muons___MUONS_ID__1upAuxDyn_effSF;
   vector<int>     *Muons___MUONS_ID__1upAuxDyn_isVHLooseMuon;
   vector<float>   *Muons___MUONS_ID__1upAuxDyn_topoetcone30;
   vector<int>     *Muons___MUONS_ID__1upAuxDyn_isZHSignalMuon;
   vector<int>     *Muons___MUONS_ID__1upAuxDyn_isWHSignalMuon;
   vector<float>   *Muons___MUONS_ID__1upAuxDyn_ptcone20;
   vector<float>   *Muons___MUONS_ID__1upAuxDyn_pt;
   DataVector<xAOD::Muon_v1> *Muons___MUONS_MS__1down;
 //xAOD::ShallowAuxContainer *Muons___MUONS_MS__1downAux_;
   DataLink<SG::IConstAuxStore> Muons___MUONS_MS__1downAux_m_parentLink;
   vector<float>   *Muons___MUONS_MS__1downAuxDyn_eta;
   vector<float>   *Muons___MUONS_MS__1downAuxDyn_phi;
   vector<float>   *Muons___MUONS_MS__1downAuxDyn_effSF;
   vector<int>     *Muons___MUONS_MS__1downAuxDyn_isVHLooseMuon;
   vector<float>   *Muons___MUONS_MS__1downAuxDyn_topoetcone30;
   vector<int>     *Muons___MUONS_MS__1downAuxDyn_isZHSignalMuon;
   vector<int>     *Muons___MUONS_MS__1downAuxDyn_isWHSignalMuon;
   vector<float>   *Muons___MUONS_MS__1downAuxDyn_ptcone20;
   vector<float>   *Muons___MUONS_MS__1downAuxDyn_pt;
   DataVector<xAOD::Muon_v1> *Muons___MUONS_MS__1up;
 //xAOD::ShallowAuxContainer *Muons___MUONS_MS__1upAux_;
   DataLink<SG::IConstAuxStore> Muons___MUONS_MS__1upAux_m_parentLink;
   vector<float>   *Muons___MUONS_MS__1upAuxDyn_eta;
   vector<float>   *Muons___MUONS_MS__1upAuxDyn_phi;
   vector<float>   *Muons___MUONS_MS__1upAuxDyn_effSF;
   vector<int>     *Muons___MUONS_MS__1upAuxDyn_isVHLooseMuon;
   vector<float>   *Muons___MUONS_MS__1upAuxDyn_topoetcone30;
   vector<int>     *Muons___MUONS_MS__1upAuxDyn_isZHSignalMuon;
   vector<int>     *Muons___MUONS_MS__1upAuxDyn_isWHSignalMuon;
   vector<float>   *Muons___MUONS_MS__1upAuxDyn_ptcone20;
   vector<float>   *Muons___MUONS_MS__1upAuxDyn_pt;
   DataVector<xAOD::Muon_v1> *Muons___MUONSFSYS__1down;
 //xAOD::ShallowAuxContainer *Muons___MUONSFSYS__1downAux_;
   DataLink<SG::IConstAuxStore> Muons___MUONSFSYS__1downAux_m_parentLink;
   vector<float>   *Muons___MUONSFSYS__1downAuxDyn_effSF;
   vector<int>     *Muons___MUONSFSYS__1downAuxDyn_isVHLooseMuon;
   vector<int>     *Muons___MUONSFSYS__1downAuxDyn_isZHSignalMuon;
   vector<int>     *Muons___MUONSFSYS__1downAuxDyn_isWHSignalMuon;
   DataVector<xAOD::Muon_v1> *Muons___MUONSFSYS__1up;
 //xAOD::ShallowAuxContainer *Muons___MUONSFSYS__1upAux_;
   DataLink<SG::IConstAuxStore> Muons___MUONSFSYS__1upAux_m_parentLink;
   vector<float>   *Muons___MUONSFSYS__1upAuxDyn_effSF;
   vector<int>     *Muons___MUONSFSYS__1upAuxDyn_isVHLooseMuon;
   vector<int>     *Muons___MUONSFSYS__1upAuxDyn_isZHSignalMuon;
   vector<int>     *Muons___MUONSFSYS__1upAuxDyn_isWHSignalMuon;
   DataVector<xAOD::Electron_v1> *ElectronCollection___Nominal;
 //xAOD::AuxContainerBase *ElectronCollection___NominalAux_;
   string          ElectronCollection___NominalAux_m_name;
   DataVector<xAOD::Electron_v1> *ElectronCollection___EG_RESOLUTION_ALL__1down;
 //xAOD::ShallowAuxContainer *ElectronCollection___EG_RESOLUTION_ALL__1downAux_;
   DataLink<SG::IConstAuxStore> ElectronCollection___EG_RESOLUTION_ALL__1downAux_m_parentLink;
   DataVector<xAOD::Electron_v1> *ElectronCollection___EG_RESOLUTION_ALL__1up;
 //xAOD::ShallowAuxContainer *ElectronCollection___EG_RESOLUTION_ALL__1upAux_;
   DataLink<SG::IConstAuxStore> ElectronCollection___EG_RESOLUTION_ALL__1upAux_m_parentLink;
   DataVector<xAOD::Electron_v1> *ElectronCollection___EG_SCALE_ALL__1down;
 //xAOD::ShallowAuxContainer *ElectronCollection___EG_SCALE_ALL__1downAux_;
   DataLink<SG::IConstAuxStore> ElectronCollection___EG_SCALE_ALL__1downAux_m_parentLink;
   DataVector<xAOD::Electron_v1> *ElectronCollection___EG_SCALE_ALL__1up;
 //xAOD::ShallowAuxContainer *ElectronCollection___EG_SCALE_ALL__1upAux_;
   DataLink<SG::IConstAuxStore> ElectronCollection___EG_SCALE_ALL__1upAux_m_parentLink;
   DataVector<xAOD::Electron_v1> *ElectronCollection___PH_SCALE_LEAKAGECONV__1down;
 //xAOD::ShallowAuxContainer *ElectronCollection___PH_SCALE_LEAKAGECONV__1downAux_;
   DataLink<SG::IConstAuxStore> ElectronCollection___PH_SCALE_LEAKAGECONV__1downAux_m_parentLink;
   DataVector<xAOD::Electron_v1> *ElectronCollection___PH_SCALE_LEAKAGECONV__1up;
 //xAOD::ShallowAuxContainer *ElectronCollection___PH_SCALE_LEAKAGECONV__1upAux_;
   DataLink<SG::IConstAuxStore> ElectronCollection___PH_SCALE_LEAKAGECONV__1upAux_m_parentLink;
   DataVector<xAOD::Electron_v1> *ElectronCollection___EL_EFF_CorrUncertainty__1down;
 //xAOD::ShallowAuxContainer *ElectronCollection___EL_EFF_CorrUncertainty__1downAux_;
   DataLink<SG::IConstAuxStore> ElectronCollection___EL_EFF_CorrUncertainty__1downAux_m_parentLink;
   DataVector<xAOD::Electron_v1> *ElectronCollection___EL_EFF_CorrUncertainty__1up;
 //xAOD::ShallowAuxContainer *ElectronCollection___EL_EFF_CorrUncertainty__1upAux_;
   DataLink<SG::IConstAuxStore> ElectronCollection___EL_EFF_CorrUncertainty__1upAux_m_parentLink;
   DataVector<xAOD::Electron_v1> *ElectronCollection___EL_EFF_UncorrUncertainty__1down;
 //xAOD::ShallowAuxContainer *ElectronCollection___EL_EFF_UncorrUncertainty__1downAux_;
   DataLink<SG::IConstAuxStore> ElectronCollection___EL_EFF_UncorrUncertainty__1downAux_m_parentLink;
   DataVector<xAOD::Electron_v1> *ElectronCollection___EL_EFF_UncorrUncertainty__1up;
 //xAOD::ShallowAuxContainer *ElectronCollection___EL_EFF_UncorrUncertainty__1upAux_;
   DataLink<SG::IConstAuxStore> ElectronCollection___EL_EFF_UncorrUncertainty__1upAux_m_parentLink;
   DataVector<xAOD::Jet_v1> *AntiKt4LCTopoJets___Nominal;
 //xAOD::AuxContainerBase *AntiKt4LCTopoJets___NominalAux_;
   string          AntiKt4LCTopoJets___NominalAux_m_name;
   vector<int>     *AntiKt4LCTopoJets___NominalAuxDyn_partIndex;
   vector<int>     *AntiKt4LCTopoJets___NominalAuxDyn_TruthLabelID;
   vector<float>   *AntiKt4LCTopoJets___NominalAuxDyn_jvf0;
   vector<float>   *AntiKt4LCTopoJets___NominalAuxDyn_pt;
   vector<float>   *AntiKt4LCTopoJets___NominalAuxDyn_MV1;
   vector<float>   *AntiKt4LCTopoJets___NominalAuxDyn_eta;
   vector<float>   *AntiKt4LCTopoJets___NominalAuxDyn_SV1_IP3D;
   vector<float>   *AntiKt4LCTopoJets___NominalAuxDyn_phi;
   vector<float>   *AntiKt4LCTopoJets___NominalAuxDyn_MV2c00;
   vector<float>   *AntiKt4LCTopoJets___NominalAuxDyn_m;
   vector<float>   *AntiKt4LCTopoJets___NominalAuxDyn_MV2c10;
   vector<float>   *AntiKt4LCTopoJets___NominalAuxDyn_MV2c20;
   vector<float>   *AntiKt4LCTopoJets___NominalAuxDyn_MVb;
   vector<int>     *AntiKt4LCTopoJets___NominalAuxDyn_isVetoJet;
   vector<int>     *AntiKt4LCTopoJets___NominalAuxDyn_isSignalJet;
   vector<vector<int> > *AntiKt4LCTopoJets___NominalAuxDyn_NumTrkPt500;
   DataVector<xAOD::Jet_v1> *AntiKt4LCTopoJets___JER__1up;
 //xAOD::ShallowAuxContainer *AntiKt4LCTopoJets___JER__1upAux_;
   DataLink<SG::IConstAuxStore> AntiKt4LCTopoJets___JER__1upAux_m_parentLink;
   vector<int>     *AntiKt4LCTopoJets___JER__1upAuxDyn_TruthLabelID;
   vector<float>   *AntiKt4LCTopoJets___JER__1upAuxDyn_jvf0;
   vector<float>   *AntiKt4LCTopoJets___JER__1upAuxDyn_pt;
   vector<float>   *AntiKt4LCTopoJets___JER__1upAuxDyn_MV1;
   vector<float>   *AntiKt4LCTopoJets___JER__1upAuxDyn_eta;
   vector<float>   *AntiKt4LCTopoJets___JER__1upAuxDyn_SV1_IP3D;
   vector<float>   *AntiKt4LCTopoJets___JER__1upAuxDyn_phi;
   vector<float>   *AntiKt4LCTopoJets___JER__1upAuxDyn_MV2c00;
   vector<float>   *AntiKt4LCTopoJets___JER__1upAuxDyn_m;
   vector<float>   *AntiKt4LCTopoJets___JER__1upAuxDyn_MV2c10;
   vector<float>   *AntiKt4LCTopoJets___JER__1upAuxDyn_MV2c20;
   vector<float>   *AntiKt4LCTopoJets___JER__1upAuxDyn_MVb;
   vector<int>     *AntiKt4LCTopoJets___JER__1upAuxDyn_isVetoJet;
   vector<int>     *AntiKt4LCTopoJets___JER__1upAuxDyn_isSignalJet;
   DataVector<xAOD::Jet_v1> *CamKt12LCTopoJets___Nominal;
 //xAOD::AuxContainerBase *CamKt12LCTopoJets___NominalAux_;
   string          CamKt12LCTopoJets___NominalAux_m_name;
   vector<float>   *CamKt12LCTopoJets___NominalAuxDyn_eta;
   vector<float>   *CamKt12LCTopoJets___NominalAuxDyn_jvf0;
   vector<float>   *CamKt12LCTopoJets___NominalAuxDyn_phi;
   vector<float>   *CamKt12LCTopoJets___NominalAuxDyn_Tau21;
   vector<float>   *CamKt12LCTopoJets___NominalAuxDyn_m;
   vector<float>   *CamKt12LCTopoJets___NominalAuxDyn_Tau32;
   vector<int>     *CamKt12LCTopoJets___NominalAuxDyn_partIndex;
   vector<float>   *CamKt12LCTopoJets___NominalAuxDyn_pt;
   xAOD::MissingETContainer_v1 *MET_RefFinal___Nominal;
 //xAOD::MissingETAuxContainer_v1 *MET_RefFinal___NominalAux_;
   xAOD::MissingETAuxContainer_v1 *MET_RefFinal___NominalAux_xAOD__AuxContainerBase;
   vector<double>  MET_RefFinal___NominalAux_mpx;
   vector<double>  MET_RefFinal___NominalAux_mpy;
   vector<double>  MET_RefFinal___NominalAux_sumet;
   vector<string>  MET_RefFinal___NominalAux_name;
 //vector<unsigned long long> MET_RefFinal___NominalAux_source;
   xAOD::MissingETContainer_v1 *MET_Track___Nominal;
 //xAOD::MissingETAuxContainer_v1 *MET_Track___NominalAux_;
   xAOD::MissingETAuxContainer_v1 *MET_Track___NominalAux_xAOD__AuxContainerBase;
   vector<double>  MET_Track___NominalAux_mpx;
   vector<double>  MET_Track___NominalAux_mpy;
   vector<double>  MET_Track___NominalAux_sumet;
   vector<string>  MET_Track___NominalAux_name;
 //vector<unsigned long long> MET_Track___NominalAux_source;
   Float_t         EventInfo___EL_EFF_CorrUncertainty__1downAuxDyn_leptonSF;
   Float_t         EventInfo___EL_EFF_CorrUncertainty__1upAuxDyn_leptonSF;
   Float_t         EventInfo___EL_EFF_UncorrUncertainty__1downAuxDyn_leptonSF;
   Float_t         EventInfo___EL_EFF_UncorrUncertainty__1upAuxDyn_leptonSF;
   Float_t         EventInfo___MUONSFSYS__1downAuxDyn_leptonSF;
   Float_t         EventInfo___MUONSFSYS__1upAuxDyn_leptonSF;
   ULong64_t       EventInfo___NominalAuxDyn_mcEventNumber;
   Int_t           EventInfo___NominalAuxDyn_isMC;
   Float_t         EventInfo___NominalAuxDyn_averageInteractionsPerCrossing;
   Float_t         EventInfo___NominalAuxDyn_MCEventWeight;
   UInt_t          EventInfo___NominalAuxDyn_mcChannelNumber;
   Float_t         EventInfo___NominalAuxDyn_Pileupweight;
   Float_t         EventInfo___NominalAuxDyn_zPV;
   Int_t           EventInfo___NominalAuxDyn_NVtx3Trks;
   Float_t         EventInfo___NominalAuxDyn_leptonSF;
   UInt_t          EventInfo___NominalAuxDyn_runNumber;
   ULong64_t       EventInfo___NominalAuxDyn_eventNumber;
   vector<int>     *ElectronCollection___NominalAuxDyn_partIndex;
   vector<float>   *ElectronCollection___NominalAuxDyn_topoetcone30;
   vector<char>    *ElectronCollection___NominalAuxDyn_hasSharedTrack;
   vector<float>   *ElectronCollection___NominalAuxDyn_pt;
   vector<float>   *ElectronCollection___NominalAuxDyn_eta;
   vector<float>   *ElectronCollection___NominalAuxDyn_phi;
   vector<float>   *ElectronCollection___NominalAuxDyn_m;
   vector<int>     *ElectronCollection___NominalAuxDyn_isVHLooseElectron;
   vector<int>     *ElectronCollection___NominalAuxDyn_isZHSignalElectron;
   vector<int>     *ElectronCollection___NominalAuxDyn_isVeryTightLH;
   vector<float>   *ElectronCollection___NominalAuxDyn_ptcone20;
   vector<char>    *ElectronCollection___NominalAuxDyn_Loose;
   vector<int>     *ElectronCollection___NominalAuxDyn_isWHSignalElectron;
   vector<float>   *ElectronCollection___NominalAuxDyn_effSFloose;
   vector<float>   *ElectronCollection___NominalAuxDyn_effSFtight;
   vector<float>   *ElectronCollection___NominalAuxDyn_charge;
   vector<float>   *ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_topoetcone30;
   vector<char>    *ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_hasSharedTrack;
   vector<float>   *ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_pt;
   vector<float>   *ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_eta;
   vector<float>   *ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_phi;
   vector<float>   *ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_m;
   vector<int>     *ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_isVHLooseElectron;
   vector<int>     *ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_isZHSignalElectron;
   vector<int>     *ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_isVeryTightLH;
   vector<float>   *ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_ptcone20;
   vector<char>    *ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_Loose;
   vector<int>     *ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_isWHSignalElectron;
   vector<float>   *ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_effSFloose;
   vector<float>   *ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_effSFtight;
   vector<float>   *ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_charge;
   vector<float>   *ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_topoetcone30;
   vector<char>    *ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_hasSharedTrack;
   vector<float>   *ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_pt;
   vector<float>   *ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_eta;
   vector<float>   *ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_phi;
   vector<float>   *ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_m;
   vector<int>     *ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_isVHLooseElectron;
   vector<int>     *ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_isZHSignalElectron;
   vector<int>     *ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_isVeryTightLH;
   vector<float>   *ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_ptcone20;
   vector<char>    *ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_Loose;
   vector<int>     *ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_isWHSignalElectron;
   vector<float>   *ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_effSFloose;
   vector<float>   *ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_effSFtight;
   vector<float>   *ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_charge;
   vector<float>   *ElectronCollection___EG_SCALE_ALL__1downAuxDyn_topoetcone30;
   vector<char>    *ElectronCollection___EG_SCALE_ALL__1downAuxDyn_hasSharedTrack;
   vector<float>   *ElectronCollection___EG_SCALE_ALL__1downAuxDyn_pt;
   vector<float>   *ElectronCollection___EG_SCALE_ALL__1downAuxDyn_eta;
   vector<float>   *ElectronCollection___EG_SCALE_ALL__1downAuxDyn_phi;
   vector<float>   *ElectronCollection___EG_SCALE_ALL__1downAuxDyn_m;
   vector<int>     *ElectronCollection___EG_SCALE_ALL__1downAuxDyn_isVHLooseElectron;
   vector<int>     *ElectronCollection___EG_SCALE_ALL__1downAuxDyn_isZHSignalElectron;
   vector<int>     *ElectronCollection___EG_SCALE_ALL__1downAuxDyn_isVeryTightLH;
   vector<float>   *ElectronCollection___EG_SCALE_ALL__1downAuxDyn_ptcone20;
   vector<char>    *ElectronCollection___EG_SCALE_ALL__1downAuxDyn_Loose;
   vector<int>     *ElectronCollection___EG_SCALE_ALL__1downAuxDyn_isWHSignalElectron;
   vector<float>   *ElectronCollection___EG_SCALE_ALL__1downAuxDyn_effSFloose;
   vector<float>   *ElectronCollection___EG_SCALE_ALL__1downAuxDyn_effSFtight;
   vector<float>   *ElectronCollection___EG_SCALE_ALL__1downAuxDyn_charge;
   vector<float>   *ElectronCollection___EG_SCALE_ALL__1upAuxDyn_topoetcone30;
   vector<char>    *ElectronCollection___EG_SCALE_ALL__1upAuxDyn_hasSharedTrack;
   vector<float>   *ElectronCollection___EG_SCALE_ALL__1upAuxDyn_pt;
   vector<float>   *ElectronCollection___EG_SCALE_ALL__1upAuxDyn_eta;
   vector<float>   *ElectronCollection___EG_SCALE_ALL__1upAuxDyn_phi;
   vector<float>   *ElectronCollection___EG_SCALE_ALL__1upAuxDyn_m;
   vector<int>     *ElectronCollection___EG_SCALE_ALL__1upAuxDyn_isVHLooseElectron;
   vector<int>     *ElectronCollection___EG_SCALE_ALL__1upAuxDyn_isZHSignalElectron;
   vector<int>     *ElectronCollection___EG_SCALE_ALL__1upAuxDyn_isVeryTightLH;
   vector<float>   *ElectronCollection___EG_SCALE_ALL__1upAuxDyn_ptcone20;
   vector<char>    *ElectronCollection___EG_SCALE_ALL__1upAuxDyn_Loose;
   vector<int>     *ElectronCollection___EG_SCALE_ALL__1upAuxDyn_isWHSignalElectron;
   vector<float>   *ElectronCollection___EG_SCALE_ALL__1upAuxDyn_effSFloose;
   vector<float>   *ElectronCollection___EG_SCALE_ALL__1upAuxDyn_effSFtight;
   vector<float>   *ElectronCollection___EG_SCALE_ALL__1upAuxDyn_charge;
   vector<float>   *ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_topoetcone30;
   vector<char>    *ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_hasSharedTrack;
   vector<float>   *ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_pt;
   vector<float>   *ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_eta;
   vector<float>   *ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_phi;
   vector<float>   *ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_m;
   vector<int>     *ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_isVHLooseElectron;
   vector<int>     *ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_isZHSignalElectron;
   vector<int>     *ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_isVeryTightLH;
   vector<float>   *ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_ptcone20;
   vector<char>    *ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_Loose;
   vector<int>     *ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_isWHSignalElectron;
   vector<float>   *ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_effSFloose;
   vector<float>   *ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_effSFtight;
   vector<float>   *ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_charge;
   vector<float>   *ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_topoetcone30;
   vector<char>    *ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_hasSharedTrack;
   vector<float>   *ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_pt;
   vector<float>   *ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_eta;
   vector<float>   *ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_phi;
   vector<float>   *ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_m;
   vector<int>     *ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_isVHLooseElectron;
   vector<int>     *ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_isZHSignalElectron;
   vector<int>     *ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_isVeryTightLH;
   vector<float>   *ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_ptcone20;
   vector<char>    *ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_Loose;
   vector<int>     *ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_isWHSignalElectron;
   vector<float>   *ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_effSFloose;
   vector<float>   *ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_effSFtight;
   vector<float>   *ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_charge;
   vector<int>     *ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_isZHSignalElectron;
   vector<int>     *ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_isWHSignalElectron;
   vector<int>     *ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_isVeryTightLH;
   vector<int>     *ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_isVHLooseElectron;
   vector<float>   *ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_effSFloose;
   vector<float>   *ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_effSFtight;
   vector<int>     *ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_isZHSignalElectron;
   vector<int>     *ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_isWHSignalElectron;
   vector<int>     *ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_isVeryTightLH;
   vector<int>     *ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_isVHLooseElectron;
   vector<float>   *ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_effSFloose;
   vector<float>   *ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_effSFtight;
   vector<int>     *ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_isZHSignalElectron;
   vector<int>     *ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_isWHSignalElectron;
   vector<int>     *ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_isVeryTightLH;
   vector<int>     *ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_isVHLooseElectron;
   vector<float>   *ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_effSFloose;
   vector<float>   *ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_effSFtight;
   vector<int>     *ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_isZHSignalElectron;
   vector<int>     *ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_isWHSignalElectron;
   vector<int>     *ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_isVeryTightLH;
   vector<int>     *ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_isVHLooseElectron;
   vector<float>   *ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_effSFloose;
   vector<float>   *ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_effSFtight;

   // List of branches
   TBranch        *b_EventInfo___Nominal;   //!
   TBranch        *b_EventInfo___NominalAux_m_name;   //!
   TBranch        *b_EventInfo___MUONSFSYS__1down;   //!
   TBranch        *b_EventInfo___MUONSFSYS__1downAux_xAOD__ShallowAuxContainer;   //!
   TBranch        *b_EventInfo___MUONSFSYS__1up;   //!
   TBranch        *b_EventInfo___MUONSFSYS__1upAux_xAOD__ShallowAuxContainer;   //!
   TBranch        *b_EventInfo___EL_EFF_CorrUncertainty__1down;   //!
   TBranch        *b_EventInfo___EL_EFF_CorrUncertainty__1downAux_xAOD__ShallowAuxContainer;   //!
   TBranch        *b_EventInfo___EL_EFF_CorrUncertainty__1up;   //!
   TBranch        *b_EventInfo___EL_EFF_CorrUncertainty__1upAux_xAOD__ShallowAuxContainer;   //!
   TBranch        *b_EventInfo___EL_EFF_UncorrUncertainty__1down;   //!
   TBranch        *b_EventInfo___EL_EFF_UncorrUncertainty__1downAux_xAOD__ShallowAuxContainer;   //!
   TBranch        *b_EventInfo___EL_EFF_UncorrUncertainty__1up;   //!
   TBranch        *b_EventInfo___EL_EFF_UncorrUncertainty__1upAux_xAOD__ShallowAuxContainer;   //!
   TBranch        *b_Muons___Nominal;   //!
   TBranch        *b_Muons___NominalAux_m_name;   //!
   TBranch        *b_Muons___NominalAuxDyn_partIndex;   //!
   TBranch        *b_Muons___NominalAuxDyn_topoetcone30;   //!
   TBranch        *b_Muons___NominalAuxDyn_pt;   //!
   TBranch        *b_Muons___NominalAuxDyn_isVHLooseMuon;   //!
   TBranch        *b_Muons___NominalAuxDyn_eta;   //!
   TBranch        *b_Muons___NominalAuxDyn_phi;   //!
   TBranch        *b_Muons___NominalAuxDyn_isZHSignalMuon;   //!
   TBranch        *b_Muons___NominalAuxDyn_effSF;   //!
   TBranch        *b_Muons___NominalAuxDyn_isWHSignalMuon;   //!
   TBranch        *b_Muons___NominalAuxDyn_ptcone20;   //!
   TBranch        *b_Muons___NominalAuxDyn_muonType;   //!
   TBranch        *b_Muons___NominalAuxDyn_charge;   //!
   TBranch        *b_Muons___MUONS_SCALE__1down;   //!
   TBranch        *b_Muons___MUONS_SCALE__1downAux_m_parentLink;   //!
   TBranch        *b_Muons___MUONS_SCALE__1downAuxDyn_eta;   //!
   TBranch        *b_Muons___MUONS_SCALE__1downAuxDyn_phi;   //!
   TBranch        *b_Muons___MUONS_SCALE__1downAuxDyn_effSF;   //!
   TBranch        *b_Muons___MUONS_SCALE__1downAuxDyn_isVHLooseMuon;   //!
   TBranch        *b_Muons___MUONS_SCALE__1downAuxDyn_topoetcone30;   //!
   TBranch        *b_Muons___MUONS_SCALE__1downAuxDyn_isZHSignalMuon;   //!
   TBranch        *b_Muons___MUONS_SCALE__1downAuxDyn_isWHSignalMuon;   //!
   TBranch        *b_Muons___MUONS_SCALE__1downAuxDyn_ptcone20;   //!
   TBranch        *b_Muons___MUONS_SCALE__1downAuxDyn_pt;   //!
   TBranch        *b_Muons___MUONS_SCALE__1up;   //!
   TBranch        *b_Muons___MUONS_SCALE__1upAux_m_parentLink;   //!
   TBranch        *b_Muons___MUONS_SCALE__1upAuxDyn_eta;   //!
   TBranch        *b_Muons___MUONS_SCALE__1upAuxDyn_phi;   //!
   TBranch        *b_Muons___MUONS_SCALE__1upAuxDyn_effSF;   //!
   TBranch        *b_Muons___MUONS_SCALE__1upAuxDyn_isVHLooseMuon;   //!
   TBranch        *b_Muons___MUONS_SCALE__1upAuxDyn_topoetcone30;   //!
   TBranch        *b_Muons___MUONS_SCALE__1upAuxDyn_isZHSignalMuon;   //!
   TBranch        *b_Muons___MUONS_SCALE__1upAuxDyn_isWHSignalMuon;   //!
   TBranch        *b_Muons___MUONS_SCALE__1upAuxDyn_ptcone20;   //!
   TBranch        *b_Muons___MUONS_SCALE__1upAuxDyn_pt;   //!
   TBranch        *b_Muons___MUONS_ID__1down;   //!
   TBranch        *b_Muons___MUONS_ID__1downAux_m_parentLink;   //!
   TBranch        *b_Muons___MUONS_ID__1downAuxDyn_eta;   //!
   TBranch        *b_Muons___MUONS_ID__1downAuxDyn_phi;   //!
   TBranch        *b_Muons___MUONS_ID__1downAuxDyn_effSF;   //!
   TBranch        *b_Muons___MUONS_ID__1downAuxDyn_isVHLooseMuon;   //!
   TBranch        *b_Muons___MUONS_ID__1downAuxDyn_topoetcone30;   //!
   TBranch        *b_Muons___MUONS_ID__1downAuxDyn_isZHSignalMuon;   //!
   TBranch        *b_Muons___MUONS_ID__1downAuxDyn_isWHSignalMuon;   //!
   TBranch        *b_Muons___MUONS_ID__1downAuxDyn_ptcone20;   //!
   TBranch        *b_Muons___MUONS_ID__1downAuxDyn_pt;   //!
   TBranch        *b_Muons___MUONS_ID__1up;   //!
   TBranch        *b_Muons___MUONS_ID__1upAux_m_parentLink;   //!
   TBranch        *b_Muons___MUONS_ID__1upAuxDyn_eta;   //!
   TBranch        *b_Muons___MUONS_ID__1upAuxDyn_phi;   //!
   TBranch        *b_Muons___MUONS_ID__1upAuxDyn_effSF;   //!
   TBranch        *b_Muons___MUONS_ID__1upAuxDyn_isVHLooseMuon;   //!
   TBranch        *b_Muons___MUONS_ID__1upAuxDyn_topoetcone30;   //!
   TBranch        *b_Muons___MUONS_ID__1upAuxDyn_isZHSignalMuon;   //!
   TBranch        *b_Muons___MUONS_ID__1upAuxDyn_isWHSignalMuon;   //!
   TBranch        *b_Muons___MUONS_ID__1upAuxDyn_ptcone20;   //!
   TBranch        *b_Muons___MUONS_ID__1upAuxDyn_pt;   //!
   TBranch        *b_Muons___MUONS_MS__1down;   //!
   TBranch        *b_Muons___MUONS_MS__1downAux_m_parentLink;   //!
   TBranch        *b_Muons___MUONS_MS__1downAuxDyn_eta;   //!
   TBranch        *b_Muons___MUONS_MS__1downAuxDyn_phi;   //!
   TBranch        *b_Muons___MUONS_MS__1downAuxDyn_effSF;   //!
   TBranch        *b_Muons___MUONS_MS__1downAuxDyn_isVHLooseMuon;   //!
   TBranch        *b_Muons___MUONS_MS__1downAuxDyn_topoetcone30;   //!
   TBranch        *b_Muons___MUONS_MS__1downAuxDyn_isZHSignalMuon;   //!
   TBranch        *b_Muons___MUONS_MS__1downAuxDyn_isWHSignalMuon;   //!
   TBranch        *b_Muons___MUONS_MS__1downAuxDyn_ptcone20;   //!
   TBranch        *b_Muons___MUONS_MS__1downAuxDyn_pt;   //!
   TBranch        *b_Muons___MUONS_MS__1up;   //!
   TBranch        *b_Muons___MUONS_MS__1upAux_m_parentLink;   //!
   TBranch        *b_Muons___MUONS_MS__1upAuxDyn_eta;   //!
   TBranch        *b_Muons___MUONS_MS__1upAuxDyn_phi;   //!
   TBranch        *b_Muons___MUONS_MS__1upAuxDyn_effSF;   //!
   TBranch        *b_Muons___MUONS_MS__1upAuxDyn_isVHLooseMuon;   //!
   TBranch        *b_Muons___MUONS_MS__1upAuxDyn_topoetcone30;   //!
   TBranch        *b_Muons___MUONS_MS__1upAuxDyn_isZHSignalMuon;   //!
   TBranch        *b_Muons___MUONS_MS__1upAuxDyn_isWHSignalMuon;   //!
   TBranch        *b_Muons___MUONS_MS__1upAuxDyn_ptcone20;   //!
   TBranch        *b_Muons___MUONS_MS__1upAuxDyn_pt;   //!
   TBranch        *b_Muons___MUONSFSYS__1down;   //!
   TBranch        *b_Muons___MUONSFSYS__1downAux_m_parentLink;   //!
   TBranch        *b_Muons___MUONSFSYS__1downAuxDyn_effSF;   //!
   TBranch        *b_Muons___MUONSFSYS__1downAuxDyn_isVHLooseMuon;   //!
   TBranch        *b_Muons___MUONSFSYS__1downAuxDyn_isZHSignalMuon;   //!
   TBranch        *b_Muons___MUONSFSYS__1downAuxDyn_isWHSignalMuon;   //!
   TBranch        *b_Muons___MUONSFSYS__1up;   //!
   TBranch        *b_Muons___MUONSFSYS__1upAux_m_parentLink;   //!
   TBranch        *b_Muons___MUONSFSYS__1upAuxDyn_effSF;   //!
   TBranch        *b_Muons___MUONSFSYS__1upAuxDyn_isVHLooseMuon;   //!
   TBranch        *b_Muons___MUONSFSYS__1upAuxDyn_isZHSignalMuon;   //!
   TBranch        *b_Muons___MUONSFSYS__1upAuxDyn_isWHSignalMuon;   //!
   TBranch        *b_ElectronCollection___Nominal;   //!
   TBranch        *b_ElectronCollection___NominalAux_m_name;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1down;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1downAux_m_parentLink;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1up;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1upAux_m_parentLink;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1down;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1downAux_m_parentLink;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1up;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1upAux_m_parentLink;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1down;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAux_m_parentLink;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1up;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAux_m_parentLink;   //!
   TBranch        *b_ElectronCollection___EL_EFF_CorrUncertainty__1down;   //!
   TBranch        *b_ElectronCollection___EL_EFF_CorrUncertainty__1downAux_m_parentLink;   //!
   TBranch        *b_ElectronCollection___EL_EFF_CorrUncertainty__1up;   //!
   TBranch        *b_ElectronCollection___EL_EFF_CorrUncertainty__1upAux_m_parentLink;   //!
   TBranch        *b_ElectronCollection___EL_EFF_UncorrUncertainty__1down;   //!
   TBranch        *b_ElectronCollection___EL_EFF_UncorrUncertainty__1downAux_m_parentLink;   //!
   TBranch        *b_ElectronCollection___EL_EFF_UncorrUncertainty__1up;   //!
   TBranch        *b_ElectronCollection___EL_EFF_UncorrUncertainty__1upAux_m_parentLink;   //!
   TBranch        *b_AntiKt4LCTopoJets___Nominal;   //!
   TBranch        *b_AntiKt4LCTopoJets___NominalAux_m_name;   //!
   TBranch        *b_AntiKt4LCTopoJets___NominalAuxDyn_partIndex;   //!
   TBranch        *b_AntiKt4LCTopoJets___NominalAuxDyn_TruthLabelID;   //!
   TBranch        *b_AntiKt4LCTopoJets___NominalAuxDyn_jvf0;   //!
   TBranch        *b_AntiKt4LCTopoJets___NominalAuxDyn_pt;   //!
   TBranch        *b_AntiKt4LCTopoJets___NominalAuxDyn_MV1;   //!
   TBranch        *b_AntiKt4LCTopoJets___NominalAuxDyn_eta;   //!
   TBranch        *b_AntiKt4LCTopoJets___NominalAuxDyn_SV1_IP3D;   //!
   TBranch        *b_AntiKt4LCTopoJets___NominalAuxDyn_phi;   //!
   TBranch        *b_AntiKt4LCTopoJets___NominalAuxDyn_MV2c00;   //!
   TBranch        *b_AntiKt4LCTopoJets___NominalAuxDyn_m;   //!
   TBranch        *b_AntiKt4LCTopoJets___NominalAuxDyn_MV2c10;   //!
   TBranch        *b_AntiKt4LCTopoJets___NominalAuxDyn_MV2c20;   //!
   TBranch        *b_AntiKt4LCTopoJets___NominalAuxDyn_MVb;   //!
   TBranch        *b_AntiKt4LCTopoJets___NominalAuxDyn_isVetoJet;   //!
   TBranch        *b_AntiKt4LCTopoJets___NominalAuxDyn_isSignalJet;   //!
   TBranch        *b_AntiKt4LCTopoJets___NominalAuxDyn_NumTrkPt500;   //!
   TBranch        *b_AntiKt4LCTopoJets___JER__1up;   //!
   TBranch        *b_AntiKt4LCTopoJets___JER__1upAux_m_parentLink;   //!
   TBranch        *b_AntiKt4LCTopoJets___JER__1upAuxDyn_TruthLabelID;   //!
   TBranch        *b_AntiKt4LCTopoJets___JER__1upAuxDyn_jvf0;   //!
   TBranch        *b_AntiKt4LCTopoJets___JER__1upAuxDyn_pt;   //!
   TBranch        *b_AntiKt4LCTopoJets___JER__1upAuxDyn_MV1;   //!
   TBranch        *b_AntiKt4LCTopoJets___JER__1upAuxDyn_eta;   //!
   TBranch        *b_AntiKt4LCTopoJets___JER__1upAuxDyn_SV1_IP3D;   //!
   TBranch        *b_AntiKt4LCTopoJets___JER__1upAuxDyn_phi;   //!
   TBranch        *b_AntiKt4LCTopoJets___JER__1upAuxDyn_MV2c00;   //!
   TBranch        *b_AntiKt4LCTopoJets___JER__1upAuxDyn_m;   //!
   TBranch        *b_AntiKt4LCTopoJets___JER__1upAuxDyn_MV2c10;   //!
   TBranch        *b_AntiKt4LCTopoJets___JER__1upAuxDyn_MV2c20;   //!
   TBranch        *b_AntiKt4LCTopoJets___JER__1upAuxDyn_MVb;   //!
   TBranch        *b_AntiKt4LCTopoJets___JER__1upAuxDyn_isVetoJet;   //!
   TBranch        *b_AntiKt4LCTopoJets___JER__1upAuxDyn_isSignalJet;   //!
   TBranch        *b_CamKt12LCTopoJets___Nominal;   //!
   TBranch        *b_CamKt12LCTopoJets___NominalAux_m_name;   //!
   TBranch        *b_CamKt12LCTopoJets___NominalAuxDyn_eta;   //!
   TBranch        *b_CamKt12LCTopoJets___NominalAuxDyn_jvf0;   //!
   TBranch        *b_CamKt12LCTopoJets___NominalAuxDyn_phi;   //!
   TBranch        *b_CamKt12LCTopoJets___NominalAuxDyn_Tau21;   //!
   TBranch        *b_CamKt12LCTopoJets___NominalAuxDyn_m;   //!
   TBranch        *b_CamKt12LCTopoJets___NominalAuxDyn_Tau32;   //!
   TBranch        *b_CamKt12LCTopoJets___NominalAuxDyn_partIndex;   //!
   TBranch        *b_CamKt12LCTopoJets___NominalAuxDyn_pt;   //!
   TBranch        *b_MET_RefFinal___Nominal;   //!
   TBranch        *b_MET_RefFinal___NominalAux_xAOD__AuxContainerBase;   //!
   TBranch        *b_MET_RefFinal___NominalAux_mpx;   //!
   TBranch        *b_MET_RefFinal___NominalAux_mpy;   //!
   TBranch        *b_MET_RefFinal___NominalAux_sumet;   //!
   TBranch        *b_MET_RefFinal___NominalAux_name;   //!
   TBranch        *b_MET_Track___Nominal;   //!
   TBranch        *b_MET_Track___NominalAux_xAOD__AuxContainerBase;   //!
   TBranch        *b_MET_Track___NominalAux_mpx;   //!
   TBranch        *b_MET_Track___NominalAux_mpy;   //!
   TBranch        *b_MET_Track___NominalAux_sumet;   //!
   TBranch        *b_MET_Track___NominalAux_name;   //!
   TBranch        *b_EventInfo___EL_EFF_CorrUncertainty__1downAuxDyn_leptonSF;   //!
   TBranch        *b_EventInfo___EL_EFF_CorrUncertainty__1upAuxDyn_leptonSF;   //!
   TBranch        *b_EventInfo___EL_EFF_UncorrUncertainty__1downAuxDyn_leptonSF;   //!
   TBranch        *b_EventInfo___EL_EFF_UncorrUncertainty__1upAuxDyn_leptonSF;   //!
   TBranch        *b_EventInfo___MUONSFSYS__1downAuxDyn_leptonSF;   //!
   TBranch        *b_EventInfo___MUONSFSYS__1upAuxDyn_leptonSF;   //!
   TBranch        *b_EventInfo___NominalAuxDyn_mcEventNumber;   //!
   TBranch        *b_EventInfo___NominalAuxDyn_isMC;   //!
   TBranch        *b_EventInfo___NominalAuxDyn_averageInteractionsPerCrossing;   //!
   TBranch        *b_EventInfo___NominalAuxDyn_MCEventWeight;   //!
   TBranch        *b_EventInfo___NominalAuxDyn_mcChannelNumber;   //!
   TBranch        *b_EventInfo___NominalAuxDyn_Pileupweight;   //!
   TBranch        *b_EventInfo___NominalAuxDyn_zPV;   //!
   TBranch        *b_EventInfo___NominalAuxDyn_NVtx3Trks;   //!
   TBranch        *b_EventInfo___NominalAuxDyn_leptonSF;   //!
   TBranch        *b_EventInfo___NominalAuxDyn_runNumber;   //!
   TBranch        *b_EventInfo___NominalAuxDyn_eventNumber;   //!
   TBranch        *b_ElectronCollection___NominalAuxDyn_partIndex;   //!
   TBranch        *b_ElectronCollection___NominalAuxDyn_topoetcone30;   //!
   TBranch        *b_ElectronCollection___NominalAuxDyn_hasSharedTrack;   //!
   TBranch        *b_ElectronCollection___NominalAuxDyn_pt;   //!
   TBranch        *b_ElectronCollection___NominalAuxDyn_eta;   //!
   TBranch        *b_ElectronCollection___NominalAuxDyn_phi;   //!
   TBranch        *b_ElectronCollection___NominalAuxDyn_m;   //!
   TBranch        *b_ElectronCollection___NominalAuxDyn_isVHLooseElectron;   //!
   TBranch        *b_ElectronCollection___NominalAuxDyn_isZHSignalElectron;   //!
   TBranch        *b_ElectronCollection___NominalAuxDyn_isVeryTightLH;   //!
   TBranch        *b_ElectronCollection___NominalAuxDyn_ptcone20;   //!
   TBranch        *b_ElectronCollection___NominalAuxDyn_Loose;   //!
   TBranch        *b_ElectronCollection___NominalAuxDyn_isWHSignalElectron;   //!
   TBranch        *b_ElectronCollection___NominalAuxDyn_effSFloose;   //!
   TBranch        *b_ElectronCollection___NominalAuxDyn_effSFtight;   //!
   TBranch        *b_ElectronCollection___NominalAuxDyn_charge;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_topoetcone30;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_hasSharedTrack;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_pt;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_eta;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_phi;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_m;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_isVHLooseElectron;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_isZHSignalElectron;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_isVeryTightLH;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_ptcone20;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_Loose;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_isWHSignalElectron;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_effSFloose;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_effSFtight;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_charge;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_topoetcone30;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_hasSharedTrack;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_pt;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_eta;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_phi;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_m;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_isVHLooseElectron;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_isZHSignalElectron;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_isVeryTightLH;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_ptcone20;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_Loose;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_isWHSignalElectron;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_effSFloose;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_effSFtight;   //!
   TBranch        *b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_charge;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_topoetcone30;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_hasSharedTrack;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_pt;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_eta;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_phi;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_m;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_isVHLooseElectron;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_isZHSignalElectron;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_isVeryTightLH;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_ptcone20;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_Loose;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_isWHSignalElectron;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_effSFloose;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_effSFtight;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_charge;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_topoetcone30;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_hasSharedTrack;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_pt;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_eta;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_phi;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_m;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_isVHLooseElectron;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_isZHSignalElectron;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_isVeryTightLH;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_ptcone20;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_Loose;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_isWHSignalElectron;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_effSFloose;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_effSFtight;   //!
   TBranch        *b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_charge;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_topoetcone30;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_hasSharedTrack;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_pt;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_eta;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_phi;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_m;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_isVHLooseElectron;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_isZHSignalElectron;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_isVeryTightLH;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_ptcone20;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_Loose;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_isWHSignalElectron;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_effSFloose;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_effSFtight;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_charge;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_topoetcone30;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_hasSharedTrack;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_pt;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_eta;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_phi;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_m;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_isVHLooseElectron;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_isZHSignalElectron;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_isVeryTightLH;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_ptcone20;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_Loose;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_isWHSignalElectron;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_effSFloose;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_effSFtight;   //!
   TBranch        *b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_charge;   //!
   TBranch        *b_ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_isZHSignalElectron;   //!
   TBranch        *b_ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_isWHSignalElectron;   //!
   TBranch        *b_ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_isVeryTightLH;   //!
   TBranch        *b_ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_isVHLooseElectron;   //!
   TBranch        *b_ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_effSFloose;   //!
   TBranch        *b_ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_effSFtight;   //!
   TBranch        *b_ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_isZHSignalElectron;   //!
   TBranch        *b_ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_isWHSignalElectron;   //!
   TBranch        *b_ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_isVeryTightLH;   //!
   TBranch        *b_ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_isVHLooseElectron;   //!
   TBranch        *b_ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_effSFloose;   //!
   TBranch        *b_ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_effSFtight;   //!
   TBranch        *b_ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_isZHSignalElectron;   //!
   TBranch        *b_ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_isWHSignalElectron;   //!
   TBranch        *b_ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_isVeryTightLH;   //!
   TBranch        *b_ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_isVHLooseElectron;   //!
   TBranch        *b_ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_effSFloose;   //!
   TBranch        *b_ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_effSFtight;   //!
   TBranch        *b_ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_isZHSignalElectron;   //!
   TBranch        *b_ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_isWHSignalElectron;   //!
   TBranch        *b_ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_isVeryTightLH;   //!
   TBranch        *b_ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_isVHLooseElectron;   //!
   TBranch        *b_ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_effSFloose;   //!
   TBranch        *b_ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_effSFtight;   //!

   CxAOD_00-08(TTree *tree=0);
   virtual ~CxAOD_00-08();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef CxAOD_00-08_cxx
CxAOD_00-08::CxAOD_00-08(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("NTUPLES/CxAODSamples/00-08_00_00/p1845/mc14_13TeV.203918.MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_1500GeV_126.merge.DAOD_HIGG2D4.e3318_s1982_s2008_r5787_r5853_p1845/outputLabel_0.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("NTUPLES/CxAODSamples/00-08_00_00/p1845/mc14_13TeV.203918.MadgraphPythia8_AU2MSTW2008LO_HVT_Zh_llbb_1500GeV_126.merge.DAOD_HIGG2D4.e3318_s1982_s2008_r5787_r5853_p1845/outputLabel_0.root");
      }
      f->GetObject("CollectionTree",tree);

   }
   Init(tree);
}

CxAOD_00-08::~CxAOD_00-08()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t CxAOD_00-08::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t CxAOD_00-08::LoadTree(Long64_t entry)
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

void CxAOD_00-08::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   EventInfo___Nominal = 0;
   EventInfo___MUONSFSYS__1down = 0;
   EventInfo___MUONSFSYS__1downAux_xAOD__ShallowAuxContainer = 0;
   EventInfo___MUONSFSYS__1up = 0;
   EventInfo___MUONSFSYS__1upAux_xAOD__ShallowAuxContainer = 0;
   EventInfo___EL_EFF_CorrUncertainty__1down = 0;
   EventInfo___EL_EFF_CorrUncertainty__1downAux_xAOD__ShallowAuxContainer = 0;
   EventInfo___EL_EFF_CorrUncertainty__1up = 0;
   EventInfo___EL_EFF_CorrUncertainty__1upAux_xAOD__ShallowAuxContainer = 0;
   EventInfo___EL_EFF_UncorrUncertainty__1down = 0;
   EventInfo___EL_EFF_UncorrUncertainty__1downAux_xAOD__ShallowAuxContainer = 0;
   EventInfo___EL_EFF_UncorrUncertainty__1up = 0;
   EventInfo___EL_EFF_UncorrUncertainty__1upAux_xAOD__ShallowAuxContainer = 0;
   Muons___Nominal = 0;
   Muons___NominalAuxDyn_partIndex = 0;
   Muons___NominalAuxDyn_topoetcone30 = 0;
   Muons___NominalAuxDyn_pt = 0;
   Muons___NominalAuxDyn_isVHLooseMuon = 0;
   Muons___NominalAuxDyn_eta = 0;
   Muons___NominalAuxDyn_phi = 0;
   Muons___NominalAuxDyn_isZHSignalMuon = 0;
   Muons___NominalAuxDyn_effSF = 0;
   Muons___NominalAuxDyn_isWHSignalMuon = 0;
   Muons___NominalAuxDyn_ptcone20 = 0;
   Muons___NominalAuxDyn_muonType = 0;
   Muons___NominalAuxDyn_charge = 0;
   Muons___MUONS_SCALE__1down = 0;
   Muons___MUONS_SCALE__1downAuxDyn_eta = 0;
   Muons___MUONS_SCALE__1downAuxDyn_phi = 0;
   Muons___MUONS_SCALE__1downAuxDyn_effSF = 0;
   Muons___MUONS_SCALE__1downAuxDyn_isVHLooseMuon = 0;
   Muons___MUONS_SCALE__1downAuxDyn_topoetcone30 = 0;
   Muons___MUONS_SCALE__1downAuxDyn_isZHSignalMuon = 0;
   Muons___MUONS_SCALE__1downAuxDyn_isWHSignalMuon = 0;
   Muons___MUONS_SCALE__1downAuxDyn_ptcone20 = 0;
   Muons___MUONS_SCALE__1downAuxDyn_pt = 0;
   Muons___MUONS_SCALE__1up = 0;
   Muons___MUONS_SCALE__1upAuxDyn_eta = 0;
   Muons___MUONS_SCALE__1upAuxDyn_phi = 0;
   Muons___MUONS_SCALE__1upAuxDyn_effSF = 0;
   Muons___MUONS_SCALE__1upAuxDyn_isVHLooseMuon = 0;
   Muons___MUONS_SCALE__1upAuxDyn_topoetcone30 = 0;
   Muons___MUONS_SCALE__1upAuxDyn_isZHSignalMuon = 0;
   Muons___MUONS_SCALE__1upAuxDyn_isWHSignalMuon = 0;
   Muons___MUONS_SCALE__1upAuxDyn_ptcone20 = 0;
   Muons___MUONS_SCALE__1upAuxDyn_pt = 0;
   Muons___MUONS_ID__1down = 0;
   Muons___MUONS_ID__1downAuxDyn_eta = 0;
   Muons___MUONS_ID__1downAuxDyn_phi = 0;
   Muons___MUONS_ID__1downAuxDyn_effSF = 0;
   Muons___MUONS_ID__1downAuxDyn_isVHLooseMuon = 0;
   Muons___MUONS_ID__1downAuxDyn_topoetcone30 = 0;
   Muons___MUONS_ID__1downAuxDyn_isZHSignalMuon = 0;
   Muons___MUONS_ID__1downAuxDyn_isWHSignalMuon = 0;
   Muons___MUONS_ID__1downAuxDyn_ptcone20 = 0;
   Muons___MUONS_ID__1downAuxDyn_pt = 0;
   Muons___MUONS_ID__1up = 0;
   Muons___MUONS_ID__1upAuxDyn_eta = 0;
   Muons___MUONS_ID__1upAuxDyn_phi = 0;
   Muons___MUONS_ID__1upAuxDyn_effSF = 0;
   Muons___MUONS_ID__1upAuxDyn_isVHLooseMuon = 0;
   Muons___MUONS_ID__1upAuxDyn_topoetcone30 = 0;
   Muons___MUONS_ID__1upAuxDyn_isZHSignalMuon = 0;
   Muons___MUONS_ID__1upAuxDyn_isWHSignalMuon = 0;
   Muons___MUONS_ID__1upAuxDyn_ptcone20 = 0;
   Muons___MUONS_ID__1upAuxDyn_pt = 0;
   Muons___MUONS_MS__1down = 0;
   Muons___MUONS_MS__1downAuxDyn_eta = 0;
   Muons___MUONS_MS__1downAuxDyn_phi = 0;
   Muons___MUONS_MS__1downAuxDyn_effSF = 0;
   Muons___MUONS_MS__1downAuxDyn_isVHLooseMuon = 0;
   Muons___MUONS_MS__1downAuxDyn_topoetcone30 = 0;
   Muons___MUONS_MS__1downAuxDyn_isZHSignalMuon = 0;
   Muons___MUONS_MS__1downAuxDyn_isWHSignalMuon = 0;
   Muons___MUONS_MS__1downAuxDyn_ptcone20 = 0;
   Muons___MUONS_MS__1downAuxDyn_pt = 0;
   Muons___MUONS_MS__1up = 0;
   Muons___MUONS_MS__1upAuxDyn_eta = 0;
   Muons___MUONS_MS__1upAuxDyn_phi = 0;
   Muons___MUONS_MS__1upAuxDyn_effSF = 0;
   Muons___MUONS_MS__1upAuxDyn_isVHLooseMuon = 0;
   Muons___MUONS_MS__1upAuxDyn_topoetcone30 = 0;
   Muons___MUONS_MS__1upAuxDyn_isZHSignalMuon = 0;
   Muons___MUONS_MS__1upAuxDyn_isWHSignalMuon = 0;
   Muons___MUONS_MS__1upAuxDyn_ptcone20 = 0;
   Muons___MUONS_MS__1upAuxDyn_pt = 0;
   Muons___MUONSFSYS__1down = 0;
   Muons___MUONSFSYS__1downAuxDyn_effSF = 0;
   Muons___MUONSFSYS__1downAuxDyn_isVHLooseMuon = 0;
   Muons___MUONSFSYS__1downAuxDyn_isZHSignalMuon = 0;
   Muons___MUONSFSYS__1downAuxDyn_isWHSignalMuon = 0;
   Muons___MUONSFSYS__1up = 0;
   Muons___MUONSFSYS__1upAuxDyn_effSF = 0;
   Muons___MUONSFSYS__1upAuxDyn_isVHLooseMuon = 0;
   Muons___MUONSFSYS__1upAuxDyn_isZHSignalMuon = 0;
   Muons___MUONSFSYS__1upAuxDyn_isWHSignalMuon = 0;
   ElectronCollection___Nominal = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1down = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1up = 0;
   ElectronCollection___EG_SCALE_ALL__1down = 0;
   ElectronCollection___EG_SCALE_ALL__1up = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1down = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1up = 0;
   ElectronCollection___EL_EFF_CorrUncertainty__1down = 0;
   ElectronCollection___EL_EFF_CorrUncertainty__1up = 0;
   ElectronCollection___EL_EFF_UncorrUncertainty__1down = 0;
   ElectronCollection___EL_EFF_UncorrUncertainty__1up = 0;
   AntiKt4LCTopoJets___Nominal = 0;
   AntiKt4LCTopoJets___NominalAuxDyn_partIndex = 0;
   AntiKt4LCTopoJets___NominalAuxDyn_TruthLabelID = 0;
   AntiKt4LCTopoJets___NominalAuxDyn_jvf0 = 0;
   AntiKt4LCTopoJets___NominalAuxDyn_pt = 0;
   AntiKt4LCTopoJets___NominalAuxDyn_MV1 = 0;
   AntiKt4LCTopoJets___NominalAuxDyn_eta = 0;
   AntiKt4LCTopoJets___NominalAuxDyn_SV1_IP3D = 0;
   AntiKt4LCTopoJets___NominalAuxDyn_phi = 0;
   AntiKt4LCTopoJets___NominalAuxDyn_MV2c00 = 0;
   AntiKt4LCTopoJets___NominalAuxDyn_m = 0;
   AntiKt4LCTopoJets___NominalAuxDyn_MV2c10 = 0;
   AntiKt4LCTopoJets___NominalAuxDyn_MV2c20 = 0;
   AntiKt4LCTopoJets___NominalAuxDyn_MVb = 0;
   AntiKt4LCTopoJets___NominalAuxDyn_isVetoJet = 0;
   AntiKt4LCTopoJets___NominalAuxDyn_isSignalJet = 0;
   AntiKt4LCTopoJets___NominalAuxDyn_NumTrkPt500 = 0;
   AntiKt4LCTopoJets___JER__1up = 0;
   AntiKt4LCTopoJets___JER__1upAuxDyn_TruthLabelID = 0;
   AntiKt4LCTopoJets___JER__1upAuxDyn_jvf0 = 0;
   AntiKt4LCTopoJets___JER__1upAuxDyn_pt = 0;
   AntiKt4LCTopoJets___JER__1upAuxDyn_MV1 = 0;
   AntiKt4LCTopoJets___JER__1upAuxDyn_eta = 0;
   AntiKt4LCTopoJets___JER__1upAuxDyn_SV1_IP3D = 0;
   AntiKt4LCTopoJets___JER__1upAuxDyn_phi = 0;
   AntiKt4LCTopoJets___JER__1upAuxDyn_MV2c00 = 0;
   AntiKt4LCTopoJets___JER__1upAuxDyn_m = 0;
   AntiKt4LCTopoJets___JER__1upAuxDyn_MV2c10 = 0;
   AntiKt4LCTopoJets___JER__1upAuxDyn_MV2c20 = 0;
   AntiKt4LCTopoJets___JER__1upAuxDyn_MVb = 0;
   AntiKt4LCTopoJets___JER__1upAuxDyn_isVetoJet = 0;
   AntiKt4LCTopoJets___JER__1upAuxDyn_isSignalJet = 0;
   CamKt12LCTopoJets___Nominal = 0;
   CamKt12LCTopoJets___NominalAuxDyn_eta = 0;
   CamKt12LCTopoJets___NominalAuxDyn_jvf0 = 0;
   CamKt12LCTopoJets___NominalAuxDyn_phi = 0;
   CamKt12LCTopoJets___NominalAuxDyn_Tau21 = 0;
   CamKt12LCTopoJets___NominalAuxDyn_m = 0;
   CamKt12LCTopoJets___NominalAuxDyn_Tau32 = 0;
   CamKt12LCTopoJets___NominalAuxDyn_partIndex = 0;
   CamKt12LCTopoJets___NominalAuxDyn_pt = 0;
   MET_RefFinal___Nominal = 0;
   MET_RefFinal___NominalAux_xAOD__AuxContainerBase = 0;
   MET_Track___Nominal = 0;
   MET_Track___NominalAux_xAOD__AuxContainerBase = 0;
   ElectronCollection___NominalAuxDyn_partIndex = 0;
   ElectronCollection___NominalAuxDyn_topoetcone30 = 0;
   ElectronCollection___NominalAuxDyn_hasSharedTrack = 0;
   ElectronCollection___NominalAuxDyn_pt = 0;
   ElectronCollection___NominalAuxDyn_eta = 0;
   ElectronCollection___NominalAuxDyn_phi = 0;
   ElectronCollection___NominalAuxDyn_m = 0;
   ElectronCollection___NominalAuxDyn_isVHLooseElectron = 0;
   ElectronCollection___NominalAuxDyn_isZHSignalElectron = 0;
   ElectronCollection___NominalAuxDyn_isVeryTightLH = 0;
   ElectronCollection___NominalAuxDyn_ptcone20 = 0;
   ElectronCollection___NominalAuxDyn_Loose = 0;
   ElectronCollection___NominalAuxDyn_isWHSignalElectron = 0;
   ElectronCollection___NominalAuxDyn_effSFloose = 0;
   ElectronCollection___NominalAuxDyn_effSFtight = 0;
   ElectronCollection___NominalAuxDyn_charge = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_topoetcone30 = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_hasSharedTrack = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_pt = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_eta = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_phi = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_m = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_isVHLooseElectron = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_isZHSignalElectron = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_isVeryTightLH = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_ptcone20 = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_Loose = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_isWHSignalElectron = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_effSFloose = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_effSFtight = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_charge = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_topoetcone30 = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_hasSharedTrack = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_pt = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_eta = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_phi = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_m = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_isVHLooseElectron = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_isZHSignalElectron = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_isVeryTightLH = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_ptcone20 = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_Loose = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_isWHSignalElectron = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_effSFloose = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_effSFtight = 0;
   ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_charge = 0;
   ElectronCollection___EG_SCALE_ALL__1downAuxDyn_topoetcone30 = 0;
   ElectronCollection___EG_SCALE_ALL__1downAuxDyn_hasSharedTrack = 0;
   ElectronCollection___EG_SCALE_ALL__1downAuxDyn_pt = 0;
   ElectronCollection___EG_SCALE_ALL__1downAuxDyn_eta = 0;
   ElectronCollection___EG_SCALE_ALL__1downAuxDyn_phi = 0;
   ElectronCollection___EG_SCALE_ALL__1downAuxDyn_m = 0;
   ElectronCollection___EG_SCALE_ALL__1downAuxDyn_isVHLooseElectron = 0;
   ElectronCollection___EG_SCALE_ALL__1downAuxDyn_isZHSignalElectron = 0;
   ElectronCollection___EG_SCALE_ALL__1downAuxDyn_isVeryTightLH = 0;
   ElectronCollection___EG_SCALE_ALL__1downAuxDyn_ptcone20 = 0;
   ElectronCollection___EG_SCALE_ALL__1downAuxDyn_Loose = 0;
   ElectronCollection___EG_SCALE_ALL__1downAuxDyn_isWHSignalElectron = 0;
   ElectronCollection___EG_SCALE_ALL__1downAuxDyn_effSFloose = 0;
   ElectronCollection___EG_SCALE_ALL__1downAuxDyn_effSFtight = 0;
   ElectronCollection___EG_SCALE_ALL__1downAuxDyn_charge = 0;
   ElectronCollection___EG_SCALE_ALL__1upAuxDyn_topoetcone30 = 0;
   ElectronCollection___EG_SCALE_ALL__1upAuxDyn_hasSharedTrack = 0;
   ElectronCollection___EG_SCALE_ALL__1upAuxDyn_pt = 0;
   ElectronCollection___EG_SCALE_ALL__1upAuxDyn_eta = 0;
   ElectronCollection___EG_SCALE_ALL__1upAuxDyn_phi = 0;
   ElectronCollection___EG_SCALE_ALL__1upAuxDyn_m = 0;
   ElectronCollection___EG_SCALE_ALL__1upAuxDyn_isVHLooseElectron = 0;
   ElectronCollection___EG_SCALE_ALL__1upAuxDyn_isZHSignalElectron = 0;
   ElectronCollection___EG_SCALE_ALL__1upAuxDyn_isVeryTightLH = 0;
   ElectronCollection___EG_SCALE_ALL__1upAuxDyn_ptcone20 = 0;
   ElectronCollection___EG_SCALE_ALL__1upAuxDyn_Loose = 0;
   ElectronCollection___EG_SCALE_ALL__1upAuxDyn_isWHSignalElectron = 0;
   ElectronCollection___EG_SCALE_ALL__1upAuxDyn_effSFloose = 0;
   ElectronCollection___EG_SCALE_ALL__1upAuxDyn_effSFtight = 0;
   ElectronCollection___EG_SCALE_ALL__1upAuxDyn_charge = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_topoetcone30 = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_hasSharedTrack = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_pt = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_eta = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_phi = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_m = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_isVHLooseElectron = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_isZHSignalElectron = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_isVeryTightLH = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_ptcone20 = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_Loose = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_isWHSignalElectron = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_effSFloose = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_effSFtight = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_charge = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_topoetcone30 = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_hasSharedTrack = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_pt = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_eta = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_phi = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_m = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_isVHLooseElectron = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_isZHSignalElectron = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_isVeryTightLH = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_ptcone20 = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_Loose = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_isWHSignalElectron = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_effSFloose = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_effSFtight = 0;
   ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_charge = 0;
   ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_isZHSignalElectron = 0;
   ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_isWHSignalElectron = 0;
   ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_isVeryTightLH = 0;
   ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_isVHLooseElectron = 0;
   ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_effSFloose = 0;
   ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_effSFtight = 0;
   ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_isZHSignalElectron = 0;
   ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_isWHSignalElectron = 0;
   ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_isVeryTightLH = 0;
   ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_isVHLooseElectron = 0;
   ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_effSFloose = 0;
   ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_effSFtight = 0;
   ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_isZHSignalElectron = 0;
   ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_isWHSignalElectron = 0;
   ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_isVeryTightLH = 0;
   ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_isVHLooseElectron = 0;
   ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_effSFloose = 0;
   ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_effSFtight = 0;
   ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_isZHSignalElectron = 0;
   ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_isWHSignalElectron = 0;
   ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_isVeryTightLH = 0;
   ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_isVHLooseElectron = 0;
   ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_effSFloose = 0;
   ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_effSFtight = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("EventInfo___Nominal", &EventInfo___Nominal, &b_EventInfo___Nominal);
   fChain->SetBranchAddress("EventInfo___NominalAux.m_name", &EventInfo___NominalAux_m_name, &b_EventInfo___NominalAux_m_name);
   fChain->SetBranchAddress("EventInfo___MUONSFSYS__1down", &EventInfo___MUONSFSYS__1down, &b_EventInfo___MUONSFSYS__1down);
   fChain->SetBranchAddress("EventInfo___MUONSFSYS__1downAux.xAOD::ShallowAuxContainer", &EventInfo___MUONSFSYS__1downAux_xAOD__ShallowAuxContainer, &b_EventInfo___MUONSFSYS__1downAux_xAOD__ShallowAuxContainer);
   fChain->SetBranchAddress("EventInfo___MUONSFSYS__1up", &EventInfo___MUONSFSYS__1up, &b_EventInfo___MUONSFSYS__1up);
   fChain->SetBranchAddress("EventInfo___MUONSFSYS__1upAux.xAOD::ShallowAuxContainer", &EventInfo___MUONSFSYS__1upAux_xAOD__ShallowAuxContainer, &b_EventInfo___MUONSFSYS__1upAux_xAOD__ShallowAuxContainer);
   fChain->SetBranchAddress("EventInfo___EL_EFF_CorrUncertainty__1down", &EventInfo___EL_EFF_CorrUncertainty__1down, &b_EventInfo___EL_EFF_CorrUncertainty__1down);
   fChain->SetBranchAddress("EventInfo___EL_EFF_CorrUncertainty__1downAux.xAOD::ShallowAuxContainer", &EventInfo___EL_EFF_CorrUncertainty__1downAux_xAOD__ShallowAuxContainer, &b_EventInfo___EL_EFF_CorrUncertainty__1downAux_xAOD__ShallowAuxContainer);
   fChain->SetBranchAddress("EventInfo___EL_EFF_CorrUncertainty__1up", &EventInfo___EL_EFF_CorrUncertainty__1up, &b_EventInfo___EL_EFF_CorrUncertainty__1up);
   fChain->SetBranchAddress("EventInfo___EL_EFF_CorrUncertainty__1upAux.xAOD::ShallowAuxContainer", &EventInfo___EL_EFF_CorrUncertainty__1upAux_xAOD__ShallowAuxContainer, &b_EventInfo___EL_EFF_CorrUncertainty__1upAux_xAOD__ShallowAuxContainer);
   fChain->SetBranchAddress("EventInfo___EL_EFF_UncorrUncertainty__1down", &EventInfo___EL_EFF_UncorrUncertainty__1down, &b_EventInfo___EL_EFF_UncorrUncertainty__1down);
   fChain->SetBranchAddress("EventInfo___EL_EFF_UncorrUncertainty__1downAux.xAOD::ShallowAuxContainer", &EventInfo___EL_EFF_UncorrUncertainty__1downAux_xAOD__ShallowAuxContainer, &b_EventInfo___EL_EFF_UncorrUncertainty__1downAux_xAOD__ShallowAuxContainer);
   fChain->SetBranchAddress("EventInfo___EL_EFF_UncorrUncertainty__1up", &EventInfo___EL_EFF_UncorrUncertainty__1up, &b_EventInfo___EL_EFF_UncorrUncertainty__1up);
   fChain->SetBranchAddress("EventInfo___EL_EFF_UncorrUncertainty__1upAux.xAOD::ShallowAuxContainer", &EventInfo___EL_EFF_UncorrUncertainty__1upAux_xAOD__ShallowAuxContainer, &b_EventInfo___EL_EFF_UncorrUncertainty__1upAux_xAOD__ShallowAuxContainer);
   fChain->SetBranchAddress("Muons___Nominal", &Muons___Nominal, &b_Muons___Nominal);
   fChain->SetBranchAddress("Muons___NominalAux.m_name", &Muons___NominalAux_m_name, &b_Muons___NominalAux_m_name);
   fChain->SetBranchAddress("Muons___NominalAuxDyn.partIndex", &Muons___NominalAuxDyn_partIndex, &b_Muons___NominalAuxDyn_partIndex);
   fChain->SetBranchAddress("Muons___NominalAuxDyn.topoetcone30", &Muons___NominalAuxDyn_topoetcone30, &b_Muons___NominalAuxDyn_topoetcone30);
   fChain->SetBranchAddress("Muons___NominalAuxDyn.pt", &Muons___NominalAuxDyn_pt, &b_Muons___NominalAuxDyn_pt);
   fChain->SetBranchAddress("Muons___NominalAuxDyn.isVHLooseMuon", &Muons___NominalAuxDyn_isVHLooseMuon, &b_Muons___NominalAuxDyn_isVHLooseMuon);
   fChain->SetBranchAddress("Muons___NominalAuxDyn.eta", &Muons___NominalAuxDyn_eta, &b_Muons___NominalAuxDyn_eta);
   fChain->SetBranchAddress("Muons___NominalAuxDyn.phi", &Muons___NominalAuxDyn_phi, &b_Muons___NominalAuxDyn_phi);
   fChain->SetBranchAddress("Muons___NominalAuxDyn.isZHSignalMuon", &Muons___NominalAuxDyn_isZHSignalMuon, &b_Muons___NominalAuxDyn_isZHSignalMuon);
   fChain->SetBranchAddress("Muons___NominalAuxDyn.effSF", &Muons___NominalAuxDyn_effSF, &b_Muons___NominalAuxDyn_effSF);
   fChain->SetBranchAddress("Muons___NominalAuxDyn.isWHSignalMuon", &Muons___NominalAuxDyn_isWHSignalMuon, &b_Muons___NominalAuxDyn_isWHSignalMuon);
   fChain->SetBranchAddress("Muons___NominalAuxDyn.ptcone20", &Muons___NominalAuxDyn_ptcone20, &b_Muons___NominalAuxDyn_ptcone20);
   fChain->SetBranchAddress("Muons___NominalAuxDyn.muonType", &Muons___NominalAuxDyn_muonType, &b_Muons___NominalAuxDyn_muonType);
   fChain->SetBranchAddress("Muons___NominalAuxDyn.charge", &Muons___NominalAuxDyn_charge, &b_Muons___NominalAuxDyn_charge);
   fChain->SetBranchAddress("Muons___MUONS_SCALE__1down", &Muons___MUONS_SCALE__1down, &b_Muons___MUONS_SCALE__1down);
   fChain->SetBranchAddress("Muons___MUONS_SCALE__1downAux.m_parentLink", &Muons___MUONS_SCALE__1downAux_m_parentLink, &b_Muons___MUONS_SCALE__1downAux_m_parentLink);
   fChain->SetBranchAddress("Muons___MUONS_SCALE__1downAuxDyn.eta", &Muons___MUONS_SCALE__1downAuxDyn_eta, &b_Muons___MUONS_SCALE__1downAuxDyn_eta);
   fChain->SetBranchAddress("Muons___MUONS_SCALE__1downAuxDyn.phi", &Muons___MUONS_SCALE__1downAuxDyn_phi, &b_Muons___MUONS_SCALE__1downAuxDyn_phi);
   fChain->SetBranchAddress("Muons___MUONS_SCALE__1downAuxDyn.effSF", &Muons___MUONS_SCALE__1downAuxDyn_effSF, &b_Muons___MUONS_SCALE__1downAuxDyn_effSF);
   fChain->SetBranchAddress("Muons___MUONS_SCALE__1downAuxDyn.isVHLooseMuon", &Muons___MUONS_SCALE__1downAuxDyn_isVHLooseMuon, &b_Muons___MUONS_SCALE__1downAuxDyn_isVHLooseMuon);
   fChain->SetBranchAddress("Muons___MUONS_SCALE__1downAuxDyn.topoetcone30", &Muons___MUONS_SCALE__1downAuxDyn_topoetcone30, &b_Muons___MUONS_SCALE__1downAuxDyn_topoetcone30);
   fChain->SetBranchAddress("Muons___MUONS_SCALE__1downAuxDyn.isZHSignalMuon", &Muons___MUONS_SCALE__1downAuxDyn_isZHSignalMuon, &b_Muons___MUONS_SCALE__1downAuxDyn_isZHSignalMuon);
   fChain->SetBranchAddress("Muons___MUONS_SCALE__1downAuxDyn.isWHSignalMuon", &Muons___MUONS_SCALE__1downAuxDyn_isWHSignalMuon, &b_Muons___MUONS_SCALE__1downAuxDyn_isWHSignalMuon);
   fChain->SetBranchAddress("Muons___MUONS_SCALE__1downAuxDyn.ptcone20", &Muons___MUONS_SCALE__1downAuxDyn_ptcone20, &b_Muons___MUONS_SCALE__1downAuxDyn_ptcone20);
   fChain->SetBranchAddress("Muons___MUONS_SCALE__1downAuxDyn.pt", &Muons___MUONS_SCALE__1downAuxDyn_pt, &b_Muons___MUONS_SCALE__1downAuxDyn_pt);
   fChain->SetBranchAddress("Muons___MUONS_SCALE__1up", &Muons___MUONS_SCALE__1up, &b_Muons___MUONS_SCALE__1up);
   fChain->SetBranchAddress("Muons___MUONS_SCALE__1upAux.m_parentLink", &Muons___MUONS_SCALE__1upAux_m_parentLink, &b_Muons___MUONS_SCALE__1upAux_m_parentLink);
   fChain->SetBranchAddress("Muons___MUONS_SCALE__1upAuxDyn.eta", &Muons___MUONS_SCALE__1upAuxDyn_eta, &b_Muons___MUONS_SCALE__1upAuxDyn_eta);
   fChain->SetBranchAddress("Muons___MUONS_SCALE__1upAuxDyn.phi", &Muons___MUONS_SCALE__1upAuxDyn_phi, &b_Muons___MUONS_SCALE__1upAuxDyn_phi);
   fChain->SetBranchAddress("Muons___MUONS_SCALE__1upAuxDyn.effSF", &Muons___MUONS_SCALE__1upAuxDyn_effSF, &b_Muons___MUONS_SCALE__1upAuxDyn_effSF);
   fChain->SetBranchAddress("Muons___MUONS_SCALE__1upAuxDyn.isVHLooseMuon", &Muons___MUONS_SCALE__1upAuxDyn_isVHLooseMuon, &b_Muons___MUONS_SCALE__1upAuxDyn_isVHLooseMuon);
   fChain->SetBranchAddress("Muons___MUONS_SCALE__1upAuxDyn.topoetcone30", &Muons___MUONS_SCALE__1upAuxDyn_topoetcone30, &b_Muons___MUONS_SCALE__1upAuxDyn_topoetcone30);
   fChain->SetBranchAddress("Muons___MUONS_SCALE__1upAuxDyn.isZHSignalMuon", &Muons___MUONS_SCALE__1upAuxDyn_isZHSignalMuon, &b_Muons___MUONS_SCALE__1upAuxDyn_isZHSignalMuon);
   fChain->SetBranchAddress("Muons___MUONS_SCALE__1upAuxDyn.isWHSignalMuon", &Muons___MUONS_SCALE__1upAuxDyn_isWHSignalMuon, &b_Muons___MUONS_SCALE__1upAuxDyn_isWHSignalMuon);
   fChain->SetBranchAddress("Muons___MUONS_SCALE__1upAuxDyn.ptcone20", &Muons___MUONS_SCALE__1upAuxDyn_ptcone20, &b_Muons___MUONS_SCALE__1upAuxDyn_ptcone20);
   fChain->SetBranchAddress("Muons___MUONS_SCALE__1upAuxDyn.pt", &Muons___MUONS_SCALE__1upAuxDyn_pt, &b_Muons___MUONS_SCALE__1upAuxDyn_pt);
   fChain->SetBranchAddress("Muons___MUONS_ID__1down", &Muons___MUONS_ID__1down, &b_Muons___MUONS_ID__1down);
   fChain->SetBranchAddress("Muons___MUONS_ID__1downAux.m_parentLink", &Muons___MUONS_ID__1downAux_m_parentLink, &b_Muons___MUONS_ID__1downAux_m_parentLink);
   fChain->SetBranchAddress("Muons___MUONS_ID__1downAuxDyn.eta", &Muons___MUONS_ID__1downAuxDyn_eta, &b_Muons___MUONS_ID__1downAuxDyn_eta);
   fChain->SetBranchAddress("Muons___MUONS_ID__1downAuxDyn.phi", &Muons___MUONS_ID__1downAuxDyn_phi, &b_Muons___MUONS_ID__1downAuxDyn_phi);
   fChain->SetBranchAddress("Muons___MUONS_ID__1downAuxDyn.effSF", &Muons___MUONS_ID__1downAuxDyn_effSF, &b_Muons___MUONS_ID__1downAuxDyn_effSF);
   fChain->SetBranchAddress("Muons___MUONS_ID__1downAuxDyn.isVHLooseMuon", &Muons___MUONS_ID__1downAuxDyn_isVHLooseMuon, &b_Muons___MUONS_ID__1downAuxDyn_isVHLooseMuon);
   fChain->SetBranchAddress("Muons___MUONS_ID__1downAuxDyn.topoetcone30", &Muons___MUONS_ID__1downAuxDyn_topoetcone30, &b_Muons___MUONS_ID__1downAuxDyn_topoetcone30);
   fChain->SetBranchAddress("Muons___MUONS_ID__1downAuxDyn.isZHSignalMuon", &Muons___MUONS_ID__1downAuxDyn_isZHSignalMuon, &b_Muons___MUONS_ID__1downAuxDyn_isZHSignalMuon);
   fChain->SetBranchAddress("Muons___MUONS_ID__1downAuxDyn.isWHSignalMuon", &Muons___MUONS_ID__1downAuxDyn_isWHSignalMuon, &b_Muons___MUONS_ID__1downAuxDyn_isWHSignalMuon);
   fChain->SetBranchAddress("Muons___MUONS_ID__1downAuxDyn.ptcone20", &Muons___MUONS_ID__1downAuxDyn_ptcone20, &b_Muons___MUONS_ID__1downAuxDyn_ptcone20);
   fChain->SetBranchAddress("Muons___MUONS_ID__1downAuxDyn.pt", &Muons___MUONS_ID__1downAuxDyn_pt, &b_Muons___MUONS_ID__1downAuxDyn_pt);
   fChain->SetBranchAddress("Muons___MUONS_ID__1up", &Muons___MUONS_ID__1up, &b_Muons___MUONS_ID__1up);
   fChain->SetBranchAddress("Muons___MUONS_ID__1upAux.m_parentLink", &Muons___MUONS_ID__1upAux_m_parentLink, &b_Muons___MUONS_ID__1upAux_m_parentLink);
   fChain->SetBranchAddress("Muons___MUONS_ID__1upAuxDyn.eta", &Muons___MUONS_ID__1upAuxDyn_eta, &b_Muons___MUONS_ID__1upAuxDyn_eta);
   fChain->SetBranchAddress("Muons___MUONS_ID__1upAuxDyn.phi", &Muons___MUONS_ID__1upAuxDyn_phi, &b_Muons___MUONS_ID__1upAuxDyn_phi);
   fChain->SetBranchAddress("Muons___MUONS_ID__1upAuxDyn.effSF", &Muons___MUONS_ID__1upAuxDyn_effSF, &b_Muons___MUONS_ID__1upAuxDyn_effSF);
   fChain->SetBranchAddress("Muons___MUONS_ID__1upAuxDyn.isVHLooseMuon", &Muons___MUONS_ID__1upAuxDyn_isVHLooseMuon, &b_Muons___MUONS_ID__1upAuxDyn_isVHLooseMuon);
   fChain->SetBranchAddress("Muons___MUONS_ID__1upAuxDyn.topoetcone30", &Muons___MUONS_ID__1upAuxDyn_topoetcone30, &b_Muons___MUONS_ID__1upAuxDyn_topoetcone30);
   fChain->SetBranchAddress("Muons___MUONS_ID__1upAuxDyn.isZHSignalMuon", &Muons___MUONS_ID__1upAuxDyn_isZHSignalMuon, &b_Muons___MUONS_ID__1upAuxDyn_isZHSignalMuon);
   fChain->SetBranchAddress("Muons___MUONS_ID__1upAuxDyn.isWHSignalMuon", &Muons___MUONS_ID__1upAuxDyn_isWHSignalMuon, &b_Muons___MUONS_ID__1upAuxDyn_isWHSignalMuon);
   fChain->SetBranchAddress("Muons___MUONS_ID__1upAuxDyn.ptcone20", &Muons___MUONS_ID__1upAuxDyn_ptcone20, &b_Muons___MUONS_ID__1upAuxDyn_ptcone20);
   fChain->SetBranchAddress("Muons___MUONS_ID__1upAuxDyn.pt", &Muons___MUONS_ID__1upAuxDyn_pt, &b_Muons___MUONS_ID__1upAuxDyn_pt);
   fChain->SetBranchAddress("Muons___MUONS_MS__1down", &Muons___MUONS_MS__1down, &b_Muons___MUONS_MS__1down);
   fChain->SetBranchAddress("Muons___MUONS_MS__1downAux.m_parentLink", &Muons___MUONS_MS__1downAux_m_parentLink, &b_Muons___MUONS_MS__1downAux_m_parentLink);
   fChain->SetBranchAddress("Muons___MUONS_MS__1downAuxDyn.eta", &Muons___MUONS_MS__1downAuxDyn_eta, &b_Muons___MUONS_MS__1downAuxDyn_eta);
   fChain->SetBranchAddress("Muons___MUONS_MS__1downAuxDyn.phi", &Muons___MUONS_MS__1downAuxDyn_phi, &b_Muons___MUONS_MS__1downAuxDyn_phi);
   fChain->SetBranchAddress("Muons___MUONS_MS__1downAuxDyn.effSF", &Muons___MUONS_MS__1downAuxDyn_effSF, &b_Muons___MUONS_MS__1downAuxDyn_effSF);
   fChain->SetBranchAddress("Muons___MUONS_MS__1downAuxDyn.isVHLooseMuon", &Muons___MUONS_MS__1downAuxDyn_isVHLooseMuon, &b_Muons___MUONS_MS__1downAuxDyn_isVHLooseMuon);
   fChain->SetBranchAddress("Muons___MUONS_MS__1downAuxDyn.topoetcone30", &Muons___MUONS_MS__1downAuxDyn_topoetcone30, &b_Muons___MUONS_MS__1downAuxDyn_topoetcone30);
   fChain->SetBranchAddress("Muons___MUONS_MS__1downAuxDyn.isZHSignalMuon", &Muons___MUONS_MS__1downAuxDyn_isZHSignalMuon, &b_Muons___MUONS_MS__1downAuxDyn_isZHSignalMuon);
   fChain->SetBranchAddress("Muons___MUONS_MS__1downAuxDyn.isWHSignalMuon", &Muons___MUONS_MS__1downAuxDyn_isWHSignalMuon, &b_Muons___MUONS_MS__1downAuxDyn_isWHSignalMuon);
   fChain->SetBranchAddress("Muons___MUONS_MS__1downAuxDyn.ptcone20", &Muons___MUONS_MS__1downAuxDyn_ptcone20, &b_Muons___MUONS_MS__1downAuxDyn_ptcone20);
   fChain->SetBranchAddress("Muons___MUONS_MS__1downAuxDyn.pt", &Muons___MUONS_MS__1downAuxDyn_pt, &b_Muons___MUONS_MS__1downAuxDyn_pt);
   fChain->SetBranchAddress("Muons___MUONS_MS__1up", &Muons___MUONS_MS__1up, &b_Muons___MUONS_MS__1up);
   fChain->SetBranchAddress("Muons___MUONS_MS__1upAux.m_parentLink", &Muons___MUONS_MS__1upAux_m_parentLink, &b_Muons___MUONS_MS__1upAux_m_parentLink);
   fChain->SetBranchAddress("Muons___MUONS_MS__1upAuxDyn.eta", &Muons___MUONS_MS__1upAuxDyn_eta, &b_Muons___MUONS_MS__1upAuxDyn_eta);
   fChain->SetBranchAddress("Muons___MUONS_MS__1upAuxDyn.phi", &Muons___MUONS_MS__1upAuxDyn_phi, &b_Muons___MUONS_MS__1upAuxDyn_phi);
   fChain->SetBranchAddress("Muons___MUONS_MS__1upAuxDyn.effSF", &Muons___MUONS_MS__1upAuxDyn_effSF, &b_Muons___MUONS_MS__1upAuxDyn_effSF);
   fChain->SetBranchAddress("Muons___MUONS_MS__1upAuxDyn.isVHLooseMuon", &Muons___MUONS_MS__1upAuxDyn_isVHLooseMuon, &b_Muons___MUONS_MS__1upAuxDyn_isVHLooseMuon);
   fChain->SetBranchAddress("Muons___MUONS_MS__1upAuxDyn.topoetcone30", &Muons___MUONS_MS__1upAuxDyn_topoetcone30, &b_Muons___MUONS_MS__1upAuxDyn_topoetcone30);
   fChain->SetBranchAddress("Muons___MUONS_MS__1upAuxDyn.isZHSignalMuon", &Muons___MUONS_MS__1upAuxDyn_isZHSignalMuon, &b_Muons___MUONS_MS__1upAuxDyn_isZHSignalMuon);
   fChain->SetBranchAddress("Muons___MUONS_MS__1upAuxDyn.isWHSignalMuon", &Muons___MUONS_MS__1upAuxDyn_isWHSignalMuon, &b_Muons___MUONS_MS__1upAuxDyn_isWHSignalMuon);
   fChain->SetBranchAddress("Muons___MUONS_MS__1upAuxDyn.ptcone20", &Muons___MUONS_MS__1upAuxDyn_ptcone20, &b_Muons___MUONS_MS__1upAuxDyn_ptcone20);
   fChain->SetBranchAddress("Muons___MUONS_MS__1upAuxDyn.pt", &Muons___MUONS_MS__1upAuxDyn_pt, &b_Muons___MUONS_MS__1upAuxDyn_pt);
   fChain->SetBranchAddress("Muons___MUONSFSYS__1down", &Muons___MUONSFSYS__1down, &b_Muons___MUONSFSYS__1down);
   fChain->SetBranchAddress("Muons___MUONSFSYS__1downAux.m_parentLink", &Muons___MUONSFSYS__1downAux_m_parentLink, &b_Muons___MUONSFSYS__1downAux_m_parentLink);
   fChain->SetBranchAddress("Muons___MUONSFSYS__1downAuxDyn.effSF", &Muons___MUONSFSYS__1downAuxDyn_effSF, &b_Muons___MUONSFSYS__1downAuxDyn_effSF);
   fChain->SetBranchAddress("Muons___MUONSFSYS__1downAuxDyn.isVHLooseMuon", &Muons___MUONSFSYS__1downAuxDyn_isVHLooseMuon, &b_Muons___MUONSFSYS__1downAuxDyn_isVHLooseMuon);
   fChain->SetBranchAddress("Muons___MUONSFSYS__1downAuxDyn.isZHSignalMuon", &Muons___MUONSFSYS__1downAuxDyn_isZHSignalMuon, &b_Muons___MUONSFSYS__1downAuxDyn_isZHSignalMuon);
   fChain->SetBranchAddress("Muons___MUONSFSYS__1downAuxDyn.isWHSignalMuon", &Muons___MUONSFSYS__1downAuxDyn_isWHSignalMuon, &b_Muons___MUONSFSYS__1downAuxDyn_isWHSignalMuon);
   fChain->SetBranchAddress("Muons___MUONSFSYS__1up", &Muons___MUONSFSYS__1up, &b_Muons___MUONSFSYS__1up);
   fChain->SetBranchAddress("Muons___MUONSFSYS__1upAux.m_parentLink", &Muons___MUONSFSYS__1upAux_m_parentLink, &b_Muons___MUONSFSYS__1upAux_m_parentLink);
   fChain->SetBranchAddress("Muons___MUONSFSYS__1upAuxDyn.effSF", &Muons___MUONSFSYS__1upAuxDyn_effSF, &b_Muons___MUONSFSYS__1upAuxDyn_effSF);
   fChain->SetBranchAddress("Muons___MUONSFSYS__1upAuxDyn.isVHLooseMuon", &Muons___MUONSFSYS__1upAuxDyn_isVHLooseMuon, &b_Muons___MUONSFSYS__1upAuxDyn_isVHLooseMuon);
   fChain->SetBranchAddress("Muons___MUONSFSYS__1upAuxDyn.isZHSignalMuon", &Muons___MUONSFSYS__1upAuxDyn_isZHSignalMuon, &b_Muons___MUONSFSYS__1upAuxDyn_isZHSignalMuon);
   fChain->SetBranchAddress("Muons___MUONSFSYS__1upAuxDyn.isWHSignalMuon", &Muons___MUONSFSYS__1upAuxDyn_isWHSignalMuon, &b_Muons___MUONSFSYS__1upAuxDyn_isWHSignalMuon);
   fChain->SetBranchAddress("ElectronCollection___Nominal", &ElectronCollection___Nominal, &b_ElectronCollection___Nominal);
   fChain->SetBranchAddress("ElectronCollection___NominalAux.m_name", &ElectronCollection___NominalAux_m_name, &b_ElectronCollection___NominalAux_m_name);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1down", &ElectronCollection___EG_RESOLUTION_ALL__1down, &b_ElectronCollection___EG_RESOLUTION_ALL__1down);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1downAux.m_parentLink", &ElectronCollection___EG_RESOLUTION_ALL__1downAux_m_parentLink, &b_ElectronCollection___EG_RESOLUTION_ALL__1downAux_m_parentLink);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1up", &ElectronCollection___EG_RESOLUTION_ALL__1up, &b_ElectronCollection___EG_RESOLUTION_ALL__1up);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1upAux.m_parentLink", &ElectronCollection___EG_RESOLUTION_ALL__1upAux_m_parentLink, &b_ElectronCollection___EG_RESOLUTION_ALL__1upAux_m_parentLink);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1down", &ElectronCollection___EG_SCALE_ALL__1down, &b_ElectronCollection___EG_SCALE_ALL__1down);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1downAux.m_parentLink", &ElectronCollection___EG_SCALE_ALL__1downAux_m_parentLink, &b_ElectronCollection___EG_SCALE_ALL__1downAux_m_parentLink);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1up", &ElectronCollection___EG_SCALE_ALL__1up, &b_ElectronCollection___EG_SCALE_ALL__1up);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1upAux.m_parentLink", &ElectronCollection___EG_SCALE_ALL__1upAux_m_parentLink, &b_ElectronCollection___EG_SCALE_ALL__1upAux_m_parentLink);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1down", &ElectronCollection___PH_SCALE_LEAKAGECONV__1down, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1down);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1downAux.m_parentLink", &ElectronCollection___PH_SCALE_LEAKAGECONV__1downAux_m_parentLink, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAux_m_parentLink);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1up", &ElectronCollection___PH_SCALE_LEAKAGECONV__1up, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1up);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1upAux.m_parentLink", &ElectronCollection___PH_SCALE_LEAKAGECONV__1upAux_m_parentLink, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAux_m_parentLink);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_CorrUncertainty__1down", &ElectronCollection___EL_EFF_CorrUncertainty__1down, &b_ElectronCollection___EL_EFF_CorrUncertainty__1down);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_CorrUncertainty__1downAux.m_parentLink", &ElectronCollection___EL_EFF_CorrUncertainty__1downAux_m_parentLink, &b_ElectronCollection___EL_EFF_CorrUncertainty__1downAux_m_parentLink);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_CorrUncertainty__1up", &ElectronCollection___EL_EFF_CorrUncertainty__1up, &b_ElectronCollection___EL_EFF_CorrUncertainty__1up);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_CorrUncertainty__1upAux.m_parentLink", &ElectronCollection___EL_EFF_CorrUncertainty__1upAux_m_parentLink, &b_ElectronCollection___EL_EFF_CorrUncertainty__1upAux_m_parentLink);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_UncorrUncertainty__1down", &ElectronCollection___EL_EFF_UncorrUncertainty__1down, &b_ElectronCollection___EL_EFF_UncorrUncertainty__1down);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_UncorrUncertainty__1downAux.m_parentLink", &ElectronCollection___EL_EFF_UncorrUncertainty__1downAux_m_parentLink, &b_ElectronCollection___EL_EFF_UncorrUncertainty__1downAux_m_parentLink);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_UncorrUncertainty__1up", &ElectronCollection___EL_EFF_UncorrUncertainty__1up, &b_ElectronCollection___EL_EFF_UncorrUncertainty__1up);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_UncorrUncertainty__1upAux.m_parentLink", &ElectronCollection___EL_EFF_UncorrUncertainty__1upAux_m_parentLink, &b_ElectronCollection___EL_EFF_UncorrUncertainty__1upAux_m_parentLink);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___Nominal", &AntiKt4LCTopoJets___Nominal, &b_AntiKt4LCTopoJets___Nominal);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___NominalAux.m_name", &AntiKt4LCTopoJets___NominalAux_m_name, &b_AntiKt4LCTopoJets___NominalAux_m_name);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___NominalAuxDyn.partIndex", &AntiKt4LCTopoJets___NominalAuxDyn_partIndex, &b_AntiKt4LCTopoJets___NominalAuxDyn_partIndex);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___NominalAuxDyn.TruthLabelID", &AntiKt4LCTopoJets___NominalAuxDyn_TruthLabelID, &b_AntiKt4LCTopoJets___NominalAuxDyn_TruthLabelID);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___NominalAuxDyn.jvf0", &AntiKt4LCTopoJets___NominalAuxDyn_jvf0, &b_AntiKt4LCTopoJets___NominalAuxDyn_jvf0);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___NominalAuxDyn.pt", &AntiKt4LCTopoJets___NominalAuxDyn_pt, &b_AntiKt4LCTopoJets___NominalAuxDyn_pt);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___NominalAuxDyn.MV1", &AntiKt4LCTopoJets___NominalAuxDyn_MV1, &b_AntiKt4LCTopoJets___NominalAuxDyn_MV1);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___NominalAuxDyn.eta", &AntiKt4LCTopoJets___NominalAuxDyn_eta, &b_AntiKt4LCTopoJets___NominalAuxDyn_eta);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___NominalAuxDyn.SV1_IP3D", &AntiKt4LCTopoJets___NominalAuxDyn_SV1_IP3D, &b_AntiKt4LCTopoJets___NominalAuxDyn_SV1_IP3D);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___NominalAuxDyn.phi", &AntiKt4LCTopoJets___NominalAuxDyn_phi, &b_AntiKt4LCTopoJets___NominalAuxDyn_phi);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___NominalAuxDyn.MV2c00", &AntiKt4LCTopoJets___NominalAuxDyn_MV2c00, &b_AntiKt4LCTopoJets___NominalAuxDyn_MV2c00);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___NominalAuxDyn.m", &AntiKt4LCTopoJets___NominalAuxDyn_m, &b_AntiKt4LCTopoJets___NominalAuxDyn_m);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___NominalAuxDyn.MV2c10", &AntiKt4LCTopoJets___NominalAuxDyn_MV2c10, &b_AntiKt4LCTopoJets___NominalAuxDyn_MV2c10);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___NominalAuxDyn.MV2c20", &AntiKt4LCTopoJets___NominalAuxDyn_MV2c20, &b_AntiKt4LCTopoJets___NominalAuxDyn_MV2c20);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___NominalAuxDyn.MVb", &AntiKt4LCTopoJets___NominalAuxDyn_MVb, &b_AntiKt4LCTopoJets___NominalAuxDyn_MVb);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___NominalAuxDyn.isVetoJet", &AntiKt4LCTopoJets___NominalAuxDyn_isVetoJet, &b_AntiKt4LCTopoJets___NominalAuxDyn_isVetoJet);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___NominalAuxDyn.isSignalJet", &AntiKt4LCTopoJets___NominalAuxDyn_isSignalJet, &b_AntiKt4LCTopoJets___NominalAuxDyn_isSignalJet);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___NominalAuxDyn.NumTrkPt500", &AntiKt4LCTopoJets___NominalAuxDyn_NumTrkPt500, &b_AntiKt4LCTopoJets___NominalAuxDyn_NumTrkPt500);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___JER__1up", &AntiKt4LCTopoJets___JER__1up, &b_AntiKt4LCTopoJets___JER__1up);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___JER__1upAux.m_parentLink", &AntiKt4LCTopoJets___JER__1upAux_m_parentLink, &b_AntiKt4LCTopoJets___JER__1upAux_m_parentLink);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___JER__1upAuxDyn.TruthLabelID", &AntiKt4LCTopoJets___JER__1upAuxDyn_TruthLabelID, &b_AntiKt4LCTopoJets___JER__1upAuxDyn_TruthLabelID);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___JER__1upAuxDyn.jvf0", &AntiKt4LCTopoJets___JER__1upAuxDyn_jvf0, &b_AntiKt4LCTopoJets___JER__1upAuxDyn_jvf0);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___JER__1upAuxDyn.pt", &AntiKt4LCTopoJets___JER__1upAuxDyn_pt, &b_AntiKt4LCTopoJets___JER__1upAuxDyn_pt);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___JER__1upAuxDyn.MV1", &AntiKt4LCTopoJets___JER__1upAuxDyn_MV1, &b_AntiKt4LCTopoJets___JER__1upAuxDyn_MV1);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___JER__1upAuxDyn.eta", &AntiKt4LCTopoJets___JER__1upAuxDyn_eta, &b_AntiKt4LCTopoJets___JER__1upAuxDyn_eta);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___JER__1upAuxDyn.SV1_IP3D", &AntiKt4LCTopoJets___JER__1upAuxDyn_SV1_IP3D, &b_AntiKt4LCTopoJets___JER__1upAuxDyn_SV1_IP3D);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___JER__1upAuxDyn.phi", &AntiKt4LCTopoJets___JER__1upAuxDyn_phi, &b_AntiKt4LCTopoJets___JER__1upAuxDyn_phi);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___JER__1upAuxDyn.MV2c00", &AntiKt4LCTopoJets___JER__1upAuxDyn_MV2c00, &b_AntiKt4LCTopoJets___JER__1upAuxDyn_MV2c00);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___JER__1upAuxDyn.m", &AntiKt4LCTopoJets___JER__1upAuxDyn_m, &b_AntiKt4LCTopoJets___JER__1upAuxDyn_m);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___JER__1upAuxDyn.MV2c10", &AntiKt4LCTopoJets___JER__1upAuxDyn_MV2c10, &b_AntiKt4LCTopoJets___JER__1upAuxDyn_MV2c10);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___JER__1upAuxDyn.MV2c20", &AntiKt4LCTopoJets___JER__1upAuxDyn_MV2c20, &b_AntiKt4LCTopoJets___JER__1upAuxDyn_MV2c20);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___JER__1upAuxDyn.MVb", &AntiKt4LCTopoJets___JER__1upAuxDyn_MVb, &b_AntiKt4LCTopoJets___JER__1upAuxDyn_MVb);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___JER__1upAuxDyn.isVetoJet", &AntiKt4LCTopoJets___JER__1upAuxDyn_isVetoJet, &b_AntiKt4LCTopoJets___JER__1upAuxDyn_isVetoJet);
   fChain->SetBranchAddress("AntiKt4LCTopoJets___JER__1upAuxDyn.isSignalJet", &AntiKt4LCTopoJets___JER__1upAuxDyn_isSignalJet, &b_AntiKt4LCTopoJets___JER__1upAuxDyn_isSignalJet);
   fChain->SetBranchAddress("CamKt12LCTopoJets___Nominal", &CamKt12LCTopoJets___Nominal, &b_CamKt12LCTopoJets___Nominal);
   fChain->SetBranchAddress("CamKt12LCTopoJets___NominalAux.m_name", &CamKt12LCTopoJets___NominalAux_m_name, &b_CamKt12LCTopoJets___NominalAux_m_name);
   fChain->SetBranchAddress("CamKt12LCTopoJets___NominalAuxDyn.eta", &CamKt12LCTopoJets___NominalAuxDyn_eta, &b_CamKt12LCTopoJets___NominalAuxDyn_eta);
   fChain->SetBranchAddress("CamKt12LCTopoJets___NominalAuxDyn.jvf0", &CamKt12LCTopoJets___NominalAuxDyn_jvf0, &b_CamKt12LCTopoJets___NominalAuxDyn_jvf0);
   fChain->SetBranchAddress("CamKt12LCTopoJets___NominalAuxDyn.phi", &CamKt12LCTopoJets___NominalAuxDyn_phi, &b_CamKt12LCTopoJets___NominalAuxDyn_phi);
   fChain->SetBranchAddress("CamKt12LCTopoJets___NominalAuxDyn.Tau21", &CamKt12LCTopoJets___NominalAuxDyn_Tau21, &b_CamKt12LCTopoJets___NominalAuxDyn_Tau21);
   fChain->SetBranchAddress("CamKt12LCTopoJets___NominalAuxDyn.m", &CamKt12LCTopoJets___NominalAuxDyn_m, &b_CamKt12LCTopoJets___NominalAuxDyn_m);
   fChain->SetBranchAddress("CamKt12LCTopoJets___NominalAuxDyn.Tau32", &CamKt12LCTopoJets___NominalAuxDyn_Tau32, &b_CamKt12LCTopoJets___NominalAuxDyn_Tau32);
   fChain->SetBranchAddress("CamKt12LCTopoJets___NominalAuxDyn.partIndex", &CamKt12LCTopoJets___NominalAuxDyn_partIndex, &b_CamKt12LCTopoJets___NominalAuxDyn_partIndex);
   fChain->SetBranchAddress("CamKt12LCTopoJets___NominalAuxDyn.pt", &CamKt12LCTopoJets___NominalAuxDyn_pt, &b_CamKt12LCTopoJets___NominalAuxDyn_pt);
   fChain->SetBranchAddress("MET_RefFinal___Nominal", &MET_RefFinal___Nominal, &b_MET_RefFinal___Nominal);
   fChain->SetBranchAddress("MET_RefFinal___NominalAux.xAOD::AuxContainerBase", &MET_RefFinal___NominalAux_xAOD__AuxContainerBase, &b_MET_RefFinal___NominalAux_xAOD__AuxContainerBase);
   fChain->SetBranchAddress("MET_RefFinal___NominalAux.mpx", &MET_RefFinal___NominalAux_mpx, &b_MET_RefFinal___NominalAux_mpx);
   fChain->SetBranchAddress("MET_RefFinal___NominalAux.mpy", &MET_RefFinal___NominalAux_mpy, &b_MET_RefFinal___NominalAux_mpy);
   fChain->SetBranchAddress("MET_RefFinal___NominalAux.sumet", &MET_RefFinal___NominalAux_sumet, &b_MET_RefFinal___NominalAux_sumet);
   fChain->SetBranchAddress("MET_RefFinal___NominalAux.name", &MET_RefFinal___NominalAux_name, &b_MET_RefFinal___NominalAux_name);
   fChain->SetBranchAddress("MET_Track___Nominal", &MET_Track___Nominal, &b_MET_Track___Nominal);
   fChain->SetBranchAddress("MET_Track___NominalAux.xAOD::AuxContainerBase", &MET_Track___NominalAux_xAOD__AuxContainerBase, &b_MET_Track___NominalAux_xAOD__AuxContainerBase);
   fChain->SetBranchAddress("MET_Track___NominalAux.mpx", &MET_Track___NominalAux_mpx, &b_MET_Track___NominalAux_mpx);
   fChain->SetBranchAddress("MET_Track___NominalAux.mpy", &MET_Track___NominalAux_mpy, &b_MET_Track___NominalAux_mpy);
   fChain->SetBranchAddress("MET_Track___NominalAux.sumet", &MET_Track___NominalAux_sumet, &b_MET_Track___NominalAux_sumet);
   fChain->SetBranchAddress("MET_Track___NominalAux.name", &MET_Track___NominalAux_name, &b_MET_Track___NominalAux_name);
   fChain->SetBranchAddress("EventInfo___EL_EFF_CorrUncertainty__1downAuxDyn.leptonSF", &EventInfo___EL_EFF_CorrUncertainty__1downAuxDyn_leptonSF, &b_EventInfo___EL_EFF_CorrUncertainty__1downAuxDyn_leptonSF);
   fChain->SetBranchAddress("EventInfo___EL_EFF_CorrUncertainty__1upAuxDyn.leptonSF", &EventInfo___EL_EFF_CorrUncertainty__1upAuxDyn_leptonSF, &b_EventInfo___EL_EFF_CorrUncertainty__1upAuxDyn_leptonSF);
   fChain->SetBranchAddress("EventInfo___EL_EFF_UncorrUncertainty__1downAuxDyn.leptonSF", &EventInfo___EL_EFF_UncorrUncertainty__1downAuxDyn_leptonSF, &b_EventInfo___EL_EFF_UncorrUncertainty__1downAuxDyn_leptonSF);
   fChain->SetBranchAddress("EventInfo___EL_EFF_UncorrUncertainty__1upAuxDyn.leptonSF", &EventInfo___EL_EFF_UncorrUncertainty__1upAuxDyn_leptonSF, &b_EventInfo___EL_EFF_UncorrUncertainty__1upAuxDyn_leptonSF);
   fChain->SetBranchAddress("EventInfo___MUONSFSYS__1downAuxDyn.leptonSF", &EventInfo___MUONSFSYS__1downAuxDyn_leptonSF, &b_EventInfo___MUONSFSYS__1downAuxDyn_leptonSF);
   fChain->SetBranchAddress("EventInfo___MUONSFSYS__1upAuxDyn.leptonSF", &EventInfo___MUONSFSYS__1upAuxDyn_leptonSF, &b_EventInfo___MUONSFSYS__1upAuxDyn_leptonSF);
   fChain->SetBranchAddress("EventInfo___NominalAuxDyn.mcEventNumber", &EventInfo___NominalAuxDyn_mcEventNumber, &b_EventInfo___NominalAuxDyn_mcEventNumber);
   fChain->SetBranchAddress("EventInfo___NominalAuxDyn.isMC", &EventInfo___NominalAuxDyn_isMC, &b_EventInfo___NominalAuxDyn_isMC);
   fChain->SetBranchAddress("EventInfo___NominalAuxDyn.averageInteractionsPerCrossing", &EventInfo___NominalAuxDyn_averageInteractionsPerCrossing, &b_EventInfo___NominalAuxDyn_averageInteractionsPerCrossing);
   fChain->SetBranchAddress("EventInfo___NominalAuxDyn.MCEventWeight", &EventInfo___NominalAuxDyn_MCEventWeight, &b_EventInfo___NominalAuxDyn_MCEventWeight);
   fChain->SetBranchAddress("EventInfo___NominalAuxDyn.mcChannelNumber", &EventInfo___NominalAuxDyn_mcChannelNumber, &b_EventInfo___NominalAuxDyn_mcChannelNumber);
   fChain->SetBranchAddress("EventInfo___NominalAuxDyn.Pileupweight", &EventInfo___NominalAuxDyn_Pileupweight, &b_EventInfo___NominalAuxDyn_Pileupweight);
   fChain->SetBranchAddress("EventInfo___NominalAuxDyn.zPV", &EventInfo___NominalAuxDyn_zPV, &b_EventInfo___NominalAuxDyn_zPV);
   fChain->SetBranchAddress("EventInfo___NominalAuxDyn.NVtx3Trks", &EventInfo___NominalAuxDyn_NVtx3Trks, &b_EventInfo___NominalAuxDyn_NVtx3Trks);
   fChain->SetBranchAddress("EventInfo___NominalAuxDyn.leptonSF", &EventInfo___NominalAuxDyn_leptonSF, &b_EventInfo___NominalAuxDyn_leptonSF);
   fChain->SetBranchAddress("EventInfo___NominalAuxDyn.runNumber", &EventInfo___NominalAuxDyn_runNumber, &b_EventInfo___NominalAuxDyn_runNumber);
   fChain->SetBranchAddress("EventInfo___NominalAuxDyn.eventNumber", &EventInfo___NominalAuxDyn_eventNumber, &b_EventInfo___NominalAuxDyn_eventNumber);
   fChain->SetBranchAddress("ElectronCollection___NominalAuxDyn.partIndex", &ElectronCollection___NominalAuxDyn_partIndex, &b_ElectronCollection___NominalAuxDyn_partIndex);
   fChain->SetBranchAddress("ElectronCollection___NominalAuxDyn.topoetcone30", &ElectronCollection___NominalAuxDyn_topoetcone30, &b_ElectronCollection___NominalAuxDyn_topoetcone30);
   fChain->SetBranchAddress("ElectronCollection___NominalAuxDyn.hasSharedTrack", &ElectronCollection___NominalAuxDyn_hasSharedTrack, &b_ElectronCollection___NominalAuxDyn_hasSharedTrack);
   fChain->SetBranchAddress("ElectronCollection___NominalAuxDyn.pt", &ElectronCollection___NominalAuxDyn_pt, &b_ElectronCollection___NominalAuxDyn_pt);
   fChain->SetBranchAddress("ElectronCollection___NominalAuxDyn.eta", &ElectronCollection___NominalAuxDyn_eta, &b_ElectronCollection___NominalAuxDyn_eta);
   fChain->SetBranchAddress("ElectronCollection___NominalAuxDyn.phi", &ElectronCollection___NominalAuxDyn_phi, &b_ElectronCollection___NominalAuxDyn_phi);
   fChain->SetBranchAddress("ElectronCollection___NominalAuxDyn.m", &ElectronCollection___NominalAuxDyn_m, &b_ElectronCollection___NominalAuxDyn_m);
   fChain->SetBranchAddress("ElectronCollection___NominalAuxDyn.isVHLooseElectron", &ElectronCollection___NominalAuxDyn_isVHLooseElectron, &b_ElectronCollection___NominalAuxDyn_isVHLooseElectron);
   fChain->SetBranchAddress("ElectronCollection___NominalAuxDyn.isZHSignalElectron", &ElectronCollection___NominalAuxDyn_isZHSignalElectron, &b_ElectronCollection___NominalAuxDyn_isZHSignalElectron);
   fChain->SetBranchAddress("ElectronCollection___NominalAuxDyn.isVeryTightLH", &ElectronCollection___NominalAuxDyn_isVeryTightLH, &b_ElectronCollection___NominalAuxDyn_isVeryTightLH);
   fChain->SetBranchAddress("ElectronCollection___NominalAuxDyn.ptcone20", &ElectronCollection___NominalAuxDyn_ptcone20, &b_ElectronCollection___NominalAuxDyn_ptcone20);
   fChain->SetBranchAddress("ElectronCollection___NominalAuxDyn.Loose", &ElectronCollection___NominalAuxDyn_Loose, &b_ElectronCollection___NominalAuxDyn_Loose);
   fChain->SetBranchAddress("ElectronCollection___NominalAuxDyn.isWHSignalElectron", &ElectronCollection___NominalAuxDyn_isWHSignalElectron, &b_ElectronCollection___NominalAuxDyn_isWHSignalElectron);
   fChain->SetBranchAddress("ElectronCollection___NominalAuxDyn.effSFloose", &ElectronCollection___NominalAuxDyn_effSFloose, &b_ElectronCollection___NominalAuxDyn_effSFloose);
   fChain->SetBranchAddress("ElectronCollection___NominalAuxDyn.effSFtight", &ElectronCollection___NominalAuxDyn_effSFtight, &b_ElectronCollection___NominalAuxDyn_effSFtight);
   fChain->SetBranchAddress("ElectronCollection___NominalAuxDyn.charge", &ElectronCollection___NominalAuxDyn_charge, &b_ElectronCollection___NominalAuxDyn_charge);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn.topoetcone30", &ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_topoetcone30, &b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_topoetcone30);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn.hasSharedTrack", &ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_hasSharedTrack, &b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_hasSharedTrack);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn.pt", &ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_pt, &b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_pt);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn.eta", &ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_eta, &b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_eta);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn.phi", &ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_phi, &b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_phi);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn.m", &ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_m, &b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_m);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn.isVHLooseElectron", &ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_isVHLooseElectron, &b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_isVHLooseElectron);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn.isZHSignalElectron", &ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_isZHSignalElectron, &b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_isZHSignalElectron);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn.isVeryTightLH", &ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_isVeryTightLH, &b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_isVeryTightLH);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn.ptcone20", &ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_ptcone20, &b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_ptcone20);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn.Loose", &ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_Loose, &b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_Loose);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn.isWHSignalElectron", &ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_isWHSignalElectron, &b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_isWHSignalElectron);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn.effSFloose", &ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_effSFloose, &b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_effSFloose);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn.effSFtight", &ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_effSFtight, &b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_effSFtight);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn.charge", &ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_charge, &b_ElectronCollection___EG_RESOLUTION_ALL__1downAuxDyn_charge);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn.topoetcone30", &ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_topoetcone30, &b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_topoetcone30);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn.hasSharedTrack", &ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_hasSharedTrack, &b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_hasSharedTrack);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn.pt", &ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_pt, &b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_pt);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn.eta", &ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_eta, &b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_eta);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn.phi", &ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_phi, &b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_phi);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn.m", &ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_m, &b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_m);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn.isVHLooseElectron", &ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_isVHLooseElectron, &b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_isVHLooseElectron);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn.isZHSignalElectron", &ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_isZHSignalElectron, &b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_isZHSignalElectron);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn.isVeryTightLH", &ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_isVeryTightLH, &b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_isVeryTightLH);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn.ptcone20", &ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_ptcone20, &b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_ptcone20);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn.Loose", &ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_Loose, &b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_Loose);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn.isWHSignalElectron", &ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_isWHSignalElectron, &b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_isWHSignalElectron);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn.effSFloose", &ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_effSFloose, &b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_effSFloose);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn.effSFtight", &ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_effSFtight, &b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_effSFtight);
   fChain->SetBranchAddress("ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn.charge", &ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_charge, &b_ElectronCollection___EG_RESOLUTION_ALL__1upAuxDyn_charge);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1downAuxDyn.topoetcone30", &ElectronCollection___EG_SCALE_ALL__1downAuxDyn_topoetcone30, &b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_topoetcone30);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1downAuxDyn.hasSharedTrack", &ElectronCollection___EG_SCALE_ALL__1downAuxDyn_hasSharedTrack, &b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_hasSharedTrack);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1downAuxDyn.pt", &ElectronCollection___EG_SCALE_ALL__1downAuxDyn_pt, &b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_pt);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1downAuxDyn.eta", &ElectronCollection___EG_SCALE_ALL__1downAuxDyn_eta, &b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_eta);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1downAuxDyn.phi", &ElectronCollection___EG_SCALE_ALL__1downAuxDyn_phi, &b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_phi);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1downAuxDyn.m", &ElectronCollection___EG_SCALE_ALL__1downAuxDyn_m, &b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_m);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1downAuxDyn.isVHLooseElectron", &ElectronCollection___EG_SCALE_ALL__1downAuxDyn_isVHLooseElectron, &b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_isVHLooseElectron);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1downAuxDyn.isZHSignalElectron", &ElectronCollection___EG_SCALE_ALL__1downAuxDyn_isZHSignalElectron, &b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_isZHSignalElectron);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1downAuxDyn.isVeryTightLH", &ElectronCollection___EG_SCALE_ALL__1downAuxDyn_isVeryTightLH, &b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_isVeryTightLH);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1downAuxDyn.ptcone20", &ElectronCollection___EG_SCALE_ALL__1downAuxDyn_ptcone20, &b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_ptcone20);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1downAuxDyn.Loose", &ElectronCollection___EG_SCALE_ALL__1downAuxDyn_Loose, &b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_Loose);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1downAuxDyn.isWHSignalElectron", &ElectronCollection___EG_SCALE_ALL__1downAuxDyn_isWHSignalElectron, &b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_isWHSignalElectron);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1downAuxDyn.effSFloose", &ElectronCollection___EG_SCALE_ALL__1downAuxDyn_effSFloose, &b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_effSFloose);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1downAuxDyn.effSFtight", &ElectronCollection___EG_SCALE_ALL__1downAuxDyn_effSFtight, &b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_effSFtight);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1downAuxDyn.charge", &ElectronCollection___EG_SCALE_ALL__1downAuxDyn_charge, &b_ElectronCollection___EG_SCALE_ALL__1downAuxDyn_charge);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1upAuxDyn.topoetcone30", &ElectronCollection___EG_SCALE_ALL__1upAuxDyn_topoetcone30, &b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_topoetcone30);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1upAuxDyn.hasSharedTrack", &ElectronCollection___EG_SCALE_ALL__1upAuxDyn_hasSharedTrack, &b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_hasSharedTrack);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1upAuxDyn.pt", &ElectronCollection___EG_SCALE_ALL__1upAuxDyn_pt, &b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_pt);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1upAuxDyn.eta", &ElectronCollection___EG_SCALE_ALL__1upAuxDyn_eta, &b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_eta);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1upAuxDyn.phi", &ElectronCollection___EG_SCALE_ALL__1upAuxDyn_phi, &b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_phi);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1upAuxDyn.m", &ElectronCollection___EG_SCALE_ALL__1upAuxDyn_m, &b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_m);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1upAuxDyn.isVHLooseElectron", &ElectronCollection___EG_SCALE_ALL__1upAuxDyn_isVHLooseElectron, &b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_isVHLooseElectron);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1upAuxDyn.isZHSignalElectron", &ElectronCollection___EG_SCALE_ALL__1upAuxDyn_isZHSignalElectron, &b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_isZHSignalElectron);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1upAuxDyn.isVeryTightLH", &ElectronCollection___EG_SCALE_ALL__1upAuxDyn_isVeryTightLH, &b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_isVeryTightLH);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1upAuxDyn.ptcone20", &ElectronCollection___EG_SCALE_ALL__1upAuxDyn_ptcone20, &b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_ptcone20);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1upAuxDyn.Loose", &ElectronCollection___EG_SCALE_ALL__1upAuxDyn_Loose, &b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_Loose);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1upAuxDyn.isWHSignalElectron", &ElectronCollection___EG_SCALE_ALL__1upAuxDyn_isWHSignalElectron, &b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_isWHSignalElectron);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1upAuxDyn.effSFloose", &ElectronCollection___EG_SCALE_ALL__1upAuxDyn_effSFloose, &b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_effSFloose);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1upAuxDyn.effSFtight", &ElectronCollection___EG_SCALE_ALL__1upAuxDyn_effSFtight, &b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_effSFtight);
   fChain->SetBranchAddress("ElectronCollection___EG_SCALE_ALL__1upAuxDyn.charge", &ElectronCollection___EG_SCALE_ALL__1upAuxDyn_charge, &b_ElectronCollection___EG_SCALE_ALL__1upAuxDyn_charge);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn.topoetcone30", &ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_topoetcone30, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_topoetcone30);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn.hasSharedTrack", &ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_hasSharedTrack, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_hasSharedTrack);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn.pt", &ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_pt, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_pt);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn.eta", &ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_eta, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_eta);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn.phi", &ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_phi, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_phi);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn.m", &ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_m, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_m);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn.isVHLooseElectron", &ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_isVHLooseElectron, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_isVHLooseElectron);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn.isZHSignalElectron", &ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_isZHSignalElectron, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_isZHSignalElectron);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn.isVeryTightLH", &ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_isVeryTightLH, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_isVeryTightLH);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn.ptcone20", &ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_ptcone20, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_ptcone20);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn.Loose", &ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_Loose, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_Loose);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn.isWHSignalElectron", &ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_isWHSignalElectron, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_isWHSignalElectron);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn.effSFloose", &ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_effSFloose, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_effSFloose);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn.effSFtight", &ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_effSFtight, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_effSFtight);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn.charge", &ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_charge, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1downAuxDyn_charge);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn.topoetcone30", &ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_topoetcone30, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_topoetcone30);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn.hasSharedTrack", &ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_hasSharedTrack, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_hasSharedTrack);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn.pt", &ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_pt, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_pt);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn.eta", &ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_eta, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_eta);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn.phi", &ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_phi, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_phi);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn.m", &ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_m, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_m);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn.isVHLooseElectron", &ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_isVHLooseElectron, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_isVHLooseElectron);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn.isZHSignalElectron", &ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_isZHSignalElectron, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_isZHSignalElectron);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn.isVeryTightLH", &ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_isVeryTightLH, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_isVeryTightLH);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn.ptcone20", &ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_ptcone20, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_ptcone20);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn.Loose", &ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_Loose, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_Loose);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn.isWHSignalElectron", &ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_isWHSignalElectron, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_isWHSignalElectron);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn.effSFloose", &ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_effSFloose, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_effSFloose);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn.effSFtight", &ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_effSFtight, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_effSFtight);
   fChain->SetBranchAddress("ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn.charge", &ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_charge, &b_ElectronCollection___PH_SCALE_LEAKAGECONV__1upAuxDyn_charge);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn.isZHSignalElectron", &ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_isZHSignalElectron, &b_ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_isZHSignalElectron);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn.isWHSignalElectron", &ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_isWHSignalElectron, &b_ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_isWHSignalElectron);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn.isVeryTightLH", &ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_isVeryTightLH, &b_ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_isVeryTightLH);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn.isVHLooseElectron", &ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_isVHLooseElectron, &b_ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_isVHLooseElectron);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn.effSFloose", &ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_effSFloose, &b_ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_effSFloose);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn.effSFtight", &ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_effSFtight, &b_ElectronCollection___EL_EFF_CorrUncertainty__1downAuxDyn_effSFtight);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn.isZHSignalElectron", &ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_isZHSignalElectron, &b_ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_isZHSignalElectron);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn.isWHSignalElectron", &ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_isWHSignalElectron, &b_ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_isWHSignalElectron);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn.isVeryTightLH", &ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_isVeryTightLH, &b_ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_isVeryTightLH);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn.isVHLooseElectron", &ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_isVHLooseElectron, &b_ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_isVHLooseElectron);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn.effSFloose", &ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_effSFloose, &b_ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_effSFloose);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn.effSFtight", &ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_effSFtight, &b_ElectronCollection___EL_EFF_CorrUncertainty__1upAuxDyn_effSFtight);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn.isZHSignalElectron", &ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_isZHSignalElectron, &b_ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_isZHSignalElectron);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn.isWHSignalElectron", &ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_isWHSignalElectron, &b_ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_isWHSignalElectron);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn.isVeryTightLH", &ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_isVeryTightLH, &b_ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_isVeryTightLH);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn.isVHLooseElectron", &ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_isVHLooseElectron, &b_ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_isVHLooseElectron);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn.effSFloose", &ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_effSFloose, &b_ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_effSFloose);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn.effSFtight", &ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_effSFtight, &b_ElectronCollection___EL_EFF_UncorrUncertainty__1downAuxDyn_effSFtight);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn.isZHSignalElectron", &ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_isZHSignalElectron, &b_ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_isZHSignalElectron);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn.isWHSignalElectron", &ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_isWHSignalElectron, &b_ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_isWHSignalElectron);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn.isVeryTightLH", &ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_isVeryTightLH, &b_ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_isVeryTightLH);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn.isVHLooseElectron", &ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_isVHLooseElectron, &b_ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_isVHLooseElectron);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn.effSFloose", &ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_effSFloose, &b_ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_effSFloose);
   fChain->SetBranchAddress("ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn.effSFtight", &ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_effSFtight, &b_ElectronCollection___EL_EFF_UncorrUncertainty__1upAuxDyn_effSFtight);
   Notify();
}

Bool_t CxAOD_00-08::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void CxAOD_00-08::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t CxAOD_00-08::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef CxAOD_00-08_cxx
