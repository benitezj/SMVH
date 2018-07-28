//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sat Oct 25 21:35:35 2014 by ROOT version 5.34/20
// from TTree CollectionTree/CollectionTree
// found on file: /afs/cern.ch/atlas/project/PAT/xAODs/r5591/mc14_8TeV.147807.PowhegPythia8_AU2CT10_Zmumu.merge.AOD.e1852_s1896_s1912_r5591_r5625_tid01512432_00/AOD.01512432._001510.pool.root.1
//////////////////////////////////////////////////////////

#ifndef CollectionTree_h
#define CollectionTree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include <vector>
#include <vector>
#include <vector>
#include <vector>
#include <vector>
#include <vector>

// Fixed size dimensions of array or collections stored in the TTree if any.
   const Int_t kMaxEventInfoAux = 1;
   const Int_t kMaxMETMap_LocHadTopoAux = 1;
   const Int_t kMaxMETMap_LocHadTopoRegionsAux = 1;
   const Int_t kMaxMETMap_RefFinalAux = 1;
   const Int_t kMaxMETMap_RefFinalRegionsAux = 1;
   const Int_t kMaxMETMap_TrackAux = 1;
   const Int_t kMaxMETMap_TruthAux = 1;
   const Int_t kMaxMETMap_TruthRegionsAux = 1;
   const Int_t kMaxMuonTruthParticleAux = 1;
   const Int_t kMaxTruthParticleAux = 1;
   const Int_t kMaxElectronCollectionAux = 1;
   const Int_t kMaxFwdElectronsAux = 1;
   const Int_t kMaxMuonsAux = 1;
   const Int_t kMaxCombinedMuonTrackParticlesAux = 1;
   const Int_t kMaxExtrapolatedMuonTrackParticlesAux = 1;
   const Int_t kMaxGSFTrackParticlesAux = 1;
   const Int_t kMaxInDetTrackParticlesAux = 1;
   const Int_t kMaxInDetTrackParticlesForwardAux = 1;
   const Int_t kMaxTauPi0ChargedPFOContainerAux = 1;
   const Int_t kMaxTauPi0NeutralPFOContainerAux = 1;
   const Int_t kMaxTauShotPFOContainerAux = 1;
   const Int_t kMaxchargedJetETMissPFO_eflowRecAux = 1;
   const Int_t kMaxchargedTauPFO_eflowRecAux = 1;
   const Int_t kMaxneutralJetETMissPFO_eflowRecAux = 1;
   const Int_t kMaxneutralJetETMiss_LCPFO_NonModified_eflowRecAux = 1;
   const Int_t kMaxneutralJetETMiss_LCPFO_eflowRecAux = 1;
   const Int_t kMaxneutralTauPFO_eflowRecAux = 1;
   const Int_t kMaxMET_LocHadTopoAux = 1;
   const Int_t kMaxMET_LocHadTopoRegionsAux = 1;
   const Int_t kMaxMET_RefFinalAux = 1;
   const Int_t kMaxMET_RefFinalRegionsAux = 1;
   const Int_t kMaxMET_TrackAux = 1;
   const Int_t kMaxMET_TruthAux = 1;
   const Int_t kMaxMET_TruthRegionsAux = 1;
   const Int_t kMaxBTagging_AntiKt10LCTopoAux = 1;
   const Int_t kMaxBTagging_AntiKt10TruthAux = 1;
   const Int_t kMaxBTagging_AntiKt10TruthWZAux = 1;
   const Int_t kMaxBTagging_AntiKt4EMTopoAux = 1;
   const Int_t kMaxBTagging_AntiKt4LCTopoAux = 1;
   const Int_t kMaxBTagging_AntiKt4TruthAux = 1;
   const Int_t kMaxBTagging_AntiKt4TruthWZAux = 1;
   const Int_t kMaxPhotonCollectionAux = 1;
   const Int_t kMaxTruthVertexAux = 1;
   const Int_t kMaxTruthEventAux = 1;
   const Int_t kMaxAntiKt10LCTopoJetsAux = 1;
   const Int_t kMaxAntiKt10TruthJetsAux = 1;
   const Int_t kMaxAntiKt10TruthWZJetsAux = 1;
   const Int_t kMaxAntiKt3PV0TrackJetsAux = 1;
   const Int_t kMaxAntiKt3ZTrackJetsAux = 1;
   const Int_t kMaxAntiKt4EMTopoJetsAux = 1;
   const Int_t kMaxAntiKt4LCTopoJetsAux = 1;
   const Int_t kMaxAntiKt4PV0TrackJetsAux = 1;
   const Int_t kMaxAntiKt4TruthJetsAux = 1;
   const Int_t kMaxAntiKt4TruthWZJetsAux = 1;
   const Int_t kMaxAntiKt4ZTrackJetsAux = 1;
   const Int_t kMaxCamKt12LCTopoJetsAux = 1;
   const Int_t kMaxCamKt12TruthJetsAux = 1;
   const Int_t kMaxCamKt12TruthWZJetsAux = 1;
   const Int_t kMaxCaloCalTopoClusterAux = 1;
   const Int_t kMaxLArClusterEMFrwdAux = 1;
   const Int_t kMaxegClusterCollectionAux = 1;
   const Int_t kMaxTauRecContainerAux = 1;
   const Int_t kMaxGSFConversionVerticesAux = 1;
   const Int_t kMaxPrimaryVerticesAux = 1;
   const Int_t kMaxTauSecondaryVertexContainerAux = 1;
   const Int_t kMaxMuonSegmentsAux = 1;
   const Int_t kMaxAntiKt10LCTopoJetsAuxDyn_btaggingLink = 3;
   const Int_t kMaxAntiKt10LCTopoJetsAuxDyn_GhostTruthAssociationLink = 3;
   const Int_t kMaxAntiKt10LCTopoJetsAuxDyn_HighestJVFVtx = 3;
   const Int_t kMaxAntiKt10TruthJetsAuxDyn_btaggingLink = 5;
   const Int_t kMaxAntiKt10TruthWZJetsAuxDyn_btaggingLink = 5;
   const Int_t kMaxAntiKt3PV0TrackJetsAuxDyn_OriginVertex = 29;
   const Int_t kMaxAntiKt3ZTrackJetsAuxDyn_OriginVertex = 63;
   const Int_t kMaxAntiKt4EMTopoJetsAuxDyn_btaggingLink = 24;
   const Int_t kMaxAntiKt4EMTopoJetsAuxDyn_GhostTruthAssociationLink = 24;
   const Int_t kMaxAntiKt4EMTopoJetsAuxDyn_HighestJVFVtx = 24;
   const Int_t kMaxAntiKt4LCTopoJetsAuxDyn_btaggingLink = 26;
   const Int_t kMaxAntiKt4LCTopoJetsAuxDyn_GhostTruthAssociationLink = 26;
   const Int_t kMaxAntiKt4LCTopoJetsAuxDyn_HighestJVFVtx = 26;
   const Int_t kMaxAntiKt4PV0TrackJetsAuxDyn_OriginVertex = 26;
   const Int_t kMaxAntiKt4TruthJetsAuxDyn_btaggingLink = 32;
   const Int_t kMaxAntiKt4TruthWZJetsAuxDyn_btaggingLink = 32;
   const Int_t kMaxAntiKt4ZTrackJetsAuxDyn_OriginVertex = 66;
   const Int_t kMaxCamKt12LCTopoJetsAuxDyn_GhostTruthAssociationLink = 3;
   const Int_t kMaxCamKt12LCTopoJetsAuxDyn_HighestJVFVtx = 3;
   const Int_t kMaxCombinedMuonTrackParticlesAuxDyn_truthParticleLink = 4;
   const Int_t kMaxCombinedMuonTrackParticlesAuxDyn_trackLink = 4;
   const Int_t kMaxElectronCollectionAuxDyn_truthParticleLink = 7;
   const Int_t kMaxEventInfoAuxDyn_subEventLink = 761;
   const Int_t kMaxExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink = 5;
   const Int_t kMaxExtrapolatedMuonTrackParticlesAuxDyn_trackLink = 5;
   const Int_t kMaxGSFTrackParticlesAuxDyn_originalTrackParticle = 19;
   const Int_t kMaxGSFTrackParticlesAuxDyn_truthParticleLink = 19;
   const Int_t kMaxGSFTrackParticlesAuxDyn_trackLink = 19;
   const Int_t kMaxInDetTrackParticlesAuxDyn_truthParticleLink = 799;
   const Int_t kMaxInDetTrackParticlesAuxDyn_trackLink = 799;
   const Int_t kMaxInDetTrackParticlesForwardAuxDyn_truthParticleLink = 8;
   const Int_t kMaxInDetTrackParticlesForwardAuxDyn_trackLink = 8;
   const Int_t kMaxLArClusterEMFrwdAuxDyn_CellLink = 33;
   const Int_t kMaxMuonSegmentsAuxDyn_muonSegment = 85;
   const Int_t kMaxMuonTruthParticleAuxDyn_recoMuonLink = 6;
   const Int_t kMaxPhotonCollectionAuxDyn_truthParticleLink = 28;
   const Int_t kMaxegClusterCollectionAuxDyn_originalClusterLink = 30;
   const Int_t kMaxegClusterCollectionAuxDyn_CellLink = 30;

class CollectionTree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   PileUpEventInfo_p5 *McEventInfo;
   CaloCompactCellContainer *AODCellContainer;
   TileCellVec     *MBTSContainer;
   TileMuContainer_p1 *TileMuObj;
   xAOD::TrigConfKeys_v1 *TrigConfKeys;
   xAOD::MissingETComponentMap_v1 *METMap_LocHadTopo;
   xAOD::MissingETComponentMap_v1 *METMap_LocHadTopoRegions;
   xAOD::MissingETComponentMap_v1 *METMap_RefFinal;
   xAOD::MissingETComponentMap_v1 *METMap_RefFinalRegions;
   xAOD::MissingETComponentMap_v1 *METMap_Track;
   xAOD::MissingETComponentMap_v1 *METMap_Truth;
   xAOD::MissingETComponentMap_v1 *METMap_TruthRegions;
 //xAOD::EventAuxInfo_v1 *EventInfoAux_;
 //xAOD::EventAuxInfo_v1 *EventInfoAux_xAOD__AuxInfoBase;
   UInt_t          EventInfoAux_runNumber;
   ULong64_t       EventInfoAux_eventNumber;
   UInt_t          EventInfoAux_lumiBlock;
   UInt_t          EventInfoAux_timeStamp;
   UInt_t          EventInfoAux_timeStampNSOffset;
   UInt_t          EventInfoAux_bcid;
   UInt_t          EventInfoAux_detectorMask0;
   UInt_t          EventInfoAux_detectorMask1;
 //vector<pair<string,string> > EventInfoAux_detDescrTags;
   UInt_t          EventInfoAux_eventTypeBitmask;
   UInt_t          EventInfoAux_statusElement;
   UInt_t          EventInfoAux_extendedLevel1ID;
   UShort_t        EventInfoAux_level1TriggerType;
   vector<string>  EventInfoAux_streamTagNames;
   vector<string>  EventInfoAux_streamTagTypes;
   vector<char>    EventInfoAux_streamTagObeysLumiblock;
   Float_t         EventInfoAux_actualInteractionsPerCrossing;
   Float_t         EventInfoAux_averageInteractionsPerCrossing;
   UInt_t          EventInfoAux_pixelFlags;
   UInt_t          EventInfoAux_sctFlags;
   UInt_t          EventInfoAux_trtFlags;
   UInt_t          EventInfoAux_larFlags;
   UInt_t          EventInfoAux_tileFlags;
   UInt_t          EventInfoAux_muonFlags;
   UInt_t          EventInfoAux_forwardDetFlags;
   UInt_t          EventInfoAux_coreFlags;
   UInt_t          EventInfoAux_backgroundFlags;
   UInt_t          EventInfoAux_lumiFlags;
   Float_t         EventInfoAux_beamPosX;
   Float_t         EventInfoAux_beamPosY;
   Float_t         EventInfoAux_beamPosZ;
   Float_t         EventInfoAux_beamPosSigmaX;
   Float_t         EventInfoAux_beamPosSigmaY;
   Float_t         EventInfoAux_beamPosSigmaZ;
   Float_t         EventInfoAux_beamPosSigmaXY;
   Float_t         EventInfoAux_beamTiltXZ;
   Float_t         EventInfoAux_beamTiltYZ;
   UInt_t          EventInfoAux_beamStatus;
   xAOD::EventInfo_v1 *EventInfo;
   RecoTimingObj_p1 *ESDtoAOD_mems;
   RecoTimingObj_p1 *ESDtoAOD_timings;
   RecoTimingObj_p1 *EVNTtoHITS_timings;
   RecoTimingObj_p1 *HITStoRDO_timings;
   RecoTimingObj_p1 *RAWtoESD_mems;
   RecoTimingObj_p1 *RAWtoESD_timings;
   LArNoisyROSummary_p1 *LArNoisyROSummary;
   Trk::TrackCollection_tlp5 *GSFTracks;
 //xAOD::MissingETAuxComponentMap_v1 *METMap_LocHadTopoAux_;
 //xAOD::MissingETAuxComponentMap_v1 *METMap_LocHadTopoAux_xAOD__AuxContainerBase;
 //vector<ElementLink<xAOD::MissingETContainer_v1> > METMap_LocHadTopoAux_metLink;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > METMap_LocHadTopoAux_objectLinks;
   vector<vector<double> > METMap_LocHadTopoAux_wpx;
   vector<vector<double> > METMap_LocHadTopoAux_wpy;
   vector<vector<double> > METMap_LocHadTopoAux_wet;
 //vector<unsigned long long> METMap_LocHadTopoAux_statusWord;
 //xAOD::MissingETAuxComponentMap_v1 *METMap_LocHadTopoRegionsAux_;
 //xAOD::MissingETAuxComponentMap_v1 *METMap_LocHadTopoRegionsAux_xAOD__AuxContainerBase;
 //vector<ElementLink<xAOD::MissingETContainer_v1> > METMap_LocHadTopoRegionsAux_metLink;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > METMap_LocHadTopoRegionsAux_objectLinks;
   vector<vector<double> > METMap_LocHadTopoRegionsAux_wpx;
   vector<vector<double> > METMap_LocHadTopoRegionsAux_wpy;
   vector<vector<double> > METMap_LocHadTopoRegionsAux_wet;
 //vector<unsigned long long> METMap_LocHadTopoRegionsAux_statusWord;
 //xAOD::MissingETAuxComponentMap_v1 *METMap_RefFinalAux_;
 //xAOD::MissingETAuxComponentMap_v1 *METMap_RefFinalAux_xAOD__AuxContainerBase;
 //vector<ElementLink<xAOD::MissingETContainer_v1> > METMap_RefFinalAux_metLink;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > METMap_RefFinalAux_objectLinks;
   vector<vector<double> > METMap_RefFinalAux_wpx;
   vector<vector<double> > METMap_RefFinalAux_wpy;
   vector<vector<double> > METMap_RefFinalAux_wet;
 //vector<unsigned long long> METMap_RefFinalAux_statusWord;
 //xAOD::MissingETAuxComponentMap_v1 *METMap_RefFinalRegionsAux_;
 //xAOD::MissingETAuxComponentMap_v1 *METMap_RefFinalRegionsAux_xAOD__AuxContainerBase;
 //vector<ElementLink<xAOD::MissingETContainer_v1> > METMap_RefFinalRegionsAux_metLink;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > METMap_RefFinalRegionsAux_objectLinks;
   vector<vector<double> > METMap_RefFinalRegionsAux_wpx;
   vector<vector<double> > METMap_RefFinalRegionsAux_wpy;
   vector<vector<double> > METMap_RefFinalRegionsAux_wet;
 //vector<unsigned long long> METMap_RefFinalRegionsAux_statusWord;
 //xAOD::MissingETAuxComponentMap_v1 *METMap_TrackAux_;
 //xAOD::MissingETAuxComponentMap_v1 *METMap_TrackAux_xAOD__AuxContainerBase;
 //vector<ElementLink<xAOD::MissingETContainer_v1> > METMap_TrackAux_metLink;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > METMap_TrackAux_objectLinks;
   vector<vector<double> > METMap_TrackAux_wpx;
   vector<vector<double> > METMap_TrackAux_wpy;
   vector<vector<double> > METMap_TrackAux_wet;
 //vector<unsigned long long> METMap_TrackAux_statusWord;
 //xAOD::MissingETAuxComponentMap_v1 *METMap_TruthAux_;
 //xAOD::MissingETAuxComponentMap_v1 *METMap_TruthAux_xAOD__AuxContainerBase;
 //vector<ElementLink<xAOD::MissingETContainer_v1> > METMap_TruthAux_metLink;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > METMap_TruthAux_objectLinks;
   vector<vector<double> > METMap_TruthAux_wpx;
   vector<vector<double> > METMap_TruthAux_wpy;
   vector<vector<double> > METMap_TruthAux_wet;
 //vector<unsigned long long> METMap_TruthAux_statusWord;
 //xAOD::MissingETAuxComponentMap_v1 *METMap_TruthRegionsAux_;
 //xAOD::MissingETAuxComponentMap_v1 *METMap_TruthRegionsAux_xAOD__AuxContainerBase;
 //vector<ElementLink<xAOD::MissingETContainer_v1> > METMap_TruthRegionsAux_metLink;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > METMap_TruthRegionsAux_objectLinks;
   vector<vector<double> > METMap_TruthRegionsAux_wpx;
   vector<vector<double> > METMap_TruthRegionsAux_wpy;
   vector<vector<double> > METMap_TruthRegionsAux_wet;
 //vector<unsigned long long> METMap_TruthRegionsAux_statusWord;
   DataVector<xAOD::Electron_v1> *ElectronCollection;
   DataVector<xAOD::Electron_v1> *FwdElectrons;
   DataVector<xAOD::Vertex_v1> *GSFConversionVertices;
   DataVector<xAOD::Vertex_v1> *PrimaryVertices;
   DataVector<xAOD::Vertex_v1> *TauSecondaryVertexContainer;
   xAOD::MissingETContainer_v1 *MET_LocHadTopo;
   xAOD::MissingETContainer_v1 *MET_LocHadTopoRegions;
   xAOD::MissingETContainer_v1 *MET_RefFinal;
   xAOD::MissingETContainer_v1 *MET_RefFinalRegions;
   xAOD::MissingETContainer_v1 *MET_Track;
   xAOD::MissingETContainer_v1 *MET_Truth;
   xAOD::MissingETContainer_v1 *MET_TruthRegions;
   DataVector<xAOD::Photon_v1> *PhotonCollection;
 //xAOD::TruthParticleAuxContainer_v1 *MuonTruthParticleAux_;
 //xAOD::TruthParticleAuxContainer_v1 *MuonTruthParticleAux_xAOD__AuxContainerBase;
   vector<int>     MuonTruthParticleAux_pdgId;
   vector<int>     MuonTruthParticleAux_barcode;
   vector<int>     MuonTruthParticleAux_status;
 //vector<ElementLink<DataVector<xAOD::TruthVertex_v1> > > MuonTruthParticleAux_prodVtxLink;
 //vector<ElementLink<DataVector<xAOD::TruthVertex_v1> > > MuonTruthParticleAux_decayVtxLink;
   vector<float>   MuonTruthParticleAux_px;
   vector<float>   MuonTruthParticleAux_py;
   vector<float>   MuonTruthParticleAux_pz;
   vector<float>   MuonTruthParticleAux_e;
   vector<float>   MuonTruthParticleAux_m;
 //xAOD::TruthParticleAuxContainer_v1 *TruthParticleAux_;
 //xAOD::TruthParticleAuxContainer_v1 *TruthParticleAux_xAOD__AuxContainerBase;
   vector<int>     TruthParticleAux_pdgId;
   vector<int>     TruthParticleAux_barcode;
   vector<int>     TruthParticleAux_status;
 //vector<ElementLink<DataVector<xAOD::TruthVertex_v1> > > TruthParticleAux_prodVtxLink;
 //vector<ElementLink<DataVector<xAOD::TruthVertex_v1> > > TruthParticleAux_decayVtxLink;
   vector<float>   TruthParticleAux_px;
   vector<float>   TruthParticleAux_py;
   vector<float>   TruthParticleAux_pz;
   vector<float>   TruthParticleAux_e;
   vector<float>   TruthParticleAux_m;
 //xAOD::ElectronAuxContainer_v1 *ElectronCollectionAux_;
 //xAOD::ElectronAuxContainer_v1 *ElectronCollectionAux_xAOD__EgammaAuxContainer_v1;
 //vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > ElectronCollectionAux_trackParticleLinks;
   vector<float>   ElectronCollectionAux_charge;
   vector<float>   ElectronCollectionAux_deltaEta0;
   vector<float>   ElectronCollectionAux_deltaEta1;
   vector<float>   ElectronCollectionAux_deltaEta2;
   vector<float>   ElectronCollectionAux_deltaEta3;
   vector<float>   ElectronCollectionAux_deltaPhi0;
   vector<float>   ElectronCollectionAux_deltaPhi1;
   vector<float>   ElectronCollectionAux_deltaPhi2;
   vector<float>   ElectronCollectionAux_deltaPhi3;
   vector<float>   ElectronCollectionAux_deltaPhiFromLastMeasurement;
   vector<float>   ElectronCollectionAux_deltaPhiRescaled0;
   vector<float>   ElectronCollectionAux_deltaPhiRescaled1;
   vector<float>   ElectronCollectionAux_deltaPhiRescaled2;
   vector<float>   ElectronCollectionAux_deltaPhiRescaled3;
 //xAOD::ElectronAuxContainer_v1 *FwdElectronsAux_;
 //xAOD::ElectronAuxContainer_v1 *FwdElectronsAux_xAOD__EgammaAuxContainer_v1;
 //vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > FwdElectronsAux_trackParticleLinks;
   vector<float>   FwdElectronsAux_charge;
   vector<float>   FwdElectronsAux_deltaEta0;
   vector<float>   FwdElectronsAux_deltaEta1;
   vector<float>   FwdElectronsAux_deltaEta2;
   vector<float>   FwdElectronsAux_deltaEta3;
   vector<float>   FwdElectronsAux_deltaPhi0;
   vector<float>   FwdElectronsAux_deltaPhi1;
   vector<float>   FwdElectronsAux_deltaPhi2;
   vector<float>   FwdElectronsAux_deltaPhi3;
   vector<float>   FwdElectronsAux_deltaPhiFromLastMeasurement;
   vector<float>   FwdElectronsAux_deltaPhiRescaled0;
   vector<float>   FwdElectronsAux_deltaPhiRescaled1;
   vector<float>   FwdElectronsAux_deltaPhiRescaled2;
   vector<float>   FwdElectronsAux_deltaPhiRescaled3;
   DataVector<xAOD::MuonSegment_v1> *MuonSegments;
   CaloClusterCellLinkContainer *egClusterCollection_links;
 //xAOD::MuonAuxContainer_v1 *MuonsAux_;
 //xAOD::MuonAuxContainer_v1 *MuonsAux_xAOD__AuxContainerBase;
   vector<float>   MuonsAux_pt;
   vector<float>   MuonsAux_eta;
   vector<float>   MuonsAux_phi;
   vector<float>   MuonsAux_e;
   vector<unsigned short> MuonsAux_allAuthors;
   vector<unsigned short> MuonsAux_author;
   vector<unsigned short> MuonsAux_muonType;
   vector<unsigned char> MuonsAux_quality;
   vector<unsigned char> MuonsAux_numberOfPrecisionLayers;
   vector<unsigned char> MuonsAux_numberOfPrecisionHoleLayers;
   vector<unsigned char> MuonsAux_numberOfPhiLayers;
   vector<unsigned char> MuonsAux_numberOfPhiHoleLayers;
   vector<unsigned char> MuonsAux_numberOfTriggerEtaLayers;
   vector<unsigned char> MuonsAux_numberOfTriggerEtaHoleLayers;
   vector<unsigned char> MuonsAux_primarySector;
   vector<unsigned char> MuonsAux_secondarySector;
   vector<unsigned char> MuonsAux_innerSmallHits;
   vector<unsigned char> MuonsAux_innerLargeHits;
   vector<unsigned char> MuonsAux_middleSmallHits;
   vector<unsigned char> MuonsAux_middleLargeHits;
   vector<unsigned char> MuonsAux_outerSmallHits;
   vector<unsigned char> MuonsAux_outerLargeHits;
   vector<unsigned char> MuonsAux_extendedSmallHits;
   vector<unsigned char> MuonsAux_extendedLargeHits;
   vector<unsigned char> MuonsAux_innerSmallHoles;
   vector<unsigned char> MuonsAux_innerLargeHoles;
   vector<unsigned char> MuonsAux_middleSmallHoles;
   vector<unsigned char> MuonsAux_middleLargeHoles;
   vector<unsigned char> MuonsAux_outerSmallHoles;
   vector<unsigned char> MuonsAux_outerLargeHoles;
   vector<unsigned char> MuonsAux_extendedSmallHoles;
   vector<unsigned char> MuonsAux_extendedLargeHoles;
   vector<unsigned char> MuonsAux_phiLayer1Hits;
   vector<unsigned char> MuonsAux_phiLayer2Hits;
   vector<unsigned char> MuonsAux_phiLayer3Hits;
   vector<unsigned char> MuonsAux_phiLayer4Hits;
   vector<unsigned char> MuonsAux_etaLayer1Hits;
   vector<unsigned char> MuonsAux_etaLayer2Hits;
   vector<unsigned char> MuonsAux_etaLayer3Hits;
   vector<unsigned char> MuonsAux_etaLayer4Hits;
   vector<unsigned char> MuonsAux_phiLayer1Holes;
   vector<unsigned char> MuonsAux_phiLayer2Holes;
   vector<unsigned char> MuonsAux_phiLayer3Holes;
   vector<unsigned char> MuonsAux_phiLayer4Holes;
   vector<unsigned char> MuonsAux_etaLayer1Holes;
   vector<unsigned char> MuonsAux_etaLayer2Holes;
   vector<unsigned char> MuonsAux_etaLayer3Holes;
   vector<unsigned char> MuonsAux_etaLayer4Holes;
   vector<float>   MuonsAux_etcone10;
   vector<float>   MuonsAux_etcone20;
   vector<float>   MuonsAux_etcone30;
   vector<float>   MuonsAux_etcone40;
   vector<float>   MuonsAux_nucone10;
   vector<float>   MuonsAux_nucone20;
   vector<float>   MuonsAux_nucone30;
   vector<float>   MuonsAux_nucone40;
   vector<float>   MuonsAux_ptcone10;
   vector<float>   MuonsAux_ptcone20;
   vector<float>   MuonsAux_ptcone30;
   vector<float>   MuonsAux_ptcone40;
   vector<float>   MuonsAux_etconeNoEm10;
   vector<float>   MuonsAux_etconeNoEm20;
   vector<float>   MuonsAux_etconeNoEm30;
   vector<float>   MuonsAux_etconeNoEm40;
 //vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > MuonsAux_inDetTrackParticleLink;
 //vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > MuonsAux_muonSpectrometerTrackParticleLink;
 //vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > MuonsAux_combinedTrackParticleLink;
 //vector<ElementLink<DataVector<xAOD::CaloCluster_v1> > > MuonsAux_clusterLink;
 //vector<vector<ElementLink<DataVector<xAOD::MuonSegment_v1> > > > MuonsAux_muonSegmentLinks;
   vector<unsigned char> MuonsAux_energyLossType;
   DataVector<xAOD::TauJet_v1> *TauRecContainer;
   DataVector<xAOD::PFO_v1> *TauPi0ChargedPFOContainer;
   DataVector<xAOD::PFO_v1> *TauPi0NeutralPFOContainer;
   DataVector<xAOD::PFO_v1> *TauShotPFOContainer;
   DataVector<xAOD::PFO_v1> *chargedJetETMissPFO_eflowRec;
   DataVector<xAOD::PFO_v1> *chargedTauPFO_eflowRec;
   DataVector<xAOD::PFO_v1> *neutralJetETMissPFO_eflowRec;
   DataVector<xAOD::PFO_v1> *neutralJetETMiss_LCPFO_NonModified_eflowRec;
   DataVector<xAOD::PFO_v1> *neutralJetETMiss_LCPFO_eflowRec;
   DataVector<xAOD::PFO_v1> *neutralTauPFO_eflowRec;
   DataVector<xAOD::Muon_v1> *Muons;
   DataVector<xAOD::TruthEvent_v1> *TruthEvent;
 //xAOD::TrackParticleAuxContainer_v1 *CombinedMuonTrackParticlesAux_;
 //xAOD::TrackParticleAuxContainer_v1 *CombinedMuonTrackParticlesAux_xAOD__AuxContainerBase;
   vector<float>   CombinedMuonTrackParticlesAux_d0;
   vector<float>   CombinedMuonTrackParticlesAux_z0;
   vector<float>   CombinedMuonTrackParticlesAux_phi;
   vector<float>   CombinedMuonTrackParticlesAux_theta;
   vector<float>   CombinedMuonTrackParticlesAux_qOverP;
 //vector<vector<float> > CombinedMuonTrackParticlesAux_definingParametersCovMatrix;
   vector<float>   CombinedMuonTrackParticlesAux_vx;
   vector<float>   CombinedMuonTrackParticlesAux_vy;
   vector<float>   CombinedMuonTrackParticlesAux_vz;
 //vector<vector<float> > CombinedMuonTrackParticlesAux_parameterX;
 //vector<vector<float> > CombinedMuonTrackParticlesAux_parameterY;
 //vector<vector<float> > CombinedMuonTrackParticlesAux_parameterZ;
 //vector<vector<float> > CombinedMuonTrackParticlesAux_parameterPX;
 //vector<vector<float> > CombinedMuonTrackParticlesAux_parameterPY;
 //vector<vector<float> > CombinedMuonTrackParticlesAux_parameterPZ;
 //vector<vector<float> > CombinedMuonTrackParticlesAux_trackParameterCovarianceMatrices;
 //vector<vector<unsigned char> > CombinedMuonTrackParticlesAux_parameterPosition;
   vector<float>   CombinedMuonTrackParticlesAux_chiSquared;
   vector<float>   CombinedMuonTrackParticlesAux_numberDoF;
   vector<unsigned char> CombinedMuonTrackParticlesAux_trackFitter;
   vector<unsigned char> CombinedMuonTrackParticlesAux_particleHypothesis;
   vector<unsigned char> CombinedMuonTrackParticlesAux_trackProperties;
   vector<unsigned long> CombinedMuonTrackParticlesAux_patternRecoInfo;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfContribPixelLayers;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfBLayerHits;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfBLayerOutliers;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfBLayerSharedHits;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfBLayerSplitHits;
   vector<unsigned char> CombinedMuonTrackParticlesAux_expectBLayerHit;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfPixelHits;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfPixelOutliers;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfPixelHoles;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfPixelSharedHits;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfPixelSplitHits;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfGangedPixels;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfGangedFlaggedFakes;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfPixelDeadSensors;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfPixelSpoiltHits;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfSCTHits;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfSCTOutliers;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfSCTHoles;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfSCTDoubleHoles;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfSCTSharedHits;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfSCTDeadSensors;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfSCTSpoiltHits;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfTRTHits;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfTRTOutliers;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfTRTHoles;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfTRTHighThresholdHits;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfTRTHighThresholdOutliers;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfTRTDeadStraws;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfTRTTubeHits;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfTRTXenonHits;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfPrecisionLayers;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfPrecisionHoleLayers;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfPhiLayers;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfPhiHoleLayers;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfTriggerEtaLayers;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfTriggerEtaHoleLayers;
   vector<unsigned char> CombinedMuonTrackParticlesAux_numberOfOutliersOnTrack;
   vector<unsigned char> CombinedMuonTrackParticlesAux_standardDeviationOfChi2OS;
   vector<float>   CombinedMuonTrackParticlesAux_eProbabilityComb;
   vector<float>   CombinedMuonTrackParticlesAux_eProbabilityHT;
   vector<float>   CombinedMuonTrackParticlesAux_eProbabilityToT;
   vector<float>   CombinedMuonTrackParticlesAux_eProbabilityBrem;
 //vector<ElementLink<DataVector<xAOD::Vertex_v1> > > CombinedMuonTrackParticlesAux_vertexLink;
 //xAOD::TrackParticleAuxContainer_v1 *ExtrapolatedMuonTrackParticlesAux_;
 //xAOD::TrackParticleAuxContainer_v1 *ExtrapolatedMuonTrackParticlesAux_xAOD__AuxContainerBase;
   vector<float>   ExtrapolatedMuonTrackParticlesAux_d0;
   vector<float>   ExtrapolatedMuonTrackParticlesAux_z0;
   vector<float>   ExtrapolatedMuonTrackParticlesAux_phi;
   vector<float>   ExtrapolatedMuonTrackParticlesAux_theta;
   vector<float>   ExtrapolatedMuonTrackParticlesAux_qOverP;
 //vector<vector<float> > ExtrapolatedMuonTrackParticlesAux_definingParametersCovMatrix;
   vector<float>   ExtrapolatedMuonTrackParticlesAux_vx;
   vector<float>   ExtrapolatedMuonTrackParticlesAux_vy;
   vector<float>   ExtrapolatedMuonTrackParticlesAux_vz;
 //vector<vector<float> > ExtrapolatedMuonTrackParticlesAux_parameterX;
 //vector<vector<float> > ExtrapolatedMuonTrackParticlesAux_parameterY;
 //vector<vector<float> > ExtrapolatedMuonTrackParticlesAux_parameterZ;
 //vector<vector<float> > ExtrapolatedMuonTrackParticlesAux_parameterPX;
 //vector<vector<float> > ExtrapolatedMuonTrackParticlesAux_parameterPY;
 //vector<vector<float> > ExtrapolatedMuonTrackParticlesAux_parameterPZ;
 //vector<vector<float> > ExtrapolatedMuonTrackParticlesAux_trackParameterCovarianceMatrices;
 //vector<vector<unsigned char> > ExtrapolatedMuonTrackParticlesAux_parameterPosition;
   vector<float>   ExtrapolatedMuonTrackParticlesAux_chiSquared;
   vector<float>   ExtrapolatedMuonTrackParticlesAux_numberDoF;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_trackFitter;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_particleHypothesis;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_trackProperties;
   vector<unsigned long> ExtrapolatedMuonTrackParticlesAux_patternRecoInfo;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfContribPixelLayers;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfBLayerHits;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfBLayerOutliers;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfBLayerSharedHits;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfBLayerSplitHits;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_expectBLayerHit;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfPixelHits;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfPixelOutliers;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfPixelHoles;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfPixelSharedHits;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfPixelSplitHits;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfGangedPixels;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfGangedFlaggedFakes;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfPixelDeadSensors;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfPixelSpoiltHits;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfSCTHits;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfSCTOutliers;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfSCTHoles;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfSCTDoubleHoles;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfSCTSharedHits;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfSCTDeadSensors;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfSCTSpoiltHits;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfTRTHits;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfTRTOutliers;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfTRTHoles;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfTRTHighThresholdHits;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfTRTHighThresholdOutliers;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfTRTDeadStraws;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfTRTTubeHits;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfTRTXenonHits;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfPrecisionLayers;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfPrecisionHoleLayers;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfPhiLayers;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfPhiHoleLayers;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfTriggerEtaLayers;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfTriggerEtaHoleLayers;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_numberOfOutliersOnTrack;
   vector<unsigned char> ExtrapolatedMuonTrackParticlesAux_standardDeviationOfChi2OS;
   vector<float>   ExtrapolatedMuonTrackParticlesAux_eProbabilityComb;
   vector<float>   ExtrapolatedMuonTrackParticlesAux_eProbabilityHT;
   vector<float>   ExtrapolatedMuonTrackParticlesAux_eProbabilityToT;
   vector<float>   ExtrapolatedMuonTrackParticlesAux_eProbabilityBrem;
 //vector<ElementLink<DataVector<xAOD::Vertex_v1> > > ExtrapolatedMuonTrackParticlesAux_vertexLink;
 //xAOD::TrackParticleAuxContainer_v1 *GSFTrackParticlesAux_;
 //xAOD::TrackParticleAuxContainer_v1 *GSFTrackParticlesAux_xAOD__AuxContainerBase;
   vector<float>   GSFTrackParticlesAux_d0;
   vector<float>   GSFTrackParticlesAux_z0;
   vector<float>   GSFTrackParticlesAux_phi;
   vector<float>   GSFTrackParticlesAux_theta;
   vector<float>   GSFTrackParticlesAux_qOverP;
 //vector<vector<float> > GSFTrackParticlesAux_definingParametersCovMatrix;
   vector<float>   GSFTrackParticlesAux_vx;
   vector<float>   GSFTrackParticlesAux_vy;
   vector<float>   GSFTrackParticlesAux_vz;
 //vector<vector<float> > GSFTrackParticlesAux_parameterX;
 //vector<vector<float> > GSFTrackParticlesAux_parameterY;
 //vector<vector<float> > GSFTrackParticlesAux_parameterZ;
 //vector<vector<float> > GSFTrackParticlesAux_parameterPX;
 //vector<vector<float> > GSFTrackParticlesAux_parameterPY;
 //vector<vector<float> > GSFTrackParticlesAux_parameterPZ;
 //vector<vector<float> > GSFTrackParticlesAux_trackParameterCovarianceMatrices;
 //vector<vector<unsigned char> > GSFTrackParticlesAux_parameterPosition;
   vector<float>   GSFTrackParticlesAux_chiSquared;
   vector<float>   GSFTrackParticlesAux_numberDoF;
   vector<unsigned char> GSFTrackParticlesAux_trackFitter;
   vector<unsigned char> GSFTrackParticlesAux_particleHypothesis;
   vector<unsigned char> GSFTrackParticlesAux_trackProperties;
   vector<unsigned long> GSFTrackParticlesAux_patternRecoInfo;
   vector<unsigned char> GSFTrackParticlesAux_numberOfContribPixelLayers;
   vector<unsigned char> GSFTrackParticlesAux_numberOfBLayerHits;
   vector<unsigned char> GSFTrackParticlesAux_numberOfBLayerOutliers;
   vector<unsigned char> GSFTrackParticlesAux_numberOfBLayerSharedHits;
   vector<unsigned char> GSFTrackParticlesAux_numberOfBLayerSplitHits;
   vector<unsigned char> GSFTrackParticlesAux_expectBLayerHit;
   vector<unsigned char> GSFTrackParticlesAux_numberOfPixelHits;
   vector<unsigned char> GSFTrackParticlesAux_numberOfPixelOutliers;
   vector<unsigned char> GSFTrackParticlesAux_numberOfPixelHoles;
   vector<unsigned char> GSFTrackParticlesAux_numberOfPixelSharedHits;
   vector<unsigned char> GSFTrackParticlesAux_numberOfPixelSplitHits;
   vector<unsigned char> GSFTrackParticlesAux_numberOfGangedPixels;
   vector<unsigned char> GSFTrackParticlesAux_numberOfGangedFlaggedFakes;
   vector<unsigned char> GSFTrackParticlesAux_numberOfPixelDeadSensors;
   vector<unsigned char> GSFTrackParticlesAux_numberOfPixelSpoiltHits;
   vector<unsigned char> GSFTrackParticlesAux_numberOfSCTHits;
   vector<unsigned char> GSFTrackParticlesAux_numberOfSCTOutliers;
   vector<unsigned char> GSFTrackParticlesAux_numberOfSCTHoles;
   vector<unsigned char> GSFTrackParticlesAux_numberOfSCTDoubleHoles;
   vector<unsigned char> GSFTrackParticlesAux_numberOfSCTSharedHits;
   vector<unsigned char> GSFTrackParticlesAux_numberOfSCTDeadSensors;
   vector<unsigned char> GSFTrackParticlesAux_numberOfSCTSpoiltHits;
   vector<unsigned char> GSFTrackParticlesAux_numberOfTRTHits;
   vector<unsigned char> GSFTrackParticlesAux_numberOfTRTOutliers;
   vector<unsigned char> GSFTrackParticlesAux_numberOfTRTHoles;
   vector<unsigned char> GSFTrackParticlesAux_numberOfTRTHighThresholdHits;
   vector<unsigned char> GSFTrackParticlesAux_numberOfTRTHighThresholdOutliers;
   vector<unsigned char> GSFTrackParticlesAux_numberOfTRTDeadStraws;
   vector<unsigned char> GSFTrackParticlesAux_numberOfTRTTubeHits;
   vector<unsigned char> GSFTrackParticlesAux_numberOfTRTXenonHits;
   vector<unsigned char> GSFTrackParticlesAux_numberOfPrecisionLayers;
   vector<unsigned char> GSFTrackParticlesAux_numberOfPrecisionHoleLayers;
   vector<unsigned char> GSFTrackParticlesAux_numberOfPhiLayers;
   vector<unsigned char> GSFTrackParticlesAux_numberOfPhiHoleLayers;
   vector<unsigned char> GSFTrackParticlesAux_numberOfTriggerEtaLayers;
   vector<unsigned char> GSFTrackParticlesAux_numberOfTriggerEtaHoleLayers;
   vector<unsigned char> GSFTrackParticlesAux_numberOfOutliersOnTrack;
   vector<unsigned char> GSFTrackParticlesAux_standardDeviationOfChi2OS;
   vector<float>   GSFTrackParticlesAux_eProbabilityComb;
   vector<float>   GSFTrackParticlesAux_eProbabilityHT;
   vector<float>   GSFTrackParticlesAux_eProbabilityToT;
   vector<float>   GSFTrackParticlesAux_eProbabilityBrem;
 //vector<ElementLink<DataVector<xAOD::Vertex_v1> > > GSFTrackParticlesAux_vertexLink;
 //xAOD::TrackParticleAuxContainer_v1 *InDetTrackParticlesAux_;
 //xAOD::TrackParticleAuxContainer_v1 *InDetTrackParticlesAux_xAOD__AuxContainerBase;
   vector<float>   InDetTrackParticlesAux_d0;
   vector<float>   InDetTrackParticlesAux_z0;
   vector<float>   InDetTrackParticlesAux_phi;
   vector<float>   InDetTrackParticlesAux_theta;
   vector<float>   InDetTrackParticlesAux_qOverP;
 //vector<vector<float> > InDetTrackParticlesAux_definingParametersCovMatrix;
   vector<float>   InDetTrackParticlesAux_vx;
   vector<float>   InDetTrackParticlesAux_vy;
   vector<float>   InDetTrackParticlesAux_vz;
 //vector<vector<float> > InDetTrackParticlesAux_parameterX;
 //vector<vector<float> > InDetTrackParticlesAux_parameterY;
 //vector<vector<float> > InDetTrackParticlesAux_parameterZ;
 //vector<vector<float> > InDetTrackParticlesAux_parameterPX;
 //vector<vector<float> > InDetTrackParticlesAux_parameterPY;
 //vector<vector<float> > InDetTrackParticlesAux_parameterPZ;
 //vector<vector<float> > InDetTrackParticlesAux_trackParameterCovarianceMatrices;
 //vector<vector<unsigned char> > InDetTrackParticlesAux_parameterPosition;
   vector<float>   InDetTrackParticlesAux_chiSquared;
   vector<float>   InDetTrackParticlesAux_numberDoF;
   vector<unsigned char> InDetTrackParticlesAux_trackFitter;
   vector<unsigned char> InDetTrackParticlesAux_particleHypothesis;
   vector<unsigned char> InDetTrackParticlesAux_trackProperties;
   vector<unsigned long> InDetTrackParticlesAux_patternRecoInfo;
   vector<unsigned char> InDetTrackParticlesAux_numberOfContribPixelLayers;
   vector<unsigned char> InDetTrackParticlesAux_numberOfBLayerHits;
   vector<unsigned char> InDetTrackParticlesAux_numberOfBLayerOutliers;
   vector<unsigned char> InDetTrackParticlesAux_numberOfBLayerSharedHits;
   vector<unsigned char> InDetTrackParticlesAux_numberOfBLayerSplitHits;
   vector<unsigned char> InDetTrackParticlesAux_expectBLayerHit;
   vector<unsigned char> InDetTrackParticlesAux_numberOfPixelHits;
   vector<unsigned char> InDetTrackParticlesAux_numberOfPixelOutliers;
   vector<unsigned char> InDetTrackParticlesAux_numberOfPixelHoles;
   vector<unsigned char> InDetTrackParticlesAux_numberOfPixelSharedHits;
   vector<unsigned char> InDetTrackParticlesAux_numberOfPixelSplitHits;
   vector<unsigned char> InDetTrackParticlesAux_numberOfGangedPixels;
   vector<unsigned char> InDetTrackParticlesAux_numberOfGangedFlaggedFakes;
   vector<unsigned char> InDetTrackParticlesAux_numberOfPixelDeadSensors;
   vector<unsigned char> InDetTrackParticlesAux_numberOfPixelSpoiltHits;
   vector<unsigned char> InDetTrackParticlesAux_numberOfSCTHits;
   vector<unsigned char> InDetTrackParticlesAux_numberOfSCTOutliers;
   vector<unsigned char> InDetTrackParticlesAux_numberOfSCTHoles;
   vector<unsigned char> InDetTrackParticlesAux_numberOfSCTDoubleHoles;
   vector<unsigned char> InDetTrackParticlesAux_numberOfSCTSharedHits;
   vector<unsigned char> InDetTrackParticlesAux_numberOfSCTDeadSensors;
   vector<unsigned char> InDetTrackParticlesAux_numberOfSCTSpoiltHits;
   vector<unsigned char> InDetTrackParticlesAux_numberOfTRTHits;
   vector<unsigned char> InDetTrackParticlesAux_numberOfTRTOutliers;
   vector<unsigned char> InDetTrackParticlesAux_numberOfTRTHoles;
   vector<unsigned char> InDetTrackParticlesAux_numberOfTRTHighThresholdHits;
   vector<unsigned char> InDetTrackParticlesAux_numberOfTRTHighThresholdOutliers;
   vector<unsigned char> InDetTrackParticlesAux_numberOfTRTDeadStraws;
   vector<unsigned char> InDetTrackParticlesAux_numberOfTRTTubeHits;
   vector<unsigned char> InDetTrackParticlesAux_numberOfTRTXenonHits;
   vector<unsigned char> InDetTrackParticlesAux_numberOfPrecisionLayers;
   vector<unsigned char> InDetTrackParticlesAux_numberOfPrecisionHoleLayers;
   vector<unsigned char> InDetTrackParticlesAux_numberOfPhiLayers;
   vector<unsigned char> InDetTrackParticlesAux_numberOfPhiHoleLayers;
   vector<unsigned char> InDetTrackParticlesAux_numberOfTriggerEtaLayers;
   vector<unsigned char> InDetTrackParticlesAux_numberOfTriggerEtaHoleLayers;
   vector<unsigned char> InDetTrackParticlesAux_numberOfOutliersOnTrack;
   vector<unsigned char> InDetTrackParticlesAux_standardDeviationOfChi2OS;
   vector<float>   InDetTrackParticlesAux_eProbabilityComb;
   vector<float>   InDetTrackParticlesAux_eProbabilityHT;
   vector<float>   InDetTrackParticlesAux_eProbabilityToT;
   vector<float>   InDetTrackParticlesAux_eProbabilityBrem;
 //vector<ElementLink<DataVector<xAOD::Vertex_v1> > > InDetTrackParticlesAux_vertexLink;
 //xAOD::TrackParticleAuxContainer_v1 *InDetTrackParticlesForwardAux_;
 //xAOD::TrackParticleAuxContainer_v1 *InDetTrackParticlesForwardAux_xAOD__AuxContainerBase;
   vector<float>   InDetTrackParticlesForwardAux_d0;
   vector<float>   InDetTrackParticlesForwardAux_z0;
   vector<float>   InDetTrackParticlesForwardAux_phi;
   vector<float>   InDetTrackParticlesForwardAux_theta;
   vector<float>   InDetTrackParticlesForwardAux_qOverP;
 //vector<vector<float> > InDetTrackParticlesForwardAux_definingParametersCovMatrix;
   vector<float>   InDetTrackParticlesForwardAux_vx;
   vector<float>   InDetTrackParticlesForwardAux_vy;
   vector<float>   InDetTrackParticlesForwardAux_vz;
 //vector<vector<float> > InDetTrackParticlesForwardAux_parameterX;
 //vector<vector<float> > InDetTrackParticlesForwardAux_parameterY;
 //vector<vector<float> > InDetTrackParticlesForwardAux_parameterZ;
 //vector<vector<float> > InDetTrackParticlesForwardAux_parameterPX;
 //vector<vector<float> > InDetTrackParticlesForwardAux_parameterPY;
 //vector<vector<float> > InDetTrackParticlesForwardAux_parameterPZ;
 //vector<vector<float> > InDetTrackParticlesForwardAux_trackParameterCovarianceMatrices;
 //vector<vector<unsigned char> > InDetTrackParticlesForwardAux_parameterPosition;
   vector<float>   InDetTrackParticlesForwardAux_chiSquared;
   vector<float>   InDetTrackParticlesForwardAux_numberDoF;
   vector<unsigned char> InDetTrackParticlesForwardAux_trackFitter;
   vector<unsigned char> InDetTrackParticlesForwardAux_particleHypothesis;
   vector<unsigned char> InDetTrackParticlesForwardAux_trackProperties;
   vector<unsigned long> InDetTrackParticlesForwardAux_patternRecoInfo;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfContribPixelLayers;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfBLayerHits;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfBLayerOutliers;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfBLayerSharedHits;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfBLayerSplitHits;
   vector<unsigned char> InDetTrackParticlesForwardAux_expectBLayerHit;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfPixelHits;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfPixelOutliers;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfPixelHoles;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfPixelSharedHits;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfPixelSplitHits;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfGangedPixels;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfGangedFlaggedFakes;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfPixelDeadSensors;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfPixelSpoiltHits;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfSCTHits;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfSCTOutliers;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfSCTHoles;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfSCTDoubleHoles;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfSCTSharedHits;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfSCTDeadSensors;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfSCTSpoiltHits;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfTRTHits;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfTRTOutliers;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfTRTHoles;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfTRTHighThresholdHits;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfTRTHighThresholdOutliers;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfTRTDeadStraws;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfTRTTubeHits;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfTRTXenonHits;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfPrecisionLayers;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfPrecisionHoleLayers;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfPhiLayers;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfPhiHoleLayers;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfTriggerEtaLayers;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfTriggerEtaHoleLayers;
   vector<unsigned char> InDetTrackParticlesForwardAux_numberOfOutliersOnTrack;
   vector<unsigned char> InDetTrackParticlesForwardAux_standardDeviationOfChi2OS;
   vector<float>   InDetTrackParticlesForwardAux_eProbabilityComb;
   vector<float>   InDetTrackParticlesForwardAux_eProbabilityHT;
   vector<float>   InDetTrackParticlesForwardAux_eProbabilityToT;
   vector<float>   InDetTrackParticlesForwardAux_eProbabilityBrem;
 //vector<ElementLink<DataVector<xAOD::Vertex_v1> > > InDetTrackParticlesForwardAux_vertexLink;
   DataVector<xAOD::CaloCluster_v1> *CaloCalTopoCluster;
   DataVector<xAOD::CaloCluster_v1> *LArClusterEMFrwd;
   DataVector<xAOD::CaloCluster_v1> *egClusterCollection;
 //xAOD::PFOAuxContainer_v1 *TauPi0ChargedPFOContainerAux_;
 //xAOD::PFOAuxContainer_v1 *TauPi0ChargedPFOContainerAux_xAOD__AuxContainerBase;
   vector<float>   TauPi0ChargedPFOContainerAux_bdtPi0Score;
   vector<float>   TauPi0ChargedPFOContainerAux_centerMag;
   vector<float>   TauPi0ChargedPFOContainerAux_charge;
   vector<float>   TauPi0ChargedPFOContainerAux_pt;
   vector<float>   TauPi0ChargedPFOContainerAux_eta;
   vector<float>   TauPi0ChargedPFOContainerAux_phi;
   vector<float>   TauPi0ChargedPFOContainerAux_m;
   vector<float>   TauPi0ChargedPFOContainerAux_ptEM;
   vector<float>   TauPi0ChargedPFOContainerAux_etaEM;
   vector<float>   TauPi0ChargedPFOContainerAux_phiEM;
   vector<float>   TauPi0ChargedPFOContainerAux_mEM;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > TauPi0ChargedPFOContainerAux_pfo_ClusterLinks;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > TauPi0ChargedPFOContainerAux_pfo_TrackLinks;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > TauPi0ChargedPFOContainerAux_pfo_TauShotLinks;
 //xAOD::PFOAuxContainer_v1 *TauPi0NeutralPFOContainerAux_;
 //xAOD::PFOAuxContainer_v1 *TauPi0NeutralPFOContainerAux_xAOD__AuxContainerBase;
   vector<float>   TauPi0NeutralPFOContainerAux_bdtPi0Score;
   vector<float>   TauPi0NeutralPFOContainerAux_centerMag;
   vector<float>   TauPi0NeutralPFOContainerAux_charge;
   vector<float>   TauPi0NeutralPFOContainerAux_pt;
   vector<float>   TauPi0NeutralPFOContainerAux_eta;
   vector<float>   TauPi0NeutralPFOContainerAux_phi;
   vector<float>   TauPi0NeutralPFOContainerAux_m;
   vector<float>   TauPi0NeutralPFOContainerAux_ptEM;
   vector<float>   TauPi0NeutralPFOContainerAux_etaEM;
   vector<float>   TauPi0NeutralPFOContainerAux_phiEM;
   vector<float>   TauPi0NeutralPFOContainerAux_mEM;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > TauPi0NeutralPFOContainerAux_pfo_ClusterLinks;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > TauPi0NeutralPFOContainerAux_pfo_TrackLinks;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > TauPi0NeutralPFOContainerAux_pfo_TauShotLinks;
 //xAOD::PFOAuxContainer_v1 *TauShotPFOContainerAux_;
 //xAOD::PFOAuxContainer_v1 *TauShotPFOContainerAux_xAOD__AuxContainerBase;
   vector<float>   TauShotPFOContainerAux_bdtPi0Score;
   vector<float>   TauShotPFOContainerAux_centerMag;
   vector<float>   TauShotPFOContainerAux_charge;
   vector<float>   TauShotPFOContainerAux_pt;
   vector<float>   TauShotPFOContainerAux_eta;
   vector<float>   TauShotPFOContainerAux_phi;
   vector<float>   TauShotPFOContainerAux_m;
   vector<float>   TauShotPFOContainerAux_ptEM;
   vector<float>   TauShotPFOContainerAux_etaEM;
   vector<float>   TauShotPFOContainerAux_phiEM;
   vector<float>   TauShotPFOContainerAux_mEM;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > TauShotPFOContainerAux_pfo_ClusterLinks;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > TauShotPFOContainerAux_pfo_TrackLinks;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > TauShotPFOContainerAux_pfo_TauShotLinks;
 //xAOD::PFOAuxContainer_v1 *chargedJetETMissPFO_eflowRecAux_;
 //xAOD::PFOAuxContainer_v1 *chargedJetETMissPFO_eflowRecAux_xAOD__AuxContainerBase;
   vector<float>   chargedJetETMissPFO_eflowRecAux_bdtPi0Score;
   vector<float>   chargedJetETMissPFO_eflowRecAux_centerMag;
   vector<float>   chargedJetETMissPFO_eflowRecAux_charge;
   vector<float>   chargedJetETMissPFO_eflowRecAux_pt;
   vector<float>   chargedJetETMissPFO_eflowRecAux_eta;
   vector<float>   chargedJetETMissPFO_eflowRecAux_phi;
   vector<float>   chargedJetETMissPFO_eflowRecAux_m;
   vector<float>   chargedJetETMissPFO_eflowRecAux_ptEM;
   vector<float>   chargedJetETMissPFO_eflowRecAux_etaEM;
   vector<float>   chargedJetETMissPFO_eflowRecAux_phiEM;
   vector<float>   chargedJetETMissPFO_eflowRecAux_mEM;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > chargedJetETMissPFO_eflowRecAux_pfo_ClusterLinks;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > chargedJetETMissPFO_eflowRecAux_pfo_TrackLinks;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > chargedJetETMissPFO_eflowRecAux_pfo_TauShotLinks;
 //xAOD::PFOAuxContainer_v1 *chargedTauPFO_eflowRecAux_;
 //xAOD::PFOAuxContainer_v1 *chargedTauPFO_eflowRecAux_xAOD__AuxContainerBase;
   vector<float>   chargedTauPFO_eflowRecAux_bdtPi0Score;
   vector<float>   chargedTauPFO_eflowRecAux_centerMag;
   vector<float>   chargedTauPFO_eflowRecAux_charge;
   vector<float>   chargedTauPFO_eflowRecAux_pt;
   vector<float>   chargedTauPFO_eflowRecAux_eta;
   vector<float>   chargedTauPFO_eflowRecAux_phi;
   vector<float>   chargedTauPFO_eflowRecAux_m;
   vector<float>   chargedTauPFO_eflowRecAux_ptEM;
   vector<float>   chargedTauPFO_eflowRecAux_etaEM;
   vector<float>   chargedTauPFO_eflowRecAux_phiEM;
   vector<float>   chargedTauPFO_eflowRecAux_mEM;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > chargedTauPFO_eflowRecAux_pfo_ClusterLinks;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > chargedTauPFO_eflowRecAux_pfo_TrackLinks;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > chargedTauPFO_eflowRecAux_pfo_TauShotLinks;
 //xAOD::PFOAuxContainer_v1 *neutralJetETMissPFO_eflowRecAux_;
 //xAOD::PFOAuxContainer_v1 *neutralJetETMissPFO_eflowRecAux_xAOD__AuxContainerBase;
   vector<float>   neutralJetETMissPFO_eflowRecAux_bdtPi0Score;
   vector<float>   neutralJetETMissPFO_eflowRecAux_centerMag;
   vector<float>   neutralJetETMissPFO_eflowRecAux_charge;
   vector<float>   neutralJetETMissPFO_eflowRecAux_pt;
   vector<float>   neutralJetETMissPFO_eflowRecAux_eta;
   vector<float>   neutralJetETMissPFO_eflowRecAux_phi;
   vector<float>   neutralJetETMissPFO_eflowRecAux_m;
   vector<float>   neutralJetETMissPFO_eflowRecAux_ptEM;
   vector<float>   neutralJetETMissPFO_eflowRecAux_etaEM;
   vector<float>   neutralJetETMissPFO_eflowRecAux_phiEM;
   vector<float>   neutralJetETMissPFO_eflowRecAux_mEM;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > neutralJetETMissPFO_eflowRecAux_pfo_ClusterLinks;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > neutralJetETMissPFO_eflowRecAux_pfo_TrackLinks;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > neutralJetETMissPFO_eflowRecAux_pfo_TauShotLinks;
 //xAOD::PFOAuxContainer_v1 *neutralJetETMiss_LCPFO_NonModified_eflowRecAux_;
 //xAOD::PFOAuxContainer_v1 *neutralJetETMiss_LCPFO_NonModified_eflowRecAux_xAOD__AuxContainerBase;
   vector<float>   neutralJetETMiss_LCPFO_NonModified_eflowRecAux_bdtPi0Score;
   vector<float>   neutralJetETMiss_LCPFO_NonModified_eflowRecAux_centerMag;
   vector<float>   neutralJetETMiss_LCPFO_NonModified_eflowRecAux_charge;
   vector<float>   neutralJetETMiss_LCPFO_NonModified_eflowRecAux_pt;
   vector<float>   neutralJetETMiss_LCPFO_NonModified_eflowRecAux_eta;
   vector<float>   neutralJetETMiss_LCPFO_NonModified_eflowRecAux_phi;
   vector<float>   neutralJetETMiss_LCPFO_NonModified_eflowRecAux_m;
   vector<float>   neutralJetETMiss_LCPFO_NonModified_eflowRecAux_ptEM;
   vector<float>   neutralJetETMiss_LCPFO_NonModified_eflowRecAux_etaEM;
   vector<float>   neutralJetETMiss_LCPFO_NonModified_eflowRecAux_phiEM;
   vector<float>   neutralJetETMiss_LCPFO_NonModified_eflowRecAux_mEM;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > neutralJetETMiss_LCPFO_NonModified_eflowRecAux_pfo_ClusterLinks;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > neutralJetETMiss_LCPFO_NonModified_eflowRecAux_pfo_TrackLinks;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > neutralJetETMiss_LCPFO_NonModified_eflowRecAux_pfo_TauShotLinks;
 //xAOD::PFOAuxContainer_v1 *neutralJetETMiss_LCPFO_eflowRecAux_;
 //xAOD::PFOAuxContainer_v1 *neutralJetETMiss_LCPFO_eflowRecAux_xAOD__AuxContainerBase;
   vector<float>   neutralJetETMiss_LCPFO_eflowRecAux_bdtPi0Score;
   vector<float>   neutralJetETMiss_LCPFO_eflowRecAux_centerMag;
   vector<float>   neutralJetETMiss_LCPFO_eflowRecAux_charge;
   vector<float>   neutralJetETMiss_LCPFO_eflowRecAux_pt;
   vector<float>   neutralJetETMiss_LCPFO_eflowRecAux_eta;
   vector<float>   neutralJetETMiss_LCPFO_eflowRecAux_phi;
   vector<float>   neutralJetETMiss_LCPFO_eflowRecAux_m;
   vector<float>   neutralJetETMiss_LCPFO_eflowRecAux_ptEM;
   vector<float>   neutralJetETMiss_LCPFO_eflowRecAux_etaEM;
   vector<float>   neutralJetETMiss_LCPFO_eflowRecAux_phiEM;
   vector<float>   neutralJetETMiss_LCPFO_eflowRecAux_mEM;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > neutralJetETMiss_LCPFO_eflowRecAux_pfo_ClusterLinks;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > neutralJetETMiss_LCPFO_eflowRecAux_pfo_TrackLinks;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > neutralJetETMiss_LCPFO_eflowRecAux_pfo_TauShotLinks;
 //xAOD::PFOAuxContainer_v1 *neutralTauPFO_eflowRecAux_;
 //xAOD::PFOAuxContainer_v1 *neutralTauPFO_eflowRecAux_xAOD__AuxContainerBase;
   vector<float>   neutralTauPFO_eflowRecAux_bdtPi0Score;
   vector<float>   neutralTauPFO_eflowRecAux_centerMag;
   vector<float>   neutralTauPFO_eflowRecAux_charge;
   vector<float>   neutralTauPFO_eflowRecAux_pt;
   vector<float>   neutralTauPFO_eflowRecAux_eta;
   vector<float>   neutralTauPFO_eflowRecAux_phi;
   vector<float>   neutralTauPFO_eflowRecAux_m;
   vector<float>   neutralTauPFO_eflowRecAux_ptEM;
   vector<float>   neutralTauPFO_eflowRecAux_etaEM;
   vector<float>   neutralTauPFO_eflowRecAux_phiEM;
   vector<float>   neutralTauPFO_eflowRecAux_mEM;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > neutralTauPFO_eflowRecAux_pfo_ClusterLinks;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > neutralTauPFO_eflowRecAux_pfo_TrackLinks;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > neutralTauPFO_eflowRecAux_pfo_TauShotLinks;
 //xAOD::MissingETAuxContainer_v1 *MET_LocHadTopoAux_;
 //xAOD::MissingETAuxContainer_v1 *MET_LocHadTopoAux_xAOD__AuxContainerBase;
   vector<double>  MET_LocHadTopoAux_mpx;
   vector<double>  MET_LocHadTopoAux_mpy;
   vector<double>  MET_LocHadTopoAux_sumet;
   vector<string>  MET_LocHadTopoAux_name;
 //vector<unsigned long long> MET_LocHadTopoAux_source;
 //xAOD::MissingETAuxContainer_v1 *MET_LocHadTopoRegionsAux_;
 //xAOD::MissingETAuxContainer_v1 *MET_LocHadTopoRegionsAux_xAOD__AuxContainerBase;
   vector<double>  MET_LocHadTopoRegionsAux_mpx;
   vector<double>  MET_LocHadTopoRegionsAux_mpy;
   vector<double>  MET_LocHadTopoRegionsAux_sumet;
   vector<string>  MET_LocHadTopoRegionsAux_name;
 //vector<unsigned long long> MET_LocHadTopoRegionsAux_source;
 //xAOD::MissingETAuxContainer_v1 *MET_RefFinalAux_;
 //xAOD::MissingETAuxContainer_v1 *MET_RefFinalAux_xAOD__AuxContainerBase;
   vector<double>  MET_RefFinalAux_mpx;
   vector<double>  MET_RefFinalAux_mpy;
   vector<double>  MET_RefFinalAux_sumet;
   vector<string>  MET_RefFinalAux_name;
 //vector<unsigned long long> MET_RefFinalAux_source;
 //xAOD::MissingETAuxContainer_v1 *MET_RefFinalRegionsAux_;
 //xAOD::MissingETAuxContainer_v1 *MET_RefFinalRegionsAux_xAOD__AuxContainerBase;
   vector<double>  MET_RefFinalRegionsAux_mpx;
   vector<double>  MET_RefFinalRegionsAux_mpy;
   vector<double>  MET_RefFinalRegionsAux_sumet;
   vector<string>  MET_RefFinalRegionsAux_name;
 //vector<unsigned long long> MET_RefFinalRegionsAux_source;
 //xAOD::MissingETAuxContainer_v1 *MET_TrackAux_;
 //xAOD::MissingETAuxContainer_v1 *MET_TrackAux_xAOD__AuxContainerBase;
   vector<double>  MET_TrackAux_mpx;
   vector<double>  MET_TrackAux_mpy;
   vector<double>  MET_TrackAux_sumet;
   vector<string>  MET_TrackAux_name;
 //vector<unsigned long long> MET_TrackAux_source;
 //xAOD::MissingETAuxContainer_v1 *MET_TruthAux_;
 //xAOD::MissingETAuxContainer_v1 *MET_TruthAux_xAOD__AuxContainerBase;
   vector<double>  MET_TruthAux_mpx;
   vector<double>  MET_TruthAux_mpy;
   vector<double>  MET_TruthAux_sumet;
   vector<string>  MET_TruthAux_name;
 //vector<unsigned long long> MET_TruthAux_source;
 //xAOD::MissingETAuxContainer_v1 *MET_TruthRegionsAux_;
 //xAOD::MissingETAuxContainer_v1 *MET_TruthRegionsAux_xAOD__AuxContainerBase;
   vector<double>  MET_TruthRegionsAux_mpx;
   vector<double>  MET_TruthRegionsAux_mpy;
   vector<double>  MET_TruthRegionsAux_sumet;
   vector<string>  MET_TruthRegionsAux_name;
 //vector<unsigned long long> MET_TruthRegionsAux_source;
   TrackRecordCollection_p2 *MuonEntryLayerFilter;
   DataVector<xAOD::TruthParticle_v1> *MuonTruthParticle;
   DataVector<xAOD::TruthParticle_v1> *TruthParticle;
   DataVector<xAOD::TruthVertex_v1> *TruthVertex;
 //xAOD::BTaggingAuxContainer_v1 *BTagging_AntiKt10LCTopoAux_;
 //xAOD::BTaggingAuxContainer_v1 *BTagging_AntiKt10LCTopoAux_xAOD__AuxContainerBase;
   vector<double>  BTagging_AntiKt10LCTopoAux_SV0_significance3D;
   vector<double>  BTagging_AntiKt10LCTopoAux_SV1_pb;
   vector<double>  BTagging_AntiKt10LCTopoAux_SV1_pu;
   vector<double>  BTagging_AntiKt10LCTopoAux_SV1_pc;
   vector<double>  BTagging_AntiKt10LCTopoAux_IP2D_pb;
   vector<double>  BTagging_AntiKt10LCTopoAux_IP2D_pu;
   vector<double>  BTagging_AntiKt10LCTopoAux_IP2D_pc;
   vector<double>  BTagging_AntiKt10LCTopoAux_IP3D_pb;
   vector<double>  BTagging_AntiKt10LCTopoAux_IP3D_pu;
   vector<double>  BTagging_AntiKt10LCTopoAux_IP3D_pc;
   vector<double>  BTagging_AntiKt10LCTopoAux_JetFitter_pb;
   vector<double>  BTagging_AntiKt10LCTopoAux_JetFitter_pu;
   vector<double>  BTagging_AntiKt10LCTopoAux_JetFitter_pc;
   vector<double>  BTagging_AntiKt10LCTopoAux_JetFitterCombNN_pb;
   vector<double>  BTagging_AntiKt10LCTopoAux_JetFitterCombNN_pu;
   vector<double>  BTagging_AntiKt10LCTopoAux_JetFitterCombNN_pc;
   vector<double>  BTagging_AntiKt10LCTopoAux_MV1_discriminant;
 //xAOD::BTaggingAuxContainer_v1 *BTagging_AntiKt10TruthAux_;
 //xAOD::BTaggingAuxContainer_v1 *BTagging_AntiKt10TruthAux_xAOD__AuxContainerBase;
   vector<double>  BTagging_AntiKt10TruthAux_SV0_significance3D;
   vector<double>  BTagging_AntiKt10TruthAux_SV1_pb;
   vector<double>  BTagging_AntiKt10TruthAux_SV1_pu;
   vector<double>  BTagging_AntiKt10TruthAux_SV1_pc;
   vector<double>  BTagging_AntiKt10TruthAux_IP2D_pb;
   vector<double>  BTagging_AntiKt10TruthAux_IP2D_pu;
   vector<double>  BTagging_AntiKt10TruthAux_IP2D_pc;
   vector<double>  BTagging_AntiKt10TruthAux_IP3D_pb;
   vector<double>  BTagging_AntiKt10TruthAux_IP3D_pu;
   vector<double>  BTagging_AntiKt10TruthAux_IP3D_pc;
   vector<double>  BTagging_AntiKt10TruthAux_JetFitter_pb;
   vector<double>  BTagging_AntiKt10TruthAux_JetFitter_pu;
   vector<double>  BTagging_AntiKt10TruthAux_JetFitter_pc;
   vector<double>  BTagging_AntiKt10TruthAux_JetFitterCombNN_pb;
   vector<double>  BTagging_AntiKt10TruthAux_JetFitterCombNN_pu;
   vector<double>  BTagging_AntiKt10TruthAux_JetFitterCombNN_pc;
   vector<double>  BTagging_AntiKt10TruthAux_MV1_discriminant;
 //xAOD::BTaggingAuxContainer_v1 *BTagging_AntiKt10TruthWZAux_;
 //xAOD::BTaggingAuxContainer_v1 *BTagging_AntiKt10TruthWZAux_xAOD__AuxContainerBase;
   vector<double>  BTagging_AntiKt10TruthWZAux_SV0_significance3D;
   vector<double>  BTagging_AntiKt10TruthWZAux_SV1_pb;
   vector<double>  BTagging_AntiKt10TruthWZAux_SV1_pu;
   vector<double>  BTagging_AntiKt10TruthWZAux_SV1_pc;
   vector<double>  BTagging_AntiKt10TruthWZAux_IP2D_pb;
   vector<double>  BTagging_AntiKt10TruthWZAux_IP2D_pu;
   vector<double>  BTagging_AntiKt10TruthWZAux_IP2D_pc;
   vector<double>  BTagging_AntiKt10TruthWZAux_IP3D_pb;
   vector<double>  BTagging_AntiKt10TruthWZAux_IP3D_pu;
   vector<double>  BTagging_AntiKt10TruthWZAux_IP3D_pc;
   vector<double>  BTagging_AntiKt10TruthWZAux_JetFitter_pb;
   vector<double>  BTagging_AntiKt10TruthWZAux_JetFitter_pu;
   vector<double>  BTagging_AntiKt10TruthWZAux_JetFitter_pc;
   vector<double>  BTagging_AntiKt10TruthWZAux_JetFitterCombNN_pb;
   vector<double>  BTagging_AntiKt10TruthWZAux_JetFitterCombNN_pu;
   vector<double>  BTagging_AntiKt10TruthWZAux_JetFitterCombNN_pc;
   vector<double>  BTagging_AntiKt10TruthWZAux_MV1_discriminant;
 //xAOD::BTaggingAuxContainer_v1 *BTagging_AntiKt4EMTopoAux_;
 //xAOD::BTaggingAuxContainer_v1 *BTagging_AntiKt4EMTopoAux_xAOD__AuxContainerBase;
   vector<double>  BTagging_AntiKt4EMTopoAux_SV0_significance3D;
   vector<double>  BTagging_AntiKt4EMTopoAux_SV1_pb;
   vector<double>  BTagging_AntiKt4EMTopoAux_SV1_pu;
   vector<double>  BTagging_AntiKt4EMTopoAux_SV1_pc;
   vector<double>  BTagging_AntiKt4EMTopoAux_IP2D_pb;
   vector<double>  BTagging_AntiKt4EMTopoAux_IP2D_pu;
   vector<double>  BTagging_AntiKt4EMTopoAux_IP2D_pc;
   vector<double>  BTagging_AntiKt4EMTopoAux_IP3D_pb;
   vector<double>  BTagging_AntiKt4EMTopoAux_IP3D_pu;
   vector<double>  BTagging_AntiKt4EMTopoAux_IP3D_pc;
   vector<double>  BTagging_AntiKt4EMTopoAux_JetFitter_pb;
   vector<double>  BTagging_AntiKt4EMTopoAux_JetFitter_pu;
   vector<double>  BTagging_AntiKt4EMTopoAux_JetFitter_pc;
   vector<double>  BTagging_AntiKt4EMTopoAux_JetFitterCombNN_pb;
   vector<double>  BTagging_AntiKt4EMTopoAux_JetFitterCombNN_pu;
   vector<double>  BTagging_AntiKt4EMTopoAux_JetFitterCombNN_pc;
   vector<double>  BTagging_AntiKt4EMTopoAux_MV1_discriminant;
 //xAOD::BTaggingAuxContainer_v1 *BTagging_AntiKt4LCTopoAux_;
 //xAOD::BTaggingAuxContainer_v1 *BTagging_AntiKt4LCTopoAux_xAOD__AuxContainerBase;
   vector<double>  BTagging_AntiKt4LCTopoAux_SV0_significance3D;
   vector<double>  BTagging_AntiKt4LCTopoAux_SV1_pb;
   vector<double>  BTagging_AntiKt4LCTopoAux_SV1_pu;
   vector<double>  BTagging_AntiKt4LCTopoAux_SV1_pc;
   vector<double>  BTagging_AntiKt4LCTopoAux_IP2D_pb;
   vector<double>  BTagging_AntiKt4LCTopoAux_IP2D_pu;
   vector<double>  BTagging_AntiKt4LCTopoAux_IP2D_pc;
   vector<double>  BTagging_AntiKt4LCTopoAux_IP3D_pb;
   vector<double>  BTagging_AntiKt4LCTopoAux_IP3D_pu;
   vector<double>  BTagging_AntiKt4LCTopoAux_IP3D_pc;
   vector<double>  BTagging_AntiKt4LCTopoAux_JetFitter_pb;
   vector<double>  BTagging_AntiKt4LCTopoAux_JetFitter_pu;
   vector<double>  BTagging_AntiKt4LCTopoAux_JetFitter_pc;
   vector<double>  BTagging_AntiKt4LCTopoAux_JetFitterCombNN_pb;
   vector<double>  BTagging_AntiKt4LCTopoAux_JetFitterCombNN_pu;
   vector<double>  BTagging_AntiKt4LCTopoAux_JetFitterCombNN_pc;
   vector<double>  BTagging_AntiKt4LCTopoAux_MV1_discriminant;
 //xAOD::BTaggingAuxContainer_v1 *BTagging_AntiKt4TruthAux_;
 //xAOD::BTaggingAuxContainer_v1 *BTagging_AntiKt4TruthAux_xAOD__AuxContainerBase;
   vector<double>  BTagging_AntiKt4TruthAux_SV0_significance3D;
   vector<double>  BTagging_AntiKt4TruthAux_SV1_pb;
   vector<double>  BTagging_AntiKt4TruthAux_SV1_pu;
   vector<double>  BTagging_AntiKt4TruthAux_SV1_pc;
   vector<double>  BTagging_AntiKt4TruthAux_IP2D_pb;
   vector<double>  BTagging_AntiKt4TruthAux_IP2D_pu;
   vector<double>  BTagging_AntiKt4TruthAux_IP2D_pc;
   vector<double>  BTagging_AntiKt4TruthAux_IP3D_pb;
   vector<double>  BTagging_AntiKt4TruthAux_IP3D_pu;
   vector<double>  BTagging_AntiKt4TruthAux_IP3D_pc;
   vector<double>  BTagging_AntiKt4TruthAux_JetFitter_pb;
   vector<double>  BTagging_AntiKt4TruthAux_JetFitter_pu;
   vector<double>  BTagging_AntiKt4TruthAux_JetFitter_pc;
   vector<double>  BTagging_AntiKt4TruthAux_JetFitterCombNN_pb;
   vector<double>  BTagging_AntiKt4TruthAux_JetFitterCombNN_pu;
   vector<double>  BTagging_AntiKt4TruthAux_JetFitterCombNN_pc;
   vector<double>  BTagging_AntiKt4TruthAux_MV1_discriminant;
 //xAOD::BTaggingAuxContainer_v1 *BTagging_AntiKt4TruthWZAux_;
 //xAOD::BTaggingAuxContainer_v1 *BTagging_AntiKt4TruthWZAux_xAOD__AuxContainerBase;
   vector<double>  BTagging_AntiKt4TruthWZAux_SV0_significance3D;
   vector<double>  BTagging_AntiKt4TruthWZAux_SV1_pb;
   vector<double>  BTagging_AntiKt4TruthWZAux_SV1_pu;
   vector<double>  BTagging_AntiKt4TruthWZAux_SV1_pc;
   vector<double>  BTagging_AntiKt4TruthWZAux_IP2D_pb;
   vector<double>  BTagging_AntiKt4TruthWZAux_IP2D_pu;
   vector<double>  BTagging_AntiKt4TruthWZAux_IP2D_pc;
   vector<double>  BTagging_AntiKt4TruthWZAux_IP3D_pb;
   vector<double>  BTagging_AntiKt4TruthWZAux_IP3D_pu;
   vector<double>  BTagging_AntiKt4TruthWZAux_IP3D_pc;
   vector<double>  BTagging_AntiKt4TruthWZAux_JetFitter_pb;
   vector<double>  BTagging_AntiKt4TruthWZAux_JetFitter_pu;
   vector<double>  BTagging_AntiKt4TruthWZAux_JetFitter_pc;
   vector<double>  BTagging_AntiKt4TruthWZAux_JetFitterCombNN_pb;
   vector<double>  BTagging_AntiKt4TruthWZAux_JetFitterCombNN_pu;
   vector<double>  BTagging_AntiKt4TruthWZAux_JetFitterCombNN_pc;
   vector<double>  BTagging_AntiKt4TruthWZAux_MV1_discriminant;
   DataVector<xAOD::Jet_v1> *AntiKt10LCTopoJets;
   DataVector<xAOD::Jet_v1> *AntiKt10TruthJets;
   DataVector<xAOD::Jet_v1> *AntiKt10TruthWZJets;
   DataVector<xAOD::Jet_v1> *AntiKt3PV0TrackJets;
   DataVector<xAOD::Jet_v1> *AntiKt3ZTrackJets;
   DataVector<xAOD::Jet_v1> *AntiKt4EMTopoJets;
   DataVector<xAOD::Jet_v1> *AntiKt4LCTopoJets;
   DataVector<xAOD::Jet_v1> *AntiKt4PV0TrackJets;
   DataVector<xAOD::Jet_v1> *AntiKt4TruthJets;
   DataVector<xAOD::Jet_v1> *AntiKt4TruthWZJets;
   DataVector<xAOD::Jet_v1> *AntiKt4ZTrackJets;
   DataVector<xAOD::Jet_v1> *CamKt12LCTopoJets;
   DataVector<xAOD::Jet_v1> *CamKt12TruthJets;
   DataVector<xAOD::Jet_v1> *CamKt12TruthWZJets;
 //xAOD::PhotonAuxContainer_v1 *PhotonCollectionAux_;
 //xAOD::PhotonAuxContainer_v1 *PhotonCollectionAux_xAOD__EgammaAuxContainer_v1;
 //vector<vector<ElementLink<DataVector<xAOD::Vertex_v1> > > > PhotonCollectionAux_vertexLinks;
   vector<float>   PhotonCollectionAux_convMatchDeltaEta1;
   vector<float>   PhotonCollectionAux_convMatchDeltaEta2;
   vector<float>   PhotonCollectionAux_convMatchDeltaPhi1;
   vector<float>   PhotonCollectionAux_convMatchDeltaPhi2;
 //xAOD::TruthVertexAuxContainer_v1 *TruthVertexAux_;
 //xAOD::TruthVertexAuxContainer_v1 *TruthVertexAux_xAOD__AuxContainerBase;
   vector<int>     TruthVertexAux_id;
   vector<int>     TruthVertexAux_barcode;
 //vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > TruthVertexAux_incomingParticleLinks;
 //vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > TruthVertexAux_outgoingParticleLinks;
   vector<float>   TruthVertexAux_x;
   vector<float>   TruthVertexAux_y;
   vector<float>   TruthVertexAux_z;
   vector<float>   TruthVertexAux_t;
 //vector<vector<float> > TruthVertexAux_weights;
   DataVector<xAOD::BTagging_v1> *BTagging_AntiKt10LCTopo;
   DataVector<xAOD::BTagging_v1> *BTagging_AntiKt10Truth;
   DataVector<xAOD::BTagging_v1> *BTagging_AntiKt10TruthWZ;
   DataVector<xAOD::BTagging_v1> *BTagging_AntiKt4EMTopo;
   DataVector<xAOD::BTagging_v1> *BTagging_AntiKt4LCTopo;
   DataVector<xAOD::BTagging_v1> *BTagging_AntiKt4Truth;
   DataVector<xAOD::BTagging_v1> *BTagging_AntiKt4TruthWZ;
 //xAOD::TruthEventAuxContainer_v1 *TruthEventAux_;
 //xAOD::TruthEventAuxContainer_v1 *TruthEventAux_xAOD__AuxContainerBase;
   vector<float>   TruthEventAux_eventScale;
   vector<float>   TruthEventAux_alphaQCD;
   vector<float>   TruthEventAux_alphaQED;
 //vector<ElementLink<DataVector<xAOD::TruthVertex_v1> > > TruthEventAux_signalProcessVertexLink;
 //vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > TruthEventAux_beamParticle1Link;
 //vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > TruthEventAux_beamParticle2Link;
 //vector<vector<float> > TruthEventAux_weights;
   vector<float>   TruthEventAux_crossSection;
   vector<float>   TruthEventAux_crossSectionError;
 //vector<vector<ElementLink<DataVector<xAOD::TruthParticle_v1> > > > TruthEventAux_truthParticleLinks;
 //vector<vector<ElementLink<DataVector<xAOD::TruthVertex_v1> > > > TruthEventAux_truthVertexLinks;
   DataVector<xAOD::TrackParticle_v1> *CombinedMuonTrackParticles;
   DataVector<xAOD::TrackParticle_v1> *ExtrapolatedMuonTrackParticles;
   DataVector<xAOD::TrackParticle_v1> *GSFTrackParticles;
   DataVector<xAOD::TrackParticle_v1> *InDetTrackParticles;
   DataVector<xAOD::TrackParticle_v1> *InDetTrackParticlesForward;
 //xAOD::JetAuxContainer_v1 *AntiKt10LCTopoJetsAux_;
 //xAOD::JetAuxContainer_v1 *AntiKt10LCTopoJetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKt10LCTopoJetsAux_pt;
   vector<float>   AntiKt10LCTopoJetsAux_eta;
   vector<float>   AntiKt10LCTopoJetsAux_phi;
   vector<float>   AntiKt10LCTopoJetsAux_m;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKt10LCTopoJetsAux_constituentLinks;
 //vector<vector<float> > AntiKt10LCTopoJetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *AntiKt10TruthJetsAux_;
 //xAOD::JetAuxContainer_v1 *AntiKt10TruthJetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKt10TruthJetsAux_pt;
   vector<float>   AntiKt10TruthJetsAux_eta;
   vector<float>   AntiKt10TruthJetsAux_phi;
   vector<float>   AntiKt10TruthJetsAux_m;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKt10TruthJetsAux_constituentLinks;
 //vector<vector<float> > AntiKt10TruthJetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *AntiKt10TruthWZJetsAux_;
 //xAOD::JetAuxContainer_v1 *AntiKt10TruthWZJetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKt10TruthWZJetsAux_pt;
   vector<float>   AntiKt10TruthWZJetsAux_eta;
   vector<float>   AntiKt10TruthWZJetsAux_phi;
   vector<float>   AntiKt10TruthWZJetsAux_m;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKt10TruthWZJetsAux_constituentLinks;
 //vector<vector<float> > AntiKt10TruthWZJetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *AntiKt3PV0TrackJetsAux_;
 //xAOD::JetAuxContainer_v1 *AntiKt3PV0TrackJetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKt3PV0TrackJetsAux_pt;
   vector<float>   AntiKt3PV0TrackJetsAux_eta;
   vector<float>   AntiKt3PV0TrackJetsAux_phi;
   vector<float>   AntiKt3PV0TrackJetsAux_m;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKt3PV0TrackJetsAux_constituentLinks;
 //vector<vector<float> > AntiKt3PV0TrackJetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *AntiKt3ZTrackJetsAux_;
 //xAOD::JetAuxContainer_v1 *AntiKt3ZTrackJetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKt3ZTrackJetsAux_pt;
   vector<float>   AntiKt3ZTrackJetsAux_eta;
   vector<float>   AntiKt3ZTrackJetsAux_phi;
   vector<float>   AntiKt3ZTrackJetsAux_m;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKt3ZTrackJetsAux_constituentLinks;
 //vector<vector<float> > AntiKt3ZTrackJetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *AntiKt4EMTopoJetsAux_;
 //xAOD::JetAuxContainer_v1 *AntiKt4EMTopoJetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKt4EMTopoJetsAux_pt;
   vector<float>   AntiKt4EMTopoJetsAux_eta;
   vector<float>   AntiKt4EMTopoJetsAux_phi;
   vector<float>   AntiKt4EMTopoJetsAux_m;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKt4EMTopoJetsAux_constituentLinks;
 //vector<vector<float> > AntiKt4EMTopoJetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *AntiKt4LCTopoJetsAux_;
 //xAOD::JetAuxContainer_v1 *AntiKt4LCTopoJetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKt4LCTopoJetsAux_pt;
   vector<float>   AntiKt4LCTopoJetsAux_eta;
   vector<float>   AntiKt4LCTopoJetsAux_phi;
   vector<float>   AntiKt4LCTopoJetsAux_m;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKt4LCTopoJetsAux_constituentLinks;
 //vector<vector<float> > AntiKt4LCTopoJetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *AntiKt4PV0TrackJetsAux_;
 //xAOD::JetAuxContainer_v1 *AntiKt4PV0TrackJetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKt4PV0TrackJetsAux_pt;
   vector<float>   AntiKt4PV0TrackJetsAux_eta;
   vector<float>   AntiKt4PV0TrackJetsAux_phi;
   vector<float>   AntiKt4PV0TrackJetsAux_m;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKt4PV0TrackJetsAux_constituentLinks;
 //vector<vector<float> > AntiKt4PV0TrackJetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *AntiKt4TruthJetsAux_;
 //xAOD::JetAuxContainer_v1 *AntiKt4TruthJetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKt4TruthJetsAux_pt;
   vector<float>   AntiKt4TruthJetsAux_eta;
   vector<float>   AntiKt4TruthJetsAux_phi;
   vector<float>   AntiKt4TruthJetsAux_m;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKt4TruthJetsAux_constituentLinks;
 //vector<vector<float> > AntiKt4TruthJetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *AntiKt4TruthWZJetsAux_;
 //xAOD::JetAuxContainer_v1 *AntiKt4TruthWZJetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKt4TruthWZJetsAux_pt;
   vector<float>   AntiKt4TruthWZJetsAux_eta;
   vector<float>   AntiKt4TruthWZJetsAux_phi;
   vector<float>   AntiKt4TruthWZJetsAux_m;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKt4TruthWZJetsAux_constituentLinks;
 //vector<vector<float> > AntiKt4TruthWZJetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *AntiKt4ZTrackJetsAux_;
 //xAOD::JetAuxContainer_v1 *AntiKt4ZTrackJetsAux_xAOD__AuxContainerBase;
   vector<float>   AntiKt4ZTrackJetsAux_pt;
   vector<float>   AntiKt4ZTrackJetsAux_eta;
   vector<float>   AntiKt4ZTrackJetsAux_phi;
   vector<float>   AntiKt4ZTrackJetsAux_m;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > AntiKt4ZTrackJetsAux_constituentLinks;
 //vector<vector<float> > AntiKt4ZTrackJetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *CamKt12LCTopoJetsAux_;
 //xAOD::JetAuxContainer_v1 *CamKt12LCTopoJetsAux_xAOD__AuxContainerBase;
   vector<float>   CamKt12LCTopoJetsAux_pt;
   vector<float>   CamKt12LCTopoJetsAux_eta;
   vector<float>   CamKt12LCTopoJetsAux_phi;
   vector<float>   CamKt12LCTopoJetsAux_m;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > CamKt12LCTopoJetsAux_constituentLinks;
 //vector<vector<float> > CamKt12LCTopoJetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *CamKt12TruthJetsAux_;
 //xAOD::JetAuxContainer_v1 *CamKt12TruthJetsAux_xAOD__AuxContainerBase;
   vector<float>   CamKt12TruthJetsAux_pt;
   vector<float>   CamKt12TruthJetsAux_eta;
   vector<float>   CamKt12TruthJetsAux_phi;
   vector<float>   CamKt12TruthJetsAux_m;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > CamKt12TruthJetsAux_constituentLinks;
 //vector<vector<float> > CamKt12TruthJetsAux_constituentWeights;
 //xAOD::JetAuxContainer_v1 *CamKt12TruthWZJetsAux_;
 //xAOD::JetAuxContainer_v1 *CamKt12TruthWZJetsAux_xAOD__AuxContainerBase;
   vector<float>   CamKt12TruthWZJetsAux_pt;
   vector<float>   CamKt12TruthWZJetsAux_eta;
   vector<float>   CamKt12TruthWZJetsAux_phi;
   vector<float>   CamKt12TruthWZJetsAux_m;
 //vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > CamKt12TruthWZJetsAux_constituentLinks;
 //vector<vector<float> > CamKt12TruthWZJetsAux_constituentWeights;
 //xAOD::CaloClusterAuxContainer_v1 *CaloCalTopoClusterAux_;
 //xAOD::CaloClusterAuxContainer_v1 *CaloCalTopoClusterAux_xAOD__AuxContainerBase;
   vector<float>   CaloCalTopoClusterAux_time;
   vector<unsigned int> CaloCalTopoClusterAux_clusterSize;
   vector<float>   CaloCalTopoClusterAux_eta0;
   vector<float>   CaloCalTopoClusterAux_phi0;
   vector<float>   CaloCalTopoClusterAux_rawE;
   vector<float>   CaloCalTopoClusterAux_rawEta;
   vector<float>   CaloCalTopoClusterAux_rawPhi;
   vector<float>   CaloCalTopoClusterAux_rawM;
   vector<float>   CaloCalTopoClusterAux_altE;
   vector<float>   CaloCalTopoClusterAux_altEta;
   vector<float>   CaloCalTopoClusterAux_altPhi;
   vector<float>   CaloCalTopoClusterAux_altM;
   vector<float>   CaloCalTopoClusterAux_calE;
   vector<float>   CaloCalTopoClusterAux_calEta;
   vector<float>   CaloCalTopoClusterAux_calPhi;
   vector<float>   CaloCalTopoClusterAux_calM;
 //vector<vector<float> > CaloCalTopoClusterAux_e_sampl;
 //vector<vector<float> > CaloCalTopoClusterAux_eta_sampl;
 //vector<vector<float> > CaloCalTopoClusterAux_phi_sampl;
 //xAOD::CaloClusterAuxContainer_v1 *LArClusterEMFrwdAux_;
 //xAOD::CaloClusterAuxContainer_v1 *LArClusterEMFrwdAux_xAOD__AuxContainerBase;
   vector<float>   LArClusterEMFrwdAux_time;
   vector<unsigned int> LArClusterEMFrwdAux_clusterSize;
   vector<float>   LArClusterEMFrwdAux_eta0;
   vector<float>   LArClusterEMFrwdAux_phi0;
   vector<float>   LArClusterEMFrwdAux_rawE;
   vector<float>   LArClusterEMFrwdAux_rawEta;
   vector<float>   LArClusterEMFrwdAux_rawPhi;
   vector<float>   LArClusterEMFrwdAux_rawM;
   vector<float>   LArClusterEMFrwdAux_altE;
   vector<float>   LArClusterEMFrwdAux_altEta;
   vector<float>   LArClusterEMFrwdAux_altPhi;
   vector<float>   LArClusterEMFrwdAux_altM;
   vector<float>   LArClusterEMFrwdAux_calE;
   vector<float>   LArClusterEMFrwdAux_calEta;
   vector<float>   LArClusterEMFrwdAux_calPhi;
   vector<float>   LArClusterEMFrwdAux_calM;
 //vector<vector<float> > LArClusterEMFrwdAux_e_sampl;
 //vector<vector<float> > LArClusterEMFrwdAux_eta_sampl;
 //vector<vector<float> > LArClusterEMFrwdAux_phi_sampl;
 //xAOD::CaloClusterAuxContainer_v1 *egClusterCollectionAux_;
 //xAOD::CaloClusterAuxContainer_v1 *egClusterCollectionAux_xAOD__AuxContainerBase;
   vector<float>   egClusterCollectionAux_time;
   vector<unsigned int> egClusterCollectionAux_clusterSize;
   vector<float>   egClusterCollectionAux_eta0;
   vector<float>   egClusterCollectionAux_phi0;
   vector<float>   egClusterCollectionAux_rawE;
   vector<float>   egClusterCollectionAux_rawEta;
   vector<float>   egClusterCollectionAux_rawPhi;
   vector<float>   egClusterCollectionAux_rawM;
   vector<float>   egClusterCollectionAux_altE;
   vector<float>   egClusterCollectionAux_altEta;
   vector<float>   egClusterCollectionAux_altPhi;
   vector<float>   egClusterCollectionAux_altM;
   vector<float>   egClusterCollectionAux_calE;
   vector<float>   egClusterCollectionAux_calEta;
   vector<float>   egClusterCollectionAux_calPhi;
   vector<float>   egClusterCollectionAux_calM;
 //vector<vector<float> > egClusterCollectionAux_e_sampl;
 //vector<vector<float> > egClusterCollectionAux_eta_sampl;
 //vector<vector<float> > egClusterCollectionAux_phi_sampl;
 //xAOD::TauJetAuxContainer_v1 *TauRecContainerAux_;
 //xAOD::TauJetAuxContainer_v1 *TauRecContainerAux_xAOD__AuxContainerBase;
   vector<float>   TauRecContainerAux_pt;
   vector<float>   TauRecContainerAux_eta;
   vector<float>   TauRecContainerAux_phi;
   vector<float>   TauRecContainerAux_m;
   vector<float>   TauRecContainerAux_ptJetSeed;
   vector<float>   TauRecContainerAux_etaJetSeed;
   vector<float>   TauRecContainerAux_phiJetSeed;
   vector<float>   TauRecContainerAux_mJetSeed;
   vector<float>   TauRecContainerAux_ptDetectorAxis;
   vector<float>   TauRecContainerAux_etaDetectorAxis;
   vector<float>   TauRecContainerAux_phiDetectorAxis;
   vector<float>   TauRecContainerAux_mDetectorAxis;
   vector<float>   TauRecContainerAux_ptIntermediateAxis;
   vector<float>   TauRecContainerAux_etaIntermediateAxis;
   vector<float>   TauRecContainerAux_phiIntermediateAxis;
   vector<float>   TauRecContainerAux_mIntermediateAxis;
   vector<float>   TauRecContainerAux_ptTauEnergyScale;
   vector<float>   TauRecContainerAux_etaTauEnergyScale;
   vector<float>   TauRecContainerAux_phiTauEnergyScale;
   vector<float>   TauRecContainerAux_mTauEnergyScale;
   vector<float>   TauRecContainerAux_ptTauEtaCalib;
   vector<float>   TauRecContainerAux_etaTauEtaCalib;
   vector<float>   TauRecContainerAux_phiTauEtaCalib;
   vector<float>   TauRecContainerAux_mTauEtaCalib;
   vector<float>   TauRecContainerAux_ptPanTauEFlowRecProto;
   vector<float>   TauRecContainerAux_etaPanTauEFlowRecProto;
   vector<float>   TauRecContainerAux_phiPanTauEFlowRecProto;
   vector<float>   TauRecContainerAux_mPanTauEFlowRecProto;
   vector<float>   TauRecContainerAux_ptPanTauEFlowRec;
   vector<float>   TauRecContainerAux_etaPanTauEFlowRec;
   vector<float>   TauRecContainerAux_phiPanTauEFlowRec;
   vector<float>   TauRecContainerAux_mPanTauEFlowRec;
   vector<float>   TauRecContainerAux_ptPanTauCellBasedProto;
   vector<float>   TauRecContainerAux_etaPanTauCellBasedProto;
   vector<float>   TauRecContainerAux_phiPanTauCellBasedProto;
   vector<float>   TauRecContainerAux_mPanTauCellBasedProto;
   vector<float>   TauRecContainerAux_ptPanTauCellBased;
   vector<float>   TauRecContainerAux_etaPanTauCellBased;
   vector<float>   TauRecContainerAux_phiPanTauCellBased;
   vector<float>   TauRecContainerAux_mPanTauCellBased;
   vector<unsigned int> TauRecContainerAux_ROIWord;
   vector<float>   TauRecContainerAux_charge;
   vector<unsigned int> TauRecContainerAux_vetoFlags;
   vector<unsigned int> TauRecContainerAux_isTauFlags;
   vector<float>   TauRecContainerAux_Likelihood;
   vector<float>   TauRecContainerAux_SafeLikelihood;
   vector<float>   TauRecContainerAux_BDTJetScore;
   vector<float>   TauRecContainerAux_BDTEleScore;
   vector<float>   TauRecContainerAux_PanTauScore;
   vector<float>   TauRecContainerAux_BDTJetScoreSigTrans;
   vector<float>   TauRecContainerAux_BDTJetScoreBkgTrans;
 //vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > TauRecContainerAux_trackLinks;
 //vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > TauRecContainerAux_conversionTrackLinks;
 //vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > TauRecContainerAux_wideTrackLinks;
 //vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > TauRecContainerAux_otherTrackLinks;
 //vector<vector<int> > TauRecContainerAux_trackFilterPass;
   vector<int>     TauRecContainerAux_trackFilterProngs;
   vector<int>     TauRecContainerAux_trackFilterQuality;
   vector<float>   TauRecContainerAux_pi0ConeDR;
 //vector<vector<float> > TauRecContainerAux_trackEtaStrip;
 //vector<vector<float> > TauRecContainerAux_trackPhiStrip;
 //vector<ElementLink<DataVector<xAOD::Jet_v1> > > TauRecContainerAux_jetLink;
 //vector<ElementLink<DataVector<xAOD::Vertex_v1> > > TauRecContainerAux_vertexLink;
 //vector<ElementLink<DataVector<xAOD::Vertex_v1> > > TauRecContainerAux_secondaryVertexLink;
 //vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > TauRecContainerAux_charged_PFOLinks;
 //vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > TauRecContainerAux_neutral_PFOLinks;
 //vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > TauRecContainerAux_pi0_PFOLinks;
 //vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > TauRecContainerAux_cellBased_Charged_PFOLinks;
 //vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > TauRecContainerAux_cellBased_Neutral_PFOLinks;
 //vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > TauRecContainerAux_cellBased_Pi0_PFOLinks;
 //vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > TauRecContainerAux_eflowRec_Charged_PFOLinks;
 //vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > TauRecContainerAux_eflowRec_Neutral_PFOLinks;
 //vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > TauRecContainerAux_eflowRec_Pi0_PFOLinks;
 //vector<vector<ElementLink<DataVector<xAOD::PFO_v1> > > > TauRecContainerAux_shot_PFOLinks;
   vector<float>   TauRecContainerAux_ipZ0SinThetaSigLeadTrk;
   vector<float>   TauRecContainerAux_etOverPtLeadTrk;
   vector<float>   TauRecContainerAux_leadTrkPt;
   vector<float>   TauRecContainerAux_ipSigLeadTrk;
   vector<float>   TauRecContainerAux_massTrkSys;
   vector<float>   TauRecContainerAux_trkWidth2;
   vector<float>   TauRecContainerAux_trFlightPathSig;
   vector<float>   TauRecContainerAux_ele_E237E277;
   vector<float>   TauRecContainerAux_ele_PresamplerFraction;
   vector<float>   TauRecContainerAux_ele_ECALFirstFraction;
   vector<int>     TauRecContainerAux_numCells;
   vector<int>     TauRecContainerAux_numTopoClusters;
   vector<float>   TauRecContainerAux_numEffTopoClusters;
   vector<float>   TauRecContainerAux_topoInvMass;
   vector<float>   TauRecContainerAux_effTopoInvMass;
   vector<float>   TauRecContainerAux_topoMeanDeltaR;
   vector<float>   TauRecContainerAux_effTopoMeanDeltaR;
   vector<float>   TauRecContainerAux_EMRadius;
   vector<float>   TauRecContainerAux_hadRadius;
   vector<float>   TauRecContainerAux_etEMAtEMScale;
   vector<float>   TauRecContainerAux_etHadAtEMScale;
   vector<float>   TauRecContainerAux_isolFrac;
   vector<float>   TauRecContainerAux_centFrac;
   vector<float>   TauRecContainerAux_stripWidth2;
   vector<int>     TauRecContainerAux_nStrip;
   vector<float>   TauRecContainerAux_etEMCalib;
   vector<float>   TauRecContainerAux_etHadCalib;
   vector<float>   TauRecContainerAux_seedCalo_eta;
   vector<float>   TauRecContainerAux_seedCalo_phi;
   vector<float>   TauRecContainerAux_trkAvgDist;
   vector<float>   TauRecContainerAux_trkRmsDist;
   vector<float>   TauRecContainerAux_lead2ClusterEOverAllClusterE;
   vector<float>   TauRecContainerAux_lead3ClusterEOverAllClusterE;
   vector<float>   TauRecContainerAux_caloIso;
   vector<float>   TauRecContainerAux_caloIsoCorrected;
   vector<float>   TauRecContainerAux_dRmax;
   vector<float>   TauRecContainerAux_secMaxStripEt;
   vector<float>   TauRecContainerAux_sumEMCellEtOverLeadTrkPt;
   vector<float>   TauRecContainerAux_hadLeakEt;
   vector<float>   TauRecContainerAux_EM_TES_scale;
   vector<float>   TauRecContainerAux_LC_TES_precalib;
   vector<float>   TauRecContainerAux_TESOffset;
   vector<float>   TauRecContainerAux_TESCalibConstant;
   vector<float>   TauRecContainerAux_cellBasedEnergyRing1;
   vector<float>   TauRecContainerAux_cellBasedEnergyRing2;
   vector<float>   TauRecContainerAux_cellBasedEnergyRing3;
   vector<float>   TauRecContainerAux_cellBasedEnergyRing4;
   vector<float>   TauRecContainerAux_cellBasedEnergyRing5;
   vector<float>   TauRecContainerAux_cellBasedEnergyRing6;
   vector<float>   TauRecContainerAux_cellBasedEnergyRing7;
   vector<float>   TauRecContainerAux_TRT_NHT_OVER_NLT;
   vector<float>   TauRecContainerAux_TauJetVtxFraction;
   vector<float>   TauRecContainerAux_etEflow;
   vector<float>   TauRecContainerAux_mEflow;
   vector<float>   TauRecContainerAux_ptRatioEflow;
   vector<int>     TauRecContainerAux_nPi0;
   vector<int>     TauRecContainerAux_nCharged;
   vector<float>   TauRecContainerAux_etEflowTopo;
   vector<float>   TauRecContainerAux_mEflowTopo;
   vector<float>   TauRecContainerAux_ptRatioEflowTopo;
   vector<int>     TauRecContainerAux_nPi0Topo;
   vector<int>     TauRecContainerAux_nChargedTopo;
   vector<float>   TauRecContainerAux_PSSFraction;
   vector<float>   TauRecContainerAux_ChPiEMEOverCaloEME;
   vector<float>   TauRecContainerAux_EMPOverTrkSysP;
   vector<int>     TauRecContainerAux_pantau_CellBasedInput_isPanTauCandidate;
   vector<int>     TauRecContainerAux_pantau_CellBasedInput_DecayModeProto;
   vector<int>     TauRecContainerAux_pantau_CellBasedInput_DecayMode;
   vector<float>   TauRecContainerAux_pantau_CellBasedInput_BDTValue_1p0n_vs_1p1n;
   vector<float>   TauRecContainerAux_pantau_CellBasedInput_BDTValue_1p1n_vs_1pXn;
   vector<float>   TauRecContainerAux_pantau_CellBasedInput_BDTValue_3p0n_vs_3pXn;
   vector<int>     TauRecContainerAux_pantau_CellBasedInput_BDTVar_Basic_NNeutralConsts;
   vector<float>   TauRecContainerAux_pantau_CellBasedInput_BDTVar_Charged_JetMoment_EtDRxTotalEt;
   vector<float>   TauRecContainerAux_pantau_CellBasedInput_BDTVar_Charged_StdDev_Et_WrtEtAllConsts;
   vector<float>   TauRecContainerAux_pantau_CellBasedInput_BDTVar_Neutral_HLV_SumM;
   vector<float>   TauRecContainerAux_pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_1;
   vector<float>   TauRecContainerAux_pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2;
   vector<float>   TauRecContainerAux_pantau_CellBasedInput_BDTVar_Neutral_Ratio_1stBDTEtOverEtAllConsts;
   vector<float>   TauRecContainerAux_pantau_CellBasedInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts;
   vector<float>   TauRecContainerAux_pantau_CellBasedInput_BDTVar_Neutral_Shots_NPhotonsInSeed;
   vector<float>   TauRecContainerAux_pantau_CellBasedInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged;
   vector<int>     TauRecContainerAux_pantau_eflowRecInput_isPanTauCandidate;
   vector<int>     TauRecContainerAux_pantau_eflowRecInput_DecayModeProto;
   vector<int>     TauRecContainerAux_pantau_eflowRecInput_DecayMode;
   vector<float>   TauRecContainerAux_pantau_eflowRecInput_BDTValue_1p0n_vs_1p1n;
   vector<float>   TauRecContainerAux_pantau_eflowRecInput_BDTValue_1p1n_vs_1pXn;
   vector<float>   TauRecContainerAux_pantau_eflowRecInput_BDTValue_3p0n_vs_3pXn;
   vector<int>     TauRecContainerAux_pantau_eflowRecInput_BDTVar_Basic_NPi0NeutConsts;
   vector<int>     TauRecContainerAux_pantau_eflowRecInput_BDTVar_Basic_NNeutralConsts;
   vector<float>   TauRecContainerAux_pantau_eflowRecInput_BDTVar_Charged_HLV_SumPt;
   vector<float>   TauRecContainerAux_pantau_eflowRecInput_BDTVar_Charged_Ratio_EtOverEtAllConsts;
   vector<float>   TauRecContainerAux_pantau_eflowRecInput_BDTVar_Neutral_HLV_SumM;
   vector<float>   TauRecContainerAux_pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_EtSort_1;
   vector<float>   TauRecContainerAux_pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2;
   vector<float>   TauRecContainerAux_pantau_eflowRecInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts;
   vector<float>   TauRecContainerAux_pantau_eflowRecInput_BDTVar_Neutral_Mean_DRToLeading_WrtEtAllConsts;
   vector<float>   TauRecContainerAux_pantau_eflowRecInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged;
   CaloCalibrationHitContainer_p3 *LArCalibrationHitActive;
   CaloCalibrationHitContainer_p3 *LArCalibrationHitDeadMaterial;
   CaloCalibrationHitContainer_p3 *LArCalibrationHitInactive;
 //xAOD::VertexAuxContainer_v1 *GSFConversionVerticesAux_;
 //xAOD::VertexAuxContainer_v1 *GSFConversionVerticesAux_xAOD__AuxContainerBase;
   vector<float>   GSFConversionVerticesAux_chiSquared;
   vector<float>   GSFConversionVerticesAux_numberDoF;
   vector<float>   GSFConversionVerticesAux_x;
   vector<float>   GSFConversionVerticesAux_y;
   vector<float>   GSFConversionVerticesAux_z;
 //vector<vector<float> > GSFConversionVerticesAux_covariance;
   vector<short>   GSFConversionVerticesAux_vertexType;
 //vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > GSFConversionVerticesAux_trackParticleLinks;
 //vector<vector<float> > GSFConversionVerticesAux_trackWeights;
 //xAOD::VertexAuxContainer_v1 *PrimaryVerticesAux_;
 //xAOD::VertexAuxContainer_v1 *PrimaryVerticesAux_xAOD__AuxContainerBase;
   vector<float>   PrimaryVerticesAux_chiSquared;
   vector<float>   PrimaryVerticesAux_numberDoF;
   vector<float>   PrimaryVerticesAux_x;
   vector<float>   PrimaryVerticesAux_y;
   vector<float>   PrimaryVerticesAux_z;
 //vector<vector<float> > PrimaryVerticesAux_covariance;
   vector<short>   PrimaryVerticesAux_vertexType;
 //vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > PrimaryVerticesAux_trackParticleLinks;
 //vector<vector<float> > PrimaryVerticesAux_trackWeights;
 //xAOD::VertexAuxContainer_v1 *TauSecondaryVertexContainerAux_;
 //xAOD::VertexAuxContainer_v1 *TauSecondaryVertexContainerAux_xAOD__AuxContainerBase;
   vector<float>   TauSecondaryVertexContainerAux_chiSquared;
   vector<float>   TauSecondaryVertexContainerAux_numberDoF;
   vector<float>   TauSecondaryVertexContainerAux_x;
   vector<float>   TauSecondaryVertexContainerAux_y;
   vector<float>   TauSecondaryVertexContainerAux_z;
 //vector<vector<float> > TauSecondaryVertexContainerAux_covariance;
   vector<short>   TauSecondaryVertexContainerAux_vertexType;
 //vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > TauSecondaryVertexContainerAux_trackParticleLinks;
 //vector<vector<float> > TauSecondaryVertexContainerAux_trackWeights;
 //xAOD::MuonSegmentAuxContainer_v1 *MuonSegmentsAux_;
 //xAOD::MuonSegmentAuxContainer_v1 *MuonSegmentsAux_xAOD__AuxContainerBase;
   vector<float>   MuonSegmentsAux_x;
   vector<float>   MuonSegmentsAux_y;
   vector<float>   MuonSegmentsAux_z;
   vector<float>   MuonSegmentsAux_px;
   vector<float>   MuonSegmentsAux_py;
   vector<float>   MuonSegmentsAux_pz;
   vector<float>   MuonSegmentsAux_t0;
   vector<float>   MuonSegmentsAux_t0error;
   vector<float>   MuonSegmentsAux_chiSquared;
   vector<float>   MuonSegmentsAux_numberDoF;
   vector<int>     MuonSegmentsAux_sector;
   vector<int>     MuonSegmentsAux_chamberIndex;
   vector<int>     MuonSegmentsAux_etaIndex;
   vector<int>     MuonSegmentsAux_technology;
   vector<int>     MuonSegmentsAux_nPrecisionHits;
   vector<int>     MuonSegmentsAux_nPhiLayers;
   vector<int>     MuonSegmentsAux_nTrigEtaLayers;
   MuonCaloEnergyContainer_p1 *MuonCaloEnergyCollection;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_N90Constituents;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_NegativeE;
   vector<vector<int> > *AntiKt10LCTopoJetsAuxDyn_NumTrkPt1000;
   vector<vector<int> > *AntiKt10LCTopoJetsAuxDyn_NumTrkPt500;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_OotFracClusters10;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_OotFracClusters5;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_PlanarFlow;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_Sphericity;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_Split12;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_Split23;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_Split34;
   vector<vector<float> > *AntiKt10LCTopoJetsAuxDyn_SumPtTrkPt1000;
   vector<vector<float> > *AntiKt10LCTopoJetsAuxDyn_SumPtTrkPt500;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_Tau1;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_Tau2;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_Tau3;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_ThrustMaj;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_ThrustMin;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_Timing;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10LCTopoJetsAuxDyn_Track;
   vector<int>     *AntiKt10LCTopoJetsAuxDyn_TrackCount;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_TrackPt;
   vector<vector<float> > *AntiKt10LCTopoJetsAuxDyn_TrackWidthPt1000;
   vector<vector<float> > *AntiKt10LCTopoJetsAuxDyn_TrackWidthPt500;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10LCTopoJetsAuxDyn_Truth;
   vector<int>     *AntiKt10LCTopoJetsAuxDyn_TruthCount;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_TruthLabelDeltaR_B;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_TruthLabelDeltaR_C;
   vector<int>     *AntiKt10LCTopoJetsAuxDyn_ConstituentScale;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_TruthLabelDeltaR_T;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_JetEMScaleMomentum_pt;
   vector<int>     *AntiKt10LCTopoJetsAuxDyn_TruthLabelID;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_JetEMScaleMomentum_eta;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_TruthPt;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_JetEMScaleMomentum_phi;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10LCTopoJetsAuxDyn_TruthWZ;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_JetEMScaleMomentum_m;
   vector<int>     *AntiKt10LCTopoJetsAuxDyn_TruthWZCount;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_TruthWZPt;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_Width;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_ZCut12;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_JetConstitScaleMomentum_m;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_ZCut23;
   vector<int>     *AntiKt10LCTopoJetsAuxDyn_InputType;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_ZCut34;
   vector<int>     *AntiKt10LCTopoJetsAuxDyn_AlgorithmType;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_SizeParameter;
   Int_t           AntiKt10LCTopoJetsAuxDyn_btaggingLink_;
   UInt_t          AntiKt10LCTopoJetsAuxDyn_btaggingLink_m_persKey[kMaxAntiKt10LCTopoJetsAuxDyn_btaggingLink];   //[AntiKt10LCTopoJetsAuxDyn.btaggingLink_]
   UInt_t          AntiKt10LCTopoJetsAuxDyn_btaggingLink_m_persIndex[kMaxAntiKt10LCTopoJetsAuxDyn_btaggingLink];   //[AntiKt10LCTopoJetsAuxDyn.btaggingLink_]
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_ActiveArea;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_ActiveArea4vec_eta;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_ActiveArea4vec_m;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_ActiveArea4vec_phi;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_ActiveArea4vec_pt;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_Angularity;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_Aplanarity;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_AverageLArQF;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_BchCorrCell;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_CentroidR;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_Dip12;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_Dip13;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_Dip23;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_DipExcl12;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_ECF1;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_ECF2;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_ECF3;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_EMFrac;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10LCTopoJetsAuxDyn_EMTopo;
   vector<int>     *AntiKt10LCTopoJetsAuxDyn_EMTopoCount;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_EMTopoPt;
   vector<vector<float> > *AntiKt10LCTopoJetsAuxDyn_EnergyPerSampling;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_FoxWolfram0;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_FoxWolfram1;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_FoxWolfram2;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_FoxWolfram3;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_FoxWolfram4;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_FracSamplingMax;
   vector<int>     *AntiKt10LCTopoJetsAuxDyn_FracSamplingMaxIndex;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10LCTopoJetsAuxDyn_GhostAntiKt3TrackJet;
   vector<int>     *AntiKt10LCTopoJetsAuxDyn_GhostAntiKt3TrackJetCount;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_GhostAntiKt3TrackJetPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10LCTopoJetsAuxDyn_GhostAntiKt4TrackJet;
   vector<int>     *AntiKt10LCTopoJetsAuxDyn_GhostAntiKt4TrackJetCount;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_GhostAntiKt4TrackJetPt;
   vector<vector<ElementLink<DataVector<xAOD::MuonSegment_v1> > > > *AntiKt10LCTopoJetsAuxDyn_GhostMuonSegment;
   vector<int>     *AntiKt10LCTopoJetsAuxDyn_GhostMuonSegmentCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10LCTopoJetsAuxDyn_GhostTrack;
   vector<int>     *AntiKt10LCTopoJetsAuxDyn_GhostTrackCount;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_GhostTrackPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10LCTopoJetsAuxDyn_GhostTruth;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_GhostTruthAssociationFraction;
   Int_t           AntiKt10LCTopoJetsAuxDyn_GhostTruthAssociationLink_;
   UInt_t          AntiKt10LCTopoJetsAuxDyn_GhostTruthAssociationLink_m_persKey[kMaxAntiKt10LCTopoJetsAuxDyn_GhostTruthAssociationLink];   //[AntiKt10LCTopoJetsAuxDyn.GhostTruthAssociationLink_]
   UInt_t          AntiKt10LCTopoJetsAuxDyn_GhostTruthAssociationLink_m_persIndex[kMaxAntiKt10LCTopoJetsAuxDyn_GhostTruthAssociationLink];   //[AntiKt10LCTopoJetsAuxDyn.GhostTruthAssociationLink_]
   vector<int>     *AntiKt10LCTopoJetsAuxDyn_GhostTruthCount;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_GhostTruthPt;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_HECFrac;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_HECQuality;
   Int_t           AntiKt10LCTopoJetsAuxDyn_HighestJVFVtx_;
   UInt_t          AntiKt10LCTopoJetsAuxDyn_HighestJVFVtx_m_persKey[kMaxAntiKt10LCTopoJetsAuxDyn_HighestJVFVtx];   //[AntiKt10LCTopoJetsAuxDyn.HighestJVFVtx_]
   UInt_t          AntiKt10LCTopoJetsAuxDyn_HighestJVFVtx_m_persIndex[kMaxAntiKt10LCTopoJetsAuxDyn_HighestJVFVtx];   //[AntiKt10LCTopoJetsAuxDyn.HighestJVFVtx_]
   vector<vector<float> > *AntiKt10LCTopoJetsAuxDyn_JVF;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_JetGhostArea;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_KtDR;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_LArQuality;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10LCTopoJetsAuxDyn_LCTopo;
   vector<int>     *AntiKt10LCTopoJetsAuxDyn_LCTopoCount;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_LCTopoPt;
   vector<float>   *AntiKt10LCTopoJetsAuxDyn_Mu12;
   vector<float>   *AntiKt10TruthJetsAuxDyn_JetGhostArea;
   vector<float>   *AntiKt10TruthJetsAuxDyn_KtDR;
   vector<float>   *AntiKt10TruthJetsAuxDyn_Mu12;
   vector<float>   *AntiKt10TruthJetsAuxDyn_PlanarFlow;
   vector<float>   *AntiKt10TruthJetsAuxDyn_Sphericity;
   vector<float>   *AntiKt10TruthJetsAuxDyn_Split12;
   vector<float>   *AntiKt10TruthJetsAuxDyn_Split23;
   vector<float>   *AntiKt10TruthJetsAuxDyn_Split34;
   vector<int>     *AntiKt10TruthJetsAuxDyn_ConstituentScale;
   vector<float>   *AntiKt10TruthJetsAuxDyn_Tau1;
   vector<float>   *AntiKt10TruthJetsAuxDyn_Tau2;
   vector<float>   *AntiKt10TruthJetsAuxDyn_Tau3;
   vector<float>   *AntiKt10TruthJetsAuxDyn_ThrustMaj;
   vector<float>   *AntiKt10TruthJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt10TruthJetsAuxDyn_ThrustMin;
   vector<float>   *AntiKt10TruthJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt10TruthJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *AntiKt10TruthJetsAuxDyn_JetConstitScaleMomentum_m;
   vector<int>     *AntiKt10TruthJetsAuxDyn_InputType;
   vector<int>     *AntiKt10TruthJetsAuxDyn_AlgorithmType;
   vector<float>   *AntiKt10TruthJetsAuxDyn_SizeParameter;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TruthJetsAuxDyn_Truth;
   Int_t           AntiKt10TruthJetsAuxDyn_btaggingLink_;
   UInt_t          AntiKt10TruthJetsAuxDyn_btaggingLink_m_persKey[kMaxAntiKt10TruthJetsAuxDyn_btaggingLink];   //[AntiKt10TruthJetsAuxDyn.btaggingLink_]
   UInt_t          AntiKt10TruthJetsAuxDyn_btaggingLink_m_persIndex[kMaxAntiKt10TruthJetsAuxDyn_btaggingLink];   //[AntiKt10TruthJetsAuxDyn.btaggingLink_]
   vector<int>     *AntiKt10TruthJetsAuxDyn_TruthCount;
   vector<float>   *AntiKt10TruthJetsAuxDyn_TruthLabelDeltaR_B;
   vector<float>   *AntiKt10TruthJetsAuxDyn_TruthLabelDeltaR_C;
   vector<float>   *AntiKt10TruthJetsAuxDyn_TruthLabelDeltaR_T;
   vector<int>     *AntiKt10TruthJetsAuxDyn_TruthLabelID;
   vector<float>   *AntiKt10TruthJetsAuxDyn_TruthPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TruthJetsAuxDyn_TruthWZ;
   vector<int>     *AntiKt10TruthJetsAuxDyn_TruthWZCount;
   vector<float>   *AntiKt10TruthJetsAuxDyn_TruthWZPt;
   vector<float>   *AntiKt10TruthJetsAuxDyn_Width;
   vector<float>   *AntiKt10TruthJetsAuxDyn_ZCut12;
   vector<float>   *AntiKt10TruthJetsAuxDyn_ZCut23;
   vector<float>   *AntiKt10TruthJetsAuxDyn_ZCut34;
   vector<float>   *AntiKt10TruthJetsAuxDyn_Angularity;
   vector<float>   *AntiKt10TruthJetsAuxDyn_Aplanarity;
   vector<float>   *AntiKt10TruthJetsAuxDyn_Dip12;
   vector<float>   *AntiKt10TruthJetsAuxDyn_Dip13;
   vector<float>   *AntiKt10TruthJetsAuxDyn_Dip23;
   vector<float>   *AntiKt10TruthJetsAuxDyn_DipExcl12;
   vector<float>   *AntiKt10TruthJetsAuxDyn_ECF1;
   vector<float>   *AntiKt10TruthJetsAuxDyn_ECF2;
   vector<float>   *AntiKt10TruthJetsAuxDyn_ECF3;
   vector<float>   *AntiKt10TruthJetsAuxDyn_FoxWolfram0;
   vector<float>   *AntiKt10TruthJetsAuxDyn_FoxWolfram1;
   vector<float>   *AntiKt10TruthJetsAuxDyn_FoxWolfram2;
   vector<float>   *AntiKt10TruthJetsAuxDyn_FoxWolfram3;
   vector<float>   *AntiKt10TruthJetsAuxDyn_FoxWolfram4;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_JetGhostArea;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_KtDR;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_Mu12;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_PlanarFlow;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_Sphericity;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_Split12;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_Split23;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_Split34;
   vector<int>     *AntiKt10TruthWZJetsAuxDyn_ConstituentScale;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_Tau1;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_Tau2;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_Tau3;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_ThrustMaj;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_ThrustMin;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_JetConstitScaleMomentum_m;
   vector<int>     *AntiKt10TruthWZJetsAuxDyn_InputType;
   vector<int>     *AntiKt10TruthWZJetsAuxDyn_AlgorithmType;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_SizeParameter;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TruthWZJetsAuxDyn_Truth;
   Int_t           AntiKt10TruthWZJetsAuxDyn_btaggingLink_;
   UInt_t          AntiKt10TruthWZJetsAuxDyn_btaggingLink_m_persKey[kMaxAntiKt10TruthWZJetsAuxDyn_btaggingLink];   //[AntiKt10TruthWZJetsAuxDyn.btaggingLink_]
   UInt_t          AntiKt10TruthWZJetsAuxDyn_btaggingLink_m_persIndex[kMaxAntiKt10TruthWZJetsAuxDyn_btaggingLink];   //[AntiKt10TruthWZJetsAuxDyn.btaggingLink_]
   vector<int>     *AntiKt10TruthWZJetsAuxDyn_TruthCount;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_TruthLabelDeltaR_B;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_TruthLabelDeltaR_C;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_TruthLabelDeltaR_T;
   vector<int>     *AntiKt10TruthWZJetsAuxDyn_TruthLabelID;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_TruthPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt10TruthWZJetsAuxDyn_TruthWZ;
   vector<int>     *AntiKt10TruthWZJetsAuxDyn_TruthWZCount;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_TruthWZPt;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_Width;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_ZCut12;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_ZCut23;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_ZCut34;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_Angularity;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_Aplanarity;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_Dip12;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_Dip13;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_Dip23;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_DipExcl12;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_ECF1;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_ECF2;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_ECF3;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_FoxWolfram0;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_FoxWolfram1;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_FoxWolfram2;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_FoxWolfram3;
   vector<float>   *AntiKt10TruthWZJetsAuxDyn_FoxWolfram4;
   vector<int>     *AntiKt3PV0TrackJetsAuxDyn_GhostTruthCount;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_GhostTruthPt;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_JetGhostArea;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_KtDR;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_Mu12;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_PlanarFlow;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_Sphericity;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_Split12;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_Split23;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_Split34;
   vector<int>     *AntiKt3PV0TrackJetsAuxDyn_ConstituentScale;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_Tau1;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_Tau2;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_Tau3;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_ThrustMaj;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_ThrustMin;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt3PV0TrackJetsAuxDyn_Track;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_JetConstitScaleMomentum_m;
   vector<int>     *AntiKt3PV0TrackJetsAuxDyn_TrackCount;
   vector<int>     *AntiKt3PV0TrackJetsAuxDyn_InputType;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_TrackPt;
   vector<int>     *AntiKt3PV0TrackJetsAuxDyn_AlgorithmType;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_SizeParameter;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt3PV0TrackJetsAuxDyn_Truth;
   vector<int>     *AntiKt3PV0TrackJetsAuxDyn_TruthCount;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_TruthPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt3PV0TrackJetsAuxDyn_TruthWZ;
   vector<int>     *AntiKt3PV0TrackJetsAuxDyn_TruthWZCount;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_TruthWZPt;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_Width;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_ZCut12;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_ZCut23;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_ZCut34;
   Int_t           AntiKt3PV0TrackJetsAuxDyn_OriginVertex_;
   UInt_t          AntiKt3PV0TrackJetsAuxDyn_OriginVertex_m_persKey[kMaxAntiKt3PV0TrackJetsAuxDyn_OriginVertex];   //[AntiKt3PV0TrackJetsAuxDyn.OriginVertex_]
   UInt_t          AntiKt3PV0TrackJetsAuxDyn_OriginVertex_m_persIndex[kMaxAntiKt3PV0TrackJetsAuxDyn_OriginVertex];   //[AntiKt3PV0TrackJetsAuxDyn.OriginVertex_]
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_Angularity;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_Aplanarity;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_Dip12;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_Dip13;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_Dip23;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_DipExcl12;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_ECF1;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_ECF2;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_ECF3;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_FoxWolfram0;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_FoxWolfram1;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_FoxWolfram2;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_FoxWolfram3;
   vector<float>   *AntiKt3PV0TrackJetsAuxDyn_FoxWolfram4;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt3PV0TrackJetsAuxDyn_GhostTruth;
   vector<int>     *AntiKt3ZTrackJetsAuxDyn_GhostTruthCount;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_GhostTruthPt;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_JetGhostArea;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_KtDR;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_Mu12;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_PlanarFlow;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_Sphericity;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_Split12;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_Split23;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_Split34;
   vector<int>     *AntiKt3ZTrackJetsAuxDyn_ConstituentScale;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_Tau1;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_Tau2;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_Tau3;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_ThrustMaj;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_ThrustMin;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt3ZTrackJetsAuxDyn_Track;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_JetConstitScaleMomentum_m;
   vector<int>     *AntiKt3ZTrackJetsAuxDyn_TrackCount;
   vector<int>     *AntiKt3ZTrackJetsAuxDyn_InputType;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_TrackPt;
   vector<int>     *AntiKt3ZTrackJetsAuxDyn_AlgorithmType;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_SizeParameter;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt3ZTrackJetsAuxDyn_Truth;
   vector<int>     *AntiKt3ZTrackJetsAuxDyn_TruthCount;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_TruthPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt3ZTrackJetsAuxDyn_TruthWZ;
   vector<int>     *AntiKt3ZTrackJetsAuxDyn_TruthWZCount;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_TruthWZPt;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_Width;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_ZCut12;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_ZCut23;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_ZCut34;
   Int_t           AntiKt3ZTrackJetsAuxDyn_OriginVertex_;
   UInt_t          AntiKt3ZTrackJetsAuxDyn_OriginVertex_m_persKey[kMaxAntiKt3ZTrackJetsAuxDyn_OriginVertex];   //[AntiKt3ZTrackJetsAuxDyn.OriginVertex_]
   UInt_t          AntiKt3ZTrackJetsAuxDyn_OriginVertex_m_persIndex[kMaxAntiKt3ZTrackJetsAuxDyn_OriginVertex];   //[AntiKt3ZTrackJetsAuxDyn.OriginVertex_]
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_Angularity;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_Aplanarity;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_Dip12;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_Dip13;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_Dip23;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_DipExcl12;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_ECF1;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_ECF2;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_ECF3;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_FoxWolfram0;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_FoxWolfram1;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_FoxWolfram2;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_FoxWolfram3;
   vector<float>   *AntiKt3ZTrackJetsAuxDyn_FoxWolfram4;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt3ZTrackJetsAuxDyn_GhostTruth;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_N90Constituents;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_NegativeE;
   vector<vector<int> > *AntiKt4EMTopoJetsAuxDyn_NumTrkPt1000;
   vector<vector<int> > *AntiKt4EMTopoJetsAuxDyn_NumTrkPt500;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_OotFracClusters10;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_OotFracClusters5;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_PlanarFlow;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_Sphericity;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_Split12;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_Split23;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_Split34;
   vector<vector<float> > *AntiKt4EMTopoJetsAuxDyn_SumPtTrkPt1000;
   vector<vector<float> > *AntiKt4EMTopoJetsAuxDyn_SumPtTrkPt500;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_Tau1;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_Tau2;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_Tau3;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_ThrustMaj;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_ThrustMin;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_Timing;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopoJetsAuxDyn_Track;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_TrackCount;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_TrackPt;
   vector<vector<float> > *AntiKt4EMTopoJetsAuxDyn_TrackWidthPt1000;
   vector<vector<float> > *AntiKt4EMTopoJetsAuxDyn_TrackWidthPt500;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopoJetsAuxDyn_Truth;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_TruthCount;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_TruthLabelDeltaR_B;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_TruthLabelDeltaR_C;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_ConstituentScale;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_TruthLabelDeltaR_T;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JetEMScaleMomentum_pt;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_TruthLabelID;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JetEMScaleMomentum_eta;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_TruthPt;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JetEMScaleMomentum_phi;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopoJetsAuxDyn_TruthWZ;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JetEMScaleMomentum_m;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_TruthWZCount;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_TruthWZPt;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_Width;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_ZCut12;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_m;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_ZCut23;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_InputType;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_ZCut34;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_AlgorithmType;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_SizeParameter;
   Int_t           AntiKt4EMTopoJetsAuxDyn_btaggingLink_;
   UInt_t          AntiKt4EMTopoJetsAuxDyn_btaggingLink_m_persKey[kMaxAntiKt4EMTopoJetsAuxDyn_btaggingLink];   //[AntiKt4EMTopoJetsAuxDyn.btaggingLink_]
   UInt_t          AntiKt4EMTopoJetsAuxDyn_btaggingLink_m_persIndex[kMaxAntiKt4EMTopoJetsAuxDyn_btaggingLink];   //[AntiKt4EMTopoJetsAuxDyn.btaggingLink_]
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_ActiveArea;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_eta;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_m;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_phi;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_pt;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_Angularity;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_Aplanarity;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_AverageLArQF;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_BchCorrCell;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_CentroidR;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_Dip12;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_Dip13;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_Dip23;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_DipExcl12;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_ECF1;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_ECF2;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_ECF3;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_EMFrac;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopoJetsAuxDyn_EMTopo;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_EMTopoCount;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_EMTopoPt;
   vector<vector<float> > *AntiKt4EMTopoJetsAuxDyn_EnergyPerSampling;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_FoxWolfram0;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_FoxWolfram1;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_FoxWolfram2;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_FoxWolfram3;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_FoxWolfram4;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_FracSamplingMax;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_FracSamplingMaxIndex;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopoJetsAuxDyn_GhostAntiKt3TrackJet;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_GhostAntiKt3TrackJetCount;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_GhostAntiKt3TrackJetPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopoJetsAuxDyn_GhostAntiKt4TrackJet;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_GhostAntiKt4TrackJetCount;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_GhostAntiKt4TrackJetPt;
   vector<vector<ElementLink<DataVector<xAOD::MuonSegment_v1> > > > *AntiKt4EMTopoJetsAuxDyn_GhostMuonSegment;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_GhostMuonSegmentCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopoJetsAuxDyn_GhostTrack;
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_GhostTrackCount;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_GhostTrackPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4EMTopoJetsAuxDyn_GhostTruth;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_GhostTruthAssociationFraction;
   Int_t           AntiKt4EMTopoJetsAuxDyn_GhostTruthAssociationLink_;
   UInt_t          AntiKt4EMTopoJetsAuxDyn_GhostTruthAssociationLink_m_persKey[kMaxAntiKt4EMTopoJetsAuxDyn_GhostTruthAssociationLink];   //[AntiKt4EMTopoJetsAuxDyn.GhostTruthAssociationLink_]
   UInt_t          AntiKt4EMTopoJetsAuxDyn_GhostTruthAssociationLink_m_persIndex[kMaxAntiKt4EMTopoJetsAuxDyn_GhostTruthAssociationLink];   //[AntiKt4EMTopoJetsAuxDyn.GhostTruthAssociationLink_]
   vector<int>     *AntiKt4EMTopoJetsAuxDyn_GhostTruthCount;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_GhostTruthPt;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_HECFrac;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_HECQuality;
   Int_t           AntiKt4EMTopoJetsAuxDyn_HighestJVFVtx_;
   UInt_t          AntiKt4EMTopoJetsAuxDyn_HighestJVFVtx_m_persKey[kMaxAntiKt4EMTopoJetsAuxDyn_HighestJVFVtx];   //[AntiKt4EMTopoJetsAuxDyn.HighestJVFVtx_]
   UInt_t          AntiKt4EMTopoJetsAuxDyn_HighestJVFVtx_m_persIndex[kMaxAntiKt4EMTopoJetsAuxDyn_HighestJVFVtx];   //[AntiKt4EMTopoJetsAuxDyn.HighestJVFVtx_]
   vector<vector<float> > *AntiKt4EMTopoJetsAuxDyn_JVF;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_JetGhostArea;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_KtDR;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_LArQuality;
   vector<float>   *AntiKt4EMTopoJetsAuxDyn_Mu12;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_N90Constituents;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_NegativeE;
   vector<vector<int> > *AntiKt4LCTopoJetsAuxDyn_NumTrkPt1000;
   vector<vector<int> > *AntiKt4LCTopoJetsAuxDyn_NumTrkPt500;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_OotFracClusters10;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_OotFracClusters5;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_PlanarFlow;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_Sphericity;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_Split12;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_Split23;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_Split34;
   vector<vector<float> > *AntiKt4LCTopoJetsAuxDyn_SumPtTrkPt1000;
   vector<vector<float> > *AntiKt4LCTopoJetsAuxDyn_SumPtTrkPt500;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_Tau1;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_Tau2;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_Tau3;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_ThrustMaj;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_ThrustMin;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_Timing;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4LCTopoJetsAuxDyn_Track;
   vector<int>     *AntiKt4LCTopoJetsAuxDyn_TrackCount;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_TrackPt;
   vector<vector<float> > *AntiKt4LCTopoJetsAuxDyn_TrackWidthPt1000;
   vector<vector<float> > *AntiKt4LCTopoJetsAuxDyn_TrackWidthPt500;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4LCTopoJetsAuxDyn_Truth;
   vector<int>     *AntiKt4LCTopoJetsAuxDyn_TruthCount;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_TruthLabelDeltaR_B;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_TruthLabelDeltaR_C;
   vector<int>     *AntiKt4LCTopoJetsAuxDyn_ConstituentScale;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_TruthLabelDeltaR_T;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_JetEMScaleMomentum_pt;
   vector<int>     *AntiKt4LCTopoJetsAuxDyn_TruthLabelID;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_JetEMScaleMomentum_eta;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_TruthPt;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_JetEMScaleMomentum_phi;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4LCTopoJetsAuxDyn_TruthWZ;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_JetEMScaleMomentum_m;
   vector<int>     *AntiKt4LCTopoJetsAuxDyn_TruthWZCount;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_TruthWZPt;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_Width;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_ZCut12;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_JetConstitScaleMomentum_m;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_ZCut23;
   vector<int>     *AntiKt4LCTopoJetsAuxDyn_InputType;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_ZCut34;
   vector<int>     *AntiKt4LCTopoJetsAuxDyn_AlgorithmType;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_SizeParameter;
   Int_t           AntiKt4LCTopoJetsAuxDyn_btaggingLink_;
   UInt_t          AntiKt4LCTopoJetsAuxDyn_btaggingLink_m_persKey[kMaxAntiKt4LCTopoJetsAuxDyn_btaggingLink];   //[AntiKt4LCTopoJetsAuxDyn.btaggingLink_]
   UInt_t          AntiKt4LCTopoJetsAuxDyn_btaggingLink_m_persIndex[kMaxAntiKt4LCTopoJetsAuxDyn_btaggingLink];   //[AntiKt4LCTopoJetsAuxDyn.btaggingLink_]
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_ActiveArea;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_ActiveArea4vec_eta;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_ActiveArea4vec_m;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_ActiveArea4vec_phi;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_ActiveArea4vec_pt;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_Angularity;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_Aplanarity;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_AverageLArQF;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_BchCorrCell;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_CentroidR;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_Dip12;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_Dip13;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_Dip23;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_DipExcl12;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_ECF1;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_ECF2;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_ECF3;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_EMFrac;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4LCTopoJetsAuxDyn_EMTopo;
   vector<int>     *AntiKt4LCTopoJetsAuxDyn_EMTopoCount;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_EMTopoPt;
   vector<vector<float> > *AntiKt4LCTopoJetsAuxDyn_EnergyPerSampling;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_FoxWolfram0;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_FoxWolfram1;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_FoxWolfram2;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_FoxWolfram3;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_FoxWolfram4;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_FracSamplingMax;
   vector<int>     *AntiKt4LCTopoJetsAuxDyn_FracSamplingMaxIndex;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4LCTopoJetsAuxDyn_GhostAntiKt3TrackJet;
   vector<int>     *AntiKt4LCTopoJetsAuxDyn_GhostAntiKt3TrackJetCount;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_GhostAntiKt3TrackJetPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4LCTopoJetsAuxDyn_GhostAntiKt4TrackJet;
   vector<int>     *AntiKt4LCTopoJetsAuxDyn_GhostAntiKt4TrackJetCount;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_GhostAntiKt4TrackJetPt;
   vector<vector<ElementLink<DataVector<xAOD::MuonSegment_v1> > > > *AntiKt4LCTopoJetsAuxDyn_GhostMuonSegment;
   vector<int>     *AntiKt4LCTopoJetsAuxDyn_GhostMuonSegmentCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4LCTopoJetsAuxDyn_GhostTrack;
   vector<int>     *AntiKt4LCTopoJetsAuxDyn_GhostTrackCount;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_GhostTrackPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4LCTopoJetsAuxDyn_GhostTruth;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_GhostTruthAssociationFraction;
   Int_t           AntiKt4LCTopoJetsAuxDyn_GhostTruthAssociationLink_;
   UInt_t          AntiKt4LCTopoJetsAuxDyn_GhostTruthAssociationLink_m_persKey[kMaxAntiKt4LCTopoJetsAuxDyn_GhostTruthAssociationLink];   //[AntiKt4LCTopoJetsAuxDyn.GhostTruthAssociationLink_]
   UInt_t          AntiKt4LCTopoJetsAuxDyn_GhostTruthAssociationLink_m_persIndex[kMaxAntiKt4LCTopoJetsAuxDyn_GhostTruthAssociationLink];   //[AntiKt4LCTopoJetsAuxDyn.GhostTruthAssociationLink_]
   vector<int>     *AntiKt4LCTopoJetsAuxDyn_GhostTruthCount;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_GhostTruthPt;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_HECFrac;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_HECQuality;
   Int_t           AntiKt4LCTopoJetsAuxDyn_HighestJVFVtx_;
   UInt_t          AntiKt4LCTopoJetsAuxDyn_HighestJVFVtx_m_persKey[kMaxAntiKt4LCTopoJetsAuxDyn_HighestJVFVtx];   //[AntiKt4LCTopoJetsAuxDyn.HighestJVFVtx_]
   UInt_t          AntiKt4LCTopoJetsAuxDyn_HighestJVFVtx_m_persIndex[kMaxAntiKt4LCTopoJetsAuxDyn_HighestJVFVtx];   //[AntiKt4LCTopoJetsAuxDyn.HighestJVFVtx_]
   vector<vector<float> > *AntiKt4LCTopoJetsAuxDyn_JVF;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_JetGhostArea;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_KtDR;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_LArQuality;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4LCTopoJetsAuxDyn_LCTopo;
   vector<int>     *AntiKt4LCTopoJetsAuxDyn_LCTopoCount;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_LCTopoPt;
   vector<float>   *AntiKt4LCTopoJetsAuxDyn_Mu12;
   vector<int>     *AntiKt4PV0TrackJetsAuxDyn_GhostTruthCount;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_GhostTruthPt;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_JetGhostArea;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_KtDR;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_Mu12;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_PlanarFlow;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_Sphericity;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_Split12;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_Split23;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_Split34;
   vector<int>     *AntiKt4PV0TrackJetsAuxDyn_ConstituentScale;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_Tau1;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_Tau2;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_Tau3;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_ThrustMaj;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_ThrustMin;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4PV0TrackJetsAuxDyn_Track;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_JetConstitScaleMomentum_m;
   vector<int>     *AntiKt4PV0TrackJetsAuxDyn_TrackCount;
   vector<int>     *AntiKt4PV0TrackJetsAuxDyn_InputType;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_TrackPt;
   vector<int>     *AntiKt4PV0TrackJetsAuxDyn_AlgorithmType;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_SizeParameter;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4PV0TrackJetsAuxDyn_Truth;
   vector<int>     *AntiKt4PV0TrackJetsAuxDyn_TruthCount;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_TruthPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4PV0TrackJetsAuxDyn_TruthWZ;
   vector<int>     *AntiKt4PV0TrackJetsAuxDyn_TruthWZCount;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_TruthWZPt;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_Width;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_ZCut12;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_ZCut23;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_ZCut34;
   Int_t           AntiKt4PV0TrackJetsAuxDyn_OriginVertex_;
   UInt_t          AntiKt4PV0TrackJetsAuxDyn_OriginVertex_m_persKey[kMaxAntiKt4PV0TrackJetsAuxDyn_OriginVertex];   //[AntiKt4PV0TrackJetsAuxDyn.OriginVertex_]
   UInt_t          AntiKt4PV0TrackJetsAuxDyn_OriginVertex_m_persIndex[kMaxAntiKt4PV0TrackJetsAuxDyn_OriginVertex];   //[AntiKt4PV0TrackJetsAuxDyn.OriginVertex_]
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_Angularity;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_Aplanarity;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_Dip12;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_Dip13;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_Dip23;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_DipExcl12;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_ECF1;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_ECF2;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_ECF3;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_FoxWolfram0;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_FoxWolfram1;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_FoxWolfram2;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_FoxWolfram3;
   vector<float>   *AntiKt4PV0TrackJetsAuxDyn_FoxWolfram4;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4PV0TrackJetsAuxDyn_GhostTruth;
   vector<float>   *AntiKt4TruthJetsAuxDyn_Tau2;
   vector<float>   *AntiKt4TruthJetsAuxDyn_FoxWolfram1;
   vector<float>   *AntiKt4TruthJetsAuxDyn_Tau3;
   vector<float>   *AntiKt4TruthJetsAuxDyn_FoxWolfram2;
   vector<float>   *AntiKt4TruthJetsAuxDyn_ThrustMaj;
   vector<float>   *AntiKt4TruthJetsAuxDyn_FoxWolfram3;
   vector<float>   *AntiKt4TruthJetsAuxDyn_ThrustMin;
   vector<float>   *AntiKt4TruthJetsAuxDyn_FoxWolfram4;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthJetsAuxDyn_Truth;
   vector<int>     *AntiKt4TruthJetsAuxDyn_TruthCount;
   vector<float>   *AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_B;
   vector<float>   *AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_C;
   vector<float>   *AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_T;
   vector<int>     *AntiKt4TruthJetsAuxDyn_TruthLabelID;
   vector<float>   *AntiKt4TruthJetsAuxDyn_TruthPt;
   vector<float>   *AntiKt4TruthJetsAuxDyn_Width;
   vector<float>   *AntiKt4TruthJetsAuxDyn_ZCut12;
   vector<float>   *AntiKt4TruthJetsAuxDyn_ZCut23;
   vector<float>   *AntiKt4TruthJetsAuxDyn_ZCut34;
   vector<float>   *AntiKt4TruthJetsAuxDyn_JetGhostArea;
   vector<float>   *AntiKt4TruthJetsAuxDyn_KtDR;
   vector<int>     *AntiKt4TruthJetsAuxDyn_ConstituentScale;
   vector<float>   *AntiKt4TruthJetsAuxDyn_Angularity;
   vector<float>   *AntiKt4TruthJetsAuxDyn_Aplanarity;
   vector<float>   *AntiKt4TruthJetsAuxDyn_Mu12;
   vector<float>   *AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt4TruthJetsAuxDyn_Dip12;
   vector<float>   *AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_m;
   vector<float>   *AntiKt4TruthJetsAuxDyn_Dip13;
   vector<int>     *AntiKt4TruthJetsAuxDyn_InputType;
   vector<float>   *AntiKt4TruthJetsAuxDyn_Dip23;
   vector<int>     *AntiKt4TruthJetsAuxDyn_AlgorithmType;
   vector<float>   *AntiKt4TruthJetsAuxDyn_DipExcl12;
   vector<float>   *AntiKt4TruthJetsAuxDyn_SizeParameter;
   vector<float>   *AntiKt4TruthJetsAuxDyn_ECF1;
   vector<float>   *AntiKt4TruthJetsAuxDyn_PlanarFlow;
   vector<float>   *AntiKt4TruthJetsAuxDyn_ECF2;
   Int_t           AntiKt4TruthJetsAuxDyn_btaggingLink_;
   UInt_t          AntiKt4TruthJetsAuxDyn_btaggingLink_m_persKey[kMaxAntiKt4TruthJetsAuxDyn_btaggingLink];   //[AntiKt4TruthJetsAuxDyn.btaggingLink_]
   UInt_t          AntiKt4TruthJetsAuxDyn_btaggingLink_m_persIndex[kMaxAntiKt4TruthJetsAuxDyn_btaggingLink];   //[AntiKt4TruthJetsAuxDyn.btaggingLink_]
   vector<float>   *AntiKt4TruthJetsAuxDyn_Sphericity;
   vector<float>   *AntiKt4TruthJetsAuxDyn_ECF3;
   vector<float>   *AntiKt4TruthJetsAuxDyn_Split12;
   vector<float>   *AntiKt4TruthJetsAuxDyn_Split23;
   vector<float>   *AntiKt4TruthJetsAuxDyn_Split34;
   vector<float>   *AntiKt4TruthJetsAuxDyn_Tau1;
   vector<float>   *AntiKt4TruthJetsAuxDyn_FoxWolfram0;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_JetGhostArea;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_KtDR;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_Mu12;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_PlanarFlow;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_Sphericity;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_Split12;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_Split23;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_Split34;
   vector<int>     *AntiKt4TruthWZJetsAuxDyn_ConstituentScale;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_Tau1;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_Tau2;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_Tau3;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_ThrustMaj;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_ThrustMin;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_JetConstitScaleMomentum_m;
   vector<int>     *AntiKt4TruthWZJetsAuxDyn_InputType;
   vector<int>     *AntiKt4TruthWZJetsAuxDyn_AlgorithmType;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_SizeParameter;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthWZJetsAuxDyn_Truth;
   Int_t           AntiKt4TruthWZJetsAuxDyn_btaggingLink_;
   UInt_t          AntiKt4TruthWZJetsAuxDyn_btaggingLink_m_persKey[kMaxAntiKt4TruthWZJetsAuxDyn_btaggingLink];   //[AntiKt4TruthWZJetsAuxDyn.btaggingLink_]
   UInt_t          AntiKt4TruthWZJetsAuxDyn_btaggingLink_m_persIndex[kMaxAntiKt4TruthWZJetsAuxDyn_btaggingLink];   //[AntiKt4TruthWZJetsAuxDyn.btaggingLink_]
   vector<int>     *AntiKt4TruthWZJetsAuxDyn_TruthCount;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_TruthLabelDeltaR_B;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_TruthLabelDeltaR_C;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_TruthLabelDeltaR_T;
   vector<int>     *AntiKt4TruthWZJetsAuxDyn_TruthLabelID;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_TruthPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4TruthWZJetsAuxDyn_TruthWZ;
   vector<int>     *AntiKt4TruthWZJetsAuxDyn_TruthWZCount;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_TruthWZPt;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_Width;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_ZCut12;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_ZCut23;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_ZCut34;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_Angularity;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_Aplanarity;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_Dip12;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_Dip13;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_Dip23;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_DipExcl12;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_ECF1;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_ECF2;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_ECF3;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_FoxWolfram0;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_FoxWolfram1;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_FoxWolfram2;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_FoxWolfram3;
   vector<float>   *AntiKt4TruthWZJetsAuxDyn_FoxWolfram4;
   vector<int>     *AntiKt4ZTrackJetsAuxDyn_GhostTruthCount;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_GhostTruthPt;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_JetGhostArea;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_KtDR;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_Mu12;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_PlanarFlow;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_Sphericity;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_Split12;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_Split23;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_Split34;
   vector<int>     *AntiKt4ZTrackJetsAuxDyn_ConstituentScale;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_Tau1;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_Tau2;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_Tau3;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_ThrustMaj;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_ThrustMin;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4ZTrackJetsAuxDyn_Track;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_JetConstitScaleMomentum_m;
   vector<int>     *AntiKt4ZTrackJetsAuxDyn_TrackCount;
   vector<int>     *AntiKt4ZTrackJetsAuxDyn_InputType;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_TrackPt;
   vector<int>     *AntiKt4ZTrackJetsAuxDyn_AlgorithmType;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_SizeParameter;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4ZTrackJetsAuxDyn_Truth;
   vector<int>     *AntiKt4ZTrackJetsAuxDyn_TruthCount;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_TruthPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4ZTrackJetsAuxDyn_TruthWZ;
   vector<int>     *AntiKt4ZTrackJetsAuxDyn_TruthWZCount;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_TruthWZPt;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_Width;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_ZCut12;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_ZCut23;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_ZCut34;
   Int_t           AntiKt4ZTrackJetsAuxDyn_OriginVertex_;
   UInt_t          AntiKt4ZTrackJetsAuxDyn_OriginVertex_m_persKey[kMaxAntiKt4ZTrackJetsAuxDyn_OriginVertex];   //[AntiKt4ZTrackJetsAuxDyn.OriginVertex_]
   UInt_t          AntiKt4ZTrackJetsAuxDyn_OriginVertex_m_persIndex[kMaxAntiKt4ZTrackJetsAuxDyn_OriginVertex];   //[AntiKt4ZTrackJetsAuxDyn.OriginVertex_]
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_Angularity;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_Aplanarity;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_Dip12;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_Dip13;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_Dip23;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_DipExcl12;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_ECF1;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_ECF2;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_ECF3;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_FoxWolfram0;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_FoxWolfram1;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_FoxWolfram2;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_FoxWolfram3;
   vector<float>   *AntiKt4ZTrackJetsAuxDyn_FoxWolfram4;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *AntiKt4ZTrackJetsAuxDyn_GhostTruth;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt10LCTopoAuxDyn_BTagTrackToJetAssociator;
   vector<vector<bool> > *BTagging_AntiKt10LCTopoAuxDyn_IP2D_flagFromV0ofTracks;
   vector<vector<int> > *BTagging_AntiKt10LCTopoAuxDyn_IP2D_gradeOfTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt10LCTopoAuxDyn_SV0_TrackParticleLinks;
   vector<vector<float> > *BTagging_AntiKt10LCTopoAuxDyn_IP2D_sigD0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt10LCTopoAuxDyn_IP2D_valD0wrtPVofTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt10LCTopoAuxDyn_SV1_TrackParticleLinks;
   vector<vector<float> > *BTagging_AntiKt10LCTopoAuxDyn_IP2D_weightBofTracks;
   vector<vector<float> > *BTagging_AntiKt10LCTopoAuxDyn_IP2D_weightCofTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt10LCTopoAuxDyn_IP2D_TrackParticleLinks;
   vector<vector<float> > *BTagging_AntiKt10LCTopoAuxDyn_IP2D_weightUofTracks;
   vector<vector<bool> > *BTagging_AntiKt10LCTopoAuxDyn_IP3D_flagFromV0ofTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt10LCTopoAuxDyn_IP3D_TrackParticleLinks;
   vector<vector<int> > *BTagging_AntiKt10LCTopoAuxDyn_IP3D_gradeOfTracks;
   vector<vector<float> > *BTagging_AntiKt10LCTopoAuxDyn_IP3D_sigD0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt10LCTopoAuxDyn_IP3D_sigZ0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt10LCTopoAuxDyn_IP3D_valD0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt10LCTopoAuxDyn_IP3D_valZ0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt10LCTopoAuxDyn_IP3D_weightBofTracks;
   vector<vector<float> > *BTagging_AntiKt10LCTopoAuxDyn_IP3D_weightCofTracks;
   vector<vector<float> > *BTagging_AntiKt10LCTopoAuxDyn_IP3D_weightUofTracks;
   vector<int>     *BTagging_AntiKt10LCTopoAuxDyn_SV0_N2Tpair;
   vector<int>     *BTagging_AntiKt10LCTopoAuxDyn_SV0_NGTinSvx;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt10LCTopoAuxDyn_SV0_badTracksIP;
   vector<float>   *BTagging_AntiKt10LCTopoAuxDyn_SV0_efracsvx;
   vector<float>   *BTagging_AntiKt10LCTopoAuxDyn_SV0_energyTrkInJet;
   vector<float>   *BTagging_AntiKt10LCTopoAuxDyn_SV0_masssvx;
   vector<float>   *BTagging_AntiKt10LCTopoAuxDyn_SV0_normdist;
   vector<double>  *BTagging_AntiKt10LCTopoAuxDyn_SV0_pb;
   vector<double>  *BTagging_AntiKt10LCTopoAuxDyn_SV0_pc;
   vector<double>  *BTagging_AntiKt10LCTopoAuxDyn_SV0_pu;
   vector<vector<ElementLink<DataVector<xAOD::Vertex_v1> > > > *BTagging_AntiKt10LCTopoAuxDyn_SV0_vertices;
   vector<int>     *BTagging_AntiKt10LCTopoAuxDyn_SV1_N2Tpair;
   vector<int>     *BTagging_AntiKt10LCTopoAuxDyn_SV1_NGTinSvx;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt10LCTopoAuxDyn_SV1_badTracksIP;
   vector<float>   *BTagging_AntiKt10LCTopoAuxDyn_SV1_efracsvx;
   vector<float>   *BTagging_AntiKt10LCTopoAuxDyn_SV1_energyTrkInJet;
   vector<float>   *BTagging_AntiKt10LCTopoAuxDyn_SV1_masssvx;
   vector<float>   *BTagging_AntiKt10LCTopoAuxDyn_SV1_normdist;
   vector<vector<ElementLink<DataVector<xAOD::Vertex_v1> > > > *BTagging_AntiKt10LCTopoAuxDyn_SV1_vertices;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt10TruthAuxDyn_BTagTrackToJetAssociator;
   vector<vector<bool> > *BTagging_AntiKt10TruthAuxDyn_IP2D_flagFromV0ofTracks;
   vector<vector<int> > *BTagging_AntiKt10TruthAuxDyn_IP2D_gradeOfTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt10TruthAuxDyn_SV0_TrackParticleLinks;
   vector<vector<float> > *BTagging_AntiKt10TruthAuxDyn_IP2D_sigD0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt10TruthAuxDyn_IP2D_valD0wrtPVofTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt10TruthAuxDyn_SV1_TrackParticleLinks;
   vector<vector<float> > *BTagging_AntiKt10TruthAuxDyn_IP2D_weightBofTracks;
   vector<vector<float> > *BTagging_AntiKt10TruthAuxDyn_IP2D_weightCofTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt10TruthAuxDyn_IP2D_TrackParticleLinks;
   vector<vector<float> > *BTagging_AntiKt10TruthAuxDyn_IP2D_weightUofTracks;
   vector<vector<bool> > *BTagging_AntiKt10TruthAuxDyn_IP3D_flagFromV0ofTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt10TruthAuxDyn_IP3D_TrackParticleLinks;
   vector<vector<int> > *BTagging_AntiKt10TruthAuxDyn_IP3D_gradeOfTracks;
   vector<vector<float> > *BTagging_AntiKt10TruthAuxDyn_IP3D_sigD0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt10TruthAuxDyn_IP3D_sigZ0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt10TruthAuxDyn_IP3D_valD0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt10TruthAuxDyn_IP3D_valZ0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt10TruthAuxDyn_IP3D_weightBofTracks;
   vector<vector<float> > *BTagging_AntiKt10TruthAuxDyn_IP3D_weightCofTracks;
   vector<vector<float> > *BTagging_AntiKt10TruthAuxDyn_IP3D_weightUofTracks;
   vector<int>     *BTagging_AntiKt10TruthAuxDyn_SV0_N2Tpair;
   vector<int>     *BTagging_AntiKt10TruthAuxDyn_SV0_NGTinSvx;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt10TruthAuxDyn_SV0_badTracksIP;
   vector<float>   *BTagging_AntiKt10TruthAuxDyn_SV0_efracsvx;
   vector<float>   *BTagging_AntiKt10TruthAuxDyn_SV0_energyTrkInJet;
   vector<float>   *BTagging_AntiKt10TruthAuxDyn_SV0_masssvx;
   vector<float>   *BTagging_AntiKt10TruthAuxDyn_SV0_normdist;
   vector<double>  *BTagging_AntiKt10TruthAuxDyn_SV0_pb;
   vector<double>  *BTagging_AntiKt10TruthAuxDyn_SV0_pc;
   vector<double>  *BTagging_AntiKt10TruthAuxDyn_SV0_pu;
   vector<vector<ElementLink<DataVector<xAOD::Vertex_v1> > > > *BTagging_AntiKt10TruthAuxDyn_SV0_vertices;
   vector<int>     *BTagging_AntiKt10TruthAuxDyn_SV1_N2Tpair;
   vector<int>     *BTagging_AntiKt10TruthAuxDyn_SV1_NGTinSvx;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt10TruthAuxDyn_SV1_badTracksIP;
   vector<float>   *BTagging_AntiKt10TruthAuxDyn_SV1_efracsvx;
   vector<float>   *BTagging_AntiKt10TruthAuxDyn_SV1_energyTrkInJet;
   vector<float>   *BTagging_AntiKt10TruthAuxDyn_SV1_masssvx;
   vector<float>   *BTagging_AntiKt10TruthAuxDyn_SV1_normdist;
   vector<vector<ElementLink<DataVector<xAOD::Vertex_v1> > > > *BTagging_AntiKt10TruthAuxDyn_SV1_vertices;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt10TruthWZAuxDyn_BTagTrackToJetAssociator;
   vector<vector<bool> > *BTagging_AntiKt10TruthWZAuxDyn_IP2D_flagFromV0ofTracks;
   vector<vector<int> > *BTagging_AntiKt10TruthWZAuxDyn_IP2D_gradeOfTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt10TruthWZAuxDyn_SV0_TrackParticleLinks;
   vector<vector<float> > *BTagging_AntiKt10TruthWZAuxDyn_IP2D_sigD0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt10TruthWZAuxDyn_IP2D_valD0wrtPVofTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt10TruthWZAuxDyn_SV1_TrackParticleLinks;
   vector<vector<float> > *BTagging_AntiKt10TruthWZAuxDyn_IP2D_weightBofTracks;
   vector<vector<float> > *BTagging_AntiKt10TruthWZAuxDyn_IP2D_weightCofTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt10TruthWZAuxDyn_IP2D_TrackParticleLinks;
   vector<vector<float> > *BTagging_AntiKt10TruthWZAuxDyn_IP2D_weightUofTracks;
   vector<vector<bool> > *BTagging_AntiKt10TruthWZAuxDyn_IP3D_flagFromV0ofTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt10TruthWZAuxDyn_IP3D_TrackParticleLinks;
   vector<vector<int> > *BTagging_AntiKt10TruthWZAuxDyn_IP3D_gradeOfTracks;
   vector<vector<float> > *BTagging_AntiKt10TruthWZAuxDyn_IP3D_sigD0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt10TruthWZAuxDyn_IP3D_sigZ0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt10TruthWZAuxDyn_IP3D_valD0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt10TruthWZAuxDyn_IP3D_valZ0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt10TruthWZAuxDyn_IP3D_weightBofTracks;
   vector<vector<float> > *BTagging_AntiKt10TruthWZAuxDyn_IP3D_weightCofTracks;
   vector<vector<float> > *BTagging_AntiKt10TruthWZAuxDyn_IP3D_weightUofTracks;
   vector<int>     *BTagging_AntiKt10TruthWZAuxDyn_SV0_N2Tpair;
   vector<int>     *BTagging_AntiKt10TruthWZAuxDyn_SV0_NGTinSvx;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt10TruthWZAuxDyn_SV0_badTracksIP;
   vector<float>   *BTagging_AntiKt10TruthWZAuxDyn_SV0_efracsvx;
   vector<float>   *BTagging_AntiKt10TruthWZAuxDyn_SV0_energyTrkInJet;
   vector<float>   *BTagging_AntiKt10TruthWZAuxDyn_SV0_masssvx;
   vector<float>   *BTagging_AntiKt10TruthWZAuxDyn_SV0_normdist;
   vector<double>  *BTagging_AntiKt10TruthWZAuxDyn_SV0_pb;
   vector<double>  *BTagging_AntiKt10TruthWZAuxDyn_SV0_pc;
   vector<double>  *BTagging_AntiKt10TruthWZAuxDyn_SV0_pu;
   vector<vector<ElementLink<DataVector<xAOD::Vertex_v1> > > > *BTagging_AntiKt10TruthWZAuxDyn_SV0_vertices;
   vector<int>     *BTagging_AntiKt10TruthWZAuxDyn_SV1_N2Tpair;
   vector<int>     *BTagging_AntiKt10TruthWZAuxDyn_SV1_NGTinSvx;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt10TruthWZAuxDyn_SV1_badTracksIP;
   vector<float>   *BTagging_AntiKt10TruthWZAuxDyn_SV1_efracsvx;
   vector<float>   *BTagging_AntiKt10TruthWZAuxDyn_SV1_energyTrkInJet;
   vector<float>   *BTagging_AntiKt10TruthWZAuxDyn_SV1_masssvx;
   vector<float>   *BTagging_AntiKt10TruthWZAuxDyn_SV1_normdist;
   vector<vector<ElementLink<DataVector<xAOD::Vertex_v1> > > > *BTagging_AntiKt10TruthWZAuxDyn_SV1_vertices;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4EMTopoAuxDyn_BTagTrackToJetAssociator;
   vector<vector<bool> > *BTagging_AntiKt4EMTopoAuxDyn_IP2D_flagFromV0ofTracks;
   vector<vector<int> > *BTagging_AntiKt4EMTopoAuxDyn_IP2D_gradeOfTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4EMTopoAuxDyn_SV0_TrackParticleLinks;
   vector<vector<float> > *BTagging_AntiKt4EMTopoAuxDyn_IP2D_sigD0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt4EMTopoAuxDyn_IP2D_valD0wrtPVofTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4EMTopoAuxDyn_SV1_TrackParticleLinks;
   vector<vector<float> > *BTagging_AntiKt4EMTopoAuxDyn_IP2D_weightBofTracks;
   vector<vector<float> > *BTagging_AntiKt4EMTopoAuxDyn_IP2D_weightCofTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4EMTopoAuxDyn_IP2D_TrackParticleLinks;
   vector<vector<float> > *BTagging_AntiKt4EMTopoAuxDyn_IP2D_weightUofTracks;
   vector<vector<bool> > *BTagging_AntiKt4EMTopoAuxDyn_IP3D_flagFromV0ofTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4EMTopoAuxDyn_IP3D_TrackParticleLinks;
   vector<vector<int> > *BTagging_AntiKt4EMTopoAuxDyn_IP3D_gradeOfTracks;
   vector<vector<float> > *BTagging_AntiKt4EMTopoAuxDyn_IP3D_sigD0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt4EMTopoAuxDyn_IP3D_sigZ0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt4EMTopoAuxDyn_IP3D_valD0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt4EMTopoAuxDyn_IP3D_valZ0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt4EMTopoAuxDyn_IP3D_weightBofTracks;
   vector<vector<float> > *BTagging_AntiKt4EMTopoAuxDyn_IP3D_weightCofTracks;
   vector<vector<float> > *BTagging_AntiKt4EMTopoAuxDyn_IP3D_weightUofTracks;
   vector<int>     *BTagging_AntiKt4EMTopoAuxDyn_SV0_N2Tpair;
   vector<int>     *BTagging_AntiKt4EMTopoAuxDyn_SV0_NGTinSvx;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4EMTopoAuxDyn_SV0_badTracksIP;
   vector<float>   *BTagging_AntiKt4EMTopoAuxDyn_SV0_efracsvx;
   vector<float>   *BTagging_AntiKt4EMTopoAuxDyn_SV0_energyTrkInJet;
   vector<float>   *BTagging_AntiKt4EMTopoAuxDyn_SV0_masssvx;
   vector<float>   *BTagging_AntiKt4EMTopoAuxDyn_SV0_normdist;
   vector<double>  *BTagging_AntiKt4EMTopoAuxDyn_SV0_pb;
   vector<double>  *BTagging_AntiKt4EMTopoAuxDyn_SV0_pc;
   vector<double>  *BTagging_AntiKt4EMTopoAuxDyn_SV0_pu;
   vector<vector<ElementLink<DataVector<xAOD::Vertex_v1> > > > *BTagging_AntiKt4EMTopoAuxDyn_SV0_vertices;
   vector<int>     *BTagging_AntiKt4EMTopoAuxDyn_SV1_N2Tpair;
   vector<int>     *BTagging_AntiKt4EMTopoAuxDyn_SV1_NGTinSvx;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4EMTopoAuxDyn_SV1_badTracksIP;
   vector<float>   *BTagging_AntiKt4EMTopoAuxDyn_SV1_efracsvx;
   vector<float>   *BTagging_AntiKt4EMTopoAuxDyn_SV1_energyTrkInJet;
   vector<float>   *BTagging_AntiKt4EMTopoAuxDyn_SV1_masssvx;
   vector<float>   *BTagging_AntiKt4EMTopoAuxDyn_SV1_normdist;
   vector<vector<ElementLink<DataVector<xAOD::Vertex_v1> > > > *BTagging_AntiKt4EMTopoAuxDyn_SV1_vertices;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4LCTopoAuxDyn_BTagTrackToJetAssociator;
   vector<vector<bool> > *BTagging_AntiKt4LCTopoAuxDyn_IP2D_flagFromV0ofTracks;
   vector<vector<int> > *BTagging_AntiKt4LCTopoAuxDyn_IP2D_gradeOfTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4LCTopoAuxDyn_SV0_TrackParticleLinks;
   vector<vector<float> > *BTagging_AntiKt4LCTopoAuxDyn_IP2D_sigD0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt4LCTopoAuxDyn_IP2D_valD0wrtPVofTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4LCTopoAuxDyn_SV1_TrackParticleLinks;
   vector<vector<float> > *BTagging_AntiKt4LCTopoAuxDyn_IP2D_weightBofTracks;
   vector<vector<float> > *BTagging_AntiKt4LCTopoAuxDyn_IP2D_weightCofTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4LCTopoAuxDyn_IP2D_TrackParticleLinks;
   vector<vector<float> > *BTagging_AntiKt4LCTopoAuxDyn_IP2D_weightUofTracks;
   vector<vector<bool> > *BTagging_AntiKt4LCTopoAuxDyn_IP3D_flagFromV0ofTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4LCTopoAuxDyn_IP3D_TrackParticleLinks;
   vector<vector<int> > *BTagging_AntiKt4LCTopoAuxDyn_IP3D_gradeOfTracks;
   vector<vector<float> > *BTagging_AntiKt4LCTopoAuxDyn_IP3D_sigD0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt4LCTopoAuxDyn_IP3D_sigZ0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt4LCTopoAuxDyn_IP3D_valD0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt4LCTopoAuxDyn_IP3D_valZ0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt4LCTopoAuxDyn_IP3D_weightBofTracks;
   vector<vector<float> > *BTagging_AntiKt4LCTopoAuxDyn_IP3D_weightCofTracks;
   vector<vector<float> > *BTagging_AntiKt4LCTopoAuxDyn_IP3D_weightUofTracks;
   vector<int>     *BTagging_AntiKt4LCTopoAuxDyn_SV0_N2Tpair;
   vector<int>     *BTagging_AntiKt4LCTopoAuxDyn_SV0_NGTinSvx;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4LCTopoAuxDyn_SV0_badTracksIP;
   vector<float>   *BTagging_AntiKt4LCTopoAuxDyn_SV0_efracsvx;
   vector<float>   *BTagging_AntiKt4LCTopoAuxDyn_SV0_energyTrkInJet;
   vector<float>   *BTagging_AntiKt4LCTopoAuxDyn_SV0_masssvx;
   vector<float>   *BTagging_AntiKt4LCTopoAuxDyn_SV0_normdist;
   vector<double>  *BTagging_AntiKt4LCTopoAuxDyn_SV0_pb;
   vector<double>  *BTagging_AntiKt4LCTopoAuxDyn_SV0_pc;
   vector<double>  *BTagging_AntiKt4LCTopoAuxDyn_SV0_pu;
   vector<vector<ElementLink<DataVector<xAOD::Vertex_v1> > > > *BTagging_AntiKt4LCTopoAuxDyn_SV0_vertices;
   vector<int>     *BTagging_AntiKt4LCTopoAuxDyn_SV1_N2Tpair;
   vector<int>     *BTagging_AntiKt4LCTopoAuxDyn_SV1_NGTinSvx;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4LCTopoAuxDyn_SV1_badTracksIP;
   vector<float>   *BTagging_AntiKt4LCTopoAuxDyn_SV1_efracsvx;
   vector<float>   *BTagging_AntiKt4LCTopoAuxDyn_SV1_energyTrkInJet;
   vector<float>   *BTagging_AntiKt4LCTopoAuxDyn_SV1_masssvx;
   vector<float>   *BTagging_AntiKt4LCTopoAuxDyn_SV1_normdist;
   vector<vector<ElementLink<DataVector<xAOD::Vertex_v1> > > > *BTagging_AntiKt4LCTopoAuxDyn_SV1_vertices;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4TruthAuxDyn_BTagTrackToJetAssociator;
   vector<vector<bool> > *BTagging_AntiKt4TruthAuxDyn_IP2D_flagFromV0ofTracks;
   vector<vector<int> > *BTagging_AntiKt4TruthAuxDyn_IP2D_gradeOfTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4TruthAuxDyn_SV0_TrackParticleLinks;
   vector<vector<float> > *BTagging_AntiKt4TruthAuxDyn_IP2D_sigD0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt4TruthAuxDyn_IP2D_valD0wrtPVofTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4TruthAuxDyn_SV1_TrackParticleLinks;
   vector<vector<float> > *BTagging_AntiKt4TruthAuxDyn_IP2D_weightBofTracks;
   vector<vector<float> > *BTagging_AntiKt4TruthAuxDyn_IP2D_weightCofTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4TruthAuxDyn_IP2D_TrackParticleLinks;
   vector<vector<float> > *BTagging_AntiKt4TruthAuxDyn_IP2D_weightUofTracks;
   vector<vector<bool> > *BTagging_AntiKt4TruthAuxDyn_IP3D_flagFromV0ofTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4TruthAuxDyn_IP3D_TrackParticleLinks;
   vector<vector<int> > *BTagging_AntiKt4TruthAuxDyn_IP3D_gradeOfTracks;
   vector<vector<float> > *BTagging_AntiKt4TruthAuxDyn_IP3D_sigD0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt4TruthAuxDyn_IP3D_sigZ0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt4TruthAuxDyn_IP3D_valD0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt4TruthAuxDyn_IP3D_valZ0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt4TruthAuxDyn_IP3D_weightBofTracks;
   vector<vector<float> > *BTagging_AntiKt4TruthAuxDyn_IP3D_weightCofTracks;
   vector<vector<float> > *BTagging_AntiKt4TruthAuxDyn_IP3D_weightUofTracks;
   vector<int>     *BTagging_AntiKt4TruthAuxDyn_SV0_N2Tpair;
   vector<int>     *BTagging_AntiKt4TruthAuxDyn_SV0_NGTinSvx;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4TruthAuxDyn_SV0_badTracksIP;
   vector<float>   *BTagging_AntiKt4TruthAuxDyn_SV0_efracsvx;
   vector<float>   *BTagging_AntiKt4TruthAuxDyn_SV0_energyTrkInJet;
   vector<float>   *BTagging_AntiKt4TruthAuxDyn_SV0_masssvx;
   vector<float>   *BTagging_AntiKt4TruthAuxDyn_SV0_normdist;
   vector<double>  *BTagging_AntiKt4TruthAuxDyn_SV0_pb;
   vector<double>  *BTagging_AntiKt4TruthAuxDyn_SV0_pc;
   vector<double>  *BTagging_AntiKt4TruthAuxDyn_SV0_pu;
   vector<vector<ElementLink<DataVector<xAOD::Vertex_v1> > > > *BTagging_AntiKt4TruthAuxDyn_SV0_vertices;
   vector<int>     *BTagging_AntiKt4TruthAuxDyn_SV1_N2Tpair;
   vector<int>     *BTagging_AntiKt4TruthAuxDyn_SV1_NGTinSvx;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4TruthAuxDyn_SV1_badTracksIP;
   vector<float>   *BTagging_AntiKt4TruthAuxDyn_SV1_efracsvx;
   vector<float>   *BTagging_AntiKt4TruthAuxDyn_SV1_energyTrkInJet;
   vector<float>   *BTagging_AntiKt4TruthAuxDyn_SV1_masssvx;
   vector<float>   *BTagging_AntiKt4TruthAuxDyn_SV1_normdist;
   vector<vector<ElementLink<DataVector<xAOD::Vertex_v1> > > > *BTagging_AntiKt4TruthAuxDyn_SV1_vertices;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4TruthWZAuxDyn_BTagTrackToJetAssociator;
   vector<vector<bool> > *BTagging_AntiKt4TruthWZAuxDyn_IP2D_flagFromV0ofTracks;
   vector<vector<int> > *BTagging_AntiKt4TruthWZAuxDyn_IP2D_gradeOfTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4TruthWZAuxDyn_SV0_TrackParticleLinks;
   vector<vector<float> > *BTagging_AntiKt4TruthWZAuxDyn_IP2D_sigD0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt4TruthWZAuxDyn_IP2D_valD0wrtPVofTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4TruthWZAuxDyn_SV1_TrackParticleLinks;
   vector<vector<float> > *BTagging_AntiKt4TruthWZAuxDyn_IP2D_weightBofTracks;
   vector<vector<float> > *BTagging_AntiKt4TruthWZAuxDyn_IP2D_weightCofTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4TruthWZAuxDyn_IP2D_TrackParticleLinks;
   vector<vector<float> > *BTagging_AntiKt4TruthWZAuxDyn_IP2D_weightUofTracks;
   vector<vector<bool> > *BTagging_AntiKt4TruthWZAuxDyn_IP3D_flagFromV0ofTracks;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4TruthWZAuxDyn_IP3D_TrackParticleLinks;
   vector<vector<int> > *BTagging_AntiKt4TruthWZAuxDyn_IP3D_gradeOfTracks;
   vector<vector<float> > *BTagging_AntiKt4TruthWZAuxDyn_IP3D_sigD0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt4TruthWZAuxDyn_IP3D_sigZ0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt4TruthWZAuxDyn_IP3D_valD0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt4TruthWZAuxDyn_IP3D_valZ0wrtPVofTracks;
   vector<vector<float> > *BTagging_AntiKt4TruthWZAuxDyn_IP3D_weightBofTracks;
   vector<vector<float> > *BTagging_AntiKt4TruthWZAuxDyn_IP3D_weightCofTracks;
   vector<vector<float> > *BTagging_AntiKt4TruthWZAuxDyn_IP3D_weightUofTracks;
   vector<int>     *BTagging_AntiKt4TruthWZAuxDyn_SV0_N2Tpair;
   vector<int>     *BTagging_AntiKt4TruthWZAuxDyn_SV0_NGTinSvx;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4TruthWZAuxDyn_SV0_badTracksIP;
   vector<float>   *BTagging_AntiKt4TruthWZAuxDyn_SV0_efracsvx;
   vector<float>   *BTagging_AntiKt4TruthWZAuxDyn_SV0_energyTrkInJet;
   vector<float>   *BTagging_AntiKt4TruthWZAuxDyn_SV0_masssvx;
   vector<float>   *BTagging_AntiKt4TruthWZAuxDyn_SV0_normdist;
   vector<double>  *BTagging_AntiKt4TruthWZAuxDyn_SV0_pb;
   vector<double>  *BTagging_AntiKt4TruthWZAuxDyn_SV0_pc;
   vector<double>  *BTagging_AntiKt4TruthWZAuxDyn_SV0_pu;
   vector<vector<ElementLink<DataVector<xAOD::Vertex_v1> > > > *BTagging_AntiKt4TruthWZAuxDyn_SV0_vertices;
   vector<int>     *BTagging_AntiKt4TruthWZAuxDyn_SV1_N2Tpair;
   vector<int>     *BTagging_AntiKt4TruthWZAuxDyn_SV1_NGTinSvx;
   vector<vector<ElementLink<DataVector<xAOD::TrackParticle_v1> > > > *BTagging_AntiKt4TruthWZAuxDyn_SV1_badTracksIP;
   vector<float>   *BTagging_AntiKt4TruthWZAuxDyn_SV1_efracsvx;
   vector<float>   *BTagging_AntiKt4TruthWZAuxDyn_SV1_energyTrkInJet;
   vector<float>   *BTagging_AntiKt4TruthWZAuxDyn_SV1_masssvx;
   vector<float>   *BTagging_AntiKt4TruthWZAuxDyn_SV1_normdist;
   vector<vector<ElementLink<DataVector<xAOD::Vertex_v1> > > > *BTagging_AntiKt4TruthWZAuxDyn_SV1_vertices;
   vector<float>   *CaloCalTopoClusterAuxDyn_FIRST_ENG_DENS;
   vector<float>   *CaloCalTopoClusterAuxDyn_ISOLATION;
   vector<float>   *CaloCalTopoClusterAuxDyn_LATERAL;
   vector<float>   *CaloCalTopoClusterAuxDyn_LONGITUDINAL;
   vector<float>   *CaloCalTopoClusterAuxDyn_N_BAD_CELLS;
   vector<float>   *CaloCalTopoClusterAuxDyn_SECOND_LAMBDA;
   vector<float>   *CaloCalTopoClusterAuxDyn_SECOND_R;
   vector<float>   *CaloCalTopoClusterAuxDyn_SIGNIFICANCE;
   vector<float>   *CaloCalTopoClusterAuxDyn_AVG_LAR_Q;
   vector<float>   *CaloCalTopoClusterAuxDyn_AVG_TILE_Q;
   vector<float>   *CaloCalTopoClusterAuxDyn_BADLARQ_FRAC;
   vector<vector<xAOD::CaloClusterBadChannelData_v1> > *CaloCalTopoClusterAuxDyn_BadChannelList;
   vector<float>   *CaloCalTopoClusterAuxDyn_CELL_SIGNIFICANCE;
   vector<float>   *CaloCalTopoClusterAuxDyn_CELL_SIG_SAMPLING;
   vector<float>   *CaloCalTopoClusterAuxDyn_CENTER_LAMBDA;
   vector<float>   *CaloCalTopoClusterAuxDyn_CENTER_MAG;
   vector<float>   *CaloCalTopoClusterAuxDyn_EM_PROBABILITY;
   vector<float>   *CaloCalTopoClusterAuxDyn_ENG_BAD_CELLS;
   vector<float>   *CaloCalTopoClusterAuxDyn_ENG_FRAC_MAX;
   vector<float>   *CaloCalTopoClusterAuxDyn_ENG_POS;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_N90Constituents;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_NegativeE;
   vector<vector<int> > *CamKt12LCTopoJetsAuxDyn_NumTrkPt1000;
   vector<vector<int> > *CamKt12LCTopoJetsAuxDyn_NumTrkPt500;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_OotFracClusters10;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_OotFracClusters5;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_PlanarFlow;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_Sphericity;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_Split12;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_Split23;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_Split34;
   vector<vector<float> > *CamKt12LCTopoJetsAuxDyn_SumPtTrkPt1000;
   vector<vector<float> > *CamKt12LCTopoJetsAuxDyn_SumPtTrkPt500;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_Tau1;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_Tau2;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_Tau3;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_ThrustMaj;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_ThrustMin;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_Timing;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *CamKt12LCTopoJetsAuxDyn_Track;
   vector<int>     *CamKt12LCTopoJetsAuxDyn_TrackCount;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_TrackPt;
   vector<vector<float> > *CamKt12LCTopoJetsAuxDyn_TrackWidthPt1000;
   vector<vector<float> > *CamKt12LCTopoJetsAuxDyn_TrackWidthPt500;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *CamKt12LCTopoJetsAuxDyn_Truth;
   vector<int>     *CamKt12LCTopoJetsAuxDyn_TruthCount;
   vector<int>     *CamKt12LCTopoJetsAuxDyn_ConstituentScale;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_JetEMScaleMomentum_pt;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_JetEMScaleMomentum_eta;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_TruthPt;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_JetEMScaleMomentum_phi;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *CamKt12LCTopoJetsAuxDyn_TruthWZ;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_JetEMScaleMomentum_m;
   vector<int>     *CamKt12LCTopoJetsAuxDyn_TruthWZCount;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_TruthWZPt;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_Width;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_ZCut12;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_JetConstitScaleMomentum_m;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_ZCut23;
   vector<int>     *CamKt12LCTopoJetsAuxDyn_InputType;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_ZCut34;
   vector<int>     *CamKt12LCTopoJetsAuxDyn_AlgorithmType;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_SizeParameter;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_ActiveArea;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_ActiveArea4vec_eta;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_ActiveArea4vec_m;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_ActiveArea4vec_phi;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_ActiveArea4vec_pt;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_Angularity;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_Aplanarity;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_AverageLArQF;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_BchCorrCell;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_CentroidR;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_Dip12;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_Dip13;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_Dip23;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_DipExcl12;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_ECF1;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_ECF2;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_ECF3;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_EMFrac;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *CamKt12LCTopoJetsAuxDyn_EMTopo;
   vector<int>     *CamKt12LCTopoJetsAuxDyn_EMTopoCount;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_EMTopoPt;
   vector<vector<float> > *CamKt12LCTopoJetsAuxDyn_EnergyPerSampling;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_FoxWolfram0;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_FoxWolfram1;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_FoxWolfram2;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_FoxWolfram3;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_FoxWolfram4;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_FracSamplingMax;
   vector<int>     *CamKt12LCTopoJetsAuxDyn_FracSamplingMaxIndex;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *CamKt12LCTopoJetsAuxDyn_GhostAntiKt3TrackJet;
   vector<int>     *CamKt12LCTopoJetsAuxDyn_GhostAntiKt3TrackJetCount;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_GhostAntiKt3TrackJetPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *CamKt12LCTopoJetsAuxDyn_GhostAntiKt4TrackJet;
   vector<int>     *CamKt12LCTopoJetsAuxDyn_GhostAntiKt4TrackJetCount;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_GhostAntiKt4TrackJetPt;
   vector<vector<ElementLink<DataVector<xAOD::MuonSegment_v1> > > > *CamKt12LCTopoJetsAuxDyn_GhostMuonSegment;
   vector<int>     *CamKt12LCTopoJetsAuxDyn_GhostMuonSegmentCount;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *CamKt12LCTopoJetsAuxDyn_GhostTrack;
   vector<int>     *CamKt12LCTopoJetsAuxDyn_GhostTrackCount;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_GhostTrackPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *CamKt12LCTopoJetsAuxDyn_GhostTruth;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_GhostTruthAssociationFraction;
   Int_t           CamKt12LCTopoJetsAuxDyn_GhostTruthAssociationLink_;
   UInt_t          CamKt12LCTopoJetsAuxDyn_GhostTruthAssociationLink_m_persKey[kMaxCamKt12LCTopoJetsAuxDyn_GhostTruthAssociationLink];   //[CamKt12LCTopoJetsAuxDyn.GhostTruthAssociationLink_]
   UInt_t          CamKt12LCTopoJetsAuxDyn_GhostTruthAssociationLink_m_persIndex[kMaxCamKt12LCTopoJetsAuxDyn_GhostTruthAssociationLink];   //[CamKt12LCTopoJetsAuxDyn.GhostTruthAssociationLink_]
   vector<int>     *CamKt12LCTopoJetsAuxDyn_GhostTruthCount;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_GhostTruthPt;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_HECFrac;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_HECQuality;
   Int_t           CamKt12LCTopoJetsAuxDyn_HighestJVFVtx_;
   UInt_t          CamKt12LCTopoJetsAuxDyn_HighestJVFVtx_m_persKey[kMaxCamKt12LCTopoJetsAuxDyn_HighestJVFVtx];   //[CamKt12LCTopoJetsAuxDyn.HighestJVFVtx_]
   UInt_t          CamKt12LCTopoJetsAuxDyn_HighestJVFVtx_m_persIndex[kMaxCamKt12LCTopoJetsAuxDyn_HighestJVFVtx];   //[CamKt12LCTopoJetsAuxDyn.HighestJVFVtx_]
   vector<vector<float> > *CamKt12LCTopoJetsAuxDyn_JVF;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_JetGhostArea;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_KtDR;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_LArQuality;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *CamKt12LCTopoJetsAuxDyn_LCTopo;
   vector<int>     *CamKt12LCTopoJetsAuxDyn_LCTopoCount;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_LCTopoPt;
   vector<float>   *CamKt12LCTopoJetsAuxDyn_Mu12;
   vector<float>   *CamKt12TruthJetsAuxDyn_Tau2;
   vector<float>   *CamKt12TruthJetsAuxDyn_FoxWolfram1;
   vector<float>   *CamKt12TruthJetsAuxDyn_Tau3;
   vector<float>   *CamKt12TruthJetsAuxDyn_FoxWolfram2;
   vector<float>   *CamKt12TruthJetsAuxDyn_ThrustMaj;
   vector<float>   *CamKt12TruthJetsAuxDyn_FoxWolfram3;
   vector<float>   *CamKt12TruthJetsAuxDyn_ThrustMin;
   vector<float>   *CamKt12TruthJetsAuxDyn_FoxWolfram4;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *CamKt12TruthJetsAuxDyn_Truth;
   vector<int>     *CamKt12TruthJetsAuxDyn_TruthCount;
   vector<float>   *CamKt12TruthJetsAuxDyn_TruthPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *CamKt12TruthJetsAuxDyn_TruthWZ;
   vector<int>     *CamKt12TruthJetsAuxDyn_TruthWZCount;
   vector<float>   *CamKt12TruthJetsAuxDyn_TruthWZPt;
   vector<float>   *CamKt12TruthJetsAuxDyn_Width;
   vector<float>   *CamKt12TruthJetsAuxDyn_ZCut12;
   vector<float>   *CamKt12TruthJetsAuxDyn_ZCut23;
   vector<float>   *CamKt12TruthJetsAuxDyn_ZCut34;
   vector<float>   *CamKt12TruthJetsAuxDyn_JetGhostArea;
   vector<float>   *CamKt12TruthJetsAuxDyn_KtDR;
   vector<int>     *CamKt12TruthJetsAuxDyn_ConstituentScale;
   vector<float>   *CamKt12TruthJetsAuxDyn_Angularity;
   vector<float>   *CamKt12TruthJetsAuxDyn_Aplanarity;
   vector<float>   *CamKt12TruthJetsAuxDyn_Mu12;
   vector<float>   *CamKt12TruthJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *CamKt12TruthJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *CamKt12TruthJetsAuxDyn_Dip12;
   vector<float>   *CamKt12TruthJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *CamKt12TruthJetsAuxDyn_JetConstitScaleMomentum_m;
   vector<float>   *CamKt12TruthJetsAuxDyn_Dip13;
   vector<int>     *CamKt12TruthJetsAuxDyn_InputType;
   vector<float>   *CamKt12TruthJetsAuxDyn_Dip23;
   vector<int>     *CamKt12TruthJetsAuxDyn_AlgorithmType;
   vector<float>   *CamKt12TruthJetsAuxDyn_DipExcl12;
   vector<float>   *CamKt12TruthJetsAuxDyn_SizeParameter;
   vector<float>   *CamKt12TruthJetsAuxDyn_ECF1;
   vector<float>   *CamKt12TruthJetsAuxDyn_PlanarFlow;
   vector<float>   *CamKt12TruthJetsAuxDyn_ECF2;
   vector<float>   *CamKt12TruthJetsAuxDyn_Sphericity;
   vector<float>   *CamKt12TruthJetsAuxDyn_ECF3;
   vector<float>   *CamKt12TruthJetsAuxDyn_Split12;
   vector<float>   *CamKt12TruthJetsAuxDyn_Split23;
   vector<float>   *CamKt12TruthJetsAuxDyn_Split34;
   vector<float>   *CamKt12TruthJetsAuxDyn_Tau1;
   vector<float>   *CamKt12TruthJetsAuxDyn_FoxWolfram0;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_Tau2;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_FoxWolfram1;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_Tau3;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_FoxWolfram2;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_ThrustMaj;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_FoxWolfram3;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_ThrustMin;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_FoxWolfram4;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *CamKt12TruthWZJetsAuxDyn_Truth;
   vector<int>     *CamKt12TruthWZJetsAuxDyn_TruthCount;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_TruthPt;
   vector<vector<ElementLink<DataVector<xAOD::IParticle> > > > *CamKt12TruthWZJetsAuxDyn_TruthWZ;
   vector<int>     *CamKt12TruthWZJetsAuxDyn_TruthWZCount;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_TruthWZPt;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_Width;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_ZCut12;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_ZCut23;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_ZCut34;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_JetGhostArea;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_KtDR;
   vector<int>     *CamKt12TruthWZJetsAuxDyn_ConstituentScale;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_Angularity;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_Aplanarity;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_Mu12;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_JetConstitScaleMomentum_pt;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_JetConstitScaleMomentum_eta;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_Dip12;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_JetConstitScaleMomentum_phi;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_JetConstitScaleMomentum_m;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_Dip13;
   vector<int>     *CamKt12TruthWZJetsAuxDyn_InputType;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_Dip23;
   vector<int>     *CamKt12TruthWZJetsAuxDyn_AlgorithmType;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_DipExcl12;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_SizeParameter;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_ECF1;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_PlanarFlow;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_ECF2;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_Sphericity;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_ECF3;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_Split12;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_Split23;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_Split34;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_Tau1;
   vector<float>   *CamKt12TruthWZJetsAuxDyn_FoxWolfram0;
   vector<int>     *CombinedMuonTrackParticlesAuxDyn_truthOrigin;
   vector<int>     *CombinedMuonTrackParticlesAuxDyn_truthType;
   Int_t           CombinedMuonTrackParticlesAuxDyn_truthParticleLink_;
   UInt_t          CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey[kMaxCombinedMuonTrackParticlesAuxDyn_truthParticleLink];   //[CombinedMuonTrackParticlesAuxDyn.truthParticleLink_]
   UInt_t          CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex[kMaxCombinedMuonTrackParticlesAuxDyn_truthParticleLink];   //[CombinedMuonTrackParticlesAuxDyn.truthParticleLink_]
   Int_t           CombinedMuonTrackParticlesAuxDyn_trackLink_;
   UInt_t          CombinedMuonTrackParticlesAuxDyn_trackLink_m_persKey[kMaxCombinedMuonTrackParticlesAuxDyn_trackLink];   //[CombinedMuonTrackParticlesAuxDyn.trackLink_]
   UInt_t          CombinedMuonTrackParticlesAuxDyn_trackLink_m_persIndex[kMaxCombinedMuonTrackParticlesAuxDyn_trackLink];   //[CombinedMuonTrackParticlesAuxDyn.trackLink_]
   vector<int>     *ElectronCollectionAuxDyn_truthOrigin;
   vector<int>     *ElectronCollectionAuxDyn_truthType;
   vector<char>    *ElectronCollectionAuxDyn_Loose;
   vector<char>    *ElectronCollectionAuxDyn_Medium;
   vector<char>    *ElectronCollectionAuxDyn_Tight;
   Int_t           ElectronCollectionAuxDyn_truthParticleLink_;
   UInt_t          ElectronCollectionAuxDyn_truthParticleLink_m_persKey[kMaxElectronCollectionAuxDyn_truthParticleLink];   //[ElectronCollectionAuxDyn.truthParticleLink_]
   UInt_t          ElectronCollectionAuxDyn_truthParticleLink_m_persIndex[kMaxElectronCollectionAuxDyn_truthParticleLink];   //[ElectronCollectionAuxDyn.truthParticleLink_]
   vector<unsigned short> *EventInfoAuxDyn_subEventTime;
   Int_t           EventInfoAuxDyn_subEventLink_;
   UInt_t          EventInfoAuxDyn_subEventLink_m_persKey[kMaxEventInfoAuxDyn_subEventLink];   //[EventInfoAuxDyn.subEventLink_]
   UInt_t          EventInfoAuxDyn_subEventLink_m_persIndex[kMaxEventInfoAuxDyn_subEventLink];   //[EventInfoAuxDyn.subEventLink_]
   vector<unsigned short> *EventInfoAuxDyn_subEventType;
   ULong64_t       EventInfoAuxDyn_mcEventNumber;
   vector<float>   *EventInfoAuxDyn_mcEventWeights;
   UInt_t          EventInfoAuxDyn_mcChannelNumber;
   vector<int>     *ExtrapolatedMuonTrackParticlesAuxDyn_truthOrigin;
   vector<int>     *ExtrapolatedMuonTrackParticlesAuxDyn_truthType;
   Int_t           ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_;
   UInt_t          ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey[kMaxExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink];   //[ExtrapolatedMuonTrackParticlesAuxDyn.truthParticleLink_]
   UInt_t          ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex[kMaxExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink];   //[ExtrapolatedMuonTrackParticlesAuxDyn.truthParticleLink_]
   Int_t           ExtrapolatedMuonTrackParticlesAuxDyn_trackLink_;
   UInt_t          ExtrapolatedMuonTrackParticlesAuxDyn_trackLink_m_persKey[kMaxExtrapolatedMuonTrackParticlesAuxDyn_trackLink];   //[ExtrapolatedMuonTrackParticlesAuxDyn.trackLink_]
   UInt_t          ExtrapolatedMuonTrackParticlesAuxDyn_trackLink_m_persIndex[kMaxExtrapolatedMuonTrackParticlesAuxDyn_trackLink];   //[ExtrapolatedMuonTrackParticlesAuxDyn.trackLink_]
   vector<char>    *FwdElectronsAuxDyn_Loose;
   vector<char>    *FwdElectronsAuxDyn_Tight;
   vector<float>   *GSFConversionVerticesAuxDyn_pz;
   vector<float>   *GSFConversionVerticesAuxDyn_etaAtCalo;
   vector<float>   *GSFConversionVerticesAuxDyn_phiAtCalo;
   vector<float>   *GSFConversionVerticesAuxDyn_px;
   vector<float>   *GSFConversionVerticesAuxDyn_py;
   Int_t           GSFTrackParticlesAuxDyn_originalTrackParticle_;
   UInt_t          GSFTrackParticlesAuxDyn_originalTrackParticle_m_persKey[kMaxGSFTrackParticlesAuxDyn_originalTrackParticle];   //[GSFTrackParticlesAuxDyn.originalTrackParticle_]
   UInt_t          GSFTrackParticlesAuxDyn_originalTrackParticle_m_persIndex[kMaxGSFTrackParticlesAuxDyn_originalTrackParticle];   //[GSFTrackParticlesAuxDyn.originalTrackParticle_]
   Int_t           GSFTrackParticlesAuxDyn_truthParticleLink_;
   UInt_t          GSFTrackParticlesAuxDyn_truthParticleLink_m_persKey[kMaxGSFTrackParticlesAuxDyn_truthParticleLink];   //[GSFTrackParticlesAuxDyn.truthParticleLink_]
   UInt_t          GSFTrackParticlesAuxDyn_truthParticleLink_m_persIndex[kMaxGSFTrackParticlesAuxDyn_truthParticleLink];   //[GSFTrackParticlesAuxDyn.truthParticleLink_]
   Int_t           GSFTrackParticlesAuxDyn_trackLink_;
   UInt_t          GSFTrackParticlesAuxDyn_trackLink_m_persKey[kMaxGSFTrackParticlesAuxDyn_trackLink];   //[GSFTrackParticlesAuxDyn.trackLink_]
   UInt_t          GSFTrackParticlesAuxDyn_trackLink_m_persIndex[kMaxGSFTrackParticlesAuxDyn_trackLink];   //[GSFTrackParticlesAuxDyn.trackLink_]
   vector<int>     *InDetTrackParticlesAuxDyn_truthOrigin;
   vector<int>     *InDetTrackParticlesAuxDyn_truthType;
   vector<float>   *InDetTrackParticlesAuxDyn_truthMatchProbability;
   Int_t           InDetTrackParticlesAuxDyn_truthParticleLink_;
   UInt_t          InDetTrackParticlesAuxDyn_truthParticleLink_m_persKey[kMaxInDetTrackParticlesAuxDyn_truthParticleLink];   //[InDetTrackParticlesAuxDyn.truthParticleLink_]
   UInt_t          InDetTrackParticlesAuxDyn_truthParticleLink_m_persIndex[kMaxInDetTrackParticlesAuxDyn_truthParticleLink];   //[InDetTrackParticlesAuxDyn.truthParticleLink_]
   Int_t           InDetTrackParticlesAuxDyn_trackLink_;
   UInt_t          InDetTrackParticlesAuxDyn_trackLink_m_persKey[kMaxInDetTrackParticlesAuxDyn_trackLink];   //[InDetTrackParticlesAuxDyn.trackLink_]
   UInt_t          InDetTrackParticlesAuxDyn_trackLink_m_persIndex[kMaxInDetTrackParticlesAuxDyn_trackLink];   //[InDetTrackParticlesAuxDyn.trackLink_]
   vector<int>     *InDetTrackParticlesForwardAuxDyn_truthOrigin;
   vector<int>     *InDetTrackParticlesForwardAuxDyn_truthType;
   vector<float>   *InDetTrackParticlesForwardAuxDyn_truthMatchProbability;
   Int_t           InDetTrackParticlesForwardAuxDyn_truthParticleLink_;
   UInt_t          InDetTrackParticlesForwardAuxDyn_truthParticleLink_m_persKey[kMaxInDetTrackParticlesForwardAuxDyn_truthParticleLink];   //[InDetTrackParticlesForwardAuxDyn.truthParticleLink_]
   UInt_t          InDetTrackParticlesForwardAuxDyn_truthParticleLink_m_persIndex[kMaxInDetTrackParticlesForwardAuxDyn_truthParticleLink];   //[InDetTrackParticlesForwardAuxDyn.truthParticleLink_]
   Int_t           InDetTrackParticlesForwardAuxDyn_trackLink_;
   UInt_t          InDetTrackParticlesForwardAuxDyn_trackLink_m_persKey[kMaxInDetTrackParticlesForwardAuxDyn_trackLink];   //[InDetTrackParticlesForwardAuxDyn.trackLink_]
   UInt_t          InDetTrackParticlesForwardAuxDyn_trackLink_m_persIndex[kMaxInDetTrackParticlesForwardAuxDyn_trackLink];   //[InDetTrackParticlesForwardAuxDyn.trackLink_]
   vector<vector<xAOD::CaloClusterBadChannelData_v1> > *LArClusterEMFrwdAuxDyn_BadChannelList;
   vector<float>   *LArClusterEMFrwdAuxDyn_CELL_SIGNIFICANCE;
   vector<float>   *LArClusterEMFrwdAuxDyn_CELL_SIG_SAMPLING;
   vector<float>   *LArClusterEMFrwdAuxDyn_CENTER_LAMBDA;
   vector<float>   *LArClusterEMFrwdAuxDyn_CENTER_MAG;
   vector<float>   *LArClusterEMFrwdAuxDyn_EM_PROBABILITY;
   vector<float>   *LArClusterEMFrwdAuxDyn_ENG_BAD_CELLS;
   vector<float>   *LArClusterEMFrwdAuxDyn_ENG_FRAC_MAX;
   vector<float>   *LArClusterEMFrwdAuxDyn_ENG_POS;
   vector<float>   *LArClusterEMFrwdAuxDyn_FIRST_ENG_DENS;
   vector<float>   *LArClusterEMFrwdAuxDyn_ISOLATION;
   vector<float>   *LArClusterEMFrwdAuxDyn_LATERAL;
   vector<float>   *LArClusterEMFrwdAuxDyn_LONGITUDINAL;
   vector<float>   *LArClusterEMFrwdAuxDyn_N_BAD_CELLS;
   vector<float>   *LArClusterEMFrwdAuxDyn_SECOND_LAMBDA;
   vector<float>   *LArClusterEMFrwdAuxDyn_SECOND_R;
   vector<float>   *LArClusterEMFrwdAuxDyn_SIGNIFICANCE;
   vector<float>   *LArClusterEMFrwdAuxDyn_BAD_CELLS_CORR_E;
   vector<float>   *LArClusterEMFrwdAuxDyn_CENTER_X;
   vector<float>   *LArClusterEMFrwdAuxDyn_CENTER_Y;
   vector<float>   *LArClusterEMFrwdAuxDyn_CENTER_Z;
   Int_t           LArClusterEMFrwdAuxDyn_CellLink_;
   UInt_t          LArClusterEMFrwdAuxDyn_CellLink_m_persKey[kMaxLArClusterEMFrwdAuxDyn_CellLink];   //[LArClusterEMFrwdAuxDyn.CellLink_]
   UInt_t          LArClusterEMFrwdAuxDyn_CellLink_m_persIndex[kMaxLArClusterEMFrwdAuxDyn_CellLink];   //[LArClusterEMFrwdAuxDyn.CellLink_]
   vector<float>   *LArClusterEMFrwdAuxDyn_DELTA_ALPHA;
   vector<float>   *LArClusterEMFrwdAuxDyn_DELTA_PHI;
   vector<float>   *LArClusterEMFrwdAuxDyn_DELTA_THETA;
   vector<float>   *LArClusterEMFrwdAuxDyn_DM_WEIGHT;
   vector<float>   *LArClusterEMFrwdAuxDyn_ENG_FRAC_CORE;
   vector<float>   *LArClusterEMFrwdAuxDyn_ENG_FRAC_EM;
   vector<float>   *LArClusterEMFrwdAuxDyn_FIRST_ETA;
   vector<float>   *LArClusterEMFrwdAuxDyn_FIRST_PHI;
   vector<float>   *LArClusterEMFrwdAuxDyn_HAD_WEIGHT;
   vector<float>   *LArClusterEMFrwdAuxDyn_N_BAD_CELLS_CORR;
   vector<float>   *LArClusterEMFrwdAuxDyn_OOC_WEIGHT;
   vector<float>   *LArClusterEMFrwdAuxDyn_SECOND_ENG_DENS;
   vector<vector<float> > *LArClusterEMFrwdAuxDyn_emax_sampl;
   vector<vector<float> > *LArClusterEMFrwdAuxDyn_etamax_sampl;
   vector<vector<float> > *LArClusterEMFrwdAuxDyn_phimax_sampl;
   vector<float>   *LArClusterEMFrwdAuxDyn_AVG_LAR_Q;
   vector<float>   *LArClusterEMFrwdAuxDyn_AVG_TILE_Q;
   vector<float>   *LArClusterEMFrwdAuxDyn_BADLARQ_FRAC;
   Int_t           MuonSegmentsAuxDyn_muonSegment_;
   UInt_t          MuonSegmentsAuxDyn_muonSegment_m_persKey[kMaxMuonSegmentsAuxDyn_muonSegment];   //[MuonSegmentsAuxDyn.muonSegment_]
   UInt_t          MuonSegmentsAuxDyn_muonSegment_m_persIndex[kMaxMuonSegmentsAuxDyn_muonSegment];   //[MuonSegmentsAuxDyn.muonSegment_]
   vector<float>   *MuonTruthParticleAuxDyn_MuonEntryLayer_x;
   vector<float>   *MuonTruthParticleAuxDyn_MuonEntryLayer_x_extr;
   vector<float>   *MuonTruthParticleAuxDyn_MuonEntryLayer_y;
   vector<float>   *MuonTruthParticleAuxDyn_MuonEntryLayer_y_extr;
   vector<float>   *MuonTruthParticleAuxDyn_MuonEntryLayer_z;
   vector<float>   *MuonTruthParticleAuxDyn_MuonEntryLayer_z_extr;
   vector<unsigned char> *MuonTruthParticleAuxDyn_etaLayer1Hits;
   vector<unsigned char> *MuonTruthParticleAuxDyn_etaLayer2Hits;
   vector<unsigned char> *MuonTruthParticleAuxDyn_etaLayer3Hits;
   vector<unsigned char> *MuonTruthParticleAuxDyn_etaLayer4Hits;
   vector<unsigned char> *MuonTruthParticleAuxDyn_extendedLargeHits;
   vector<unsigned char> *MuonTruthParticleAuxDyn_extendedSmallHits;
   vector<unsigned char> *MuonTruthParticleAuxDyn_innerLargeHits;
   vector<unsigned char> *MuonTruthParticleAuxDyn_innerSmallHits;
   vector<unsigned char> *MuonTruthParticleAuxDyn_middleLargeHits;
   vector<unsigned char> *MuonTruthParticleAuxDyn_middleSmallHits;
   vector<unsigned char> *MuonTruthParticleAuxDyn_nphiLayers;
   vector<unsigned char> *MuonTruthParticleAuxDyn_nprecLayers;
   vector<unsigned char> *MuonTruthParticleAuxDyn_ntrigEtaLayers;
   vector<unsigned char> *MuonTruthParticleAuxDyn_outerLargeHits;
   vector<unsigned char> *MuonTruthParticleAuxDyn_outerSmallHits;
   vector<unsigned char> *MuonTruthParticleAuxDyn_phiLayer1Hits;
   vector<unsigned char> *MuonTruthParticleAuxDyn_phiLayer2Hits;
   vector<unsigned char> *MuonTruthParticleAuxDyn_phiLayer3Hits;
   vector<unsigned char> *MuonTruthParticleAuxDyn_phiLayer4Hits;
   Int_t           MuonTruthParticleAuxDyn_recoMuonLink_;
   UInt_t          MuonTruthParticleAuxDyn_recoMuonLink_m_persKey[kMaxMuonTruthParticleAuxDyn_recoMuonLink];   //[MuonTruthParticleAuxDyn.recoMuonLink_]
   UInt_t          MuonTruthParticleAuxDyn_recoMuonLink_m_persIndex[kMaxMuonTruthParticleAuxDyn_recoMuonLink];   //[MuonTruthParticleAuxDyn.recoMuonLink_]
   vector<int>     *MuonTruthParticleAuxDyn_truthOrigin;
   vector<int>     *MuonTruthParticleAuxDyn_truthType;
   vector<vector<float> > *MuonTruthParticleAuxDyn_MuonEntryLayer_cov_extr;
   vector<float>   *MuonTruthParticleAuxDyn_MuonEntryLayer_px;
   vector<float>   *MuonTruthParticleAuxDyn_MuonEntryLayer_px_extr;
   vector<float>   *MuonTruthParticleAuxDyn_MuonEntryLayer_py;
   vector<float>   *MuonTruthParticleAuxDyn_MuonEntryLayer_py_extr;
   vector<float>   *MuonTruthParticleAuxDyn_MuonEntryLayer_pz;
   vector<float>   *MuonTruthParticleAuxDyn_MuonEntryLayer_pz_extr;
   vector<float>   *MuonsAuxDyn_m;
   vector<int>     *PhotonCollectionAuxDyn_truthOrigin;
   vector<int>     *PhotonCollectionAuxDyn_truthType;
   vector<char>    *PhotonCollectionAuxDyn_Loose;
   vector<char>    *PhotonCollectionAuxDyn_Tight;
   Int_t           PhotonCollectionAuxDyn_truthParticleLink_;
   UInt_t          PhotonCollectionAuxDyn_truthParticleLink_m_persKey[kMaxPhotonCollectionAuxDyn_truthParticleLink];   //[PhotonCollectionAuxDyn.truthParticleLink_]
   UInt_t          PhotonCollectionAuxDyn_truthParticleLink_m_persIndex[kMaxPhotonCollectionAuxDyn_truthParticleLink];   //[PhotonCollectionAuxDyn.truthParticleLink_]
   vector<float>   *TauPi0NeutralPFOContainerAuxDyn_cellBased_CENTER_LAMBDA;
   vector<float>   *TauPi0NeutralPFOContainerAuxDyn_cellBased_DELTA_PHI;
   vector<float>   *TauPi0NeutralPFOContainerAuxDyn_cellBased_DELTA_THETA;
   vector<float>   *TauPi0NeutralPFOContainerAuxDyn_cellBased_EM1CoreFrac;
   vector<float>   *TauPi0NeutralPFOContainerAuxDyn_cellBased_ENG_FRAC_CORE;
   vector<float>   *TauPi0NeutralPFOContainerAuxDyn_cellBased_ENG_FRAC_EM;
   vector<float>   *TauPi0NeutralPFOContainerAuxDyn_cellBased_ENG_FRAC_MAX;
   vector<float>   *TauPi0NeutralPFOContainerAuxDyn_cellBased_FIRST_ETA;
   vector<float>   *TauPi0NeutralPFOContainerAuxDyn_cellBased_LATERAL;
   vector<float>   *TauPi0NeutralPFOContainerAuxDyn_cellBased_LONGITUDINAL;
   vector<int>     *TauPi0NeutralPFOContainerAuxDyn_cellBased_NHitsInEM1;
   vector<int>     *TauPi0NeutralPFOContainerAuxDyn_cellBased_NPosECells_EM1;
   vector<int>     *TauPi0NeutralPFOContainerAuxDyn_cellBased_NPosECells_EM2;
   vector<int>     *TauPi0NeutralPFOContainerAuxDyn_cellBased_NPosECells_PS;
   vector<float>   *TauPi0NeutralPFOContainerAuxDyn_cellBased_SECOND_ENG_DENS;
   vector<float>   *TauPi0NeutralPFOContainerAuxDyn_cellBased_SECOND_LAMBDA;
   vector<float>   *TauPi0NeutralPFOContainerAuxDyn_cellBased_SECOND_R;
   vector<float>   *TauPi0NeutralPFOContainerAuxDyn_cellBased_asymmetryInEM1WRTTrk;
   vector<float>   *TauPi0NeutralPFOContainerAuxDyn_cellBased_energy_EM1;
   vector<float>   *TauPi0NeutralPFOContainerAuxDyn_cellBased_energy_EM2;
   vector<float>   *TauPi0NeutralPFOContainerAuxDyn_cellBased_firstEtaWRTClusterPosition_EM1;
   vector<float>   *TauPi0NeutralPFOContainerAuxDyn_cellBased_firstEtaWRTClusterPosition_EM2;
   vector<float>   *TauPi0NeutralPFOContainerAuxDyn_cellBased_secondEtaWRTClusterPosition_EM1;
   vector<float>   *TauPi0NeutralPFOContainerAuxDyn_cellBased_secondEtaWRTClusterPosition_EM2;
   vector<int>     *TauPi0NeutralPFOContainerAuxDyn_nPi0;
   vector<int>     *TauPi0NeutralPFOContainerAuxDyn_nPi0Proto;
   vector<float>   *TauShotPFOContainerAuxDyn_tauShots_Fside_5not1;
   vector<float>   *TauShotPFOContainerAuxDyn_tauShots_Fside_5not3;
   vector<float>   *TauShotPFOContainerAuxDyn_tauShots_deltaPt12_min;
   vector<float>   *TauShotPFOContainerAuxDyn_tauShots_fracSide_3not1;
   vector<float>   *TauShotPFOContainerAuxDyn_tauShots_fracSide_5not1;
   vector<float>   *TauShotPFOContainerAuxDyn_tauShots_fracSide_5not3;
   vector<float>   *TauShotPFOContainerAuxDyn_tauShots_mergedScore;
   vector<int>     *TauShotPFOContainerAuxDyn_tauShots_nCellsInEta;
   vector<int>     *TauShotPFOContainerAuxDyn_tauShots_nPhotons;
   vector<float>   *TauShotPFOContainerAuxDyn_tauShots_pt1;
   vector<float>   *TauShotPFOContainerAuxDyn_tauShots_pt1OverPt3;
   vector<float>   *TauShotPFOContainerAuxDyn_tauShots_pt3;
   vector<float>   *TauShotPFOContainerAuxDyn_tauShots_pt3OverPt5;
   vector<float>   *TauShotPFOContainerAuxDyn_tauShots_pt5;
   vector<float>   *TauShotPFOContainerAuxDyn_tauShots_sdevEta5_WRTmean;
   vector<float>   *TauShotPFOContainerAuxDyn_tauShots_sdevEta5_WRTmode;
   vector<float>   *TauShotPFOContainerAuxDyn_tauShots_sdevPt5;
   vector<int>     *TauShotPFOContainerAuxDyn_tauShots_seedHash;
   vector<float>   *TauShotPFOContainerAuxDyn_tauShots_signalScore;
   vector<float>   *TauShotPFOContainerAuxDyn_tauShots_ws5;
   vector<float>   *TauShotPFOContainerAuxDyn_tauShots_Fside_3not1;
   vector<float>   *TruthEventAuxDyn_x1;
   vector<float>   *TruthEventAuxDyn_x2;
   vector<int>     *TruthEventAuxDyn_id1;
   vector<int>     *TruthEventAuxDyn_id2;
   vector<float>   *TruthEventAuxDyn_pdf1;
   vector<float>   *TruthEventAuxDyn_pdf2;
   vector<int>     *TruthEventAuxDyn_pdfId1;
   vector<int>     *TruthEventAuxDyn_pdfId2;
   vector<float>   *TruthEventAuxDyn_scalePDF;
   vector<float>   *TruthParticleAuxDyn_polarizationPhi;
   vector<float>   *TruthParticleAuxDyn_polarizationTheta;
   vector<float>   *chargedTauPFO_eflowRecAuxDyn_eflowRec_HOT_STRIP_FRAC;
   vector<float>   *chargedTauPFO_eflowRecAuxDyn_eflowRec_SECOND_R;
   vector<float>   *chargedTauPFO_eflowRecAuxDyn_eflowRec_THREE_CELL_STRIP_FRAC;
   vector<char>    *chargedTauPFO_eflowRecAuxDyn_PassEOverPCheck;
   vector<float>   *chargedTauPFO_eflowRecAuxDyn_eflowRec_CENTER_LAMBDA;
   vector<float>   *chargedTauPFO_eflowRecAuxDyn_eflowRec_DELTA_ALPHA;
   vector<float>   *chargedTauPFO_eflowRecAuxDyn_eflowRec_EM_FRAC_ENHANCED;
   vector<float>   *chargedTauPFO_eflowRecAuxDyn_eflowRec_ENG_FRAC_CORE;
   vector<float>   *chargedTauPFO_eflowRecAuxDyn_eflowRec_FIRST_ENG_DENS;
   vector<vector<float> > *egClusterCollectionAuxDyn_emax_sampl;
   vector<vector<float> > *egClusterCollectionAuxDyn_etamax_sampl;
   vector<vector<float> > *egClusterCollectionAuxDyn_phimax_sampl;
   vector<float>   *egClusterCollectionAuxDyn_etaCalo;
   vector<float>   *egClusterCollectionAuxDyn_etas1Calo;
   vector<float>   *egClusterCollectionAuxDyn_etas2Calo;
   vector<vector<float> > *egClusterCollectionAuxDyn_etasize_sampl;
   Int_t           egClusterCollectionAuxDyn_originalClusterLink_;
   UInt_t          egClusterCollectionAuxDyn_originalClusterLink_m_persKey[kMaxegClusterCollectionAuxDyn_originalClusterLink];   //[egClusterCollectionAuxDyn.originalClusterLink_]
   UInt_t          egClusterCollectionAuxDyn_originalClusterLink_m_persIndex[kMaxegClusterCollectionAuxDyn_originalClusterLink];   //[egClusterCollectionAuxDyn.originalClusterLink_]
   vector<float>   *egClusterCollectionAuxDyn_phiCalo;
   vector<vector<float> > *egClusterCollectionAuxDyn_phisize_sampl;
   Int_t           egClusterCollectionAuxDyn_CellLink_;
   UInt_t          egClusterCollectionAuxDyn_CellLink_m_persKey[kMaxegClusterCollectionAuxDyn_CellLink];   //[egClusterCollectionAuxDyn.CellLink_]
   UInt_t          egClusterCollectionAuxDyn_CellLink_m_persIndex[kMaxegClusterCollectionAuxDyn_CellLink];   //[egClusterCollectionAuxDyn.CellLink_]
   vector<vector<xAOD::CaloClusterBadChannelData_v1> > *egClusterCollectionAuxDyn_BadChannelList;
   vector<float>   *neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_FIRST_ENG_DENS;
   vector<float>   *neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_SECOND_R;
   vector<xAOD::PFODetails::PFOLeptonType> *neutralJetETMissPFO_eflowRecAuxDyn_LeptonType;
   vector<float>   *neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_AVG_LAR_Q;
   vector<float>   *neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_AVG_TILE_Q;
   vector<float>   *neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_BADLARQ_FRAC;
   vector<float>   *neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_ENG_BAD_CELLS;
   vector<float>   *neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_ENG_FRAC_MAX;
   vector<float>   *neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_ENG_POS;
   vector<float>   *neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_ISOLATION;
   vector<float>   *neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_LATERAL;
   vector<float>   *neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_EM3;
   vector<float>   *neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_HEC0;
   vector<float>   *neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_Tile0;
   vector<float>   *neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_LONGITUDINAL;
   vector<float>   *neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_N_BAD_CELLS;
   vector<float>   *neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_SIGNIFICANCE;
   vector<float>   *neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_CENTER_LAMBDA;
   vector<float>   *neutralJetETMiss_LCPFO_NonModified_eflowRecAuxDyn_eflowRec_LAYERENERGY_EM3;
   vector<float>   *neutralJetETMiss_LCPFO_NonModified_eflowRecAuxDyn_eflowRec_LAYERENERGY_HEC0;
   vector<float>   *neutralJetETMiss_LCPFO_NonModified_eflowRecAuxDyn_eflowRec_LAYERENERGY_Tile0;
   vector<xAOD::PFODetails::PFOLeptonType> *neutralJetETMiss_LCPFO_NonModified_eflowRecAuxDyn_LeptonType;
   vector<float>   *neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_FIRST_ENG_DENS;
   vector<float>   *neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_SECOND_R;
   vector<xAOD::PFODetails::PFOLeptonType> *neutralJetETMiss_LCPFO_eflowRecAuxDyn_LeptonType;
   vector<float>   *neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_AVG_LAR_Q;
   vector<float>   *neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_AVG_TILE_Q;
   vector<float>   *neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_BADLARQ_FRAC;
   vector<float>   *neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_ENG_BAD_CELLS;
   vector<float>   *neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_ENG_FRAC_MAX;
   vector<float>   *neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_ENG_POS;
   vector<float>   *neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_ISOLATION;
   vector<float>   *neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_LATERAL;
   vector<float>   *neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_EM3;
   vector<float>   *neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_HEC0;
   vector<float>   *neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_Tile0;
   vector<float>   *neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_LONGITUDINAL;
   vector<float>   *neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_N_BAD_CELLS;
   vector<float>   *neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_SIGNIFICANCE;
   vector<float>   *neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_CENTER_LAMBDA;
   vector<float>   *neutralTauPFO_eflowRecAuxDyn_eflowRec_HOT_STRIP_FRAC;
   vector<float>   *neutralTauPFO_eflowRecAuxDyn_eflowRec_SECOND_R;
   vector<float>   *neutralTauPFO_eflowRecAuxDyn_eflowRec_THREE_CELL_STRIP_FRAC;
   vector<char>    *neutralTauPFO_eflowRecAuxDyn_PassEOverPCheck;
   vector<float>   *neutralTauPFO_eflowRecAuxDyn_eflowRec_CENTER_LAMBDA;
   vector<float>   *neutralTauPFO_eflowRecAuxDyn_eflowRec_DELTA_ALPHA;
   vector<float>   *neutralTauPFO_eflowRecAuxDyn_eflowRec_EM_FRAC_ENHANCED;
   vector<float>   *neutralTauPFO_eflowRecAuxDyn_eflowRec_ENG_FRAC_CORE;
   vector<float>   *neutralTauPFO_eflowRecAuxDyn_eflowRec_FIRST_ENG_DENS;

   // List of branches
   TBranch        *b_McEventInfo;   //!
   TBranch        *b_AODCellContainer;   //!
   TBranch        *b_MBTSContainer;   //!
   TBranch        *b_TileMuObj;   //!
   TBranch        *b_TrigConfKeys;   //!
   TBranch        *b_METMap_LocHadTopo;   //!
   TBranch        *b_METMap_LocHadTopoRegions;   //!
   TBranch        *b_METMap_RefFinal;   //!
   TBranch        *b_METMap_RefFinalRegions;   //!
   TBranch        *b_METMap_Track;   //!
   TBranch        *b_METMap_Truth;   //!
   TBranch        *b_METMap_TruthRegions;   //!
   TBranch        *b_EventInfoAux_runNumber;   //!
   TBranch        *b_EventInfoAux_eventNumber;   //!
   TBranch        *b_EventInfoAux_lumiBlock;   //!
   TBranch        *b_EventInfoAux_timeStamp;   //!
   TBranch        *b_EventInfoAux_timeStampNSOffset;   //!
   TBranch        *b_EventInfoAux_bcid;   //!
   TBranch        *b_EventInfoAux_detectorMask0;   //!
   TBranch        *b_EventInfoAux_detectorMask1;   //!
   TBranch        *b_EventInfoAux_eventTypeBitmask;   //!
   TBranch        *b_EventInfoAux_statusElement;   //!
   TBranch        *b_EventInfoAux_extendedLevel1ID;   //!
   TBranch        *b_EventInfoAux_level1TriggerType;   //!
   TBranch        *b_EventInfoAux_streamTagNames;   //!
   TBranch        *b_EventInfoAux_streamTagTypes;   //!
   TBranch        *b_EventInfoAux_streamTagObeysLumiblock;   //!
   TBranch        *b_EventInfoAux_actualInteractionsPerCrossing;   //!
   TBranch        *b_EventInfoAux_averageInteractionsPerCrossing;   //!
   TBranch        *b_EventInfoAux_pixelFlags;   //!
   TBranch        *b_EventInfoAux_sctFlags;   //!
   TBranch        *b_EventInfoAux_trtFlags;   //!
   TBranch        *b_EventInfoAux_larFlags;   //!
   TBranch        *b_EventInfoAux_tileFlags;   //!
   TBranch        *b_EventInfoAux_muonFlags;   //!
   TBranch        *b_EventInfoAux_forwardDetFlags;   //!
   TBranch        *b_EventInfoAux_coreFlags;   //!
   TBranch        *b_EventInfoAux_backgroundFlags;   //!
   TBranch        *b_EventInfoAux_lumiFlags;   //!
   TBranch        *b_EventInfoAux_beamPosX;   //!
   TBranch        *b_EventInfoAux_beamPosY;   //!
   TBranch        *b_EventInfoAux_beamPosZ;   //!
   TBranch        *b_EventInfoAux_beamPosSigmaX;   //!
   TBranch        *b_EventInfoAux_beamPosSigmaY;   //!
   TBranch        *b_EventInfoAux_beamPosSigmaZ;   //!
   TBranch        *b_EventInfoAux_beamPosSigmaXY;   //!
   TBranch        *b_EventInfoAux_beamTiltXZ;   //!
   TBranch        *b_EventInfoAux_beamTiltYZ;   //!
   TBranch        *b_EventInfoAux_beamStatus;   //!
   TBranch        *b_EventInfo;   //!
   TBranch        *b_ESDtoAOD_mems;   //!
   TBranch        *b_ESDtoAOD_timings;   //!
   TBranch        *b_EVNTtoHITS_timings;   //!
   TBranch        *b_HITStoRDO_timings;   //!
   TBranch        *b_RAWtoESD_mems;   //!
   TBranch        *b_RAWtoESD_timings;   //!
   TBranch        *b_LArNoisyROSummary;   //!
   TBranch        *b_GSFTracks;   //!
   TBranch        *b_METMap_LocHadTopoAux_wpx;   //!
   TBranch        *b_METMap_LocHadTopoAux_wpy;   //!
   TBranch        *b_METMap_LocHadTopoAux_wet;   //!
   TBranch        *b_METMap_LocHadTopoRegionsAux_wpx;   //!
   TBranch        *b_METMap_LocHadTopoRegionsAux_wpy;   //!
   TBranch        *b_METMap_LocHadTopoRegionsAux_wet;   //!
   TBranch        *b_METMap_RefFinalAux_wpx;   //!
   TBranch        *b_METMap_RefFinalAux_wpy;   //!
   TBranch        *b_METMap_RefFinalAux_wet;   //!
   TBranch        *b_METMap_RefFinalRegionsAux_wpx;   //!
   TBranch        *b_METMap_RefFinalRegionsAux_wpy;   //!
   TBranch        *b_METMap_RefFinalRegionsAux_wet;   //!
   TBranch        *b_METMap_TrackAux_wpx;   //!
   TBranch        *b_METMap_TrackAux_wpy;   //!
   TBranch        *b_METMap_TrackAux_wet;   //!
   TBranch        *b_METMap_TruthAux_wpx;   //!
   TBranch        *b_METMap_TruthAux_wpy;   //!
   TBranch        *b_METMap_TruthAux_wet;   //!
   TBranch        *b_METMap_TruthRegionsAux_wpx;   //!
   TBranch        *b_METMap_TruthRegionsAux_wpy;   //!
   TBranch        *b_METMap_TruthRegionsAux_wet;   //!
   TBranch        *b_ElectronCollection;   //!
   TBranch        *b_FwdElectrons;   //!
   TBranch        *b_GSFConversionVertices;   //!
   TBranch        *b_PrimaryVertices;   //!
   TBranch        *b_TauSecondaryVertexContainer;   //!
   TBranch        *b_MET_LocHadTopo;   //!
   TBranch        *b_MET_LocHadTopoRegions;   //!
   TBranch        *b_MET_RefFinal;   //!
   TBranch        *b_MET_RefFinalRegions;   //!
   TBranch        *b_MET_Track;   //!
   TBranch        *b_MET_Truth;   //!
   TBranch        *b_MET_TruthRegions;   //!
   TBranch        *b_PhotonCollection;   //!
   TBranch        *b_MuonTruthParticleAux_pdgId;   //!
   TBranch        *b_MuonTruthParticleAux_barcode;   //!
   TBranch        *b_MuonTruthParticleAux_status;   //!
   TBranch        *b_MuonTruthParticleAux_px;   //!
   TBranch        *b_MuonTruthParticleAux_py;   //!
   TBranch        *b_MuonTruthParticleAux_pz;   //!
   TBranch        *b_MuonTruthParticleAux_e;   //!
   TBranch        *b_MuonTruthParticleAux_m;   //!
   TBranch        *b_TruthParticleAux_pdgId;   //!
   TBranch        *b_TruthParticleAux_barcode;   //!
   TBranch        *b_TruthParticleAux_status;   //!
   TBranch        *b_TruthParticleAux_px;   //!
   TBranch        *b_TruthParticleAux_py;   //!
   TBranch        *b_TruthParticleAux_pz;   //!
   TBranch        *b_TruthParticleAux_e;   //!
   TBranch        *b_TruthParticleAux_m;   //!
   TBranch        *b_ElectronCollectionAux_charge;   //!
   TBranch        *b_ElectronCollectionAux_deltaEta0;   //!
   TBranch        *b_ElectronCollectionAux_deltaEta1;   //!
   TBranch        *b_ElectronCollectionAux_deltaEta2;   //!
   TBranch        *b_ElectronCollectionAux_deltaEta3;   //!
   TBranch        *b_ElectronCollectionAux_deltaPhi0;   //!
   TBranch        *b_ElectronCollectionAux_deltaPhi1;   //!
   TBranch        *b_ElectronCollectionAux_deltaPhi2;   //!
   TBranch        *b_ElectronCollectionAux_deltaPhi3;   //!
   TBranch        *b_ElectronCollectionAux_deltaPhiFromLastMeasurement;   //!
   TBranch        *b_ElectronCollectionAux_deltaPhiRescaled0;   //!
   TBranch        *b_ElectronCollectionAux_deltaPhiRescaled1;   //!
   TBranch        *b_ElectronCollectionAux_deltaPhiRescaled2;   //!
   TBranch        *b_ElectronCollectionAux_deltaPhiRescaled3;   //!
   TBranch        *b_FwdElectronsAux_charge;   //!
   TBranch        *b_FwdElectronsAux_deltaEta0;   //!
   TBranch        *b_FwdElectronsAux_deltaEta1;   //!
   TBranch        *b_FwdElectronsAux_deltaEta2;   //!
   TBranch        *b_FwdElectronsAux_deltaEta3;   //!
   TBranch        *b_FwdElectronsAux_deltaPhi0;   //!
   TBranch        *b_FwdElectronsAux_deltaPhi1;   //!
   TBranch        *b_FwdElectronsAux_deltaPhi2;   //!
   TBranch        *b_FwdElectronsAux_deltaPhi3;   //!
   TBranch        *b_FwdElectronsAux_deltaPhiFromLastMeasurement;   //!
   TBranch        *b_FwdElectronsAux_deltaPhiRescaled0;   //!
   TBranch        *b_FwdElectronsAux_deltaPhiRescaled1;   //!
   TBranch        *b_FwdElectronsAux_deltaPhiRescaled2;   //!
   TBranch        *b_FwdElectronsAux_deltaPhiRescaled3;   //!
   TBranch        *b_MuonSegments;   //!
   TBranch        *b_egClusterCollection_links;   //!
   TBranch        *b_MuonsAux_pt;   //!
   TBranch        *b_MuonsAux_eta;   //!
   TBranch        *b_MuonsAux_phi;   //!
   TBranch        *b_MuonsAux_e;   //!
   TBranch        *b_MuonsAux_allAuthors;   //!
   TBranch        *b_MuonsAux_author;   //!
   TBranch        *b_MuonsAux_muonType;   //!
   TBranch        *b_MuonsAux_quality;   //!
   TBranch        *b_MuonsAux_numberOfPrecisionLayers;   //!
   TBranch        *b_MuonsAux_numberOfPrecisionHoleLayers;   //!
   TBranch        *b_MuonsAux_numberOfPhiLayers;   //!
   TBranch        *b_MuonsAux_numberOfPhiHoleLayers;   //!
   TBranch        *b_MuonsAux_numberOfTriggerEtaLayers;   //!
   TBranch        *b_MuonsAux_numberOfTriggerEtaHoleLayers;   //!
   TBranch        *b_MuonsAux_primarySector;   //!
   TBranch        *b_MuonsAux_secondarySector;   //!
   TBranch        *b_MuonsAux_innerSmallHits;   //!
   TBranch        *b_MuonsAux_innerLargeHits;   //!
   TBranch        *b_MuonsAux_middleSmallHits;   //!
   TBranch        *b_MuonsAux_middleLargeHits;   //!
   TBranch        *b_MuonsAux_outerSmallHits;   //!
   TBranch        *b_MuonsAux_outerLargeHits;   //!
   TBranch        *b_MuonsAux_extendedSmallHits;   //!
   TBranch        *b_MuonsAux_extendedLargeHits;   //!
   TBranch        *b_MuonsAux_innerSmallHoles;   //!
   TBranch        *b_MuonsAux_innerLargeHoles;   //!
   TBranch        *b_MuonsAux_middleSmallHoles;   //!
   TBranch        *b_MuonsAux_middleLargeHoles;   //!
   TBranch        *b_MuonsAux_outerSmallHoles;   //!
   TBranch        *b_MuonsAux_outerLargeHoles;   //!
   TBranch        *b_MuonsAux_extendedSmallHoles;   //!
   TBranch        *b_MuonsAux_extendedLargeHoles;   //!
   TBranch        *b_MuonsAux_phiLayer1Hits;   //!
   TBranch        *b_MuonsAux_phiLayer2Hits;   //!
   TBranch        *b_MuonsAux_phiLayer3Hits;   //!
   TBranch        *b_MuonsAux_phiLayer4Hits;   //!
   TBranch        *b_MuonsAux_etaLayer1Hits;   //!
   TBranch        *b_MuonsAux_etaLayer2Hits;   //!
   TBranch        *b_MuonsAux_etaLayer3Hits;   //!
   TBranch        *b_MuonsAux_etaLayer4Hits;   //!
   TBranch        *b_MuonsAux_phiLayer1Holes;   //!
   TBranch        *b_MuonsAux_phiLayer2Holes;   //!
   TBranch        *b_MuonsAux_phiLayer3Holes;   //!
   TBranch        *b_MuonsAux_phiLayer4Holes;   //!
   TBranch        *b_MuonsAux_etaLayer1Holes;   //!
   TBranch        *b_MuonsAux_etaLayer2Holes;   //!
   TBranch        *b_MuonsAux_etaLayer3Holes;   //!
   TBranch        *b_MuonsAux_etaLayer4Holes;   //!
   TBranch        *b_MuonsAux_etcone10;   //!
   TBranch        *b_MuonsAux_etcone20;   //!
   TBranch        *b_MuonsAux_etcone30;   //!
   TBranch        *b_MuonsAux_etcone40;   //!
   TBranch        *b_MuonsAux_nucone10;   //!
   TBranch        *b_MuonsAux_nucone20;   //!
   TBranch        *b_MuonsAux_nucone30;   //!
   TBranch        *b_MuonsAux_nucone40;   //!
   TBranch        *b_MuonsAux_ptcone10;   //!
   TBranch        *b_MuonsAux_ptcone20;   //!
   TBranch        *b_MuonsAux_ptcone30;   //!
   TBranch        *b_MuonsAux_ptcone40;   //!
   TBranch        *b_MuonsAux_etconeNoEm10;   //!
   TBranch        *b_MuonsAux_etconeNoEm20;   //!
   TBranch        *b_MuonsAux_etconeNoEm30;   //!
   TBranch        *b_MuonsAux_etconeNoEm40;   //!
   TBranch        *b_MuonsAux_energyLossType;   //!
   TBranch        *b_TauRecContainer;   //!
   TBranch        *b_TauPi0ChargedPFOContainer;   //!
   TBranch        *b_TauPi0NeutralPFOContainer;   //!
   TBranch        *b_TauShotPFOContainer;   //!
   TBranch        *b_chargedJetETMissPFO_eflowRec;   //!
   TBranch        *b_chargedTauPFO_eflowRec;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRec;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_NonModified_eflowRec;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRec;   //!
   TBranch        *b_neutralTauPFO_eflowRec;   //!
   TBranch        *b_Muons;   //!
   TBranch        *b_TruthEvent;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_d0;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_z0;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_phi;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_theta;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_qOverP;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_vx;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_vy;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_vz;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_chiSquared;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberDoF;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_trackFitter;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_particleHypothesis;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_trackProperties;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_patternRecoInfo;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfContribPixelLayers;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfBLayerHits;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfBLayerOutliers;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfBLayerSharedHits;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfBLayerSplitHits;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_expectBLayerHit;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfPixelHits;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfPixelOutliers;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfPixelHoles;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfPixelSharedHits;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfPixelSplitHits;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfGangedPixels;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfGangedFlaggedFakes;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfPixelDeadSensors;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfPixelSpoiltHits;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfSCTHits;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfSCTOutliers;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfSCTHoles;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfSCTDoubleHoles;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfSCTSharedHits;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfSCTDeadSensors;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfSCTSpoiltHits;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfTRTHits;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfTRTOutliers;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfTRTHoles;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfTRTHighThresholdHits;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfTRTHighThresholdOutliers;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfTRTDeadStraws;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfTRTTubeHits;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfTRTXenonHits;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfPrecisionLayers;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfPrecisionHoleLayers;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfPhiLayers;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfPhiHoleLayers;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfTriggerEtaLayers;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfTriggerEtaHoleLayers;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_numberOfOutliersOnTrack;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_standardDeviationOfChi2OS;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_eProbabilityComb;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_eProbabilityHT;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_eProbabilityToT;   //!
   TBranch        *b_CombinedMuonTrackParticlesAux_eProbabilityBrem;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_d0;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_z0;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_phi;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_theta;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_qOverP;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_vx;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_vy;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_vz;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_chiSquared;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberDoF;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_trackFitter;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_particleHypothesis;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_trackProperties;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_patternRecoInfo;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfContribPixelLayers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfBLayerHits;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfBLayerOutliers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfBLayerSharedHits;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfBLayerSplitHits;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_expectBLayerHit;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfPixelHits;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfPixelOutliers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfPixelHoles;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfPixelSharedHits;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfPixelSplitHits;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfGangedPixels;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfGangedFlaggedFakes;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfPixelDeadSensors;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfPixelSpoiltHits;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfSCTHits;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfSCTOutliers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfSCTHoles;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfSCTDoubleHoles;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfSCTSharedHits;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfSCTDeadSensors;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfSCTSpoiltHits;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfTRTHits;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfTRTOutliers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfTRTHoles;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfTRTHighThresholdHits;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfTRTHighThresholdOutliers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfTRTDeadStraws;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfTRTTubeHits;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfTRTXenonHits;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfPrecisionLayers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfPrecisionHoleLayers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfPhiLayers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfPhiHoleLayers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfTriggerEtaLayers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfTriggerEtaHoleLayers;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_numberOfOutliersOnTrack;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_standardDeviationOfChi2OS;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_eProbabilityComb;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_eProbabilityHT;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_eProbabilityToT;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAux_eProbabilityBrem;   //!
   TBranch        *b_GSFTrackParticlesAux_d0;   //!
   TBranch        *b_GSFTrackParticlesAux_z0;   //!
   TBranch        *b_GSFTrackParticlesAux_phi;   //!
   TBranch        *b_GSFTrackParticlesAux_theta;   //!
   TBranch        *b_GSFTrackParticlesAux_qOverP;   //!
   TBranch        *b_GSFTrackParticlesAux_vx;   //!
   TBranch        *b_GSFTrackParticlesAux_vy;   //!
   TBranch        *b_GSFTrackParticlesAux_vz;   //!
   TBranch        *b_GSFTrackParticlesAux_chiSquared;   //!
   TBranch        *b_GSFTrackParticlesAux_numberDoF;   //!
   TBranch        *b_GSFTrackParticlesAux_trackFitter;   //!
   TBranch        *b_GSFTrackParticlesAux_particleHypothesis;   //!
   TBranch        *b_GSFTrackParticlesAux_trackProperties;   //!
   TBranch        *b_GSFTrackParticlesAux_patternRecoInfo;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfContribPixelLayers;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfBLayerHits;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfBLayerOutliers;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfBLayerSharedHits;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfBLayerSplitHits;   //!
   TBranch        *b_GSFTrackParticlesAux_expectBLayerHit;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfPixelHits;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfPixelOutliers;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfPixelHoles;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfPixelSharedHits;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfPixelSplitHits;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfGangedPixels;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfGangedFlaggedFakes;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfPixelDeadSensors;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfPixelSpoiltHits;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfSCTHits;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfSCTOutliers;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfSCTHoles;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfSCTDoubleHoles;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfSCTSharedHits;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfSCTDeadSensors;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfSCTSpoiltHits;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfTRTHits;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfTRTOutliers;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfTRTHoles;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfTRTHighThresholdHits;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfTRTHighThresholdOutliers;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfTRTDeadStraws;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfTRTTubeHits;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfTRTXenonHits;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfPrecisionLayers;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfPrecisionHoleLayers;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfPhiLayers;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfPhiHoleLayers;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfTriggerEtaLayers;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfTriggerEtaHoleLayers;   //!
   TBranch        *b_GSFTrackParticlesAux_numberOfOutliersOnTrack;   //!
   TBranch        *b_GSFTrackParticlesAux_standardDeviationOfChi2OS;   //!
   TBranch        *b_GSFTrackParticlesAux_eProbabilityComb;   //!
   TBranch        *b_GSFTrackParticlesAux_eProbabilityHT;   //!
   TBranch        *b_GSFTrackParticlesAux_eProbabilityToT;   //!
   TBranch        *b_GSFTrackParticlesAux_eProbabilityBrem;   //!
   TBranch        *b_InDetTrackParticlesAux_d0;   //!
   TBranch        *b_InDetTrackParticlesAux_z0;   //!
   TBranch        *b_InDetTrackParticlesAux_phi;   //!
   TBranch        *b_InDetTrackParticlesAux_theta;   //!
   TBranch        *b_InDetTrackParticlesAux_qOverP;   //!
   TBranch        *b_InDetTrackParticlesAux_vx;   //!
   TBranch        *b_InDetTrackParticlesAux_vy;   //!
   TBranch        *b_InDetTrackParticlesAux_vz;   //!
   TBranch        *b_InDetTrackParticlesAux_chiSquared;   //!
   TBranch        *b_InDetTrackParticlesAux_numberDoF;   //!
   TBranch        *b_InDetTrackParticlesAux_trackFitter;   //!
   TBranch        *b_InDetTrackParticlesAux_particleHypothesis;   //!
   TBranch        *b_InDetTrackParticlesAux_trackProperties;   //!
   TBranch        *b_InDetTrackParticlesAux_patternRecoInfo;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfContribPixelLayers;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfBLayerHits;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfBLayerOutliers;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfBLayerSharedHits;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfBLayerSplitHits;   //!
   TBranch        *b_InDetTrackParticlesAux_expectBLayerHit;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfPixelHits;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfPixelOutliers;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfPixelHoles;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfPixelSharedHits;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfPixelSplitHits;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfGangedPixels;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfGangedFlaggedFakes;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfPixelDeadSensors;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfPixelSpoiltHits;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfSCTHits;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfSCTOutliers;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfSCTHoles;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfSCTDoubleHoles;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfSCTSharedHits;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfSCTDeadSensors;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfSCTSpoiltHits;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfTRTHits;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfTRTOutliers;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfTRTHoles;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfTRTHighThresholdHits;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfTRTHighThresholdOutliers;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfTRTDeadStraws;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfTRTTubeHits;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfTRTXenonHits;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfPrecisionLayers;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfPrecisionHoleLayers;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfPhiLayers;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfPhiHoleLayers;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfTriggerEtaLayers;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfTriggerEtaHoleLayers;   //!
   TBranch        *b_InDetTrackParticlesAux_numberOfOutliersOnTrack;   //!
   TBranch        *b_InDetTrackParticlesAux_standardDeviationOfChi2OS;   //!
   TBranch        *b_InDetTrackParticlesAux_eProbabilityComb;   //!
   TBranch        *b_InDetTrackParticlesAux_eProbabilityHT;   //!
   TBranch        *b_InDetTrackParticlesAux_eProbabilityToT;   //!
   TBranch        *b_InDetTrackParticlesAux_eProbabilityBrem;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_d0;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_z0;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_phi;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_theta;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_qOverP;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_vx;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_vy;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_vz;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_chiSquared;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberDoF;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_trackFitter;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_particleHypothesis;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_trackProperties;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_patternRecoInfo;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfContribPixelLayers;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfBLayerHits;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfBLayerOutliers;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfBLayerSharedHits;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfBLayerSplitHits;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_expectBLayerHit;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfPixelHits;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfPixelOutliers;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfPixelHoles;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfPixelSharedHits;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfPixelSplitHits;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfGangedPixels;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfGangedFlaggedFakes;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfPixelDeadSensors;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfPixelSpoiltHits;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfSCTHits;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfSCTOutliers;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfSCTHoles;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfSCTDoubleHoles;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfSCTSharedHits;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfSCTDeadSensors;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfSCTSpoiltHits;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfTRTHits;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfTRTOutliers;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfTRTHoles;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfTRTHighThresholdHits;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfTRTHighThresholdOutliers;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfTRTDeadStraws;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfTRTTubeHits;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfTRTXenonHits;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfPrecisionLayers;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfPrecisionHoleLayers;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfPhiLayers;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfPhiHoleLayers;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfTriggerEtaLayers;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfTriggerEtaHoleLayers;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_numberOfOutliersOnTrack;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_standardDeviationOfChi2OS;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_eProbabilityComb;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_eProbabilityHT;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_eProbabilityToT;   //!
   TBranch        *b_InDetTrackParticlesForwardAux_eProbabilityBrem;   //!
   TBranch        *b_CaloCalTopoCluster;   //!
   TBranch        *b_LArClusterEMFrwd;   //!
   TBranch        *b_egClusterCollection;   //!
   TBranch        *b_TauPi0ChargedPFOContainerAux_bdtPi0Score;   //!
   TBranch        *b_TauPi0ChargedPFOContainerAux_centerMag;   //!
   TBranch        *b_TauPi0ChargedPFOContainerAux_charge;   //!
   TBranch        *b_TauPi0ChargedPFOContainerAux_pt;   //!
   TBranch        *b_TauPi0ChargedPFOContainerAux_eta;   //!
   TBranch        *b_TauPi0ChargedPFOContainerAux_phi;   //!
   TBranch        *b_TauPi0ChargedPFOContainerAux_m;   //!
   TBranch        *b_TauPi0ChargedPFOContainerAux_ptEM;   //!
   TBranch        *b_TauPi0ChargedPFOContainerAux_etaEM;   //!
   TBranch        *b_TauPi0ChargedPFOContainerAux_phiEM;   //!
   TBranch        *b_TauPi0ChargedPFOContainerAux_mEM;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAux_bdtPi0Score;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAux_centerMag;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAux_charge;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAux_pt;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAux_eta;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAux_phi;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAux_m;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAux_ptEM;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAux_etaEM;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAux_phiEM;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAux_mEM;   //!
   TBranch        *b_TauShotPFOContainerAux_bdtPi0Score;   //!
   TBranch        *b_TauShotPFOContainerAux_centerMag;   //!
   TBranch        *b_TauShotPFOContainerAux_charge;   //!
   TBranch        *b_TauShotPFOContainerAux_pt;   //!
   TBranch        *b_TauShotPFOContainerAux_eta;   //!
   TBranch        *b_TauShotPFOContainerAux_phi;   //!
   TBranch        *b_TauShotPFOContainerAux_m;   //!
   TBranch        *b_TauShotPFOContainerAux_ptEM;   //!
   TBranch        *b_TauShotPFOContainerAux_etaEM;   //!
   TBranch        *b_TauShotPFOContainerAux_phiEM;   //!
   TBranch        *b_TauShotPFOContainerAux_mEM;   //!
   TBranch        *b_chargedJetETMissPFO_eflowRecAux_bdtPi0Score;   //!
   TBranch        *b_chargedJetETMissPFO_eflowRecAux_centerMag;   //!
   TBranch        *b_chargedJetETMissPFO_eflowRecAux_charge;   //!
   TBranch        *b_chargedJetETMissPFO_eflowRecAux_pt;   //!
   TBranch        *b_chargedJetETMissPFO_eflowRecAux_eta;   //!
   TBranch        *b_chargedJetETMissPFO_eflowRecAux_phi;   //!
   TBranch        *b_chargedJetETMissPFO_eflowRecAux_m;   //!
   TBranch        *b_chargedJetETMissPFO_eflowRecAux_ptEM;   //!
   TBranch        *b_chargedJetETMissPFO_eflowRecAux_etaEM;   //!
   TBranch        *b_chargedJetETMissPFO_eflowRecAux_phiEM;   //!
   TBranch        *b_chargedJetETMissPFO_eflowRecAux_mEM;   //!
   TBranch        *b_chargedTauPFO_eflowRecAux_bdtPi0Score;   //!
   TBranch        *b_chargedTauPFO_eflowRecAux_centerMag;   //!
   TBranch        *b_chargedTauPFO_eflowRecAux_charge;   //!
   TBranch        *b_chargedTauPFO_eflowRecAux_pt;   //!
   TBranch        *b_chargedTauPFO_eflowRecAux_eta;   //!
   TBranch        *b_chargedTauPFO_eflowRecAux_phi;   //!
   TBranch        *b_chargedTauPFO_eflowRecAux_m;   //!
   TBranch        *b_chargedTauPFO_eflowRecAux_ptEM;   //!
   TBranch        *b_chargedTauPFO_eflowRecAux_etaEM;   //!
   TBranch        *b_chargedTauPFO_eflowRecAux_phiEM;   //!
   TBranch        *b_chargedTauPFO_eflowRecAux_mEM;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAux_bdtPi0Score;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAux_centerMag;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAux_charge;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAux_pt;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAux_eta;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAux_phi;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAux_m;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAux_ptEM;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAux_etaEM;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAux_phiEM;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAux_mEM;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_NonModified_eflowRecAux_bdtPi0Score;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_NonModified_eflowRecAux_centerMag;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_NonModified_eflowRecAux_charge;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_NonModified_eflowRecAux_pt;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_NonModified_eflowRecAux_eta;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_NonModified_eflowRecAux_phi;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_NonModified_eflowRecAux_m;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_NonModified_eflowRecAux_ptEM;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_NonModified_eflowRecAux_etaEM;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_NonModified_eflowRecAux_phiEM;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_NonModified_eflowRecAux_mEM;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAux_bdtPi0Score;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAux_centerMag;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAux_charge;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAux_pt;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAux_eta;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAux_phi;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAux_m;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAux_ptEM;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAux_etaEM;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAux_phiEM;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAux_mEM;   //!
   TBranch        *b_neutralTauPFO_eflowRecAux_bdtPi0Score;   //!
   TBranch        *b_neutralTauPFO_eflowRecAux_centerMag;   //!
   TBranch        *b_neutralTauPFO_eflowRecAux_charge;   //!
   TBranch        *b_neutralTauPFO_eflowRecAux_pt;   //!
   TBranch        *b_neutralTauPFO_eflowRecAux_eta;   //!
   TBranch        *b_neutralTauPFO_eflowRecAux_phi;   //!
   TBranch        *b_neutralTauPFO_eflowRecAux_m;   //!
   TBranch        *b_neutralTauPFO_eflowRecAux_ptEM;   //!
   TBranch        *b_neutralTauPFO_eflowRecAux_etaEM;   //!
   TBranch        *b_neutralTauPFO_eflowRecAux_phiEM;   //!
   TBranch        *b_neutralTauPFO_eflowRecAux_mEM;   //!
   TBranch        *b_MET_LocHadTopoAux_mpx;   //!
   TBranch        *b_MET_LocHadTopoAux_mpy;   //!
   TBranch        *b_MET_LocHadTopoAux_sumet;   //!
   TBranch        *b_MET_LocHadTopoAux_name;   //!
   TBranch        *b_MET_LocHadTopoRegionsAux_mpx;   //!
   TBranch        *b_MET_LocHadTopoRegionsAux_mpy;   //!
   TBranch        *b_MET_LocHadTopoRegionsAux_sumet;   //!
   TBranch        *b_MET_LocHadTopoRegionsAux_name;   //!
   TBranch        *b_MET_RefFinalAux_mpx;   //!
   TBranch        *b_MET_RefFinalAux_mpy;   //!
   TBranch        *b_MET_RefFinalAux_sumet;   //!
   TBranch        *b_MET_RefFinalAux_name;   //!
   TBranch        *b_MET_RefFinalRegionsAux_mpx;   //!
   TBranch        *b_MET_RefFinalRegionsAux_mpy;   //!
   TBranch        *b_MET_RefFinalRegionsAux_sumet;   //!
   TBranch        *b_MET_RefFinalRegionsAux_name;   //!
   TBranch        *b_MET_TrackAux_mpx;   //!
   TBranch        *b_MET_TrackAux_mpy;   //!
   TBranch        *b_MET_TrackAux_sumet;   //!
   TBranch        *b_MET_TrackAux_name;   //!
   TBranch        *b_MET_TruthAux_mpx;   //!
   TBranch        *b_MET_TruthAux_mpy;   //!
   TBranch        *b_MET_TruthAux_sumet;   //!
   TBranch        *b_MET_TruthAux_name;   //!
   TBranch        *b_MET_TruthRegionsAux_mpx;   //!
   TBranch        *b_MET_TruthRegionsAux_mpy;   //!
   TBranch        *b_MET_TruthRegionsAux_sumet;   //!
   TBranch        *b_MET_TruthRegionsAux_name;   //!
   TBranch        *b_MuonEntryLayerFilter;   //!
   TBranch        *b_MuonTruthParticle;   //!
   TBranch        *b_TruthParticle;   //!
   TBranch        *b_TruthVertex;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAux_SV0_significance3D;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAux_SV1_pb;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAux_SV1_pu;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAux_SV1_pc;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAux_IP2D_pb;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAux_IP2D_pu;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAux_IP2D_pc;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAux_IP3D_pb;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAux_IP3D_pu;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAux_IP3D_pc;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAux_JetFitter_pb;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAux_JetFitter_pu;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAux_JetFitter_pc;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAux_JetFitterCombNN_pb;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAux_JetFitterCombNN_pu;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAux_JetFitterCombNN_pc;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAux_MV1_discriminant;   //!
   TBranch        *b_BTagging_AntiKt10TruthAux_SV0_significance3D;   //!
   TBranch        *b_BTagging_AntiKt10TruthAux_SV1_pb;   //!
   TBranch        *b_BTagging_AntiKt10TruthAux_SV1_pu;   //!
   TBranch        *b_BTagging_AntiKt10TruthAux_SV1_pc;   //!
   TBranch        *b_BTagging_AntiKt10TruthAux_IP2D_pb;   //!
   TBranch        *b_BTagging_AntiKt10TruthAux_IP2D_pu;   //!
   TBranch        *b_BTagging_AntiKt10TruthAux_IP2D_pc;   //!
   TBranch        *b_BTagging_AntiKt10TruthAux_IP3D_pb;   //!
   TBranch        *b_BTagging_AntiKt10TruthAux_IP3D_pu;   //!
   TBranch        *b_BTagging_AntiKt10TruthAux_IP3D_pc;   //!
   TBranch        *b_BTagging_AntiKt10TruthAux_JetFitter_pb;   //!
   TBranch        *b_BTagging_AntiKt10TruthAux_JetFitter_pu;   //!
   TBranch        *b_BTagging_AntiKt10TruthAux_JetFitter_pc;   //!
   TBranch        *b_BTagging_AntiKt10TruthAux_JetFitterCombNN_pb;   //!
   TBranch        *b_BTagging_AntiKt10TruthAux_JetFitterCombNN_pu;   //!
   TBranch        *b_BTagging_AntiKt10TruthAux_JetFitterCombNN_pc;   //!
   TBranch        *b_BTagging_AntiKt10TruthAux_MV1_discriminant;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAux_SV0_significance3D;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAux_SV1_pb;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAux_SV1_pu;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAux_SV1_pc;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAux_IP2D_pb;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAux_IP2D_pu;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAux_IP2D_pc;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAux_IP3D_pb;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAux_IP3D_pu;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAux_IP3D_pc;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAux_JetFitter_pb;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAux_JetFitter_pu;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAux_JetFitter_pc;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAux_JetFitterCombNN_pb;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAux_JetFitterCombNN_pu;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAux_JetFitterCombNN_pc;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAux_MV1_discriminant;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAux_SV0_significance3D;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAux_SV1_pb;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAux_SV1_pu;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAux_SV1_pc;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAux_IP2D_pb;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAux_IP2D_pu;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAux_IP2D_pc;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAux_IP3D_pb;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAux_IP3D_pu;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAux_IP3D_pc;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAux_JetFitter_pb;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAux_JetFitter_pu;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAux_JetFitter_pc;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAux_JetFitterCombNN_pb;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAux_JetFitterCombNN_pu;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAux_JetFitterCombNN_pc;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAux_MV1_discriminant;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAux_SV0_significance3D;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAux_SV1_pb;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAux_SV1_pu;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAux_SV1_pc;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAux_IP2D_pb;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAux_IP2D_pu;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAux_IP2D_pc;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAux_IP3D_pb;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAux_IP3D_pu;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAux_IP3D_pc;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAux_JetFitter_pb;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAux_JetFitter_pu;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAux_JetFitter_pc;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAux_JetFitterCombNN_pb;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAux_JetFitterCombNN_pu;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAux_JetFitterCombNN_pc;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAux_MV1_discriminant;   //!
   TBranch        *b_BTagging_AntiKt4TruthAux_SV0_significance3D;   //!
   TBranch        *b_BTagging_AntiKt4TruthAux_SV1_pb;   //!
   TBranch        *b_BTagging_AntiKt4TruthAux_SV1_pu;   //!
   TBranch        *b_BTagging_AntiKt4TruthAux_SV1_pc;   //!
   TBranch        *b_BTagging_AntiKt4TruthAux_IP2D_pb;   //!
   TBranch        *b_BTagging_AntiKt4TruthAux_IP2D_pu;   //!
   TBranch        *b_BTagging_AntiKt4TruthAux_IP2D_pc;   //!
   TBranch        *b_BTagging_AntiKt4TruthAux_IP3D_pb;   //!
   TBranch        *b_BTagging_AntiKt4TruthAux_IP3D_pu;   //!
   TBranch        *b_BTagging_AntiKt4TruthAux_IP3D_pc;   //!
   TBranch        *b_BTagging_AntiKt4TruthAux_JetFitter_pb;   //!
   TBranch        *b_BTagging_AntiKt4TruthAux_JetFitter_pu;   //!
   TBranch        *b_BTagging_AntiKt4TruthAux_JetFitter_pc;   //!
   TBranch        *b_BTagging_AntiKt4TruthAux_JetFitterCombNN_pb;   //!
   TBranch        *b_BTagging_AntiKt4TruthAux_JetFitterCombNN_pu;   //!
   TBranch        *b_BTagging_AntiKt4TruthAux_JetFitterCombNN_pc;   //!
   TBranch        *b_BTagging_AntiKt4TruthAux_MV1_discriminant;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAux_SV0_significance3D;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAux_SV1_pb;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAux_SV1_pu;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAux_SV1_pc;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAux_IP2D_pb;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAux_IP2D_pu;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAux_IP2D_pc;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAux_IP3D_pb;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAux_IP3D_pu;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAux_IP3D_pc;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAux_JetFitter_pb;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAux_JetFitter_pu;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAux_JetFitter_pc;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAux_JetFitterCombNN_pb;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAux_JetFitterCombNN_pu;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAux_JetFitterCombNN_pc;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAux_MV1_discriminant;   //!
   TBranch        *b_AntiKt10LCTopoJets;   //!
   TBranch        *b_AntiKt10TruthJets;   //!
   TBranch        *b_AntiKt10TruthWZJets;   //!
   TBranch        *b_AntiKt3PV0TrackJets;   //!
   TBranch        *b_AntiKt3ZTrackJets;   //!
   TBranch        *b_AntiKt4EMTopoJets;   //!
   TBranch        *b_AntiKt4LCTopoJets;   //!
   TBranch        *b_AntiKt4PV0TrackJets;   //!
   TBranch        *b_AntiKt4TruthJets;   //!
   TBranch        *b_AntiKt4TruthWZJets;   //!
   TBranch        *b_AntiKt4ZTrackJets;   //!
   TBranch        *b_CamKt12LCTopoJets;   //!
   TBranch        *b_CamKt12TruthJets;   //!
   TBranch        *b_CamKt12TruthWZJets;   //!
   TBranch        *b_PhotonCollectionAux_convMatchDeltaEta1;   //!
   TBranch        *b_PhotonCollectionAux_convMatchDeltaEta2;   //!
   TBranch        *b_PhotonCollectionAux_convMatchDeltaPhi1;   //!
   TBranch        *b_PhotonCollectionAux_convMatchDeltaPhi2;   //!
   TBranch        *b_TruthVertexAux_id;   //!
   TBranch        *b_TruthVertexAux_barcode;   //!
   TBranch        *b_TruthVertexAux_x;   //!
   TBranch        *b_TruthVertexAux_y;   //!
   TBranch        *b_TruthVertexAux_z;   //!
   TBranch        *b_TruthVertexAux_t;   //!
   TBranch        *b_BTagging_AntiKt10LCTopo;   //!
   TBranch        *b_BTagging_AntiKt10Truth;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZ;   //!
   TBranch        *b_BTagging_AntiKt4EMTopo;   //!
   TBranch        *b_BTagging_AntiKt4LCTopo;   //!
   TBranch        *b_BTagging_AntiKt4Truth;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZ;   //!
   TBranch        *b_TruthEventAux_eventScale;   //!
   TBranch        *b_TruthEventAux_alphaQCD;   //!
   TBranch        *b_TruthEventAux_alphaQED;   //!
   TBranch        *b_TruthEventAux_crossSection;   //!
   TBranch        *b_TruthEventAux_crossSectionError;   //!
   TBranch        *b_CombinedMuonTrackParticles;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticles;   //!
   TBranch        *b_GSFTrackParticles;   //!
   TBranch        *b_InDetTrackParticles;   //!
   TBranch        *b_InDetTrackParticlesForward;   //!
   TBranch        *b_AntiKt10LCTopoJetsAux_pt;   //!
   TBranch        *b_AntiKt10LCTopoJetsAux_eta;   //!
   TBranch        *b_AntiKt10LCTopoJetsAux_phi;   //!
   TBranch        *b_AntiKt10LCTopoJetsAux_m;   //!
   TBranch        *b_AntiKt10TruthJetsAux_pt;   //!
   TBranch        *b_AntiKt10TruthJetsAux_eta;   //!
   TBranch        *b_AntiKt10TruthJetsAux_phi;   //!
   TBranch        *b_AntiKt10TruthJetsAux_m;   //!
   TBranch        *b_AntiKt10TruthWZJetsAux_pt;   //!
   TBranch        *b_AntiKt10TruthWZJetsAux_eta;   //!
   TBranch        *b_AntiKt10TruthWZJetsAux_phi;   //!
   TBranch        *b_AntiKt10TruthWZJetsAux_m;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAux_pt;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAux_eta;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAux_phi;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAux_m;   //!
   TBranch        *b_AntiKt3ZTrackJetsAux_pt;   //!
   TBranch        *b_AntiKt3ZTrackJetsAux_eta;   //!
   TBranch        *b_AntiKt3ZTrackJetsAux_phi;   //!
   TBranch        *b_AntiKt3ZTrackJetsAux_m;   //!
   TBranch        *b_AntiKt4EMTopoJetsAux_pt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAux_eta;   //!
   TBranch        *b_AntiKt4EMTopoJetsAux_phi;   //!
   TBranch        *b_AntiKt4EMTopoJetsAux_m;   //!
   TBranch        *b_AntiKt4LCTopoJetsAux_pt;   //!
   TBranch        *b_AntiKt4LCTopoJetsAux_eta;   //!
   TBranch        *b_AntiKt4LCTopoJetsAux_phi;   //!
   TBranch        *b_AntiKt4LCTopoJetsAux_m;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAux_pt;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAux_eta;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAux_phi;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAux_m;   //!
   TBranch        *b_AntiKt4TruthJetsAux_pt;   //!
   TBranch        *b_AntiKt4TruthJetsAux_eta;   //!
   TBranch        *b_AntiKt4TruthJetsAux_phi;   //!
   TBranch        *b_AntiKt4TruthJetsAux_m;   //!
   TBranch        *b_AntiKt4TruthWZJetsAux_pt;   //!
   TBranch        *b_AntiKt4TruthWZJetsAux_eta;   //!
   TBranch        *b_AntiKt4TruthWZJetsAux_phi;   //!
   TBranch        *b_AntiKt4TruthWZJetsAux_m;   //!
   TBranch        *b_AntiKt4ZTrackJetsAux_pt;   //!
   TBranch        *b_AntiKt4ZTrackJetsAux_eta;   //!
   TBranch        *b_AntiKt4ZTrackJetsAux_phi;   //!
   TBranch        *b_AntiKt4ZTrackJetsAux_m;   //!
   TBranch        *b_CamKt12LCTopoJetsAux_pt;   //!
   TBranch        *b_CamKt12LCTopoJetsAux_eta;   //!
   TBranch        *b_CamKt12LCTopoJetsAux_phi;   //!
   TBranch        *b_CamKt12LCTopoJetsAux_m;   //!
   TBranch        *b_CamKt12TruthJetsAux_pt;   //!
   TBranch        *b_CamKt12TruthJetsAux_eta;   //!
   TBranch        *b_CamKt12TruthJetsAux_phi;   //!
   TBranch        *b_CamKt12TruthJetsAux_m;   //!
   TBranch        *b_CamKt12TruthWZJetsAux_pt;   //!
   TBranch        *b_CamKt12TruthWZJetsAux_eta;   //!
   TBranch        *b_CamKt12TruthWZJetsAux_phi;   //!
   TBranch        *b_CamKt12TruthWZJetsAux_m;   //!
   TBranch        *b_CaloCalTopoClusterAux_time;   //!
   TBranch        *b_CaloCalTopoClusterAux_clusterSize;   //!
   TBranch        *b_CaloCalTopoClusterAux_eta0;   //!
   TBranch        *b_CaloCalTopoClusterAux_phi0;   //!
   TBranch        *b_CaloCalTopoClusterAux_rawE;   //!
   TBranch        *b_CaloCalTopoClusterAux_rawEta;   //!
   TBranch        *b_CaloCalTopoClusterAux_rawPhi;   //!
   TBranch        *b_CaloCalTopoClusterAux_rawM;   //!
   TBranch        *b_CaloCalTopoClusterAux_altE;   //!
   TBranch        *b_CaloCalTopoClusterAux_altEta;   //!
   TBranch        *b_CaloCalTopoClusterAux_altPhi;   //!
   TBranch        *b_CaloCalTopoClusterAux_altM;   //!
   TBranch        *b_CaloCalTopoClusterAux_calE;   //!
   TBranch        *b_CaloCalTopoClusterAux_calEta;   //!
   TBranch        *b_CaloCalTopoClusterAux_calPhi;   //!
   TBranch        *b_CaloCalTopoClusterAux_calM;   //!
   TBranch        *b_LArClusterEMFrwdAux_time;   //!
   TBranch        *b_LArClusterEMFrwdAux_clusterSize;   //!
   TBranch        *b_LArClusterEMFrwdAux_eta0;   //!
   TBranch        *b_LArClusterEMFrwdAux_phi0;   //!
   TBranch        *b_LArClusterEMFrwdAux_rawE;   //!
   TBranch        *b_LArClusterEMFrwdAux_rawEta;   //!
   TBranch        *b_LArClusterEMFrwdAux_rawPhi;   //!
   TBranch        *b_LArClusterEMFrwdAux_rawM;   //!
   TBranch        *b_LArClusterEMFrwdAux_altE;   //!
   TBranch        *b_LArClusterEMFrwdAux_altEta;   //!
   TBranch        *b_LArClusterEMFrwdAux_altPhi;   //!
   TBranch        *b_LArClusterEMFrwdAux_altM;   //!
   TBranch        *b_LArClusterEMFrwdAux_calE;   //!
   TBranch        *b_LArClusterEMFrwdAux_calEta;   //!
   TBranch        *b_LArClusterEMFrwdAux_calPhi;   //!
   TBranch        *b_LArClusterEMFrwdAux_calM;   //!
   TBranch        *b_egClusterCollectionAux_time;   //!
   TBranch        *b_egClusterCollectionAux_clusterSize;   //!
   TBranch        *b_egClusterCollectionAux_eta0;   //!
   TBranch        *b_egClusterCollectionAux_phi0;   //!
   TBranch        *b_egClusterCollectionAux_rawE;   //!
   TBranch        *b_egClusterCollectionAux_rawEta;   //!
   TBranch        *b_egClusterCollectionAux_rawPhi;   //!
   TBranch        *b_egClusterCollectionAux_rawM;   //!
   TBranch        *b_egClusterCollectionAux_altE;   //!
   TBranch        *b_egClusterCollectionAux_altEta;   //!
   TBranch        *b_egClusterCollectionAux_altPhi;   //!
   TBranch        *b_egClusterCollectionAux_altM;   //!
   TBranch        *b_egClusterCollectionAux_calE;   //!
   TBranch        *b_egClusterCollectionAux_calEta;   //!
   TBranch        *b_egClusterCollectionAux_calPhi;   //!
   TBranch        *b_egClusterCollectionAux_calM;   //!
   TBranch        *b_TauRecContainerAux_pt;   //!
   TBranch        *b_TauRecContainerAux_eta;   //!
   TBranch        *b_TauRecContainerAux_phi;   //!
   TBranch        *b_TauRecContainerAux_m;   //!
   TBranch        *b_TauRecContainerAux_ptJetSeed;   //!
   TBranch        *b_TauRecContainerAux_etaJetSeed;   //!
   TBranch        *b_TauRecContainerAux_phiJetSeed;   //!
   TBranch        *b_TauRecContainerAux_mJetSeed;   //!
   TBranch        *b_TauRecContainerAux_ptDetectorAxis;   //!
   TBranch        *b_TauRecContainerAux_etaDetectorAxis;   //!
   TBranch        *b_TauRecContainerAux_phiDetectorAxis;   //!
   TBranch        *b_TauRecContainerAux_mDetectorAxis;   //!
   TBranch        *b_TauRecContainerAux_ptIntermediateAxis;   //!
   TBranch        *b_TauRecContainerAux_etaIntermediateAxis;   //!
   TBranch        *b_TauRecContainerAux_phiIntermediateAxis;   //!
   TBranch        *b_TauRecContainerAux_mIntermediateAxis;   //!
   TBranch        *b_TauRecContainerAux_ptTauEnergyScale;   //!
   TBranch        *b_TauRecContainerAux_etaTauEnergyScale;   //!
   TBranch        *b_TauRecContainerAux_phiTauEnergyScale;   //!
   TBranch        *b_TauRecContainerAux_mTauEnergyScale;   //!
   TBranch        *b_TauRecContainerAux_ptTauEtaCalib;   //!
   TBranch        *b_TauRecContainerAux_etaTauEtaCalib;   //!
   TBranch        *b_TauRecContainerAux_phiTauEtaCalib;   //!
   TBranch        *b_TauRecContainerAux_mTauEtaCalib;   //!
   TBranch        *b_TauRecContainerAux_ptPanTauEFlowRecProto;   //!
   TBranch        *b_TauRecContainerAux_etaPanTauEFlowRecProto;   //!
   TBranch        *b_TauRecContainerAux_phiPanTauEFlowRecProto;   //!
   TBranch        *b_TauRecContainerAux_mPanTauEFlowRecProto;   //!
   TBranch        *b_TauRecContainerAux_ptPanTauEFlowRec;   //!
   TBranch        *b_TauRecContainerAux_etaPanTauEFlowRec;   //!
   TBranch        *b_TauRecContainerAux_phiPanTauEFlowRec;   //!
   TBranch        *b_TauRecContainerAux_mPanTauEFlowRec;   //!
   TBranch        *b_TauRecContainerAux_ptPanTauCellBasedProto;   //!
   TBranch        *b_TauRecContainerAux_etaPanTauCellBasedProto;   //!
   TBranch        *b_TauRecContainerAux_phiPanTauCellBasedProto;   //!
   TBranch        *b_TauRecContainerAux_mPanTauCellBasedProto;   //!
   TBranch        *b_TauRecContainerAux_ptPanTauCellBased;   //!
   TBranch        *b_TauRecContainerAux_etaPanTauCellBased;   //!
   TBranch        *b_TauRecContainerAux_phiPanTauCellBased;   //!
   TBranch        *b_TauRecContainerAux_mPanTauCellBased;   //!
   TBranch        *b_TauRecContainerAux_ROIWord;   //!
   TBranch        *b_TauRecContainerAux_charge;   //!
   TBranch        *b_TauRecContainerAux_vetoFlags;   //!
   TBranch        *b_TauRecContainerAux_isTauFlags;   //!
   TBranch        *b_TauRecContainerAux_Likelihood;   //!
   TBranch        *b_TauRecContainerAux_SafeLikelihood;   //!
   TBranch        *b_TauRecContainerAux_BDTJetScore;   //!
   TBranch        *b_TauRecContainerAux_BDTEleScore;   //!
   TBranch        *b_TauRecContainerAux_PanTauScore;   //!
   TBranch        *b_TauRecContainerAux_BDTJetScoreSigTrans;   //!
   TBranch        *b_TauRecContainerAux_BDTJetScoreBkgTrans;   //!
   TBranch        *b_TauRecContainerAux_trackFilterProngs;   //!
   TBranch        *b_TauRecContainerAux_trackFilterQuality;   //!
   TBranch        *b_TauRecContainerAux_pi0ConeDR;   //!
   TBranch        *b_TauRecContainerAux_ipZ0SinThetaSigLeadTrk;   //!
   TBranch        *b_TauRecContainerAux_etOverPtLeadTrk;   //!
   TBranch        *b_TauRecContainerAux_leadTrkPt;   //!
   TBranch        *b_TauRecContainerAux_ipSigLeadTrk;   //!
   TBranch        *b_TauRecContainerAux_massTrkSys;   //!
   TBranch        *b_TauRecContainerAux_trkWidth2;   //!
   TBranch        *b_TauRecContainerAux_trFlightPathSig;   //!
   TBranch        *b_TauRecContainerAux_ele_E237E277;   //!
   TBranch        *b_TauRecContainerAux_ele_PresamplerFraction;   //!
   TBranch        *b_TauRecContainerAux_ele_ECALFirstFraction;   //!
   TBranch        *b_TauRecContainerAux_numCells;   //!
   TBranch        *b_TauRecContainerAux_numTopoClusters;   //!
   TBranch        *b_TauRecContainerAux_numEffTopoClusters;   //!
   TBranch        *b_TauRecContainerAux_topoInvMass;   //!
   TBranch        *b_TauRecContainerAux_effTopoInvMass;   //!
   TBranch        *b_TauRecContainerAux_topoMeanDeltaR;   //!
   TBranch        *b_TauRecContainerAux_effTopoMeanDeltaR;   //!
   TBranch        *b_TauRecContainerAux_EMRadius;   //!
   TBranch        *b_TauRecContainerAux_hadRadius;   //!
   TBranch        *b_TauRecContainerAux_etEMAtEMScale;   //!
   TBranch        *b_TauRecContainerAux_etHadAtEMScale;   //!
   TBranch        *b_TauRecContainerAux_isolFrac;   //!
   TBranch        *b_TauRecContainerAux_centFrac;   //!
   TBranch        *b_TauRecContainerAux_stripWidth2;   //!
   TBranch        *b_TauRecContainerAux_nStrip;   //!
   TBranch        *b_TauRecContainerAux_etEMCalib;   //!
   TBranch        *b_TauRecContainerAux_etHadCalib;   //!
   TBranch        *b_TauRecContainerAux_seedCalo_eta;   //!
   TBranch        *b_TauRecContainerAux_seedCalo_phi;   //!
   TBranch        *b_TauRecContainerAux_trkAvgDist;   //!
   TBranch        *b_TauRecContainerAux_trkRmsDist;   //!
   TBranch        *b_TauRecContainerAux_lead2ClusterEOverAllClusterE;   //!
   TBranch        *b_TauRecContainerAux_lead3ClusterEOverAllClusterE;   //!
   TBranch        *b_TauRecContainerAux_caloIso;   //!
   TBranch        *b_TauRecContainerAux_caloIsoCorrected;   //!
   TBranch        *b_TauRecContainerAux_dRmax;   //!
   TBranch        *b_TauRecContainerAux_secMaxStripEt;   //!
   TBranch        *b_TauRecContainerAux_sumEMCellEtOverLeadTrkPt;   //!
   TBranch        *b_TauRecContainerAux_hadLeakEt;   //!
   TBranch        *b_TauRecContainerAux_EM_TES_scale;   //!
   TBranch        *b_TauRecContainerAux_LC_TES_precalib;   //!
   TBranch        *b_TauRecContainerAux_TESOffset;   //!
   TBranch        *b_TauRecContainerAux_TESCalibConstant;   //!
   TBranch        *b_TauRecContainerAux_cellBasedEnergyRing1;   //!
   TBranch        *b_TauRecContainerAux_cellBasedEnergyRing2;   //!
   TBranch        *b_TauRecContainerAux_cellBasedEnergyRing3;   //!
   TBranch        *b_TauRecContainerAux_cellBasedEnergyRing4;   //!
   TBranch        *b_TauRecContainerAux_cellBasedEnergyRing5;   //!
   TBranch        *b_TauRecContainerAux_cellBasedEnergyRing6;   //!
   TBranch        *b_TauRecContainerAux_cellBasedEnergyRing7;   //!
   TBranch        *b_TauRecContainerAux_TRT_NHT_OVER_NLT;   //!
   TBranch        *b_TauRecContainerAux_TauJetVtxFraction;   //!
   TBranch        *b_TauRecContainerAux_etEflow;   //!
   TBranch        *b_TauRecContainerAux_mEflow;   //!
   TBranch        *b_TauRecContainerAux_ptRatioEflow;   //!
   TBranch        *b_TauRecContainerAux_nPi0;   //!
   TBranch        *b_TauRecContainerAux_nCharged;   //!
   TBranch        *b_TauRecContainerAux_etEflowTopo;   //!
   TBranch        *b_TauRecContainerAux_mEflowTopo;   //!
   TBranch        *b_TauRecContainerAux_ptRatioEflowTopo;   //!
   TBranch        *b_TauRecContainerAux_nPi0Topo;   //!
   TBranch        *b_TauRecContainerAux_nChargedTopo;   //!
   TBranch        *b_TauRecContainerAux_PSSFraction;   //!
   TBranch        *b_TauRecContainerAux_ChPiEMEOverCaloEME;   //!
   TBranch        *b_TauRecContainerAux_EMPOverTrkSysP;   //!
   TBranch        *b_TauRecContainerAux_pantau_CellBasedInput_isPanTauCandidate;   //!
   TBranch        *b_TauRecContainerAux_pantau_CellBasedInput_DecayModeProto;   //!
   TBranch        *b_TauRecContainerAux_pantau_CellBasedInput_DecayMode;   //!
   TBranch        *b_TauRecContainerAux_pantau_CellBasedInput_BDTValue_1p0n_vs_1p1n;   //!
   TBranch        *b_TauRecContainerAux_pantau_CellBasedInput_BDTValue_1p1n_vs_1pXn;   //!
   TBranch        *b_TauRecContainerAux_pantau_CellBasedInput_BDTValue_3p0n_vs_3pXn;   //!
   TBranch        *b_TauRecContainerAux_pantau_CellBasedInput_BDTVar_Basic_NNeutralConsts;   //!
   TBranch        *b_TauRecContainerAux_pantau_CellBasedInput_BDTVar_Charged_JetMoment_EtDRxTotalEt;   //!
   TBranch        *b_TauRecContainerAux_pantau_CellBasedInput_BDTVar_Charged_StdDev_Et_WrtEtAllConsts;   //!
   TBranch        *b_TauRecContainerAux_pantau_CellBasedInput_BDTVar_Neutral_HLV_SumM;   //!
   TBranch        *b_TauRecContainerAux_pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_1;   //!
   TBranch        *b_TauRecContainerAux_pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2;   //!
   TBranch        *b_TauRecContainerAux_pantau_CellBasedInput_BDTVar_Neutral_Ratio_1stBDTEtOverEtAllConsts;   //!
   TBranch        *b_TauRecContainerAux_pantau_CellBasedInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts;   //!
   TBranch        *b_TauRecContainerAux_pantau_CellBasedInput_BDTVar_Neutral_Shots_NPhotonsInSeed;   //!
   TBranch        *b_TauRecContainerAux_pantau_CellBasedInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged;   //!
   TBranch        *b_TauRecContainerAux_pantau_eflowRecInput_isPanTauCandidate;   //!
   TBranch        *b_TauRecContainerAux_pantau_eflowRecInput_DecayModeProto;   //!
   TBranch        *b_TauRecContainerAux_pantau_eflowRecInput_DecayMode;   //!
   TBranch        *b_TauRecContainerAux_pantau_eflowRecInput_BDTValue_1p0n_vs_1p1n;   //!
   TBranch        *b_TauRecContainerAux_pantau_eflowRecInput_BDTValue_1p1n_vs_1pXn;   //!
   TBranch        *b_TauRecContainerAux_pantau_eflowRecInput_BDTValue_3p0n_vs_3pXn;   //!
   TBranch        *b_TauRecContainerAux_pantau_eflowRecInput_BDTVar_Basic_NPi0NeutConsts;   //!
   TBranch        *b_TauRecContainerAux_pantau_eflowRecInput_BDTVar_Basic_NNeutralConsts;   //!
   TBranch        *b_TauRecContainerAux_pantau_eflowRecInput_BDTVar_Charged_HLV_SumPt;   //!
   TBranch        *b_TauRecContainerAux_pantau_eflowRecInput_BDTVar_Charged_Ratio_EtOverEtAllConsts;   //!
   TBranch        *b_TauRecContainerAux_pantau_eflowRecInput_BDTVar_Neutral_HLV_SumM;   //!
   TBranch        *b_TauRecContainerAux_pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_EtSort_1;   //!
   TBranch        *b_TauRecContainerAux_pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2;   //!
   TBranch        *b_TauRecContainerAux_pantau_eflowRecInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts;   //!
   TBranch        *b_TauRecContainerAux_pantau_eflowRecInput_BDTVar_Neutral_Mean_DRToLeading_WrtEtAllConsts;   //!
   TBranch        *b_TauRecContainerAux_pantau_eflowRecInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged;   //!
   TBranch        *b_LArCalibrationHitActive;   //!
   TBranch        *b_LArCalibrationHitDeadMaterial;   //!
   TBranch        *b_LArCalibrationHitInactive;   //!
   TBranch        *b_GSFConversionVerticesAux_chiSquared;   //!
   TBranch        *b_GSFConversionVerticesAux_numberDoF;   //!
   TBranch        *b_GSFConversionVerticesAux_x;   //!
   TBranch        *b_GSFConversionVerticesAux_y;   //!
   TBranch        *b_GSFConversionVerticesAux_z;   //!
   TBranch        *b_GSFConversionVerticesAux_vertexType;   //!
   TBranch        *b_PrimaryVerticesAux_chiSquared;   //!
   TBranch        *b_PrimaryVerticesAux_numberDoF;   //!
   TBranch        *b_PrimaryVerticesAux_x;   //!
   TBranch        *b_PrimaryVerticesAux_y;   //!
   TBranch        *b_PrimaryVerticesAux_z;   //!
   TBranch        *b_PrimaryVerticesAux_vertexType;   //!
   TBranch        *b_TauSecondaryVertexContainerAux_chiSquared;   //!
   TBranch        *b_TauSecondaryVertexContainerAux_numberDoF;   //!
   TBranch        *b_TauSecondaryVertexContainerAux_x;   //!
   TBranch        *b_TauSecondaryVertexContainerAux_y;   //!
   TBranch        *b_TauSecondaryVertexContainerAux_z;   //!
   TBranch        *b_TauSecondaryVertexContainerAux_vertexType;   //!
   TBranch        *b_MuonSegmentsAux_x;   //!
   TBranch        *b_MuonSegmentsAux_y;   //!
   TBranch        *b_MuonSegmentsAux_z;   //!
   TBranch        *b_MuonSegmentsAux_px;   //!
   TBranch        *b_MuonSegmentsAux_py;   //!
   TBranch        *b_MuonSegmentsAux_pz;   //!
   TBranch        *b_MuonSegmentsAux_t0;   //!
   TBranch        *b_MuonSegmentsAux_t0error;   //!
   TBranch        *b_MuonSegmentsAux_chiSquared;   //!
   TBranch        *b_MuonSegmentsAux_numberDoF;   //!
   TBranch        *b_MuonSegmentsAux_sector;   //!
   TBranch        *b_MuonSegmentsAux_chamberIndex;   //!
   TBranch        *b_MuonSegmentsAux_etaIndex;   //!
   TBranch        *b_MuonSegmentsAux_technology;   //!
   TBranch        *b_MuonSegmentsAux_nPrecisionHits;   //!
   TBranch        *b_MuonSegmentsAux_nPhiLayers;   //!
   TBranch        *b_MuonSegmentsAux_nTrigEtaLayers;   //!
   TBranch        *b_MuonCaloEnergyCollection;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_N90Constituents;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_NegativeE;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_NumTrkPt1000;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_NumTrkPt500;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_OotFracClusters10;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_OotFracClusters5;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_PlanarFlow;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_Sphericity;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_Split12;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_Split23;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_Split34;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_SumPtTrkPt1000;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_SumPtTrkPt500;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_Tau1;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_Tau2;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_Tau3;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_ThrustMaj;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_ThrustMin;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_Timing;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_Track;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_TrackCount;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_TrackPt;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_TrackWidthPt1000;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_TrackWidthPt500;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_Truth;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_TruthCount;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_TruthLabelDeltaR_B;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_TruthLabelDeltaR_C;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_ConstituentScale;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_TruthLabelDeltaR_T;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_JetEMScaleMomentum_pt;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_TruthLabelID;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_JetEMScaleMomentum_eta;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_TruthPt;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_JetEMScaleMomentum_phi;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_TruthWZ;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_JetEMScaleMomentum_m;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_TruthWZCount;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_TruthWZPt;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_Width;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_ZCut12;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_ZCut23;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_InputType;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_ZCut34;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_AlgorithmType;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_SizeParameter;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_btaggingLink_;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_btaggingLink_m_persKey;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_btaggingLink_m_persIndex;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_ActiveArea;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_ActiveArea4vec_eta;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_ActiveArea4vec_m;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_ActiveArea4vec_phi;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_ActiveArea4vec_pt;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_Angularity;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_Aplanarity;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_AverageLArQF;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_BchCorrCell;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_CentroidR;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_Dip12;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_Dip13;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_Dip23;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_DipExcl12;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_ECF1;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_ECF2;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_ECF3;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_EMFrac;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_EMTopo;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_EMTopoCount;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_EMTopoPt;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_EnergyPerSampling;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_FoxWolfram0;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_FoxWolfram1;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_FoxWolfram2;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_FoxWolfram3;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_FoxWolfram4;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_FracSamplingMax;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_FracSamplingMaxIndex;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_GhostAntiKt3TrackJet;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_GhostAntiKt3TrackJetCount;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_GhostAntiKt3TrackJetPt;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_GhostAntiKt4TrackJet;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_GhostAntiKt4TrackJetCount;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_GhostAntiKt4TrackJetPt;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_GhostMuonSegment;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_GhostMuonSegmentCount;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_GhostTrack;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_GhostTrackCount;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_GhostTrackPt;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_GhostTruth;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_GhostTruthAssociationFraction;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_GhostTruthAssociationLink_;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_GhostTruthAssociationLink_m_persKey;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_GhostTruthAssociationLink_m_persIndex;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_GhostTruthCount;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_GhostTruthPt;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_HECFrac;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_HECQuality;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_HighestJVFVtx_;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_HighestJVFVtx_m_persKey;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_HighestJVFVtx_m_persIndex;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_JVF;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_JetGhostArea;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_KtDR;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_LArQuality;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_LCTopo;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_LCTopoCount;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_LCTopoPt;   //!
   TBranch        *b_AntiKt10LCTopoJetsAuxDyn_Mu12;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_JetGhostArea;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_KtDR;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_Mu12;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_PlanarFlow;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_Sphericity;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_Split12;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_Split23;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_Split34;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_ConstituentScale;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_Tau1;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_Tau2;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_Tau3;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_ThrustMaj;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_ThrustMin;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_InputType;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_AlgorithmType;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_SizeParameter;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_Truth;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_btaggingLink_;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_btaggingLink_m_persKey;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_btaggingLink_m_persIndex;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_TruthCount;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_TruthLabelDeltaR_B;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_TruthLabelDeltaR_C;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_TruthLabelDeltaR_T;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_TruthLabelID;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_TruthPt;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_TruthWZ;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_TruthWZCount;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_TruthWZPt;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_Width;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_ZCut12;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_ZCut23;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_ZCut34;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_Angularity;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_Aplanarity;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_Dip12;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_Dip13;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_Dip23;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_DipExcl12;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_ECF1;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_ECF2;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_ECF3;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_FoxWolfram0;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_FoxWolfram1;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_FoxWolfram2;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_FoxWolfram3;   //!
   TBranch        *b_AntiKt10TruthJetsAuxDyn_FoxWolfram4;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_JetGhostArea;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_KtDR;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_Mu12;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_PlanarFlow;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_Sphericity;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_Split12;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_Split23;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_Split34;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_ConstituentScale;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_Tau1;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_Tau2;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_Tau3;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_ThrustMaj;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_ThrustMin;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_InputType;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_AlgorithmType;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_SizeParameter;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_Truth;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_btaggingLink_;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_btaggingLink_m_persKey;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_btaggingLink_m_persIndex;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_TruthCount;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_TruthLabelDeltaR_B;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_TruthLabelDeltaR_C;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_TruthLabelDeltaR_T;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_TruthLabelID;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_TruthPt;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_TruthWZ;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_TruthWZCount;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_TruthWZPt;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_Width;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_ZCut12;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_ZCut23;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_ZCut34;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_Angularity;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_Aplanarity;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_Dip12;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_Dip13;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_Dip23;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_DipExcl12;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_ECF1;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_ECF2;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_ECF3;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_FoxWolfram0;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_FoxWolfram1;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_FoxWolfram2;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_FoxWolfram3;   //!
   TBranch        *b_AntiKt10TruthWZJetsAuxDyn_FoxWolfram4;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_GhostTruthCount;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_GhostTruthPt;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_JetGhostArea;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_KtDR;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_Mu12;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_PlanarFlow;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_Sphericity;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_Split12;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_Split23;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_Split34;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_ConstituentScale;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_Tau1;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_Tau2;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_Tau3;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_ThrustMaj;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_ThrustMin;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_Track;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_TrackCount;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_InputType;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_TrackPt;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_AlgorithmType;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_SizeParameter;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_Truth;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_TruthCount;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_TruthPt;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_TruthWZ;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_TruthWZCount;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_TruthWZPt;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_Width;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_ZCut12;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_ZCut23;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_ZCut34;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_OriginVertex_;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_OriginVertex_m_persKey;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_OriginVertex_m_persIndex;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_Angularity;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_Aplanarity;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_Dip12;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_Dip13;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_Dip23;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_DipExcl12;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_ECF1;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_ECF2;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_ECF3;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_FoxWolfram0;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_FoxWolfram1;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_FoxWolfram2;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_FoxWolfram3;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_FoxWolfram4;   //!
   TBranch        *b_AntiKt3PV0TrackJetsAuxDyn_GhostTruth;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_GhostTruthCount;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_GhostTruthPt;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_JetGhostArea;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_KtDR;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_Mu12;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_PlanarFlow;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_Sphericity;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_Split12;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_Split23;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_Split34;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_ConstituentScale;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_Tau1;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_Tau2;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_Tau3;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_ThrustMaj;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_ThrustMin;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_Track;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_TrackCount;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_InputType;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_TrackPt;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_AlgorithmType;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_SizeParameter;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_Truth;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_TruthCount;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_TruthPt;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_TruthWZ;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_TruthWZCount;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_TruthWZPt;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_Width;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_ZCut12;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_ZCut23;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_ZCut34;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_OriginVertex_;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_OriginVertex_m_persKey;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_OriginVertex_m_persIndex;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_Angularity;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_Aplanarity;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_Dip12;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_Dip13;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_Dip23;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_DipExcl12;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_ECF1;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_ECF2;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_ECF3;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_FoxWolfram0;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_FoxWolfram1;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_FoxWolfram2;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_FoxWolfram3;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_FoxWolfram4;   //!
   TBranch        *b_AntiKt3ZTrackJetsAuxDyn_GhostTruth;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_N90Constituents;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_NegativeE;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_NumTrkPt1000;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_NumTrkPt500;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_OotFracClusters10;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_OotFracClusters5;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_PlanarFlow;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_Sphericity;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_Split12;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_Split23;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_Split34;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_SumPtTrkPt1000;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_SumPtTrkPt500;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_Tau1;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_Tau2;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_Tau3;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ThrustMaj;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ThrustMin;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_Timing;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_Track;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_TrackCount;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_TrackPt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_TrackWidthPt1000;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_TrackWidthPt500;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_Truth;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_TruthCount;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_TruthLabelDeltaR_B;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_TruthLabelDeltaR_C;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ConstituentScale;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_TruthLabelDeltaR_T;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JetEMScaleMomentum_pt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_TruthLabelID;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JetEMScaleMomentum_eta;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_TruthPt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JetEMScaleMomentum_phi;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_TruthWZ;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JetEMScaleMomentum_m;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_TruthWZCount;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_TruthWZPt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_Width;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ZCut12;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ZCut23;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_InputType;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ZCut34;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_AlgorithmType;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_SizeParameter;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_btaggingLink_;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_btaggingLink_m_persKey;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_btaggingLink_m_persIndex;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ActiveArea;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_eta;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_m;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_phi;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_pt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_Angularity;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_Aplanarity;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_AverageLArQF;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_BchCorrCell;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_CentroidR;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_Dip12;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_Dip13;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_Dip23;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_DipExcl12;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ECF1;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ECF2;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_ECF3;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_EMFrac;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_EMTopo;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_EMTopoCount;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_EMTopoPt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_EnergyPerSampling;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_FoxWolfram0;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_FoxWolfram1;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_FoxWolfram2;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_FoxWolfram3;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_FoxWolfram4;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_FracSamplingMax;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_FracSamplingMaxIndex;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostAntiKt3TrackJet;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostAntiKt3TrackJetCount;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostAntiKt3TrackJetPt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostAntiKt4TrackJet;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostAntiKt4TrackJetCount;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostAntiKt4TrackJetPt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostMuonSegment;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostMuonSegmentCount;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostTrack;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostTrackCount;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostTrackPt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostTruth;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostTruthAssociationFraction;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostTruthAssociationLink_;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostTruthAssociationLink_m_persKey;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostTruthAssociationLink_m_persIndex;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostTruthCount;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_GhostTruthPt;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_HECFrac;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_HECQuality;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_HighestJVFVtx_;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_HighestJVFVtx_m_persKey;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_HighestJVFVtx_m_persIndex;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JVF;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_JetGhostArea;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_KtDR;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_LArQuality;   //!
   TBranch        *b_AntiKt4EMTopoJetsAuxDyn_Mu12;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_N90Constituents;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_NegativeE;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_NumTrkPt1000;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_NumTrkPt500;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_OotFracClusters10;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_OotFracClusters5;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_PlanarFlow;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_Sphericity;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_Split12;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_Split23;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_Split34;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_SumPtTrkPt1000;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_SumPtTrkPt500;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_Tau1;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_Tau2;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_Tau3;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_ThrustMaj;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_ThrustMin;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_Timing;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_Track;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_TrackCount;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_TrackPt;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_TrackWidthPt1000;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_TrackWidthPt500;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_Truth;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_TruthCount;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_TruthLabelDeltaR_B;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_TruthLabelDeltaR_C;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_ConstituentScale;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_TruthLabelDeltaR_T;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_JetEMScaleMomentum_pt;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_TruthLabelID;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_JetEMScaleMomentum_eta;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_TruthPt;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_JetEMScaleMomentum_phi;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_TruthWZ;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_JetEMScaleMomentum_m;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_TruthWZCount;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_TruthWZPt;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_Width;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_ZCut12;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_ZCut23;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_InputType;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_ZCut34;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_AlgorithmType;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_SizeParameter;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_btaggingLink_;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_btaggingLink_m_persKey;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_btaggingLink_m_persIndex;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_ActiveArea;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_ActiveArea4vec_eta;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_ActiveArea4vec_m;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_ActiveArea4vec_phi;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_ActiveArea4vec_pt;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_Angularity;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_Aplanarity;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_AverageLArQF;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_BchCorrCell;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_CentroidR;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_Dip12;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_Dip13;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_Dip23;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_DipExcl12;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_ECF1;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_ECF2;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_ECF3;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_EMFrac;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_EMTopo;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_EMTopoCount;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_EMTopoPt;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_EnergyPerSampling;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_FoxWolfram0;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_FoxWolfram1;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_FoxWolfram2;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_FoxWolfram3;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_FoxWolfram4;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_FracSamplingMax;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_FracSamplingMaxIndex;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_GhostAntiKt3TrackJet;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_GhostAntiKt3TrackJetCount;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_GhostAntiKt3TrackJetPt;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_GhostAntiKt4TrackJet;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_GhostAntiKt4TrackJetCount;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_GhostAntiKt4TrackJetPt;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_GhostMuonSegment;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_GhostMuonSegmentCount;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_GhostTrack;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_GhostTrackCount;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_GhostTrackPt;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_GhostTruth;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_GhostTruthAssociationFraction;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_GhostTruthAssociationLink_;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_GhostTruthAssociationLink_m_persKey;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_GhostTruthAssociationLink_m_persIndex;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_GhostTruthCount;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_GhostTruthPt;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_HECFrac;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_HECQuality;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_HighestJVFVtx_;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_HighestJVFVtx_m_persKey;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_HighestJVFVtx_m_persIndex;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_JVF;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_JetGhostArea;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_KtDR;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_LArQuality;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_LCTopo;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_LCTopoCount;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_LCTopoPt;   //!
   TBranch        *b_AntiKt4LCTopoJetsAuxDyn_Mu12;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_GhostTruthCount;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_GhostTruthPt;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_JetGhostArea;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_KtDR;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_Mu12;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_PlanarFlow;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_Sphericity;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_Split12;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_Split23;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_Split34;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_ConstituentScale;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_Tau1;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_Tau2;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_Tau3;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_ThrustMaj;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_ThrustMin;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_Track;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_TrackCount;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_InputType;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_TrackPt;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_AlgorithmType;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_SizeParameter;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_Truth;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_TruthCount;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_TruthPt;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_TruthWZ;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_TruthWZCount;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_TruthWZPt;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_Width;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_ZCut12;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_ZCut23;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_ZCut34;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_OriginVertex_;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_OriginVertex_m_persKey;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_OriginVertex_m_persIndex;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_Angularity;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_Aplanarity;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_Dip12;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_Dip13;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_Dip23;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_DipExcl12;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_ECF1;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_ECF2;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_ECF3;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_FoxWolfram0;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_FoxWolfram1;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_FoxWolfram2;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_FoxWolfram3;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_FoxWolfram4;   //!
   TBranch        *b_AntiKt4PV0TrackJetsAuxDyn_GhostTruth;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_Tau2;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_FoxWolfram1;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_Tau3;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_FoxWolfram2;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ThrustMaj;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_FoxWolfram3;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ThrustMin;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_FoxWolfram4;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_Truth;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_TruthCount;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_B;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_C;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_T;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_TruthLabelID;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_TruthPt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_Width;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ZCut12;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ZCut23;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ZCut34;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_JetGhostArea;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_KtDR;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ConstituentScale;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_Angularity;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_Aplanarity;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_Mu12;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_Dip12;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_Dip13;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_InputType;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_Dip23;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_AlgorithmType;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_DipExcl12;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_SizeParameter;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ECF1;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_PlanarFlow;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ECF2;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_btaggingLink_;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_btaggingLink_m_persKey;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_btaggingLink_m_persIndex;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_Sphericity;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_ECF3;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_Split12;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_Split23;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_Split34;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_Tau1;   //!
   TBranch        *b_AntiKt4TruthJetsAuxDyn_FoxWolfram0;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_JetGhostArea;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_KtDR;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_Mu12;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_PlanarFlow;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_Sphericity;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_Split12;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_Split23;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_Split34;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_ConstituentScale;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_Tau1;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_Tau2;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_Tau3;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_ThrustMaj;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_ThrustMin;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_InputType;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_AlgorithmType;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_SizeParameter;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_Truth;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_btaggingLink_;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_btaggingLink_m_persKey;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_btaggingLink_m_persIndex;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_TruthCount;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_TruthLabelDeltaR_B;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_TruthLabelDeltaR_C;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_TruthLabelDeltaR_T;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_TruthLabelID;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_TruthPt;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_TruthWZ;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_TruthWZCount;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_TruthWZPt;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_Width;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_ZCut12;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_ZCut23;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_ZCut34;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_Angularity;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_Aplanarity;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_Dip12;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_Dip13;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_Dip23;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_DipExcl12;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_ECF1;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_ECF2;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_ECF3;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_FoxWolfram0;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_FoxWolfram1;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_FoxWolfram2;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_FoxWolfram3;   //!
   TBranch        *b_AntiKt4TruthWZJetsAuxDyn_FoxWolfram4;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_GhostTruthCount;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_GhostTruthPt;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_JetGhostArea;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_KtDR;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_Mu12;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_PlanarFlow;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_Sphericity;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_Split12;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_Split23;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_Split34;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_ConstituentScale;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_Tau1;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_Tau2;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_Tau3;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_ThrustMaj;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_ThrustMin;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_Track;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_TrackCount;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_InputType;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_TrackPt;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_AlgorithmType;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_SizeParameter;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_Truth;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_TruthCount;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_TruthPt;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_TruthWZ;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_TruthWZCount;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_TruthWZPt;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_Width;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_ZCut12;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_ZCut23;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_ZCut34;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_OriginVertex_;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_OriginVertex_m_persKey;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_OriginVertex_m_persIndex;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_Angularity;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_Aplanarity;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_Dip12;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_Dip13;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_Dip23;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_DipExcl12;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_ECF1;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_ECF2;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_ECF3;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_FoxWolfram0;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_FoxWolfram1;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_FoxWolfram2;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_FoxWolfram3;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_FoxWolfram4;   //!
   TBranch        *b_AntiKt4ZTrackJetsAuxDyn_GhostTruth;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_BTagTrackToJetAssociator;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_IP2D_flagFromV0ofTracks;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_IP2D_gradeOfTracks;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_SV0_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_IP2D_sigD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_IP2D_valD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_SV1_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_IP2D_weightBofTracks;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_IP2D_weightCofTracks;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_IP2D_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_IP2D_weightUofTracks;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_IP3D_flagFromV0ofTracks;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_IP3D_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_IP3D_gradeOfTracks;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_IP3D_sigD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_IP3D_sigZ0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_IP3D_valD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_IP3D_valZ0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_IP3D_weightBofTracks;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_IP3D_weightCofTracks;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_IP3D_weightUofTracks;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_SV0_N2Tpair;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_SV0_NGTinSvx;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_SV0_badTracksIP;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_SV0_efracsvx;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_SV0_energyTrkInJet;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_SV0_masssvx;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_SV0_normdist;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_SV0_pb;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_SV0_pc;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_SV0_pu;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_SV0_vertices;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_SV1_N2Tpair;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_SV1_NGTinSvx;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_SV1_badTracksIP;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_SV1_efracsvx;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_SV1_energyTrkInJet;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_SV1_masssvx;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_SV1_normdist;   //!
   TBranch        *b_BTagging_AntiKt10LCTopoAuxDyn_SV1_vertices;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_BTagTrackToJetAssociator;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_IP2D_flagFromV0ofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_IP2D_gradeOfTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_SV0_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_IP2D_sigD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_IP2D_valD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_SV1_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_IP2D_weightBofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_IP2D_weightCofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_IP2D_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_IP2D_weightUofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_IP3D_flagFromV0ofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_IP3D_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_IP3D_gradeOfTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_IP3D_sigD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_IP3D_sigZ0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_IP3D_valD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_IP3D_valZ0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_IP3D_weightBofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_IP3D_weightCofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_IP3D_weightUofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_SV0_N2Tpair;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_SV0_NGTinSvx;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_SV0_badTracksIP;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_SV0_efracsvx;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_SV0_energyTrkInJet;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_SV0_masssvx;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_SV0_normdist;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_SV0_pb;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_SV0_pc;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_SV0_pu;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_SV0_vertices;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_SV1_N2Tpair;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_SV1_NGTinSvx;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_SV1_badTracksIP;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_SV1_efracsvx;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_SV1_energyTrkInJet;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_SV1_masssvx;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_SV1_normdist;   //!
   TBranch        *b_BTagging_AntiKt10TruthAuxDyn_SV1_vertices;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_BTagTrackToJetAssociator;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_IP2D_flagFromV0ofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_IP2D_gradeOfTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_SV0_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_IP2D_sigD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_IP2D_valD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_SV1_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_IP2D_weightBofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_IP2D_weightCofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_IP2D_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_IP2D_weightUofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_IP3D_flagFromV0ofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_IP3D_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_IP3D_gradeOfTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_IP3D_sigD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_IP3D_sigZ0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_IP3D_valD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_IP3D_valZ0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_IP3D_weightBofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_IP3D_weightCofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_IP3D_weightUofTracks;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_SV0_N2Tpair;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_SV0_NGTinSvx;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_SV0_badTracksIP;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_SV0_efracsvx;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_SV0_energyTrkInJet;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_SV0_masssvx;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_SV0_normdist;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_SV0_pb;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_SV0_pc;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_SV0_pu;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_SV0_vertices;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_SV1_N2Tpair;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_SV1_NGTinSvx;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_SV1_badTracksIP;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_SV1_efracsvx;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_SV1_energyTrkInJet;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_SV1_masssvx;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_SV1_normdist;   //!
   TBranch        *b_BTagging_AntiKt10TruthWZAuxDyn_SV1_vertices;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_BTagTrackToJetAssociator;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_IP2D_flagFromV0ofTracks;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_IP2D_gradeOfTracks;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_SV0_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_IP2D_sigD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_IP2D_valD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_SV1_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_IP2D_weightBofTracks;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_IP2D_weightCofTracks;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_IP2D_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_IP2D_weightUofTracks;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_IP3D_flagFromV0ofTracks;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_IP3D_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_IP3D_gradeOfTracks;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_IP3D_sigD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_IP3D_sigZ0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_IP3D_valD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_IP3D_valZ0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_IP3D_weightBofTracks;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_IP3D_weightCofTracks;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_IP3D_weightUofTracks;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_SV0_N2Tpair;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_SV0_NGTinSvx;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_SV0_badTracksIP;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_SV0_efracsvx;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_SV0_energyTrkInJet;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_SV0_masssvx;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_SV0_normdist;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_SV0_pb;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_SV0_pc;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_SV0_pu;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_SV0_vertices;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_SV1_N2Tpair;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_SV1_NGTinSvx;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_SV1_badTracksIP;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_SV1_efracsvx;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_SV1_energyTrkInJet;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_SV1_masssvx;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_SV1_normdist;   //!
   TBranch        *b_BTagging_AntiKt4EMTopoAuxDyn_SV1_vertices;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_BTagTrackToJetAssociator;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_IP2D_flagFromV0ofTracks;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_IP2D_gradeOfTracks;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_SV0_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_IP2D_sigD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_IP2D_valD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_SV1_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_IP2D_weightBofTracks;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_IP2D_weightCofTracks;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_IP2D_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_IP2D_weightUofTracks;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_IP3D_flagFromV0ofTracks;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_IP3D_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_IP3D_gradeOfTracks;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_IP3D_sigD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_IP3D_sigZ0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_IP3D_valD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_IP3D_valZ0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_IP3D_weightBofTracks;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_IP3D_weightCofTracks;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_IP3D_weightUofTracks;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_SV0_N2Tpair;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_SV0_NGTinSvx;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_SV0_badTracksIP;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_SV0_efracsvx;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_SV0_energyTrkInJet;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_SV0_masssvx;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_SV0_normdist;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_SV0_pb;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_SV0_pc;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_SV0_pu;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_SV0_vertices;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_SV1_N2Tpair;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_SV1_NGTinSvx;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_SV1_badTracksIP;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_SV1_efracsvx;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_SV1_energyTrkInJet;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_SV1_masssvx;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_SV1_normdist;   //!
   TBranch        *b_BTagging_AntiKt4LCTopoAuxDyn_SV1_vertices;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_BTagTrackToJetAssociator;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_IP2D_flagFromV0ofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_IP2D_gradeOfTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_SV0_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_IP2D_sigD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_IP2D_valD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_SV1_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_IP2D_weightBofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_IP2D_weightCofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_IP2D_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_IP2D_weightUofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_IP3D_flagFromV0ofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_IP3D_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_IP3D_gradeOfTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_IP3D_sigD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_IP3D_sigZ0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_IP3D_valD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_IP3D_valZ0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_IP3D_weightBofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_IP3D_weightCofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_IP3D_weightUofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_SV0_N2Tpair;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_SV0_NGTinSvx;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_SV0_badTracksIP;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_SV0_efracsvx;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_SV0_energyTrkInJet;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_SV0_masssvx;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_SV0_normdist;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_SV0_pb;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_SV0_pc;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_SV0_pu;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_SV0_vertices;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_SV1_N2Tpair;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_SV1_NGTinSvx;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_SV1_badTracksIP;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_SV1_efracsvx;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_SV1_energyTrkInJet;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_SV1_masssvx;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_SV1_normdist;   //!
   TBranch        *b_BTagging_AntiKt4TruthAuxDyn_SV1_vertices;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_BTagTrackToJetAssociator;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_IP2D_flagFromV0ofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_IP2D_gradeOfTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_SV0_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_IP2D_sigD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_IP2D_valD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_SV1_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_IP2D_weightBofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_IP2D_weightCofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_IP2D_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_IP2D_weightUofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_IP3D_flagFromV0ofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_IP3D_TrackParticleLinks;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_IP3D_gradeOfTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_IP3D_sigD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_IP3D_sigZ0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_IP3D_valD0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_IP3D_valZ0wrtPVofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_IP3D_weightBofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_IP3D_weightCofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_IP3D_weightUofTracks;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_SV0_N2Tpair;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_SV0_NGTinSvx;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_SV0_badTracksIP;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_SV0_efracsvx;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_SV0_energyTrkInJet;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_SV0_masssvx;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_SV0_normdist;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_SV0_pb;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_SV0_pc;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_SV0_pu;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_SV0_vertices;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_SV1_N2Tpair;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_SV1_NGTinSvx;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_SV1_badTracksIP;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_SV1_efracsvx;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_SV1_energyTrkInJet;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_SV1_masssvx;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_SV1_normdist;   //!
   TBranch        *b_BTagging_AntiKt4TruthWZAuxDyn_SV1_vertices;   //!
   TBranch        *b_CaloCalTopoClusterAuxDyn_FIRST_ENG_DENS;   //!
   TBranch        *b_CaloCalTopoClusterAuxDyn_ISOLATION;   //!
   TBranch        *b_CaloCalTopoClusterAuxDyn_LATERAL;   //!
   TBranch        *b_CaloCalTopoClusterAuxDyn_LONGITUDINAL;   //!
   TBranch        *b_CaloCalTopoClusterAuxDyn_N_BAD_CELLS;   //!
   TBranch        *b_CaloCalTopoClusterAuxDyn_SECOND_LAMBDA;   //!
   TBranch        *b_CaloCalTopoClusterAuxDyn_SECOND_R;   //!
   TBranch        *b_CaloCalTopoClusterAuxDyn_SIGNIFICANCE;   //!
   TBranch        *b_CaloCalTopoClusterAuxDyn_AVG_LAR_Q;   //!
   TBranch        *b_CaloCalTopoClusterAuxDyn_AVG_TILE_Q;   //!
   TBranch        *b_CaloCalTopoClusterAuxDyn_BADLARQ_FRAC;   //!
   TBranch        *b_CaloCalTopoClusterAuxDyn_BadChannelList;   //!
   TBranch        *b_CaloCalTopoClusterAuxDyn_CELL_SIGNIFICANCE;   //!
   TBranch        *b_CaloCalTopoClusterAuxDyn_CELL_SIG_SAMPLING;   //!
   TBranch        *b_CaloCalTopoClusterAuxDyn_CENTER_LAMBDA;   //!
   TBranch        *b_CaloCalTopoClusterAuxDyn_CENTER_MAG;   //!
   TBranch        *b_CaloCalTopoClusterAuxDyn_EM_PROBABILITY;   //!
   TBranch        *b_CaloCalTopoClusterAuxDyn_ENG_BAD_CELLS;   //!
   TBranch        *b_CaloCalTopoClusterAuxDyn_ENG_FRAC_MAX;   //!
   TBranch        *b_CaloCalTopoClusterAuxDyn_ENG_POS;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_N90Constituents;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_NegativeE;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_NumTrkPt1000;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_NumTrkPt500;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_OotFracClusters10;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_OotFracClusters5;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_PlanarFlow;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_Sphericity;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_Split12;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_Split23;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_Split34;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_SumPtTrkPt1000;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_SumPtTrkPt500;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_Tau1;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_Tau2;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_Tau3;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_ThrustMaj;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_ThrustMin;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_Timing;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_Track;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_TrackCount;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_TrackPt;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_TrackWidthPt1000;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_TrackWidthPt500;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_Truth;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_TruthCount;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_ConstituentScale;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_JetEMScaleMomentum_pt;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_JetEMScaleMomentum_eta;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_TruthPt;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_JetEMScaleMomentum_phi;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_TruthWZ;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_JetEMScaleMomentum_m;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_TruthWZCount;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_TruthWZPt;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_Width;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_ZCut12;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_ZCut23;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_InputType;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_ZCut34;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_AlgorithmType;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_SizeParameter;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_ActiveArea;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_ActiveArea4vec_eta;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_ActiveArea4vec_m;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_ActiveArea4vec_phi;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_ActiveArea4vec_pt;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_Angularity;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_Aplanarity;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_AverageLArQF;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_BchCorrCell;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_CentroidR;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_Dip12;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_Dip13;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_Dip23;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_DipExcl12;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_ECF1;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_ECF2;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_ECF3;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_EMFrac;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_EMTopo;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_EMTopoCount;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_EMTopoPt;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_EnergyPerSampling;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_FoxWolfram0;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_FoxWolfram1;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_FoxWolfram2;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_FoxWolfram3;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_FoxWolfram4;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_FracSamplingMax;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_FracSamplingMaxIndex;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_GhostAntiKt3TrackJet;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_GhostAntiKt3TrackJetCount;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_GhostAntiKt3TrackJetPt;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_GhostAntiKt4TrackJet;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_GhostAntiKt4TrackJetCount;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_GhostAntiKt4TrackJetPt;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_GhostMuonSegment;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_GhostMuonSegmentCount;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_GhostTrack;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_GhostTrackCount;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_GhostTrackPt;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_GhostTruth;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_GhostTruthAssociationFraction;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_GhostTruthAssociationLink_;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_GhostTruthAssociationLink_m_persKey;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_GhostTruthAssociationLink_m_persIndex;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_GhostTruthCount;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_GhostTruthPt;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_HECFrac;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_HECQuality;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_HighestJVFVtx_;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_HighestJVFVtx_m_persKey;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_HighestJVFVtx_m_persIndex;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_JVF;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_JetGhostArea;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_KtDR;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_LArQuality;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_LCTopo;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_LCTopoCount;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_LCTopoPt;   //!
   TBranch        *b_CamKt12LCTopoJetsAuxDyn_Mu12;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_Tau2;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_FoxWolfram1;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_Tau3;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_FoxWolfram2;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_ThrustMaj;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_FoxWolfram3;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_ThrustMin;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_FoxWolfram4;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_Truth;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_TruthCount;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_TruthPt;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_TruthWZ;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_TruthWZCount;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_TruthWZPt;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_Width;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_ZCut12;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_ZCut23;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_ZCut34;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_JetGhostArea;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_KtDR;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_ConstituentScale;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_Angularity;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_Aplanarity;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_Mu12;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_Dip12;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_Dip13;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_InputType;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_Dip23;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_AlgorithmType;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_DipExcl12;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_SizeParameter;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_ECF1;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_PlanarFlow;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_ECF2;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_Sphericity;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_ECF3;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_Split12;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_Split23;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_Split34;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_Tau1;   //!
   TBranch        *b_CamKt12TruthJetsAuxDyn_FoxWolfram0;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_Tau2;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_FoxWolfram1;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_Tau3;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_FoxWolfram2;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_ThrustMaj;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_FoxWolfram3;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_ThrustMin;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_FoxWolfram4;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_Truth;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_TruthCount;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_TruthPt;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_TruthWZ;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_TruthWZCount;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_TruthWZPt;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_Width;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_ZCut12;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_ZCut23;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_ZCut34;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_JetGhostArea;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_KtDR;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_ConstituentScale;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_Angularity;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_Aplanarity;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_Mu12;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_Dip12;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_JetConstitScaleMomentum_m;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_Dip13;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_InputType;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_Dip23;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_AlgorithmType;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_DipExcl12;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_SizeParameter;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_ECF1;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_PlanarFlow;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_ECF2;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_Sphericity;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_ECF3;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_Split12;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_Split23;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_Split34;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_Tau1;   //!
   TBranch        *b_CamKt12TruthWZJetsAuxDyn_FoxWolfram0;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_truthOrigin;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_truthType;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_truthParticleLink_;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_trackLink_;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_trackLink_m_persKey;   //!
   TBranch        *b_CombinedMuonTrackParticlesAuxDyn_trackLink_m_persIndex;   //!
   TBranch        *b_ElectronCollectionAuxDyn_truthOrigin;   //!
   TBranch        *b_ElectronCollectionAuxDyn_truthType;   //!
   TBranch        *b_ElectronCollectionAuxDyn_Loose;   //!
   TBranch        *b_ElectronCollectionAuxDyn_Medium;   //!
   TBranch        *b_ElectronCollectionAuxDyn_Tight;   //!
   TBranch        *b_ElectronCollectionAuxDyn_truthParticleLink_;   //!
   TBranch        *b_ElectronCollectionAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_ElectronCollectionAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_EventInfoAuxDyn_subEventTime;   //!
   TBranch        *b_EventInfoAuxDyn_subEventLink_;   //!
   TBranch        *b_EventInfoAuxDyn_subEventLink_m_persKey;   //!
   TBranch        *b_EventInfoAuxDyn_subEventLink_m_persIndex;   //!
   TBranch        *b_EventInfoAuxDyn_subEventType;   //!
   TBranch        *b_mcEventNumber;   //!
   TBranch        *b_EventInfoAuxDyn_mcEventWeights;   //!
   TBranch        *b_mcChannelNumber;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_truthOrigin;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_truthType;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_trackLink_;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_trackLink_m_persKey;   //!
   TBranch        *b_ExtrapolatedMuonTrackParticlesAuxDyn_trackLink_m_persIndex;   //!
   TBranch        *b_FwdElectronsAuxDyn_Loose;   //!
   TBranch        *b_FwdElectronsAuxDyn_Tight;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_pz;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_etaAtCalo;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_phiAtCalo;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_px;   //!
   TBranch        *b_GSFConversionVerticesAuxDyn_py;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_originalTrackParticle_;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_originalTrackParticle_m_persKey;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_originalTrackParticle_m_persIndex;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_truthParticleLink_;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_trackLink_;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_trackLink_m_persKey;   //!
   TBranch        *b_GSFTrackParticlesAuxDyn_trackLink_m_persIndex;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_truthOrigin;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_truthType;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_truthMatchProbability;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_truthParticleLink_;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_trackLink_;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_trackLink_m_persKey;   //!
   TBranch        *b_InDetTrackParticlesAuxDyn_trackLink_m_persIndex;   //!
   TBranch        *b_InDetTrackParticlesForwardAuxDyn_truthOrigin;   //!
   TBranch        *b_InDetTrackParticlesForwardAuxDyn_truthType;   //!
   TBranch        *b_InDetTrackParticlesForwardAuxDyn_truthMatchProbability;   //!
   TBranch        *b_InDetTrackParticlesForwardAuxDyn_truthParticleLink_;   //!
   TBranch        *b_InDetTrackParticlesForwardAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_InDetTrackParticlesForwardAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_InDetTrackParticlesForwardAuxDyn_trackLink_;   //!
   TBranch        *b_InDetTrackParticlesForwardAuxDyn_trackLink_m_persKey;   //!
   TBranch        *b_InDetTrackParticlesForwardAuxDyn_trackLink_m_persIndex;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_BadChannelList;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_CELL_SIGNIFICANCE;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_CELL_SIG_SAMPLING;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_CENTER_LAMBDA;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_CENTER_MAG;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_EM_PROBABILITY;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_ENG_BAD_CELLS;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_ENG_FRAC_MAX;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_ENG_POS;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_FIRST_ENG_DENS;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_ISOLATION;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_LATERAL;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_LONGITUDINAL;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_N_BAD_CELLS;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_SECOND_LAMBDA;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_SECOND_R;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_SIGNIFICANCE;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_BAD_CELLS_CORR_E;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_CENTER_X;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_CENTER_Y;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_CENTER_Z;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_CellLink_;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_CellLink_m_persKey;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_CellLink_m_persIndex;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_DELTA_ALPHA;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_DELTA_PHI;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_DELTA_THETA;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_DM_WEIGHT;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_ENG_FRAC_CORE;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_ENG_FRAC_EM;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_FIRST_ETA;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_FIRST_PHI;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_HAD_WEIGHT;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_N_BAD_CELLS_CORR;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_OOC_WEIGHT;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_SECOND_ENG_DENS;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_emax_sampl;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_etamax_sampl;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_phimax_sampl;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_AVG_LAR_Q;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_AVG_TILE_Q;   //!
   TBranch        *b_LArClusterEMFrwdAuxDyn_BADLARQ_FRAC;   //!
   TBranch        *b_MuonSegmentsAuxDyn_muonSegment_;   //!
   TBranch        *b_MuonSegmentsAuxDyn_muonSegment_m_persKey;   //!
   TBranch        *b_MuonSegmentsAuxDyn_muonSegment_m_persIndex;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_MuonEntryLayer_x;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_MuonEntryLayer_x_extr;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_MuonEntryLayer_y;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_MuonEntryLayer_y_extr;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_MuonEntryLayer_z;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_MuonEntryLayer_z_extr;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_etaLayer1Hits;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_etaLayer2Hits;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_etaLayer3Hits;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_etaLayer4Hits;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_extendedLargeHits;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_extendedSmallHits;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_innerLargeHits;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_innerSmallHits;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_middleLargeHits;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_middleSmallHits;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_nphiLayers;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_nprecLayers;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_ntrigEtaLayers;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_outerLargeHits;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_outerSmallHits;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_phiLayer1Hits;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_phiLayer2Hits;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_phiLayer3Hits;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_phiLayer4Hits;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_recoMuonLink_;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_recoMuonLink_m_persKey;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_recoMuonLink_m_persIndex;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_truthOrigin;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_truthType;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_MuonEntryLayer_cov_extr;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_MuonEntryLayer_px;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_MuonEntryLayer_px_extr;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_MuonEntryLayer_py;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_MuonEntryLayer_py_extr;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_MuonEntryLayer_pz;   //!
   TBranch        *b_MuonTruthParticleAuxDyn_MuonEntryLayer_pz_extr;   //!
   TBranch        *b_MuonsAuxDyn_m;   //!
   TBranch        *b_PhotonCollectionAuxDyn_truthOrigin;   //!
   TBranch        *b_PhotonCollectionAuxDyn_truthType;   //!
   TBranch        *b_PhotonCollectionAuxDyn_Loose;   //!
   TBranch        *b_PhotonCollectionAuxDyn_Tight;   //!
   TBranch        *b_PhotonCollectionAuxDyn_truthParticleLink_;   //!
   TBranch        *b_PhotonCollectionAuxDyn_truthParticleLink_m_persKey;   //!
   TBranch        *b_PhotonCollectionAuxDyn_truthParticleLink_m_persIndex;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAuxDyn_cellBased_CENTER_LAMBDA;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAuxDyn_cellBased_DELTA_PHI;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAuxDyn_cellBased_DELTA_THETA;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAuxDyn_cellBased_EM1CoreFrac;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAuxDyn_cellBased_ENG_FRAC_CORE;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAuxDyn_cellBased_ENG_FRAC_EM;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAuxDyn_cellBased_ENG_FRAC_MAX;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAuxDyn_cellBased_FIRST_ETA;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAuxDyn_cellBased_LATERAL;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAuxDyn_cellBased_LONGITUDINAL;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAuxDyn_cellBased_NHitsInEM1;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAuxDyn_cellBased_NPosECells_EM1;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAuxDyn_cellBased_NPosECells_EM2;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAuxDyn_cellBased_NPosECells_PS;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAuxDyn_cellBased_SECOND_ENG_DENS;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAuxDyn_cellBased_SECOND_LAMBDA;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAuxDyn_cellBased_SECOND_R;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAuxDyn_cellBased_asymmetryInEM1WRTTrk;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAuxDyn_cellBased_energy_EM1;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAuxDyn_cellBased_energy_EM2;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAuxDyn_cellBased_firstEtaWRTClusterPosition_EM1;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAuxDyn_cellBased_firstEtaWRTClusterPosition_EM2;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAuxDyn_cellBased_secondEtaWRTClusterPosition_EM1;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAuxDyn_cellBased_secondEtaWRTClusterPosition_EM2;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAuxDyn_nPi0;   //!
   TBranch        *b_TauPi0NeutralPFOContainerAuxDyn_nPi0Proto;   //!
   TBranch        *b_TauShotPFOContainerAuxDyn_tauShots_Fside_5not1;   //!
   TBranch        *b_TauShotPFOContainerAuxDyn_tauShots_Fside_5not3;   //!
   TBranch        *b_TauShotPFOContainerAuxDyn_tauShots_deltaPt12_min;   //!
   TBranch        *b_TauShotPFOContainerAuxDyn_tauShots_fracSide_3not1;   //!
   TBranch        *b_TauShotPFOContainerAuxDyn_tauShots_fracSide_5not1;   //!
   TBranch        *b_TauShotPFOContainerAuxDyn_tauShots_fracSide_5not3;   //!
   TBranch        *b_TauShotPFOContainerAuxDyn_tauShots_mergedScore;   //!
   TBranch        *b_TauShotPFOContainerAuxDyn_tauShots_nCellsInEta;   //!
   TBranch        *b_TauShotPFOContainerAuxDyn_tauShots_nPhotons;   //!
   TBranch        *b_TauShotPFOContainerAuxDyn_tauShots_pt1;   //!
   TBranch        *b_TauShotPFOContainerAuxDyn_tauShots_pt1OverPt3;   //!
   TBranch        *b_TauShotPFOContainerAuxDyn_tauShots_pt3;   //!
   TBranch        *b_TauShotPFOContainerAuxDyn_tauShots_pt3OverPt5;   //!
   TBranch        *b_TauShotPFOContainerAuxDyn_tauShots_pt5;   //!
   TBranch        *b_TauShotPFOContainerAuxDyn_tauShots_sdevEta5_WRTmean;   //!
   TBranch        *b_TauShotPFOContainerAuxDyn_tauShots_sdevEta5_WRTmode;   //!
   TBranch        *b_TauShotPFOContainerAuxDyn_tauShots_sdevPt5;   //!
   TBranch        *b_TauShotPFOContainerAuxDyn_tauShots_seedHash;   //!
   TBranch        *b_TauShotPFOContainerAuxDyn_tauShots_signalScore;   //!
   TBranch        *b_TauShotPFOContainerAuxDyn_tauShots_ws5;   //!
   TBranch        *b_TauShotPFOContainerAuxDyn_tauShots_Fside_3not1;   //!
   TBranch        *b_TruthEventAuxDyn_x1;   //!
   TBranch        *b_TruthEventAuxDyn_x2;   //!
   TBranch        *b_TruthEventAuxDyn_id1;   //!
   TBranch        *b_TruthEventAuxDyn_id2;   //!
   TBranch        *b_TruthEventAuxDyn_pdf1;   //!
   TBranch        *b_TruthEventAuxDyn_pdf2;   //!
   TBranch        *b_TruthEventAuxDyn_pdfId1;   //!
   TBranch        *b_TruthEventAuxDyn_pdfId2;   //!
   TBranch        *b_TruthEventAuxDyn_scalePDF;   //!
   TBranch        *b_TruthParticleAuxDyn_polarizationPhi;   //!
   TBranch        *b_TruthParticleAuxDyn_polarizationTheta;   //!
   TBranch        *b_chargedTauPFO_eflowRecAuxDyn_eflowRec_HOT_STRIP_FRAC;   //!
   TBranch        *b_chargedTauPFO_eflowRecAuxDyn_eflowRec_SECOND_R;   //!
   TBranch        *b_chargedTauPFO_eflowRecAuxDyn_eflowRec_THREE_CELL_STRIP_FRAC;   //!
   TBranch        *b_chargedTauPFO_eflowRecAuxDyn_PassEOverPCheck;   //!
   TBranch        *b_chargedTauPFO_eflowRecAuxDyn_eflowRec_CENTER_LAMBDA;   //!
   TBranch        *b_chargedTauPFO_eflowRecAuxDyn_eflowRec_DELTA_ALPHA;   //!
   TBranch        *b_chargedTauPFO_eflowRecAuxDyn_eflowRec_EM_FRAC_ENHANCED;   //!
   TBranch        *b_chargedTauPFO_eflowRecAuxDyn_eflowRec_ENG_FRAC_CORE;   //!
   TBranch        *b_chargedTauPFO_eflowRecAuxDyn_eflowRec_FIRST_ENG_DENS;   //!
   TBranch        *b_egClusterCollectionAuxDyn_emax_sampl;   //!
   TBranch        *b_egClusterCollectionAuxDyn_etamax_sampl;   //!
   TBranch        *b_egClusterCollectionAuxDyn_phimax_sampl;   //!
   TBranch        *b_egClusterCollectionAuxDyn_etaCalo;   //!
   TBranch        *b_egClusterCollectionAuxDyn_etas1Calo;   //!
   TBranch        *b_egClusterCollectionAuxDyn_etas2Calo;   //!
   TBranch        *b_egClusterCollectionAuxDyn_etasize_sampl;   //!
   TBranch        *b_egClusterCollectionAuxDyn_originalClusterLink_;   //!
   TBranch        *b_egClusterCollectionAuxDyn_originalClusterLink_m_persKey;   //!
   TBranch        *b_egClusterCollectionAuxDyn_originalClusterLink_m_persIndex;   //!
   TBranch        *b_egClusterCollectionAuxDyn_phiCalo;   //!
   TBranch        *b_egClusterCollectionAuxDyn_phisize_sampl;   //!
   TBranch        *b_egClusterCollectionAuxDyn_CellLink_;   //!
   TBranch        *b_egClusterCollectionAuxDyn_CellLink_m_persKey;   //!
   TBranch        *b_egClusterCollectionAuxDyn_CellLink_m_persIndex;   //!
   TBranch        *b_egClusterCollectionAuxDyn_BadChannelList;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_FIRST_ENG_DENS;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_SECOND_R;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAuxDyn_LeptonType;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_AVG_LAR_Q;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_AVG_TILE_Q;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_BADLARQ_FRAC;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_ENG_BAD_CELLS;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_ENG_FRAC_MAX;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_ENG_POS;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_ISOLATION;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_LATERAL;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_EM3;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_HEC0;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_Tile0;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_LONGITUDINAL;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_N_BAD_CELLS;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_SIGNIFICANCE;   //!
   TBranch        *b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_CENTER_LAMBDA;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_NonModified_eflowRecAuxDyn_eflowRec_LAYERENERGY_EM3;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_NonModified_eflowRecAuxDyn_eflowRec_LAYERENERGY_HEC0;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_NonModified_eflowRecAuxDyn_eflowRec_LAYERENERGY_Tile0;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_NonModified_eflowRecAuxDyn_LeptonType;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_FIRST_ENG_DENS;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_SECOND_R;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_LeptonType;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_AVG_LAR_Q;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_AVG_TILE_Q;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_BADLARQ_FRAC;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_ENG_BAD_CELLS;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_ENG_FRAC_MAX;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_ENG_POS;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_ISOLATION;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_LATERAL;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_EM3;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_HEC0;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_Tile0;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_LONGITUDINAL;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_N_BAD_CELLS;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_SIGNIFICANCE;   //!
   TBranch        *b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_CENTER_LAMBDA;   //!
   TBranch        *b_neutralTauPFO_eflowRecAuxDyn_eflowRec_HOT_STRIP_FRAC;   //!
   TBranch        *b_neutralTauPFO_eflowRecAuxDyn_eflowRec_SECOND_R;   //!
   TBranch        *b_neutralTauPFO_eflowRecAuxDyn_eflowRec_THREE_CELL_STRIP_FRAC;   //!
   TBranch        *b_neutralTauPFO_eflowRecAuxDyn_PassEOverPCheck;   //!
   TBranch        *b_neutralTauPFO_eflowRecAuxDyn_eflowRec_CENTER_LAMBDA;   //!
   TBranch        *b_neutralTauPFO_eflowRecAuxDyn_eflowRec_DELTA_ALPHA;   //!
   TBranch        *b_neutralTauPFO_eflowRecAuxDyn_eflowRec_EM_FRAC_ENHANCED;   //!
   TBranch        *b_neutralTauPFO_eflowRecAuxDyn_eflowRec_ENG_FRAC_CORE;   //!
   TBranch        *b_neutralTauPFO_eflowRecAuxDyn_eflowRec_FIRST_ENG_DENS;   //!

   CollectionTree(TTree *tree=0);
   virtual ~CollectionTree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef CollectionTree_cxx
CollectionTree::CollectionTree(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/afs/cern.ch/atlas/project/PAT/xAODs/r5591/mc14_8TeV.147807.PowhegPythia8_AU2CT10_Zmumu.merge.AOD.e1852_s1896_s1912_r5591_r5625_tid01512432_00/AOD.01512432._001510.pool.root.1");
      if (!f || !f->IsOpen()) {
         f = new TFile("/afs/cern.ch/atlas/project/PAT/xAODs/r5591/mc14_8TeV.147807.PowhegPythia8_AU2CT10_Zmumu.merge.AOD.e1852_s1896_s1912_r5591_r5625_tid01512432_00/AOD.01512432._001510.pool.root.1");
      }
      f->GetObject("CollectionTree",tree);

   }
   Init(tree);
}

CollectionTree::~CollectionTree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t CollectionTree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t CollectionTree::LoadTree(Long64_t entry)
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

void CollectionTree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   McEventInfo = 0;
   AODCellContainer = 0;
   MBTSContainer = 0;
   TileMuObj = 0;
   TrigConfKeys = 0;
   METMap_LocHadTopo = 0;
   METMap_LocHadTopoRegions = 0;
   METMap_RefFinal = 0;
   METMap_RefFinalRegions = 0;
   METMap_Track = 0;
   METMap_Truth = 0;
   METMap_TruthRegions = 0;
   EventInfo = 0;
   ESDtoAOD_mems = 0;
   ESDtoAOD_timings = 0;
   EVNTtoHITS_timings = 0;
   HITStoRDO_timings = 0;
   RAWtoESD_mems = 0;
   RAWtoESD_timings = 0;
   LArNoisyROSummary = 0;
   GSFTracks = 0;
   ElectronCollection = 0;
   FwdElectrons = 0;
   GSFConversionVertices = 0;
   PrimaryVertices = 0;
   TauSecondaryVertexContainer = 0;
   MET_LocHadTopo = 0;
   MET_LocHadTopoRegions = 0;
   MET_RefFinal = 0;
   MET_RefFinalRegions = 0;
   MET_Track = 0;
   MET_Truth = 0;
   MET_TruthRegions = 0;
   PhotonCollection = 0;
   MuonSegments = 0;
   egClusterCollection_links = 0;
   TauRecContainer = 0;
   TauPi0ChargedPFOContainer = 0;
   TauPi0NeutralPFOContainer = 0;
   TauShotPFOContainer = 0;
   chargedJetETMissPFO_eflowRec = 0;
   chargedTauPFO_eflowRec = 0;
   neutralJetETMissPFO_eflowRec = 0;
   neutralJetETMiss_LCPFO_NonModified_eflowRec = 0;
   neutralJetETMiss_LCPFO_eflowRec = 0;
   neutralTauPFO_eflowRec = 0;
   Muons = 0;
   TruthEvent = 0;
   CaloCalTopoCluster = 0;
   LArClusterEMFrwd = 0;
   egClusterCollection = 0;
   MuonEntryLayerFilter = 0;
   MuonTruthParticle = 0;
   TruthParticle = 0;
   TruthVertex = 0;
   AntiKt10LCTopoJets = 0;
   AntiKt10TruthJets = 0;
   AntiKt10TruthWZJets = 0;
   AntiKt3PV0TrackJets = 0;
   AntiKt3ZTrackJets = 0;
   AntiKt4EMTopoJets = 0;
   AntiKt4LCTopoJets = 0;
   AntiKt4PV0TrackJets = 0;
   AntiKt4TruthJets = 0;
   AntiKt4TruthWZJets = 0;
   AntiKt4ZTrackJets = 0;
   CamKt12LCTopoJets = 0;
   CamKt12TruthJets = 0;
   CamKt12TruthWZJets = 0;
   BTagging_AntiKt10LCTopo = 0;
   BTagging_AntiKt10Truth = 0;
   BTagging_AntiKt10TruthWZ = 0;
   BTagging_AntiKt4EMTopo = 0;
   BTagging_AntiKt4LCTopo = 0;
   BTagging_AntiKt4Truth = 0;
   BTagging_AntiKt4TruthWZ = 0;
   CombinedMuonTrackParticles = 0;
   ExtrapolatedMuonTrackParticles = 0;
   GSFTrackParticles = 0;
   InDetTrackParticles = 0;
   InDetTrackParticlesForward = 0;
   LArCalibrationHitActive = 0;
   LArCalibrationHitDeadMaterial = 0;
   LArCalibrationHitInactive = 0;
   MuonCaloEnergyCollection = 0;
   AntiKt10LCTopoJetsAuxDyn_N90Constituents = 0;
   AntiKt10LCTopoJetsAuxDyn_NegativeE = 0;
   AntiKt10LCTopoJetsAuxDyn_NumTrkPt1000 = 0;
   AntiKt10LCTopoJetsAuxDyn_NumTrkPt500 = 0;
   AntiKt10LCTopoJetsAuxDyn_OotFracClusters10 = 0;
   AntiKt10LCTopoJetsAuxDyn_OotFracClusters5 = 0;
   AntiKt10LCTopoJetsAuxDyn_PlanarFlow = 0;
   AntiKt10LCTopoJetsAuxDyn_Sphericity = 0;
   AntiKt10LCTopoJetsAuxDyn_Split12 = 0;
   AntiKt10LCTopoJetsAuxDyn_Split23 = 0;
   AntiKt10LCTopoJetsAuxDyn_Split34 = 0;
   AntiKt10LCTopoJetsAuxDyn_SumPtTrkPt1000 = 0;
   AntiKt10LCTopoJetsAuxDyn_SumPtTrkPt500 = 0;
   AntiKt10LCTopoJetsAuxDyn_Tau1 = 0;
   AntiKt10LCTopoJetsAuxDyn_Tau2 = 0;
   AntiKt10LCTopoJetsAuxDyn_Tau3 = 0;
   AntiKt10LCTopoJetsAuxDyn_ThrustMaj = 0;
   AntiKt10LCTopoJetsAuxDyn_ThrustMin = 0;
   AntiKt10LCTopoJetsAuxDyn_Timing = 0;
   AntiKt10LCTopoJetsAuxDyn_Track = 0;
   AntiKt10LCTopoJetsAuxDyn_TrackCount = 0;
   AntiKt10LCTopoJetsAuxDyn_TrackPt = 0;
   AntiKt10LCTopoJetsAuxDyn_TrackWidthPt1000 = 0;
   AntiKt10LCTopoJetsAuxDyn_TrackWidthPt500 = 0;
   AntiKt10LCTopoJetsAuxDyn_Truth = 0;
   AntiKt10LCTopoJetsAuxDyn_TruthCount = 0;
   AntiKt10LCTopoJetsAuxDyn_TruthLabelDeltaR_B = 0;
   AntiKt10LCTopoJetsAuxDyn_TruthLabelDeltaR_C = 0;
   AntiKt10LCTopoJetsAuxDyn_ConstituentScale = 0;
   AntiKt10LCTopoJetsAuxDyn_TruthLabelDeltaR_T = 0;
   AntiKt10LCTopoJetsAuxDyn_JetEMScaleMomentum_pt = 0;
   AntiKt10LCTopoJetsAuxDyn_TruthLabelID = 0;
   AntiKt10LCTopoJetsAuxDyn_JetEMScaleMomentum_eta = 0;
   AntiKt10LCTopoJetsAuxDyn_TruthPt = 0;
   AntiKt10LCTopoJetsAuxDyn_JetEMScaleMomentum_phi = 0;
   AntiKt10LCTopoJetsAuxDyn_TruthWZ = 0;
   AntiKt10LCTopoJetsAuxDyn_JetEMScaleMomentum_m = 0;
   AntiKt10LCTopoJetsAuxDyn_TruthWZCount = 0;
   AntiKt10LCTopoJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt10LCTopoJetsAuxDyn_TruthWZPt = 0;
   AntiKt10LCTopoJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt10LCTopoJetsAuxDyn_Width = 0;
   AntiKt10LCTopoJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt10LCTopoJetsAuxDyn_ZCut12 = 0;
   AntiKt10LCTopoJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt10LCTopoJetsAuxDyn_ZCut23 = 0;
   AntiKt10LCTopoJetsAuxDyn_InputType = 0;
   AntiKt10LCTopoJetsAuxDyn_ZCut34 = 0;
   AntiKt10LCTopoJetsAuxDyn_AlgorithmType = 0;
   AntiKt10LCTopoJetsAuxDyn_SizeParameter = 0;
   AntiKt10LCTopoJetsAuxDyn_ActiveArea = 0;
   AntiKt10LCTopoJetsAuxDyn_ActiveArea4vec_eta = 0;
   AntiKt10LCTopoJetsAuxDyn_ActiveArea4vec_m = 0;
   AntiKt10LCTopoJetsAuxDyn_ActiveArea4vec_phi = 0;
   AntiKt10LCTopoJetsAuxDyn_ActiveArea4vec_pt = 0;
   AntiKt10LCTopoJetsAuxDyn_Angularity = 0;
   AntiKt10LCTopoJetsAuxDyn_Aplanarity = 0;
   AntiKt10LCTopoJetsAuxDyn_AverageLArQF = 0;
   AntiKt10LCTopoJetsAuxDyn_BchCorrCell = 0;
   AntiKt10LCTopoJetsAuxDyn_CentroidR = 0;
   AntiKt10LCTopoJetsAuxDyn_Dip12 = 0;
   AntiKt10LCTopoJetsAuxDyn_Dip13 = 0;
   AntiKt10LCTopoJetsAuxDyn_Dip23 = 0;
   AntiKt10LCTopoJetsAuxDyn_DipExcl12 = 0;
   AntiKt10LCTopoJetsAuxDyn_ECF1 = 0;
   AntiKt10LCTopoJetsAuxDyn_ECF2 = 0;
   AntiKt10LCTopoJetsAuxDyn_ECF3 = 0;
   AntiKt10LCTopoJetsAuxDyn_EMFrac = 0;
   AntiKt10LCTopoJetsAuxDyn_EMTopo = 0;
   AntiKt10LCTopoJetsAuxDyn_EMTopoCount = 0;
   AntiKt10LCTopoJetsAuxDyn_EMTopoPt = 0;
   AntiKt10LCTopoJetsAuxDyn_EnergyPerSampling = 0;
   AntiKt10LCTopoJetsAuxDyn_FoxWolfram0 = 0;
   AntiKt10LCTopoJetsAuxDyn_FoxWolfram1 = 0;
   AntiKt10LCTopoJetsAuxDyn_FoxWolfram2 = 0;
   AntiKt10LCTopoJetsAuxDyn_FoxWolfram3 = 0;
   AntiKt10LCTopoJetsAuxDyn_FoxWolfram4 = 0;
   AntiKt10LCTopoJetsAuxDyn_FracSamplingMax = 0;
   AntiKt10LCTopoJetsAuxDyn_FracSamplingMaxIndex = 0;
   AntiKt10LCTopoJetsAuxDyn_GhostAntiKt3TrackJet = 0;
   AntiKt10LCTopoJetsAuxDyn_GhostAntiKt3TrackJetCount = 0;
   AntiKt10LCTopoJetsAuxDyn_GhostAntiKt3TrackJetPt = 0;
   AntiKt10LCTopoJetsAuxDyn_GhostAntiKt4TrackJet = 0;
   AntiKt10LCTopoJetsAuxDyn_GhostAntiKt4TrackJetCount = 0;
   AntiKt10LCTopoJetsAuxDyn_GhostAntiKt4TrackJetPt = 0;
   AntiKt10LCTopoJetsAuxDyn_GhostMuonSegment = 0;
   AntiKt10LCTopoJetsAuxDyn_GhostMuonSegmentCount = 0;
   AntiKt10LCTopoJetsAuxDyn_GhostTrack = 0;
   AntiKt10LCTopoJetsAuxDyn_GhostTrackCount = 0;
   AntiKt10LCTopoJetsAuxDyn_GhostTrackPt = 0;
   AntiKt10LCTopoJetsAuxDyn_GhostTruth = 0;
   AntiKt10LCTopoJetsAuxDyn_GhostTruthAssociationFraction = 0;
   AntiKt10LCTopoJetsAuxDyn_GhostTruthCount = 0;
   AntiKt10LCTopoJetsAuxDyn_GhostTruthPt = 0;
   AntiKt10LCTopoJetsAuxDyn_HECFrac = 0;
   AntiKt10LCTopoJetsAuxDyn_HECQuality = 0;
   AntiKt10LCTopoJetsAuxDyn_JVF = 0;
   AntiKt10LCTopoJetsAuxDyn_JetGhostArea = 0;
   AntiKt10LCTopoJetsAuxDyn_KtDR = 0;
   AntiKt10LCTopoJetsAuxDyn_LArQuality = 0;
   AntiKt10LCTopoJetsAuxDyn_LCTopo = 0;
   AntiKt10LCTopoJetsAuxDyn_LCTopoCount = 0;
   AntiKt10LCTopoJetsAuxDyn_LCTopoPt = 0;
   AntiKt10LCTopoJetsAuxDyn_Mu12 = 0;
   AntiKt10TruthJetsAuxDyn_JetGhostArea = 0;
   AntiKt10TruthJetsAuxDyn_KtDR = 0;
   AntiKt10TruthJetsAuxDyn_Mu12 = 0;
   AntiKt10TruthJetsAuxDyn_PlanarFlow = 0;
   AntiKt10TruthJetsAuxDyn_Sphericity = 0;
   AntiKt10TruthJetsAuxDyn_Split12 = 0;
   AntiKt10TruthJetsAuxDyn_Split23 = 0;
   AntiKt10TruthJetsAuxDyn_Split34 = 0;
   AntiKt10TruthJetsAuxDyn_ConstituentScale = 0;
   AntiKt10TruthJetsAuxDyn_Tau1 = 0;
   AntiKt10TruthJetsAuxDyn_Tau2 = 0;
   AntiKt10TruthJetsAuxDyn_Tau3 = 0;
   AntiKt10TruthJetsAuxDyn_ThrustMaj = 0;
   AntiKt10TruthJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt10TruthJetsAuxDyn_ThrustMin = 0;
   AntiKt10TruthJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt10TruthJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt10TruthJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt10TruthJetsAuxDyn_InputType = 0;
   AntiKt10TruthJetsAuxDyn_AlgorithmType = 0;
   AntiKt10TruthJetsAuxDyn_SizeParameter = 0;
   AntiKt10TruthJetsAuxDyn_Truth = 0;
   AntiKt10TruthJetsAuxDyn_TruthCount = 0;
   AntiKt10TruthJetsAuxDyn_TruthLabelDeltaR_B = 0;
   AntiKt10TruthJetsAuxDyn_TruthLabelDeltaR_C = 0;
   AntiKt10TruthJetsAuxDyn_TruthLabelDeltaR_T = 0;
   AntiKt10TruthJetsAuxDyn_TruthLabelID = 0;
   AntiKt10TruthJetsAuxDyn_TruthPt = 0;
   AntiKt10TruthJetsAuxDyn_TruthWZ = 0;
   AntiKt10TruthJetsAuxDyn_TruthWZCount = 0;
   AntiKt10TruthJetsAuxDyn_TruthWZPt = 0;
   AntiKt10TruthJetsAuxDyn_Width = 0;
   AntiKt10TruthJetsAuxDyn_ZCut12 = 0;
   AntiKt10TruthJetsAuxDyn_ZCut23 = 0;
   AntiKt10TruthJetsAuxDyn_ZCut34 = 0;
   AntiKt10TruthJetsAuxDyn_Angularity = 0;
   AntiKt10TruthJetsAuxDyn_Aplanarity = 0;
   AntiKt10TruthJetsAuxDyn_Dip12 = 0;
   AntiKt10TruthJetsAuxDyn_Dip13 = 0;
   AntiKt10TruthJetsAuxDyn_Dip23 = 0;
   AntiKt10TruthJetsAuxDyn_DipExcl12 = 0;
   AntiKt10TruthJetsAuxDyn_ECF1 = 0;
   AntiKt10TruthJetsAuxDyn_ECF2 = 0;
   AntiKt10TruthJetsAuxDyn_ECF3 = 0;
   AntiKt10TruthJetsAuxDyn_FoxWolfram0 = 0;
   AntiKt10TruthJetsAuxDyn_FoxWolfram1 = 0;
   AntiKt10TruthJetsAuxDyn_FoxWolfram2 = 0;
   AntiKt10TruthJetsAuxDyn_FoxWolfram3 = 0;
   AntiKt10TruthJetsAuxDyn_FoxWolfram4 = 0;
   AntiKt10TruthWZJetsAuxDyn_JetGhostArea = 0;
   AntiKt10TruthWZJetsAuxDyn_KtDR = 0;
   AntiKt10TruthWZJetsAuxDyn_Mu12 = 0;
   AntiKt10TruthWZJetsAuxDyn_PlanarFlow = 0;
   AntiKt10TruthWZJetsAuxDyn_Sphericity = 0;
   AntiKt10TruthWZJetsAuxDyn_Split12 = 0;
   AntiKt10TruthWZJetsAuxDyn_Split23 = 0;
   AntiKt10TruthWZJetsAuxDyn_Split34 = 0;
   AntiKt10TruthWZJetsAuxDyn_ConstituentScale = 0;
   AntiKt10TruthWZJetsAuxDyn_Tau1 = 0;
   AntiKt10TruthWZJetsAuxDyn_Tau2 = 0;
   AntiKt10TruthWZJetsAuxDyn_Tau3 = 0;
   AntiKt10TruthWZJetsAuxDyn_ThrustMaj = 0;
   AntiKt10TruthWZJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt10TruthWZJetsAuxDyn_ThrustMin = 0;
   AntiKt10TruthWZJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt10TruthWZJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt10TruthWZJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt10TruthWZJetsAuxDyn_InputType = 0;
   AntiKt10TruthWZJetsAuxDyn_AlgorithmType = 0;
   AntiKt10TruthWZJetsAuxDyn_SizeParameter = 0;
   AntiKt10TruthWZJetsAuxDyn_Truth = 0;
   AntiKt10TruthWZJetsAuxDyn_TruthCount = 0;
   AntiKt10TruthWZJetsAuxDyn_TruthLabelDeltaR_B = 0;
   AntiKt10TruthWZJetsAuxDyn_TruthLabelDeltaR_C = 0;
   AntiKt10TruthWZJetsAuxDyn_TruthLabelDeltaR_T = 0;
   AntiKt10TruthWZJetsAuxDyn_TruthLabelID = 0;
   AntiKt10TruthWZJetsAuxDyn_TruthPt = 0;
   AntiKt10TruthWZJetsAuxDyn_TruthWZ = 0;
   AntiKt10TruthWZJetsAuxDyn_TruthWZCount = 0;
   AntiKt10TruthWZJetsAuxDyn_TruthWZPt = 0;
   AntiKt10TruthWZJetsAuxDyn_Width = 0;
   AntiKt10TruthWZJetsAuxDyn_ZCut12 = 0;
   AntiKt10TruthWZJetsAuxDyn_ZCut23 = 0;
   AntiKt10TruthWZJetsAuxDyn_ZCut34 = 0;
   AntiKt10TruthWZJetsAuxDyn_Angularity = 0;
   AntiKt10TruthWZJetsAuxDyn_Aplanarity = 0;
   AntiKt10TruthWZJetsAuxDyn_Dip12 = 0;
   AntiKt10TruthWZJetsAuxDyn_Dip13 = 0;
   AntiKt10TruthWZJetsAuxDyn_Dip23 = 0;
   AntiKt10TruthWZJetsAuxDyn_DipExcl12 = 0;
   AntiKt10TruthWZJetsAuxDyn_ECF1 = 0;
   AntiKt10TruthWZJetsAuxDyn_ECF2 = 0;
   AntiKt10TruthWZJetsAuxDyn_ECF3 = 0;
   AntiKt10TruthWZJetsAuxDyn_FoxWolfram0 = 0;
   AntiKt10TruthWZJetsAuxDyn_FoxWolfram1 = 0;
   AntiKt10TruthWZJetsAuxDyn_FoxWolfram2 = 0;
   AntiKt10TruthWZJetsAuxDyn_FoxWolfram3 = 0;
   AntiKt10TruthWZJetsAuxDyn_FoxWolfram4 = 0;
   AntiKt3PV0TrackJetsAuxDyn_GhostTruthCount = 0;
   AntiKt3PV0TrackJetsAuxDyn_GhostTruthPt = 0;
   AntiKt3PV0TrackJetsAuxDyn_JetGhostArea = 0;
   AntiKt3PV0TrackJetsAuxDyn_KtDR = 0;
   AntiKt3PV0TrackJetsAuxDyn_Mu12 = 0;
   AntiKt3PV0TrackJetsAuxDyn_PlanarFlow = 0;
   AntiKt3PV0TrackJetsAuxDyn_Sphericity = 0;
   AntiKt3PV0TrackJetsAuxDyn_Split12 = 0;
   AntiKt3PV0TrackJetsAuxDyn_Split23 = 0;
   AntiKt3PV0TrackJetsAuxDyn_Split34 = 0;
   AntiKt3PV0TrackJetsAuxDyn_ConstituentScale = 0;
   AntiKt3PV0TrackJetsAuxDyn_Tau1 = 0;
   AntiKt3PV0TrackJetsAuxDyn_Tau2 = 0;
   AntiKt3PV0TrackJetsAuxDyn_Tau3 = 0;
   AntiKt3PV0TrackJetsAuxDyn_ThrustMaj = 0;
   AntiKt3PV0TrackJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt3PV0TrackJetsAuxDyn_ThrustMin = 0;
   AntiKt3PV0TrackJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt3PV0TrackJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt3PV0TrackJetsAuxDyn_Track = 0;
   AntiKt3PV0TrackJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt3PV0TrackJetsAuxDyn_TrackCount = 0;
   AntiKt3PV0TrackJetsAuxDyn_InputType = 0;
   AntiKt3PV0TrackJetsAuxDyn_TrackPt = 0;
   AntiKt3PV0TrackJetsAuxDyn_AlgorithmType = 0;
   AntiKt3PV0TrackJetsAuxDyn_SizeParameter = 0;
   AntiKt3PV0TrackJetsAuxDyn_Truth = 0;
   AntiKt3PV0TrackJetsAuxDyn_TruthCount = 0;
   AntiKt3PV0TrackJetsAuxDyn_TruthPt = 0;
   AntiKt3PV0TrackJetsAuxDyn_TruthWZ = 0;
   AntiKt3PV0TrackJetsAuxDyn_TruthWZCount = 0;
   AntiKt3PV0TrackJetsAuxDyn_TruthWZPt = 0;
   AntiKt3PV0TrackJetsAuxDyn_Width = 0;
   AntiKt3PV0TrackJetsAuxDyn_ZCut12 = 0;
   AntiKt3PV0TrackJetsAuxDyn_ZCut23 = 0;
   AntiKt3PV0TrackJetsAuxDyn_ZCut34 = 0;
   AntiKt3PV0TrackJetsAuxDyn_Angularity = 0;
   AntiKt3PV0TrackJetsAuxDyn_Aplanarity = 0;
   AntiKt3PV0TrackJetsAuxDyn_Dip12 = 0;
   AntiKt3PV0TrackJetsAuxDyn_Dip13 = 0;
   AntiKt3PV0TrackJetsAuxDyn_Dip23 = 0;
   AntiKt3PV0TrackJetsAuxDyn_DipExcl12 = 0;
   AntiKt3PV0TrackJetsAuxDyn_ECF1 = 0;
   AntiKt3PV0TrackJetsAuxDyn_ECF2 = 0;
   AntiKt3PV0TrackJetsAuxDyn_ECF3 = 0;
   AntiKt3PV0TrackJetsAuxDyn_FoxWolfram0 = 0;
   AntiKt3PV0TrackJetsAuxDyn_FoxWolfram1 = 0;
   AntiKt3PV0TrackJetsAuxDyn_FoxWolfram2 = 0;
   AntiKt3PV0TrackJetsAuxDyn_FoxWolfram3 = 0;
   AntiKt3PV0TrackJetsAuxDyn_FoxWolfram4 = 0;
   AntiKt3PV0TrackJetsAuxDyn_GhostTruth = 0;
   AntiKt3ZTrackJetsAuxDyn_GhostTruthCount = 0;
   AntiKt3ZTrackJetsAuxDyn_GhostTruthPt = 0;
   AntiKt3ZTrackJetsAuxDyn_JetGhostArea = 0;
   AntiKt3ZTrackJetsAuxDyn_KtDR = 0;
   AntiKt3ZTrackJetsAuxDyn_Mu12 = 0;
   AntiKt3ZTrackJetsAuxDyn_PlanarFlow = 0;
   AntiKt3ZTrackJetsAuxDyn_Sphericity = 0;
   AntiKt3ZTrackJetsAuxDyn_Split12 = 0;
   AntiKt3ZTrackJetsAuxDyn_Split23 = 0;
   AntiKt3ZTrackJetsAuxDyn_Split34 = 0;
   AntiKt3ZTrackJetsAuxDyn_ConstituentScale = 0;
   AntiKt3ZTrackJetsAuxDyn_Tau1 = 0;
   AntiKt3ZTrackJetsAuxDyn_Tau2 = 0;
   AntiKt3ZTrackJetsAuxDyn_Tau3 = 0;
   AntiKt3ZTrackJetsAuxDyn_ThrustMaj = 0;
   AntiKt3ZTrackJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt3ZTrackJetsAuxDyn_ThrustMin = 0;
   AntiKt3ZTrackJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt3ZTrackJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt3ZTrackJetsAuxDyn_Track = 0;
   AntiKt3ZTrackJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt3ZTrackJetsAuxDyn_TrackCount = 0;
   AntiKt3ZTrackJetsAuxDyn_InputType = 0;
   AntiKt3ZTrackJetsAuxDyn_TrackPt = 0;
   AntiKt3ZTrackJetsAuxDyn_AlgorithmType = 0;
   AntiKt3ZTrackJetsAuxDyn_SizeParameter = 0;
   AntiKt3ZTrackJetsAuxDyn_Truth = 0;
   AntiKt3ZTrackJetsAuxDyn_TruthCount = 0;
   AntiKt3ZTrackJetsAuxDyn_TruthPt = 0;
   AntiKt3ZTrackJetsAuxDyn_TruthWZ = 0;
   AntiKt3ZTrackJetsAuxDyn_TruthWZCount = 0;
   AntiKt3ZTrackJetsAuxDyn_TruthWZPt = 0;
   AntiKt3ZTrackJetsAuxDyn_Width = 0;
   AntiKt3ZTrackJetsAuxDyn_ZCut12 = 0;
   AntiKt3ZTrackJetsAuxDyn_ZCut23 = 0;
   AntiKt3ZTrackJetsAuxDyn_ZCut34 = 0;
   AntiKt3ZTrackJetsAuxDyn_Angularity = 0;
   AntiKt3ZTrackJetsAuxDyn_Aplanarity = 0;
   AntiKt3ZTrackJetsAuxDyn_Dip12 = 0;
   AntiKt3ZTrackJetsAuxDyn_Dip13 = 0;
   AntiKt3ZTrackJetsAuxDyn_Dip23 = 0;
   AntiKt3ZTrackJetsAuxDyn_DipExcl12 = 0;
   AntiKt3ZTrackJetsAuxDyn_ECF1 = 0;
   AntiKt3ZTrackJetsAuxDyn_ECF2 = 0;
   AntiKt3ZTrackJetsAuxDyn_ECF3 = 0;
   AntiKt3ZTrackJetsAuxDyn_FoxWolfram0 = 0;
   AntiKt3ZTrackJetsAuxDyn_FoxWolfram1 = 0;
   AntiKt3ZTrackJetsAuxDyn_FoxWolfram2 = 0;
   AntiKt3ZTrackJetsAuxDyn_FoxWolfram3 = 0;
   AntiKt3ZTrackJetsAuxDyn_FoxWolfram4 = 0;
   AntiKt3ZTrackJetsAuxDyn_GhostTruth = 0;
   AntiKt4EMTopoJetsAuxDyn_N90Constituents = 0;
   AntiKt4EMTopoJetsAuxDyn_NegativeE = 0;
   AntiKt4EMTopoJetsAuxDyn_NumTrkPt1000 = 0;
   AntiKt4EMTopoJetsAuxDyn_NumTrkPt500 = 0;
   AntiKt4EMTopoJetsAuxDyn_OotFracClusters10 = 0;
   AntiKt4EMTopoJetsAuxDyn_OotFracClusters5 = 0;
   AntiKt4EMTopoJetsAuxDyn_PlanarFlow = 0;
   AntiKt4EMTopoJetsAuxDyn_Sphericity = 0;
   AntiKt4EMTopoJetsAuxDyn_Split12 = 0;
   AntiKt4EMTopoJetsAuxDyn_Split23 = 0;
   AntiKt4EMTopoJetsAuxDyn_Split34 = 0;
   AntiKt4EMTopoJetsAuxDyn_SumPtTrkPt1000 = 0;
   AntiKt4EMTopoJetsAuxDyn_SumPtTrkPt500 = 0;
   AntiKt4EMTopoJetsAuxDyn_Tau1 = 0;
   AntiKt4EMTopoJetsAuxDyn_Tau2 = 0;
   AntiKt4EMTopoJetsAuxDyn_Tau3 = 0;
   AntiKt4EMTopoJetsAuxDyn_ThrustMaj = 0;
   AntiKt4EMTopoJetsAuxDyn_ThrustMin = 0;
   AntiKt4EMTopoJetsAuxDyn_Timing = 0;
   AntiKt4EMTopoJetsAuxDyn_Track = 0;
   AntiKt4EMTopoJetsAuxDyn_TrackCount = 0;
   AntiKt4EMTopoJetsAuxDyn_TrackPt = 0;
   AntiKt4EMTopoJetsAuxDyn_TrackWidthPt1000 = 0;
   AntiKt4EMTopoJetsAuxDyn_TrackWidthPt500 = 0;
   AntiKt4EMTopoJetsAuxDyn_Truth = 0;
   AntiKt4EMTopoJetsAuxDyn_TruthCount = 0;
   AntiKt4EMTopoJetsAuxDyn_TruthLabelDeltaR_B = 0;
   AntiKt4EMTopoJetsAuxDyn_TruthLabelDeltaR_C = 0;
   AntiKt4EMTopoJetsAuxDyn_ConstituentScale = 0;
   AntiKt4EMTopoJetsAuxDyn_TruthLabelDeltaR_T = 0;
   AntiKt4EMTopoJetsAuxDyn_JetEMScaleMomentum_pt = 0;
   AntiKt4EMTopoJetsAuxDyn_TruthLabelID = 0;
   AntiKt4EMTopoJetsAuxDyn_JetEMScaleMomentum_eta = 0;
   AntiKt4EMTopoJetsAuxDyn_TruthPt = 0;
   AntiKt4EMTopoJetsAuxDyn_JetEMScaleMomentum_phi = 0;
   AntiKt4EMTopoJetsAuxDyn_TruthWZ = 0;
   AntiKt4EMTopoJetsAuxDyn_JetEMScaleMomentum_m = 0;
   AntiKt4EMTopoJetsAuxDyn_TruthWZCount = 0;
   AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt4EMTopoJetsAuxDyn_TruthWZPt = 0;
   AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt4EMTopoJetsAuxDyn_Width = 0;
   AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt4EMTopoJetsAuxDyn_ZCut12 = 0;
   AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt4EMTopoJetsAuxDyn_ZCut23 = 0;
   AntiKt4EMTopoJetsAuxDyn_InputType = 0;
   AntiKt4EMTopoJetsAuxDyn_ZCut34 = 0;
   AntiKt4EMTopoJetsAuxDyn_AlgorithmType = 0;
   AntiKt4EMTopoJetsAuxDyn_SizeParameter = 0;
   AntiKt4EMTopoJetsAuxDyn_ActiveArea = 0;
   AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_eta = 0;
   AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_m = 0;
   AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_phi = 0;
   AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_pt = 0;
   AntiKt4EMTopoJetsAuxDyn_Angularity = 0;
   AntiKt4EMTopoJetsAuxDyn_Aplanarity = 0;
   AntiKt4EMTopoJetsAuxDyn_AverageLArQF = 0;
   AntiKt4EMTopoJetsAuxDyn_BchCorrCell = 0;
   AntiKt4EMTopoJetsAuxDyn_CentroidR = 0;
   AntiKt4EMTopoJetsAuxDyn_Dip12 = 0;
   AntiKt4EMTopoJetsAuxDyn_Dip13 = 0;
   AntiKt4EMTopoJetsAuxDyn_Dip23 = 0;
   AntiKt4EMTopoJetsAuxDyn_DipExcl12 = 0;
   AntiKt4EMTopoJetsAuxDyn_ECF1 = 0;
   AntiKt4EMTopoJetsAuxDyn_ECF2 = 0;
   AntiKt4EMTopoJetsAuxDyn_ECF3 = 0;
   AntiKt4EMTopoJetsAuxDyn_EMFrac = 0;
   AntiKt4EMTopoJetsAuxDyn_EMTopo = 0;
   AntiKt4EMTopoJetsAuxDyn_EMTopoCount = 0;
   AntiKt4EMTopoJetsAuxDyn_EMTopoPt = 0;
   AntiKt4EMTopoJetsAuxDyn_EnergyPerSampling = 0;
   AntiKt4EMTopoJetsAuxDyn_FoxWolfram0 = 0;
   AntiKt4EMTopoJetsAuxDyn_FoxWolfram1 = 0;
   AntiKt4EMTopoJetsAuxDyn_FoxWolfram2 = 0;
   AntiKt4EMTopoJetsAuxDyn_FoxWolfram3 = 0;
   AntiKt4EMTopoJetsAuxDyn_FoxWolfram4 = 0;
   AntiKt4EMTopoJetsAuxDyn_FracSamplingMax = 0;
   AntiKt4EMTopoJetsAuxDyn_FracSamplingMaxIndex = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostAntiKt3TrackJet = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostAntiKt3TrackJetCount = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostAntiKt3TrackJetPt = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostAntiKt4TrackJet = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostAntiKt4TrackJetCount = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostAntiKt4TrackJetPt = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostMuonSegment = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostMuonSegmentCount = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostTrack = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostTrackCount = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostTrackPt = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostTruth = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostTruthAssociationFraction = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostTruthCount = 0;
   AntiKt4EMTopoJetsAuxDyn_GhostTruthPt = 0;
   AntiKt4EMTopoJetsAuxDyn_HECFrac = 0;
   AntiKt4EMTopoJetsAuxDyn_HECQuality = 0;
   AntiKt4EMTopoJetsAuxDyn_JVF = 0;
   AntiKt4EMTopoJetsAuxDyn_JetGhostArea = 0;
   AntiKt4EMTopoJetsAuxDyn_KtDR = 0;
   AntiKt4EMTopoJetsAuxDyn_LArQuality = 0;
   AntiKt4EMTopoJetsAuxDyn_Mu12 = 0;
   AntiKt4LCTopoJetsAuxDyn_N90Constituents = 0;
   AntiKt4LCTopoJetsAuxDyn_NegativeE = 0;
   AntiKt4LCTopoJetsAuxDyn_NumTrkPt1000 = 0;
   AntiKt4LCTopoJetsAuxDyn_NumTrkPt500 = 0;
   AntiKt4LCTopoJetsAuxDyn_OotFracClusters10 = 0;
   AntiKt4LCTopoJetsAuxDyn_OotFracClusters5 = 0;
   AntiKt4LCTopoJetsAuxDyn_PlanarFlow = 0;
   AntiKt4LCTopoJetsAuxDyn_Sphericity = 0;
   AntiKt4LCTopoJetsAuxDyn_Split12 = 0;
   AntiKt4LCTopoJetsAuxDyn_Split23 = 0;
   AntiKt4LCTopoJetsAuxDyn_Split34 = 0;
   AntiKt4LCTopoJetsAuxDyn_SumPtTrkPt1000 = 0;
   AntiKt4LCTopoJetsAuxDyn_SumPtTrkPt500 = 0;
   AntiKt4LCTopoJetsAuxDyn_Tau1 = 0;
   AntiKt4LCTopoJetsAuxDyn_Tau2 = 0;
   AntiKt4LCTopoJetsAuxDyn_Tau3 = 0;
   AntiKt4LCTopoJetsAuxDyn_ThrustMaj = 0;
   AntiKt4LCTopoJetsAuxDyn_ThrustMin = 0;
   AntiKt4LCTopoJetsAuxDyn_Timing = 0;
   AntiKt4LCTopoJetsAuxDyn_Track = 0;
   AntiKt4LCTopoJetsAuxDyn_TrackCount = 0;
   AntiKt4LCTopoJetsAuxDyn_TrackPt = 0;
   AntiKt4LCTopoJetsAuxDyn_TrackWidthPt1000 = 0;
   AntiKt4LCTopoJetsAuxDyn_TrackWidthPt500 = 0;
   AntiKt4LCTopoJetsAuxDyn_Truth = 0;
   AntiKt4LCTopoJetsAuxDyn_TruthCount = 0;
   AntiKt4LCTopoJetsAuxDyn_TruthLabelDeltaR_B = 0;
   AntiKt4LCTopoJetsAuxDyn_TruthLabelDeltaR_C = 0;
   AntiKt4LCTopoJetsAuxDyn_ConstituentScale = 0;
   AntiKt4LCTopoJetsAuxDyn_TruthLabelDeltaR_T = 0;
   AntiKt4LCTopoJetsAuxDyn_JetEMScaleMomentum_pt = 0;
   AntiKt4LCTopoJetsAuxDyn_TruthLabelID = 0;
   AntiKt4LCTopoJetsAuxDyn_JetEMScaleMomentum_eta = 0;
   AntiKt4LCTopoJetsAuxDyn_TruthPt = 0;
   AntiKt4LCTopoJetsAuxDyn_JetEMScaleMomentum_phi = 0;
   AntiKt4LCTopoJetsAuxDyn_TruthWZ = 0;
   AntiKt4LCTopoJetsAuxDyn_JetEMScaleMomentum_m = 0;
   AntiKt4LCTopoJetsAuxDyn_TruthWZCount = 0;
   AntiKt4LCTopoJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt4LCTopoJetsAuxDyn_TruthWZPt = 0;
   AntiKt4LCTopoJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt4LCTopoJetsAuxDyn_Width = 0;
   AntiKt4LCTopoJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt4LCTopoJetsAuxDyn_ZCut12 = 0;
   AntiKt4LCTopoJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt4LCTopoJetsAuxDyn_ZCut23 = 0;
   AntiKt4LCTopoJetsAuxDyn_InputType = 0;
   AntiKt4LCTopoJetsAuxDyn_ZCut34 = 0;
   AntiKt4LCTopoJetsAuxDyn_AlgorithmType = 0;
   AntiKt4LCTopoJetsAuxDyn_SizeParameter = 0;
   AntiKt4LCTopoJetsAuxDyn_ActiveArea = 0;
   AntiKt4LCTopoJetsAuxDyn_ActiveArea4vec_eta = 0;
   AntiKt4LCTopoJetsAuxDyn_ActiveArea4vec_m = 0;
   AntiKt4LCTopoJetsAuxDyn_ActiveArea4vec_phi = 0;
   AntiKt4LCTopoJetsAuxDyn_ActiveArea4vec_pt = 0;
   AntiKt4LCTopoJetsAuxDyn_Angularity = 0;
   AntiKt4LCTopoJetsAuxDyn_Aplanarity = 0;
   AntiKt4LCTopoJetsAuxDyn_AverageLArQF = 0;
   AntiKt4LCTopoJetsAuxDyn_BchCorrCell = 0;
   AntiKt4LCTopoJetsAuxDyn_CentroidR = 0;
   AntiKt4LCTopoJetsAuxDyn_Dip12 = 0;
   AntiKt4LCTopoJetsAuxDyn_Dip13 = 0;
   AntiKt4LCTopoJetsAuxDyn_Dip23 = 0;
   AntiKt4LCTopoJetsAuxDyn_DipExcl12 = 0;
   AntiKt4LCTopoJetsAuxDyn_ECF1 = 0;
   AntiKt4LCTopoJetsAuxDyn_ECF2 = 0;
   AntiKt4LCTopoJetsAuxDyn_ECF3 = 0;
   AntiKt4LCTopoJetsAuxDyn_EMFrac = 0;
   AntiKt4LCTopoJetsAuxDyn_EMTopo = 0;
   AntiKt4LCTopoJetsAuxDyn_EMTopoCount = 0;
   AntiKt4LCTopoJetsAuxDyn_EMTopoPt = 0;
   AntiKt4LCTopoJetsAuxDyn_EnergyPerSampling = 0;
   AntiKt4LCTopoJetsAuxDyn_FoxWolfram0 = 0;
   AntiKt4LCTopoJetsAuxDyn_FoxWolfram1 = 0;
   AntiKt4LCTopoJetsAuxDyn_FoxWolfram2 = 0;
   AntiKt4LCTopoJetsAuxDyn_FoxWolfram3 = 0;
   AntiKt4LCTopoJetsAuxDyn_FoxWolfram4 = 0;
   AntiKt4LCTopoJetsAuxDyn_FracSamplingMax = 0;
   AntiKt4LCTopoJetsAuxDyn_FracSamplingMaxIndex = 0;
   AntiKt4LCTopoJetsAuxDyn_GhostAntiKt3TrackJet = 0;
   AntiKt4LCTopoJetsAuxDyn_GhostAntiKt3TrackJetCount = 0;
   AntiKt4LCTopoJetsAuxDyn_GhostAntiKt3TrackJetPt = 0;
   AntiKt4LCTopoJetsAuxDyn_GhostAntiKt4TrackJet = 0;
   AntiKt4LCTopoJetsAuxDyn_GhostAntiKt4TrackJetCount = 0;
   AntiKt4LCTopoJetsAuxDyn_GhostAntiKt4TrackJetPt = 0;
   AntiKt4LCTopoJetsAuxDyn_GhostMuonSegment = 0;
   AntiKt4LCTopoJetsAuxDyn_GhostMuonSegmentCount = 0;
   AntiKt4LCTopoJetsAuxDyn_GhostTrack = 0;
   AntiKt4LCTopoJetsAuxDyn_GhostTrackCount = 0;
   AntiKt4LCTopoJetsAuxDyn_GhostTrackPt = 0;
   AntiKt4LCTopoJetsAuxDyn_GhostTruth = 0;
   AntiKt4LCTopoJetsAuxDyn_GhostTruthAssociationFraction = 0;
   AntiKt4LCTopoJetsAuxDyn_GhostTruthCount = 0;
   AntiKt4LCTopoJetsAuxDyn_GhostTruthPt = 0;
   AntiKt4LCTopoJetsAuxDyn_HECFrac = 0;
   AntiKt4LCTopoJetsAuxDyn_HECQuality = 0;
   AntiKt4LCTopoJetsAuxDyn_JVF = 0;
   AntiKt4LCTopoJetsAuxDyn_JetGhostArea = 0;
   AntiKt4LCTopoJetsAuxDyn_KtDR = 0;
   AntiKt4LCTopoJetsAuxDyn_LArQuality = 0;
   AntiKt4LCTopoJetsAuxDyn_LCTopo = 0;
   AntiKt4LCTopoJetsAuxDyn_LCTopoCount = 0;
   AntiKt4LCTopoJetsAuxDyn_LCTopoPt = 0;
   AntiKt4LCTopoJetsAuxDyn_Mu12 = 0;
   AntiKt4PV0TrackJetsAuxDyn_GhostTruthCount = 0;
   AntiKt4PV0TrackJetsAuxDyn_GhostTruthPt = 0;
   AntiKt4PV0TrackJetsAuxDyn_JetGhostArea = 0;
   AntiKt4PV0TrackJetsAuxDyn_KtDR = 0;
   AntiKt4PV0TrackJetsAuxDyn_Mu12 = 0;
   AntiKt4PV0TrackJetsAuxDyn_PlanarFlow = 0;
   AntiKt4PV0TrackJetsAuxDyn_Sphericity = 0;
   AntiKt4PV0TrackJetsAuxDyn_Split12 = 0;
   AntiKt4PV0TrackJetsAuxDyn_Split23 = 0;
   AntiKt4PV0TrackJetsAuxDyn_Split34 = 0;
   AntiKt4PV0TrackJetsAuxDyn_ConstituentScale = 0;
   AntiKt4PV0TrackJetsAuxDyn_Tau1 = 0;
   AntiKt4PV0TrackJetsAuxDyn_Tau2 = 0;
   AntiKt4PV0TrackJetsAuxDyn_Tau3 = 0;
   AntiKt4PV0TrackJetsAuxDyn_ThrustMaj = 0;
   AntiKt4PV0TrackJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt4PV0TrackJetsAuxDyn_ThrustMin = 0;
   AntiKt4PV0TrackJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt4PV0TrackJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt4PV0TrackJetsAuxDyn_Track = 0;
   AntiKt4PV0TrackJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt4PV0TrackJetsAuxDyn_TrackCount = 0;
   AntiKt4PV0TrackJetsAuxDyn_InputType = 0;
   AntiKt4PV0TrackJetsAuxDyn_TrackPt = 0;
   AntiKt4PV0TrackJetsAuxDyn_AlgorithmType = 0;
   AntiKt4PV0TrackJetsAuxDyn_SizeParameter = 0;
   AntiKt4PV0TrackJetsAuxDyn_Truth = 0;
   AntiKt4PV0TrackJetsAuxDyn_TruthCount = 0;
   AntiKt4PV0TrackJetsAuxDyn_TruthPt = 0;
   AntiKt4PV0TrackJetsAuxDyn_TruthWZ = 0;
   AntiKt4PV0TrackJetsAuxDyn_TruthWZCount = 0;
   AntiKt4PV0TrackJetsAuxDyn_TruthWZPt = 0;
   AntiKt4PV0TrackJetsAuxDyn_Width = 0;
   AntiKt4PV0TrackJetsAuxDyn_ZCut12 = 0;
   AntiKt4PV0TrackJetsAuxDyn_ZCut23 = 0;
   AntiKt4PV0TrackJetsAuxDyn_ZCut34 = 0;
   AntiKt4PV0TrackJetsAuxDyn_Angularity = 0;
   AntiKt4PV0TrackJetsAuxDyn_Aplanarity = 0;
   AntiKt4PV0TrackJetsAuxDyn_Dip12 = 0;
   AntiKt4PV0TrackJetsAuxDyn_Dip13 = 0;
   AntiKt4PV0TrackJetsAuxDyn_Dip23 = 0;
   AntiKt4PV0TrackJetsAuxDyn_DipExcl12 = 0;
   AntiKt4PV0TrackJetsAuxDyn_ECF1 = 0;
   AntiKt4PV0TrackJetsAuxDyn_ECF2 = 0;
   AntiKt4PV0TrackJetsAuxDyn_ECF3 = 0;
   AntiKt4PV0TrackJetsAuxDyn_FoxWolfram0 = 0;
   AntiKt4PV0TrackJetsAuxDyn_FoxWolfram1 = 0;
   AntiKt4PV0TrackJetsAuxDyn_FoxWolfram2 = 0;
   AntiKt4PV0TrackJetsAuxDyn_FoxWolfram3 = 0;
   AntiKt4PV0TrackJetsAuxDyn_FoxWolfram4 = 0;
   AntiKt4PV0TrackJetsAuxDyn_GhostTruth = 0;
   AntiKt4TruthJetsAuxDyn_Tau2 = 0;
   AntiKt4TruthJetsAuxDyn_FoxWolfram1 = 0;
   AntiKt4TruthJetsAuxDyn_Tau3 = 0;
   AntiKt4TruthJetsAuxDyn_FoxWolfram2 = 0;
   AntiKt4TruthJetsAuxDyn_ThrustMaj = 0;
   AntiKt4TruthJetsAuxDyn_FoxWolfram3 = 0;
   AntiKt4TruthJetsAuxDyn_ThrustMin = 0;
   AntiKt4TruthJetsAuxDyn_FoxWolfram4 = 0;
   AntiKt4TruthJetsAuxDyn_Truth = 0;
   AntiKt4TruthJetsAuxDyn_TruthCount = 0;
   AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_B = 0;
   AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_C = 0;
   AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_T = 0;
   AntiKt4TruthJetsAuxDyn_TruthLabelID = 0;
   AntiKt4TruthJetsAuxDyn_TruthPt = 0;
   AntiKt4TruthJetsAuxDyn_Width = 0;
   AntiKt4TruthJetsAuxDyn_ZCut12 = 0;
   AntiKt4TruthJetsAuxDyn_ZCut23 = 0;
   AntiKt4TruthJetsAuxDyn_ZCut34 = 0;
   AntiKt4TruthJetsAuxDyn_JetGhostArea = 0;
   AntiKt4TruthJetsAuxDyn_KtDR = 0;
   AntiKt4TruthJetsAuxDyn_ConstituentScale = 0;
   AntiKt4TruthJetsAuxDyn_Angularity = 0;
   AntiKt4TruthJetsAuxDyn_Aplanarity = 0;
   AntiKt4TruthJetsAuxDyn_Mu12 = 0;
   AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt4TruthJetsAuxDyn_Dip12 = 0;
   AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt4TruthJetsAuxDyn_Dip13 = 0;
   AntiKt4TruthJetsAuxDyn_InputType = 0;
   AntiKt4TruthJetsAuxDyn_Dip23 = 0;
   AntiKt4TruthJetsAuxDyn_AlgorithmType = 0;
   AntiKt4TruthJetsAuxDyn_DipExcl12 = 0;
   AntiKt4TruthJetsAuxDyn_SizeParameter = 0;
   AntiKt4TruthJetsAuxDyn_ECF1 = 0;
   AntiKt4TruthJetsAuxDyn_PlanarFlow = 0;
   AntiKt4TruthJetsAuxDyn_ECF2 = 0;
   AntiKt4TruthJetsAuxDyn_Sphericity = 0;
   AntiKt4TruthJetsAuxDyn_ECF3 = 0;
   AntiKt4TruthJetsAuxDyn_Split12 = 0;
   AntiKt4TruthJetsAuxDyn_Split23 = 0;
   AntiKt4TruthJetsAuxDyn_Split34 = 0;
   AntiKt4TruthJetsAuxDyn_Tau1 = 0;
   AntiKt4TruthJetsAuxDyn_FoxWolfram0 = 0;
   AntiKt4TruthWZJetsAuxDyn_JetGhostArea = 0;
   AntiKt4TruthWZJetsAuxDyn_KtDR = 0;
   AntiKt4TruthWZJetsAuxDyn_Mu12 = 0;
   AntiKt4TruthWZJetsAuxDyn_PlanarFlow = 0;
   AntiKt4TruthWZJetsAuxDyn_Sphericity = 0;
   AntiKt4TruthWZJetsAuxDyn_Split12 = 0;
   AntiKt4TruthWZJetsAuxDyn_Split23 = 0;
   AntiKt4TruthWZJetsAuxDyn_Split34 = 0;
   AntiKt4TruthWZJetsAuxDyn_ConstituentScale = 0;
   AntiKt4TruthWZJetsAuxDyn_Tau1 = 0;
   AntiKt4TruthWZJetsAuxDyn_Tau2 = 0;
   AntiKt4TruthWZJetsAuxDyn_Tau3 = 0;
   AntiKt4TruthWZJetsAuxDyn_ThrustMaj = 0;
   AntiKt4TruthWZJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt4TruthWZJetsAuxDyn_ThrustMin = 0;
   AntiKt4TruthWZJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt4TruthWZJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt4TruthWZJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt4TruthWZJetsAuxDyn_InputType = 0;
   AntiKt4TruthWZJetsAuxDyn_AlgorithmType = 0;
   AntiKt4TruthWZJetsAuxDyn_SizeParameter = 0;
   AntiKt4TruthWZJetsAuxDyn_Truth = 0;
   AntiKt4TruthWZJetsAuxDyn_TruthCount = 0;
   AntiKt4TruthWZJetsAuxDyn_TruthLabelDeltaR_B = 0;
   AntiKt4TruthWZJetsAuxDyn_TruthLabelDeltaR_C = 0;
   AntiKt4TruthWZJetsAuxDyn_TruthLabelDeltaR_T = 0;
   AntiKt4TruthWZJetsAuxDyn_TruthLabelID = 0;
   AntiKt4TruthWZJetsAuxDyn_TruthPt = 0;
   AntiKt4TruthWZJetsAuxDyn_TruthWZ = 0;
   AntiKt4TruthWZJetsAuxDyn_TruthWZCount = 0;
   AntiKt4TruthWZJetsAuxDyn_TruthWZPt = 0;
   AntiKt4TruthWZJetsAuxDyn_Width = 0;
   AntiKt4TruthWZJetsAuxDyn_ZCut12 = 0;
   AntiKt4TruthWZJetsAuxDyn_ZCut23 = 0;
   AntiKt4TruthWZJetsAuxDyn_ZCut34 = 0;
   AntiKt4TruthWZJetsAuxDyn_Angularity = 0;
   AntiKt4TruthWZJetsAuxDyn_Aplanarity = 0;
   AntiKt4TruthWZJetsAuxDyn_Dip12 = 0;
   AntiKt4TruthWZJetsAuxDyn_Dip13 = 0;
   AntiKt4TruthWZJetsAuxDyn_Dip23 = 0;
   AntiKt4TruthWZJetsAuxDyn_DipExcl12 = 0;
   AntiKt4TruthWZJetsAuxDyn_ECF1 = 0;
   AntiKt4TruthWZJetsAuxDyn_ECF2 = 0;
   AntiKt4TruthWZJetsAuxDyn_ECF3 = 0;
   AntiKt4TruthWZJetsAuxDyn_FoxWolfram0 = 0;
   AntiKt4TruthWZJetsAuxDyn_FoxWolfram1 = 0;
   AntiKt4TruthWZJetsAuxDyn_FoxWolfram2 = 0;
   AntiKt4TruthWZJetsAuxDyn_FoxWolfram3 = 0;
   AntiKt4TruthWZJetsAuxDyn_FoxWolfram4 = 0;
   AntiKt4ZTrackJetsAuxDyn_GhostTruthCount = 0;
   AntiKt4ZTrackJetsAuxDyn_GhostTruthPt = 0;
   AntiKt4ZTrackJetsAuxDyn_JetGhostArea = 0;
   AntiKt4ZTrackJetsAuxDyn_KtDR = 0;
   AntiKt4ZTrackJetsAuxDyn_Mu12 = 0;
   AntiKt4ZTrackJetsAuxDyn_PlanarFlow = 0;
   AntiKt4ZTrackJetsAuxDyn_Sphericity = 0;
   AntiKt4ZTrackJetsAuxDyn_Split12 = 0;
   AntiKt4ZTrackJetsAuxDyn_Split23 = 0;
   AntiKt4ZTrackJetsAuxDyn_Split34 = 0;
   AntiKt4ZTrackJetsAuxDyn_ConstituentScale = 0;
   AntiKt4ZTrackJetsAuxDyn_Tau1 = 0;
   AntiKt4ZTrackJetsAuxDyn_Tau2 = 0;
   AntiKt4ZTrackJetsAuxDyn_Tau3 = 0;
   AntiKt4ZTrackJetsAuxDyn_ThrustMaj = 0;
   AntiKt4ZTrackJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   AntiKt4ZTrackJetsAuxDyn_ThrustMin = 0;
   AntiKt4ZTrackJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   AntiKt4ZTrackJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   AntiKt4ZTrackJetsAuxDyn_Track = 0;
   AntiKt4ZTrackJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   AntiKt4ZTrackJetsAuxDyn_TrackCount = 0;
   AntiKt4ZTrackJetsAuxDyn_InputType = 0;
   AntiKt4ZTrackJetsAuxDyn_TrackPt = 0;
   AntiKt4ZTrackJetsAuxDyn_AlgorithmType = 0;
   AntiKt4ZTrackJetsAuxDyn_SizeParameter = 0;
   AntiKt4ZTrackJetsAuxDyn_Truth = 0;
   AntiKt4ZTrackJetsAuxDyn_TruthCount = 0;
   AntiKt4ZTrackJetsAuxDyn_TruthPt = 0;
   AntiKt4ZTrackJetsAuxDyn_TruthWZ = 0;
   AntiKt4ZTrackJetsAuxDyn_TruthWZCount = 0;
   AntiKt4ZTrackJetsAuxDyn_TruthWZPt = 0;
   AntiKt4ZTrackJetsAuxDyn_Width = 0;
   AntiKt4ZTrackJetsAuxDyn_ZCut12 = 0;
   AntiKt4ZTrackJetsAuxDyn_ZCut23 = 0;
   AntiKt4ZTrackJetsAuxDyn_ZCut34 = 0;
   AntiKt4ZTrackJetsAuxDyn_Angularity = 0;
   AntiKt4ZTrackJetsAuxDyn_Aplanarity = 0;
   AntiKt4ZTrackJetsAuxDyn_Dip12 = 0;
   AntiKt4ZTrackJetsAuxDyn_Dip13 = 0;
   AntiKt4ZTrackJetsAuxDyn_Dip23 = 0;
   AntiKt4ZTrackJetsAuxDyn_DipExcl12 = 0;
   AntiKt4ZTrackJetsAuxDyn_ECF1 = 0;
   AntiKt4ZTrackJetsAuxDyn_ECF2 = 0;
   AntiKt4ZTrackJetsAuxDyn_ECF3 = 0;
   AntiKt4ZTrackJetsAuxDyn_FoxWolfram0 = 0;
   AntiKt4ZTrackJetsAuxDyn_FoxWolfram1 = 0;
   AntiKt4ZTrackJetsAuxDyn_FoxWolfram2 = 0;
   AntiKt4ZTrackJetsAuxDyn_FoxWolfram3 = 0;
   AntiKt4ZTrackJetsAuxDyn_FoxWolfram4 = 0;
   AntiKt4ZTrackJetsAuxDyn_GhostTruth = 0;
   BTagging_AntiKt10LCTopoAuxDyn_BTagTrackToJetAssociator = 0;
   BTagging_AntiKt10LCTopoAuxDyn_IP2D_flagFromV0ofTracks = 0;
   BTagging_AntiKt10LCTopoAuxDyn_IP2D_gradeOfTracks = 0;
   BTagging_AntiKt10LCTopoAuxDyn_SV0_TrackParticleLinks = 0;
   BTagging_AntiKt10LCTopoAuxDyn_IP2D_sigD0wrtPVofTracks = 0;
   BTagging_AntiKt10LCTopoAuxDyn_IP2D_valD0wrtPVofTracks = 0;
   BTagging_AntiKt10LCTopoAuxDyn_SV1_TrackParticleLinks = 0;
   BTagging_AntiKt10LCTopoAuxDyn_IP2D_weightBofTracks = 0;
   BTagging_AntiKt10LCTopoAuxDyn_IP2D_weightCofTracks = 0;
   BTagging_AntiKt10LCTopoAuxDyn_IP2D_TrackParticleLinks = 0;
   BTagging_AntiKt10LCTopoAuxDyn_IP2D_weightUofTracks = 0;
   BTagging_AntiKt10LCTopoAuxDyn_IP3D_flagFromV0ofTracks = 0;
   BTagging_AntiKt10LCTopoAuxDyn_IP3D_TrackParticleLinks = 0;
   BTagging_AntiKt10LCTopoAuxDyn_IP3D_gradeOfTracks = 0;
   BTagging_AntiKt10LCTopoAuxDyn_IP3D_sigD0wrtPVofTracks = 0;
   BTagging_AntiKt10LCTopoAuxDyn_IP3D_sigZ0wrtPVofTracks = 0;
   BTagging_AntiKt10LCTopoAuxDyn_IP3D_valD0wrtPVofTracks = 0;
   BTagging_AntiKt10LCTopoAuxDyn_IP3D_valZ0wrtPVofTracks = 0;
   BTagging_AntiKt10LCTopoAuxDyn_IP3D_weightBofTracks = 0;
   BTagging_AntiKt10LCTopoAuxDyn_IP3D_weightCofTracks = 0;
   BTagging_AntiKt10LCTopoAuxDyn_IP3D_weightUofTracks = 0;
   BTagging_AntiKt10LCTopoAuxDyn_SV0_N2Tpair = 0;
   BTagging_AntiKt10LCTopoAuxDyn_SV0_NGTinSvx = 0;
   BTagging_AntiKt10LCTopoAuxDyn_SV0_badTracksIP = 0;
   BTagging_AntiKt10LCTopoAuxDyn_SV0_efracsvx = 0;
   BTagging_AntiKt10LCTopoAuxDyn_SV0_energyTrkInJet = 0;
   BTagging_AntiKt10LCTopoAuxDyn_SV0_masssvx = 0;
   BTagging_AntiKt10LCTopoAuxDyn_SV0_normdist = 0;
   BTagging_AntiKt10LCTopoAuxDyn_SV0_pb = 0;
   BTagging_AntiKt10LCTopoAuxDyn_SV0_pc = 0;
   BTagging_AntiKt10LCTopoAuxDyn_SV0_pu = 0;
   BTagging_AntiKt10LCTopoAuxDyn_SV0_vertices = 0;
   BTagging_AntiKt10LCTopoAuxDyn_SV1_N2Tpair = 0;
   BTagging_AntiKt10LCTopoAuxDyn_SV1_NGTinSvx = 0;
   BTagging_AntiKt10LCTopoAuxDyn_SV1_badTracksIP = 0;
   BTagging_AntiKt10LCTopoAuxDyn_SV1_efracsvx = 0;
   BTagging_AntiKt10LCTopoAuxDyn_SV1_energyTrkInJet = 0;
   BTagging_AntiKt10LCTopoAuxDyn_SV1_masssvx = 0;
   BTagging_AntiKt10LCTopoAuxDyn_SV1_normdist = 0;
   BTagging_AntiKt10LCTopoAuxDyn_SV1_vertices = 0;
   BTagging_AntiKt10TruthAuxDyn_BTagTrackToJetAssociator = 0;
   BTagging_AntiKt10TruthAuxDyn_IP2D_flagFromV0ofTracks = 0;
   BTagging_AntiKt10TruthAuxDyn_IP2D_gradeOfTracks = 0;
   BTagging_AntiKt10TruthAuxDyn_SV0_TrackParticleLinks = 0;
   BTagging_AntiKt10TruthAuxDyn_IP2D_sigD0wrtPVofTracks = 0;
   BTagging_AntiKt10TruthAuxDyn_IP2D_valD0wrtPVofTracks = 0;
   BTagging_AntiKt10TruthAuxDyn_SV1_TrackParticleLinks = 0;
   BTagging_AntiKt10TruthAuxDyn_IP2D_weightBofTracks = 0;
   BTagging_AntiKt10TruthAuxDyn_IP2D_weightCofTracks = 0;
   BTagging_AntiKt10TruthAuxDyn_IP2D_TrackParticleLinks = 0;
   BTagging_AntiKt10TruthAuxDyn_IP2D_weightUofTracks = 0;
   BTagging_AntiKt10TruthAuxDyn_IP3D_flagFromV0ofTracks = 0;
   BTagging_AntiKt10TruthAuxDyn_IP3D_TrackParticleLinks = 0;
   BTagging_AntiKt10TruthAuxDyn_IP3D_gradeOfTracks = 0;
   BTagging_AntiKt10TruthAuxDyn_IP3D_sigD0wrtPVofTracks = 0;
   BTagging_AntiKt10TruthAuxDyn_IP3D_sigZ0wrtPVofTracks = 0;
   BTagging_AntiKt10TruthAuxDyn_IP3D_valD0wrtPVofTracks = 0;
   BTagging_AntiKt10TruthAuxDyn_IP3D_valZ0wrtPVofTracks = 0;
   BTagging_AntiKt10TruthAuxDyn_IP3D_weightBofTracks = 0;
   BTagging_AntiKt10TruthAuxDyn_IP3D_weightCofTracks = 0;
   BTagging_AntiKt10TruthAuxDyn_IP3D_weightUofTracks = 0;
   BTagging_AntiKt10TruthAuxDyn_SV0_N2Tpair = 0;
   BTagging_AntiKt10TruthAuxDyn_SV0_NGTinSvx = 0;
   BTagging_AntiKt10TruthAuxDyn_SV0_badTracksIP = 0;
   BTagging_AntiKt10TruthAuxDyn_SV0_efracsvx = 0;
   BTagging_AntiKt10TruthAuxDyn_SV0_energyTrkInJet = 0;
   BTagging_AntiKt10TruthAuxDyn_SV0_masssvx = 0;
   BTagging_AntiKt10TruthAuxDyn_SV0_normdist = 0;
   BTagging_AntiKt10TruthAuxDyn_SV0_pb = 0;
   BTagging_AntiKt10TruthAuxDyn_SV0_pc = 0;
   BTagging_AntiKt10TruthAuxDyn_SV0_pu = 0;
   BTagging_AntiKt10TruthAuxDyn_SV0_vertices = 0;
   BTagging_AntiKt10TruthAuxDyn_SV1_N2Tpair = 0;
   BTagging_AntiKt10TruthAuxDyn_SV1_NGTinSvx = 0;
   BTagging_AntiKt10TruthAuxDyn_SV1_badTracksIP = 0;
   BTagging_AntiKt10TruthAuxDyn_SV1_efracsvx = 0;
   BTagging_AntiKt10TruthAuxDyn_SV1_energyTrkInJet = 0;
   BTagging_AntiKt10TruthAuxDyn_SV1_masssvx = 0;
   BTagging_AntiKt10TruthAuxDyn_SV1_normdist = 0;
   BTagging_AntiKt10TruthAuxDyn_SV1_vertices = 0;
   BTagging_AntiKt10TruthWZAuxDyn_BTagTrackToJetAssociator = 0;
   BTagging_AntiKt10TruthWZAuxDyn_IP2D_flagFromV0ofTracks = 0;
   BTagging_AntiKt10TruthWZAuxDyn_IP2D_gradeOfTracks = 0;
   BTagging_AntiKt10TruthWZAuxDyn_SV0_TrackParticleLinks = 0;
   BTagging_AntiKt10TruthWZAuxDyn_IP2D_sigD0wrtPVofTracks = 0;
   BTagging_AntiKt10TruthWZAuxDyn_IP2D_valD0wrtPVofTracks = 0;
   BTagging_AntiKt10TruthWZAuxDyn_SV1_TrackParticleLinks = 0;
   BTagging_AntiKt10TruthWZAuxDyn_IP2D_weightBofTracks = 0;
   BTagging_AntiKt10TruthWZAuxDyn_IP2D_weightCofTracks = 0;
   BTagging_AntiKt10TruthWZAuxDyn_IP2D_TrackParticleLinks = 0;
   BTagging_AntiKt10TruthWZAuxDyn_IP2D_weightUofTracks = 0;
   BTagging_AntiKt10TruthWZAuxDyn_IP3D_flagFromV0ofTracks = 0;
   BTagging_AntiKt10TruthWZAuxDyn_IP3D_TrackParticleLinks = 0;
   BTagging_AntiKt10TruthWZAuxDyn_IP3D_gradeOfTracks = 0;
   BTagging_AntiKt10TruthWZAuxDyn_IP3D_sigD0wrtPVofTracks = 0;
   BTagging_AntiKt10TruthWZAuxDyn_IP3D_sigZ0wrtPVofTracks = 0;
   BTagging_AntiKt10TruthWZAuxDyn_IP3D_valD0wrtPVofTracks = 0;
   BTagging_AntiKt10TruthWZAuxDyn_IP3D_valZ0wrtPVofTracks = 0;
   BTagging_AntiKt10TruthWZAuxDyn_IP3D_weightBofTracks = 0;
   BTagging_AntiKt10TruthWZAuxDyn_IP3D_weightCofTracks = 0;
   BTagging_AntiKt10TruthWZAuxDyn_IP3D_weightUofTracks = 0;
   BTagging_AntiKt10TruthWZAuxDyn_SV0_N2Tpair = 0;
   BTagging_AntiKt10TruthWZAuxDyn_SV0_NGTinSvx = 0;
   BTagging_AntiKt10TruthWZAuxDyn_SV0_badTracksIP = 0;
   BTagging_AntiKt10TruthWZAuxDyn_SV0_efracsvx = 0;
   BTagging_AntiKt10TruthWZAuxDyn_SV0_energyTrkInJet = 0;
   BTagging_AntiKt10TruthWZAuxDyn_SV0_masssvx = 0;
   BTagging_AntiKt10TruthWZAuxDyn_SV0_normdist = 0;
   BTagging_AntiKt10TruthWZAuxDyn_SV0_pb = 0;
   BTagging_AntiKt10TruthWZAuxDyn_SV0_pc = 0;
   BTagging_AntiKt10TruthWZAuxDyn_SV0_pu = 0;
   BTagging_AntiKt10TruthWZAuxDyn_SV0_vertices = 0;
   BTagging_AntiKt10TruthWZAuxDyn_SV1_N2Tpair = 0;
   BTagging_AntiKt10TruthWZAuxDyn_SV1_NGTinSvx = 0;
   BTagging_AntiKt10TruthWZAuxDyn_SV1_badTracksIP = 0;
   BTagging_AntiKt10TruthWZAuxDyn_SV1_efracsvx = 0;
   BTagging_AntiKt10TruthWZAuxDyn_SV1_energyTrkInJet = 0;
   BTagging_AntiKt10TruthWZAuxDyn_SV1_masssvx = 0;
   BTagging_AntiKt10TruthWZAuxDyn_SV1_normdist = 0;
   BTagging_AntiKt10TruthWZAuxDyn_SV1_vertices = 0;
   BTagging_AntiKt4EMTopoAuxDyn_BTagTrackToJetAssociator = 0;
   BTagging_AntiKt4EMTopoAuxDyn_IP2D_flagFromV0ofTracks = 0;
   BTagging_AntiKt4EMTopoAuxDyn_IP2D_gradeOfTracks = 0;
   BTagging_AntiKt4EMTopoAuxDyn_SV0_TrackParticleLinks = 0;
   BTagging_AntiKt4EMTopoAuxDyn_IP2D_sigD0wrtPVofTracks = 0;
   BTagging_AntiKt4EMTopoAuxDyn_IP2D_valD0wrtPVofTracks = 0;
   BTagging_AntiKt4EMTopoAuxDyn_SV1_TrackParticleLinks = 0;
   BTagging_AntiKt4EMTopoAuxDyn_IP2D_weightBofTracks = 0;
   BTagging_AntiKt4EMTopoAuxDyn_IP2D_weightCofTracks = 0;
   BTagging_AntiKt4EMTopoAuxDyn_IP2D_TrackParticleLinks = 0;
   BTagging_AntiKt4EMTopoAuxDyn_IP2D_weightUofTracks = 0;
   BTagging_AntiKt4EMTopoAuxDyn_IP3D_flagFromV0ofTracks = 0;
   BTagging_AntiKt4EMTopoAuxDyn_IP3D_TrackParticleLinks = 0;
   BTagging_AntiKt4EMTopoAuxDyn_IP3D_gradeOfTracks = 0;
   BTagging_AntiKt4EMTopoAuxDyn_IP3D_sigD0wrtPVofTracks = 0;
   BTagging_AntiKt4EMTopoAuxDyn_IP3D_sigZ0wrtPVofTracks = 0;
   BTagging_AntiKt4EMTopoAuxDyn_IP3D_valD0wrtPVofTracks = 0;
   BTagging_AntiKt4EMTopoAuxDyn_IP3D_valZ0wrtPVofTracks = 0;
   BTagging_AntiKt4EMTopoAuxDyn_IP3D_weightBofTracks = 0;
   BTagging_AntiKt4EMTopoAuxDyn_IP3D_weightCofTracks = 0;
   BTagging_AntiKt4EMTopoAuxDyn_IP3D_weightUofTracks = 0;
   BTagging_AntiKt4EMTopoAuxDyn_SV0_N2Tpair = 0;
   BTagging_AntiKt4EMTopoAuxDyn_SV0_NGTinSvx = 0;
   BTagging_AntiKt4EMTopoAuxDyn_SV0_badTracksIP = 0;
   BTagging_AntiKt4EMTopoAuxDyn_SV0_efracsvx = 0;
   BTagging_AntiKt4EMTopoAuxDyn_SV0_energyTrkInJet = 0;
   BTagging_AntiKt4EMTopoAuxDyn_SV0_masssvx = 0;
   BTagging_AntiKt4EMTopoAuxDyn_SV0_normdist = 0;
   BTagging_AntiKt4EMTopoAuxDyn_SV0_pb = 0;
   BTagging_AntiKt4EMTopoAuxDyn_SV0_pc = 0;
   BTagging_AntiKt4EMTopoAuxDyn_SV0_pu = 0;
   BTagging_AntiKt4EMTopoAuxDyn_SV0_vertices = 0;
   BTagging_AntiKt4EMTopoAuxDyn_SV1_N2Tpair = 0;
   BTagging_AntiKt4EMTopoAuxDyn_SV1_NGTinSvx = 0;
   BTagging_AntiKt4EMTopoAuxDyn_SV1_badTracksIP = 0;
   BTagging_AntiKt4EMTopoAuxDyn_SV1_efracsvx = 0;
   BTagging_AntiKt4EMTopoAuxDyn_SV1_energyTrkInJet = 0;
   BTagging_AntiKt4EMTopoAuxDyn_SV1_masssvx = 0;
   BTagging_AntiKt4EMTopoAuxDyn_SV1_normdist = 0;
   BTagging_AntiKt4EMTopoAuxDyn_SV1_vertices = 0;
   BTagging_AntiKt4LCTopoAuxDyn_BTagTrackToJetAssociator = 0;
   BTagging_AntiKt4LCTopoAuxDyn_IP2D_flagFromV0ofTracks = 0;
   BTagging_AntiKt4LCTopoAuxDyn_IP2D_gradeOfTracks = 0;
   BTagging_AntiKt4LCTopoAuxDyn_SV0_TrackParticleLinks = 0;
   BTagging_AntiKt4LCTopoAuxDyn_IP2D_sigD0wrtPVofTracks = 0;
   BTagging_AntiKt4LCTopoAuxDyn_IP2D_valD0wrtPVofTracks = 0;
   BTagging_AntiKt4LCTopoAuxDyn_SV1_TrackParticleLinks = 0;
   BTagging_AntiKt4LCTopoAuxDyn_IP2D_weightBofTracks = 0;
   BTagging_AntiKt4LCTopoAuxDyn_IP2D_weightCofTracks = 0;
   BTagging_AntiKt4LCTopoAuxDyn_IP2D_TrackParticleLinks = 0;
   BTagging_AntiKt4LCTopoAuxDyn_IP2D_weightUofTracks = 0;
   BTagging_AntiKt4LCTopoAuxDyn_IP3D_flagFromV0ofTracks = 0;
   BTagging_AntiKt4LCTopoAuxDyn_IP3D_TrackParticleLinks = 0;
   BTagging_AntiKt4LCTopoAuxDyn_IP3D_gradeOfTracks = 0;
   BTagging_AntiKt4LCTopoAuxDyn_IP3D_sigD0wrtPVofTracks = 0;
   BTagging_AntiKt4LCTopoAuxDyn_IP3D_sigZ0wrtPVofTracks = 0;
   BTagging_AntiKt4LCTopoAuxDyn_IP3D_valD0wrtPVofTracks = 0;
   BTagging_AntiKt4LCTopoAuxDyn_IP3D_valZ0wrtPVofTracks = 0;
   BTagging_AntiKt4LCTopoAuxDyn_IP3D_weightBofTracks = 0;
   BTagging_AntiKt4LCTopoAuxDyn_IP3D_weightCofTracks = 0;
   BTagging_AntiKt4LCTopoAuxDyn_IP3D_weightUofTracks = 0;
   BTagging_AntiKt4LCTopoAuxDyn_SV0_N2Tpair = 0;
   BTagging_AntiKt4LCTopoAuxDyn_SV0_NGTinSvx = 0;
   BTagging_AntiKt4LCTopoAuxDyn_SV0_badTracksIP = 0;
   BTagging_AntiKt4LCTopoAuxDyn_SV0_efracsvx = 0;
   BTagging_AntiKt4LCTopoAuxDyn_SV0_energyTrkInJet = 0;
   BTagging_AntiKt4LCTopoAuxDyn_SV0_masssvx = 0;
   BTagging_AntiKt4LCTopoAuxDyn_SV0_normdist = 0;
   BTagging_AntiKt4LCTopoAuxDyn_SV0_pb = 0;
   BTagging_AntiKt4LCTopoAuxDyn_SV0_pc = 0;
   BTagging_AntiKt4LCTopoAuxDyn_SV0_pu = 0;
   BTagging_AntiKt4LCTopoAuxDyn_SV0_vertices = 0;
   BTagging_AntiKt4LCTopoAuxDyn_SV1_N2Tpair = 0;
   BTagging_AntiKt4LCTopoAuxDyn_SV1_NGTinSvx = 0;
   BTagging_AntiKt4LCTopoAuxDyn_SV1_badTracksIP = 0;
   BTagging_AntiKt4LCTopoAuxDyn_SV1_efracsvx = 0;
   BTagging_AntiKt4LCTopoAuxDyn_SV1_energyTrkInJet = 0;
   BTagging_AntiKt4LCTopoAuxDyn_SV1_masssvx = 0;
   BTagging_AntiKt4LCTopoAuxDyn_SV1_normdist = 0;
   BTagging_AntiKt4LCTopoAuxDyn_SV1_vertices = 0;
   BTagging_AntiKt4TruthAuxDyn_BTagTrackToJetAssociator = 0;
   BTagging_AntiKt4TruthAuxDyn_IP2D_flagFromV0ofTracks = 0;
   BTagging_AntiKt4TruthAuxDyn_IP2D_gradeOfTracks = 0;
   BTagging_AntiKt4TruthAuxDyn_SV0_TrackParticleLinks = 0;
   BTagging_AntiKt4TruthAuxDyn_IP2D_sigD0wrtPVofTracks = 0;
   BTagging_AntiKt4TruthAuxDyn_IP2D_valD0wrtPVofTracks = 0;
   BTagging_AntiKt4TruthAuxDyn_SV1_TrackParticleLinks = 0;
   BTagging_AntiKt4TruthAuxDyn_IP2D_weightBofTracks = 0;
   BTagging_AntiKt4TruthAuxDyn_IP2D_weightCofTracks = 0;
   BTagging_AntiKt4TruthAuxDyn_IP2D_TrackParticleLinks = 0;
   BTagging_AntiKt4TruthAuxDyn_IP2D_weightUofTracks = 0;
   BTagging_AntiKt4TruthAuxDyn_IP3D_flagFromV0ofTracks = 0;
   BTagging_AntiKt4TruthAuxDyn_IP3D_TrackParticleLinks = 0;
   BTagging_AntiKt4TruthAuxDyn_IP3D_gradeOfTracks = 0;
   BTagging_AntiKt4TruthAuxDyn_IP3D_sigD0wrtPVofTracks = 0;
   BTagging_AntiKt4TruthAuxDyn_IP3D_sigZ0wrtPVofTracks = 0;
   BTagging_AntiKt4TruthAuxDyn_IP3D_valD0wrtPVofTracks = 0;
   BTagging_AntiKt4TruthAuxDyn_IP3D_valZ0wrtPVofTracks = 0;
   BTagging_AntiKt4TruthAuxDyn_IP3D_weightBofTracks = 0;
   BTagging_AntiKt4TruthAuxDyn_IP3D_weightCofTracks = 0;
   BTagging_AntiKt4TruthAuxDyn_IP3D_weightUofTracks = 0;
   BTagging_AntiKt4TruthAuxDyn_SV0_N2Tpair = 0;
   BTagging_AntiKt4TruthAuxDyn_SV0_NGTinSvx = 0;
   BTagging_AntiKt4TruthAuxDyn_SV0_badTracksIP = 0;
   BTagging_AntiKt4TruthAuxDyn_SV0_efracsvx = 0;
   BTagging_AntiKt4TruthAuxDyn_SV0_energyTrkInJet = 0;
   BTagging_AntiKt4TruthAuxDyn_SV0_masssvx = 0;
   BTagging_AntiKt4TruthAuxDyn_SV0_normdist = 0;
   BTagging_AntiKt4TruthAuxDyn_SV0_pb = 0;
   BTagging_AntiKt4TruthAuxDyn_SV0_pc = 0;
   BTagging_AntiKt4TruthAuxDyn_SV0_pu = 0;
   BTagging_AntiKt4TruthAuxDyn_SV0_vertices = 0;
   BTagging_AntiKt4TruthAuxDyn_SV1_N2Tpair = 0;
   BTagging_AntiKt4TruthAuxDyn_SV1_NGTinSvx = 0;
   BTagging_AntiKt4TruthAuxDyn_SV1_badTracksIP = 0;
   BTagging_AntiKt4TruthAuxDyn_SV1_efracsvx = 0;
   BTagging_AntiKt4TruthAuxDyn_SV1_energyTrkInJet = 0;
   BTagging_AntiKt4TruthAuxDyn_SV1_masssvx = 0;
   BTagging_AntiKt4TruthAuxDyn_SV1_normdist = 0;
   BTagging_AntiKt4TruthAuxDyn_SV1_vertices = 0;
   BTagging_AntiKt4TruthWZAuxDyn_BTagTrackToJetAssociator = 0;
   BTagging_AntiKt4TruthWZAuxDyn_IP2D_flagFromV0ofTracks = 0;
   BTagging_AntiKt4TruthWZAuxDyn_IP2D_gradeOfTracks = 0;
   BTagging_AntiKt4TruthWZAuxDyn_SV0_TrackParticleLinks = 0;
   BTagging_AntiKt4TruthWZAuxDyn_IP2D_sigD0wrtPVofTracks = 0;
   BTagging_AntiKt4TruthWZAuxDyn_IP2D_valD0wrtPVofTracks = 0;
   BTagging_AntiKt4TruthWZAuxDyn_SV1_TrackParticleLinks = 0;
   BTagging_AntiKt4TruthWZAuxDyn_IP2D_weightBofTracks = 0;
   BTagging_AntiKt4TruthWZAuxDyn_IP2D_weightCofTracks = 0;
   BTagging_AntiKt4TruthWZAuxDyn_IP2D_TrackParticleLinks = 0;
   BTagging_AntiKt4TruthWZAuxDyn_IP2D_weightUofTracks = 0;
   BTagging_AntiKt4TruthWZAuxDyn_IP3D_flagFromV0ofTracks = 0;
   BTagging_AntiKt4TruthWZAuxDyn_IP3D_TrackParticleLinks = 0;
   BTagging_AntiKt4TruthWZAuxDyn_IP3D_gradeOfTracks = 0;
   BTagging_AntiKt4TruthWZAuxDyn_IP3D_sigD0wrtPVofTracks = 0;
   BTagging_AntiKt4TruthWZAuxDyn_IP3D_sigZ0wrtPVofTracks = 0;
   BTagging_AntiKt4TruthWZAuxDyn_IP3D_valD0wrtPVofTracks = 0;
   BTagging_AntiKt4TruthWZAuxDyn_IP3D_valZ0wrtPVofTracks = 0;
   BTagging_AntiKt4TruthWZAuxDyn_IP3D_weightBofTracks = 0;
   BTagging_AntiKt4TruthWZAuxDyn_IP3D_weightCofTracks = 0;
   BTagging_AntiKt4TruthWZAuxDyn_IP3D_weightUofTracks = 0;
   BTagging_AntiKt4TruthWZAuxDyn_SV0_N2Tpair = 0;
   BTagging_AntiKt4TruthWZAuxDyn_SV0_NGTinSvx = 0;
   BTagging_AntiKt4TruthWZAuxDyn_SV0_badTracksIP = 0;
   BTagging_AntiKt4TruthWZAuxDyn_SV0_efracsvx = 0;
   BTagging_AntiKt4TruthWZAuxDyn_SV0_energyTrkInJet = 0;
   BTagging_AntiKt4TruthWZAuxDyn_SV0_masssvx = 0;
   BTagging_AntiKt4TruthWZAuxDyn_SV0_normdist = 0;
   BTagging_AntiKt4TruthWZAuxDyn_SV0_pb = 0;
   BTagging_AntiKt4TruthWZAuxDyn_SV0_pc = 0;
   BTagging_AntiKt4TruthWZAuxDyn_SV0_pu = 0;
   BTagging_AntiKt4TruthWZAuxDyn_SV0_vertices = 0;
   BTagging_AntiKt4TruthWZAuxDyn_SV1_N2Tpair = 0;
   BTagging_AntiKt4TruthWZAuxDyn_SV1_NGTinSvx = 0;
   BTagging_AntiKt4TruthWZAuxDyn_SV1_badTracksIP = 0;
   BTagging_AntiKt4TruthWZAuxDyn_SV1_efracsvx = 0;
   BTagging_AntiKt4TruthWZAuxDyn_SV1_energyTrkInJet = 0;
   BTagging_AntiKt4TruthWZAuxDyn_SV1_masssvx = 0;
   BTagging_AntiKt4TruthWZAuxDyn_SV1_normdist = 0;
   BTagging_AntiKt4TruthWZAuxDyn_SV1_vertices = 0;
   CaloCalTopoClusterAuxDyn_FIRST_ENG_DENS = 0;
   CaloCalTopoClusterAuxDyn_ISOLATION = 0;
   CaloCalTopoClusterAuxDyn_LATERAL = 0;
   CaloCalTopoClusterAuxDyn_LONGITUDINAL = 0;
   CaloCalTopoClusterAuxDyn_N_BAD_CELLS = 0;
   CaloCalTopoClusterAuxDyn_SECOND_LAMBDA = 0;
   CaloCalTopoClusterAuxDyn_SECOND_R = 0;
   CaloCalTopoClusterAuxDyn_SIGNIFICANCE = 0;
   CaloCalTopoClusterAuxDyn_AVG_LAR_Q = 0;
   CaloCalTopoClusterAuxDyn_AVG_TILE_Q = 0;
   CaloCalTopoClusterAuxDyn_BADLARQ_FRAC = 0;
   CaloCalTopoClusterAuxDyn_BadChannelList = 0;
   CaloCalTopoClusterAuxDyn_CELL_SIGNIFICANCE = 0;
   CaloCalTopoClusterAuxDyn_CELL_SIG_SAMPLING = 0;
   CaloCalTopoClusterAuxDyn_CENTER_LAMBDA = 0;
   CaloCalTopoClusterAuxDyn_CENTER_MAG = 0;
   CaloCalTopoClusterAuxDyn_EM_PROBABILITY = 0;
   CaloCalTopoClusterAuxDyn_ENG_BAD_CELLS = 0;
   CaloCalTopoClusterAuxDyn_ENG_FRAC_MAX = 0;
   CaloCalTopoClusterAuxDyn_ENG_POS = 0;
   CamKt12LCTopoJetsAuxDyn_N90Constituents = 0;
   CamKt12LCTopoJetsAuxDyn_NegativeE = 0;
   CamKt12LCTopoJetsAuxDyn_NumTrkPt1000 = 0;
   CamKt12LCTopoJetsAuxDyn_NumTrkPt500 = 0;
   CamKt12LCTopoJetsAuxDyn_OotFracClusters10 = 0;
   CamKt12LCTopoJetsAuxDyn_OotFracClusters5 = 0;
   CamKt12LCTopoJetsAuxDyn_PlanarFlow = 0;
   CamKt12LCTopoJetsAuxDyn_Sphericity = 0;
   CamKt12LCTopoJetsAuxDyn_Split12 = 0;
   CamKt12LCTopoJetsAuxDyn_Split23 = 0;
   CamKt12LCTopoJetsAuxDyn_Split34 = 0;
   CamKt12LCTopoJetsAuxDyn_SumPtTrkPt1000 = 0;
   CamKt12LCTopoJetsAuxDyn_SumPtTrkPt500 = 0;
   CamKt12LCTopoJetsAuxDyn_Tau1 = 0;
   CamKt12LCTopoJetsAuxDyn_Tau2 = 0;
   CamKt12LCTopoJetsAuxDyn_Tau3 = 0;
   CamKt12LCTopoJetsAuxDyn_ThrustMaj = 0;
   CamKt12LCTopoJetsAuxDyn_ThrustMin = 0;
   CamKt12LCTopoJetsAuxDyn_Timing = 0;
   CamKt12LCTopoJetsAuxDyn_Track = 0;
   CamKt12LCTopoJetsAuxDyn_TrackCount = 0;
   CamKt12LCTopoJetsAuxDyn_TrackPt = 0;
   CamKt12LCTopoJetsAuxDyn_TrackWidthPt1000 = 0;
   CamKt12LCTopoJetsAuxDyn_TrackWidthPt500 = 0;
   CamKt12LCTopoJetsAuxDyn_Truth = 0;
   CamKt12LCTopoJetsAuxDyn_TruthCount = 0;
   CamKt12LCTopoJetsAuxDyn_ConstituentScale = 0;
   CamKt12LCTopoJetsAuxDyn_JetEMScaleMomentum_pt = 0;
   CamKt12LCTopoJetsAuxDyn_JetEMScaleMomentum_eta = 0;
   CamKt12LCTopoJetsAuxDyn_TruthPt = 0;
   CamKt12LCTopoJetsAuxDyn_JetEMScaleMomentum_phi = 0;
   CamKt12LCTopoJetsAuxDyn_TruthWZ = 0;
   CamKt12LCTopoJetsAuxDyn_JetEMScaleMomentum_m = 0;
   CamKt12LCTopoJetsAuxDyn_TruthWZCount = 0;
   CamKt12LCTopoJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   CamKt12LCTopoJetsAuxDyn_TruthWZPt = 0;
   CamKt12LCTopoJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   CamKt12LCTopoJetsAuxDyn_Width = 0;
   CamKt12LCTopoJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   CamKt12LCTopoJetsAuxDyn_ZCut12 = 0;
   CamKt12LCTopoJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   CamKt12LCTopoJetsAuxDyn_ZCut23 = 0;
   CamKt12LCTopoJetsAuxDyn_InputType = 0;
   CamKt12LCTopoJetsAuxDyn_ZCut34 = 0;
   CamKt12LCTopoJetsAuxDyn_AlgorithmType = 0;
   CamKt12LCTopoJetsAuxDyn_SizeParameter = 0;
   CamKt12LCTopoJetsAuxDyn_ActiveArea = 0;
   CamKt12LCTopoJetsAuxDyn_ActiveArea4vec_eta = 0;
   CamKt12LCTopoJetsAuxDyn_ActiveArea4vec_m = 0;
   CamKt12LCTopoJetsAuxDyn_ActiveArea4vec_phi = 0;
   CamKt12LCTopoJetsAuxDyn_ActiveArea4vec_pt = 0;
   CamKt12LCTopoJetsAuxDyn_Angularity = 0;
   CamKt12LCTopoJetsAuxDyn_Aplanarity = 0;
   CamKt12LCTopoJetsAuxDyn_AverageLArQF = 0;
   CamKt12LCTopoJetsAuxDyn_BchCorrCell = 0;
   CamKt12LCTopoJetsAuxDyn_CentroidR = 0;
   CamKt12LCTopoJetsAuxDyn_Dip12 = 0;
   CamKt12LCTopoJetsAuxDyn_Dip13 = 0;
   CamKt12LCTopoJetsAuxDyn_Dip23 = 0;
   CamKt12LCTopoJetsAuxDyn_DipExcl12 = 0;
   CamKt12LCTopoJetsAuxDyn_ECF1 = 0;
   CamKt12LCTopoJetsAuxDyn_ECF2 = 0;
   CamKt12LCTopoJetsAuxDyn_ECF3 = 0;
   CamKt12LCTopoJetsAuxDyn_EMFrac = 0;
   CamKt12LCTopoJetsAuxDyn_EMTopo = 0;
   CamKt12LCTopoJetsAuxDyn_EMTopoCount = 0;
   CamKt12LCTopoJetsAuxDyn_EMTopoPt = 0;
   CamKt12LCTopoJetsAuxDyn_EnergyPerSampling = 0;
   CamKt12LCTopoJetsAuxDyn_FoxWolfram0 = 0;
   CamKt12LCTopoJetsAuxDyn_FoxWolfram1 = 0;
   CamKt12LCTopoJetsAuxDyn_FoxWolfram2 = 0;
   CamKt12LCTopoJetsAuxDyn_FoxWolfram3 = 0;
   CamKt12LCTopoJetsAuxDyn_FoxWolfram4 = 0;
   CamKt12LCTopoJetsAuxDyn_FracSamplingMax = 0;
   CamKt12LCTopoJetsAuxDyn_FracSamplingMaxIndex = 0;
   CamKt12LCTopoJetsAuxDyn_GhostAntiKt3TrackJet = 0;
   CamKt12LCTopoJetsAuxDyn_GhostAntiKt3TrackJetCount = 0;
   CamKt12LCTopoJetsAuxDyn_GhostAntiKt3TrackJetPt = 0;
   CamKt12LCTopoJetsAuxDyn_GhostAntiKt4TrackJet = 0;
   CamKt12LCTopoJetsAuxDyn_GhostAntiKt4TrackJetCount = 0;
   CamKt12LCTopoJetsAuxDyn_GhostAntiKt4TrackJetPt = 0;
   CamKt12LCTopoJetsAuxDyn_GhostMuonSegment = 0;
   CamKt12LCTopoJetsAuxDyn_GhostMuonSegmentCount = 0;
   CamKt12LCTopoJetsAuxDyn_GhostTrack = 0;
   CamKt12LCTopoJetsAuxDyn_GhostTrackCount = 0;
   CamKt12LCTopoJetsAuxDyn_GhostTrackPt = 0;
   CamKt12LCTopoJetsAuxDyn_GhostTruth = 0;
   CamKt12LCTopoJetsAuxDyn_GhostTruthAssociationFraction = 0;
   CamKt12LCTopoJetsAuxDyn_GhostTruthCount = 0;
   CamKt12LCTopoJetsAuxDyn_GhostTruthPt = 0;
   CamKt12LCTopoJetsAuxDyn_HECFrac = 0;
   CamKt12LCTopoJetsAuxDyn_HECQuality = 0;
   CamKt12LCTopoJetsAuxDyn_JVF = 0;
   CamKt12LCTopoJetsAuxDyn_JetGhostArea = 0;
   CamKt12LCTopoJetsAuxDyn_KtDR = 0;
   CamKt12LCTopoJetsAuxDyn_LArQuality = 0;
   CamKt12LCTopoJetsAuxDyn_LCTopo = 0;
   CamKt12LCTopoJetsAuxDyn_LCTopoCount = 0;
   CamKt12LCTopoJetsAuxDyn_LCTopoPt = 0;
   CamKt12LCTopoJetsAuxDyn_Mu12 = 0;
   CamKt12TruthJetsAuxDyn_Tau2 = 0;
   CamKt12TruthJetsAuxDyn_FoxWolfram1 = 0;
   CamKt12TruthJetsAuxDyn_Tau3 = 0;
   CamKt12TruthJetsAuxDyn_FoxWolfram2 = 0;
   CamKt12TruthJetsAuxDyn_ThrustMaj = 0;
   CamKt12TruthJetsAuxDyn_FoxWolfram3 = 0;
   CamKt12TruthJetsAuxDyn_ThrustMin = 0;
   CamKt12TruthJetsAuxDyn_FoxWolfram4 = 0;
   CamKt12TruthJetsAuxDyn_Truth = 0;
   CamKt12TruthJetsAuxDyn_TruthCount = 0;
   CamKt12TruthJetsAuxDyn_TruthPt = 0;
   CamKt12TruthJetsAuxDyn_TruthWZ = 0;
   CamKt12TruthJetsAuxDyn_TruthWZCount = 0;
   CamKt12TruthJetsAuxDyn_TruthWZPt = 0;
   CamKt12TruthJetsAuxDyn_Width = 0;
   CamKt12TruthJetsAuxDyn_ZCut12 = 0;
   CamKt12TruthJetsAuxDyn_ZCut23 = 0;
   CamKt12TruthJetsAuxDyn_ZCut34 = 0;
   CamKt12TruthJetsAuxDyn_JetGhostArea = 0;
   CamKt12TruthJetsAuxDyn_KtDR = 0;
   CamKt12TruthJetsAuxDyn_ConstituentScale = 0;
   CamKt12TruthJetsAuxDyn_Angularity = 0;
   CamKt12TruthJetsAuxDyn_Aplanarity = 0;
   CamKt12TruthJetsAuxDyn_Mu12 = 0;
   CamKt12TruthJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   CamKt12TruthJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   CamKt12TruthJetsAuxDyn_Dip12 = 0;
   CamKt12TruthJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   CamKt12TruthJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   CamKt12TruthJetsAuxDyn_Dip13 = 0;
   CamKt12TruthJetsAuxDyn_InputType = 0;
   CamKt12TruthJetsAuxDyn_Dip23 = 0;
   CamKt12TruthJetsAuxDyn_AlgorithmType = 0;
   CamKt12TruthJetsAuxDyn_DipExcl12 = 0;
   CamKt12TruthJetsAuxDyn_SizeParameter = 0;
   CamKt12TruthJetsAuxDyn_ECF1 = 0;
   CamKt12TruthJetsAuxDyn_PlanarFlow = 0;
   CamKt12TruthJetsAuxDyn_ECF2 = 0;
   CamKt12TruthJetsAuxDyn_Sphericity = 0;
   CamKt12TruthJetsAuxDyn_ECF3 = 0;
   CamKt12TruthJetsAuxDyn_Split12 = 0;
   CamKt12TruthJetsAuxDyn_Split23 = 0;
   CamKt12TruthJetsAuxDyn_Split34 = 0;
   CamKt12TruthJetsAuxDyn_Tau1 = 0;
   CamKt12TruthJetsAuxDyn_FoxWolfram0 = 0;
   CamKt12TruthWZJetsAuxDyn_Tau2 = 0;
   CamKt12TruthWZJetsAuxDyn_FoxWolfram1 = 0;
   CamKt12TruthWZJetsAuxDyn_Tau3 = 0;
   CamKt12TruthWZJetsAuxDyn_FoxWolfram2 = 0;
   CamKt12TruthWZJetsAuxDyn_ThrustMaj = 0;
   CamKt12TruthWZJetsAuxDyn_FoxWolfram3 = 0;
   CamKt12TruthWZJetsAuxDyn_ThrustMin = 0;
   CamKt12TruthWZJetsAuxDyn_FoxWolfram4 = 0;
   CamKt12TruthWZJetsAuxDyn_Truth = 0;
   CamKt12TruthWZJetsAuxDyn_TruthCount = 0;
   CamKt12TruthWZJetsAuxDyn_TruthPt = 0;
   CamKt12TruthWZJetsAuxDyn_TruthWZ = 0;
   CamKt12TruthWZJetsAuxDyn_TruthWZCount = 0;
   CamKt12TruthWZJetsAuxDyn_TruthWZPt = 0;
   CamKt12TruthWZJetsAuxDyn_Width = 0;
   CamKt12TruthWZJetsAuxDyn_ZCut12 = 0;
   CamKt12TruthWZJetsAuxDyn_ZCut23 = 0;
   CamKt12TruthWZJetsAuxDyn_ZCut34 = 0;
   CamKt12TruthWZJetsAuxDyn_JetGhostArea = 0;
   CamKt12TruthWZJetsAuxDyn_KtDR = 0;
   CamKt12TruthWZJetsAuxDyn_ConstituentScale = 0;
   CamKt12TruthWZJetsAuxDyn_Angularity = 0;
   CamKt12TruthWZJetsAuxDyn_Aplanarity = 0;
   CamKt12TruthWZJetsAuxDyn_Mu12 = 0;
   CamKt12TruthWZJetsAuxDyn_JetConstitScaleMomentum_pt = 0;
   CamKt12TruthWZJetsAuxDyn_JetConstitScaleMomentum_eta = 0;
   CamKt12TruthWZJetsAuxDyn_Dip12 = 0;
   CamKt12TruthWZJetsAuxDyn_JetConstitScaleMomentum_phi = 0;
   CamKt12TruthWZJetsAuxDyn_JetConstitScaleMomentum_m = 0;
   CamKt12TruthWZJetsAuxDyn_Dip13 = 0;
   CamKt12TruthWZJetsAuxDyn_InputType = 0;
   CamKt12TruthWZJetsAuxDyn_Dip23 = 0;
   CamKt12TruthWZJetsAuxDyn_AlgorithmType = 0;
   CamKt12TruthWZJetsAuxDyn_DipExcl12 = 0;
   CamKt12TruthWZJetsAuxDyn_SizeParameter = 0;
   CamKt12TruthWZJetsAuxDyn_ECF1 = 0;
   CamKt12TruthWZJetsAuxDyn_PlanarFlow = 0;
   CamKt12TruthWZJetsAuxDyn_ECF2 = 0;
   CamKt12TruthWZJetsAuxDyn_Sphericity = 0;
   CamKt12TruthWZJetsAuxDyn_ECF3 = 0;
   CamKt12TruthWZJetsAuxDyn_Split12 = 0;
   CamKt12TruthWZJetsAuxDyn_Split23 = 0;
   CamKt12TruthWZJetsAuxDyn_Split34 = 0;
   CamKt12TruthWZJetsAuxDyn_Tau1 = 0;
   CamKt12TruthWZJetsAuxDyn_FoxWolfram0 = 0;
   CombinedMuonTrackParticlesAuxDyn_truthOrigin = 0;
   CombinedMuonTrackParticlesAuxDyn_truthType = 0;
   ElectronCollectionAuxDyn_truthOrigin = 0;
   ElectronCollectionAuxDyn_truthType = 0;
   ElectronCollectionAuxDyn_Loose = 0;
   ElectronCollectionAuxDyn_Medium = 0;
   ElectronCollectionAuxDyn_Tight = 0;
   EventInfoAuxDyn_subEventTime = 0;
   EventInfoAuxDyn_subEventType = 0;
   EventInfoAuxDyn_mcEventWeights = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_truthOrigin = 0;
   ExtrapolatedMuonTrackParticlesAuxDyn_truthType = 0;
   FwdElectronsAuxDyn_Loose = 0;
   FwdElectronsAuxDyn_Tight = 0;
   GSFConversionVerticesAuxDyn_pz = 0;
   GSFConversionVerticesAuxDyn_etaAtCalo = 0;
   GSFConversionVerticesAuxDyn_phiAtCalo = 0;
   GSFConversionVerticesAuxDyn_px = 0;
   GSFConversionVerticesAuxDyn_py = 0;
   InDetTrackParticlesAuxDyn_truthOrigin = 0;
   InDetTrackParticlesAuxDyn_truthType = 0;
   InDetTrackParticlesAuxDyn_truthMatchProbability = 0;
   InDetTrackParticlesForwardAuxDyn_truthOrigin = 0;
   InDetTrackParticlesForwardAuxDyn_truthType = 0;
   InDetTrackParticlesForwardAuxDyn_truthMatchProbability = 0;
   LArClusterEMFrwdAuxDyn_BadChannelList = 0;
   LArClusterEMFrwdAuxDyn_CELL_SIGNIFICANCE = 0;
   LArClusterEMFrwdAuxDyn_CELL_SIG_SAMPLING = 0;
   LArClusterEMFrwdAuxDyn_CENTER_LAMBDA = 0;
   LArClusterEMFrwdAuxDyn_CENTER_MAG = 0;
   LArClusterEMFrwdAuxDyn_EM_PROBABILITY = 0;
   LArClusterEMFrwdAuxDyn_ENG_BAD_CELLS = 0;
   LArClusterEMFrwdAuxDyn_ENG_FRAC_MAX = 0;
   LArClusterEMFrwdAuxDyn_ENG_POS = 0;
   LArClusterEMFrwdAuxDyn_FIRST_ENG_DENS = 0;
   LArClusterEMFrwdAuxDyn_ISOLATION = 0;
   LArClusterEMFrwdAuxDyn_LATERAL = 0;
   LArClusterEMFrwdAuxDyn_LONGITUDINAL = 0;
   LArClusterEMFrwdAuxDyn_N_BAD_CELLS = 0;
   LArClusterEMFrwdAuxDyn_SECOND_LAMBDA = 0;
   LArClusterEMFrwdAuxDyn_SECOND_R = 0;
   LArClusterEMFrwdAuxDyn_SIGNIFICANCE = 0;
   LArClusterEMFrwdAuxDyn_BAD_CELLS_CORR_E = 0;
   LArClusterEMFrwdAuxDyn_CENTER_X = 0;
   LArClusterEMFrwdAuxDyn_CENTER_Y = 0;
   LArClusterEMFrwdAuxDyn_CENTER_Z = 0;
   LArClusterEMFrwdAuxDyn_DELTA_ALPHA = 0;
   LArClusterEMFrwdAuxDyn_DELTA_PHI = 0;
   LArClusterEMFrwdAuxDyn_DELTA_THETA = 0;
   LArClusterEMFrwdAuxDyn_DM_WEIGHT = 0;
   LArClusterEMFrwdAuxDyn_ENG_FRAC_CORE = 0;
   LArClusterEMFrwdAuxDyn_ENG_FRAC_EM = 0;
   LArClusterEMFrwdAuxDyn_FIRST_ETA = 0;
   LArClusterEMFrwdAuxDyn_FIRST_PHI = 0;
   LArClusterEMFrwdAuxDyn_HAD_WEIGHT = 0;
   LArClusterEMFrwdAuxDyn_N_BAD_CELLS_CORR = 0;
   LArClusterEMFrwdAuxDyn_OOC_WEIGHT = 0;
   LArClusterEMFrwdAuxDyn_SECOND_ENG_DENS = 0;
   LArClusterEMFrwdAuxDyn_emax_sampl = 0;
   LArClusterEMFrwdAuxDyn_etamax_sampl = 0;
   LArClusterEMFrwdAuxDyn_phimax_sampl = 0;
   LArClusterEMFrwdAuxDyn_AVG_LAR_Q = 0;
   LArClusterEMFrwdAuxDyn_AVG_TILE_Q = 0;
   LArClusterEMFrwdAuxDyn_BADLARQ_FRAC = 0;
   MuonTruthParticleAuxDyn_MuonEntryLayer_x = 0;
   MuonTruthParticleAuxDyn_MuonEntryLayer_x_extr = 0;
   MuonTruthParticleAuxDyn_MuonEntryLayer_y = 0;
   MuonTruthParticleAuxDyn_MuonEntryLayer_y_extr = 0;
   MuonTruthParticleAuxDyn_MuonEntryLayer_z = 0;
   MuonTruthParticleAuxDyn_MuonEntryLayer_z_extr = 0;
   MuonTruthParticleAuxDyn_etaLayer1Hits = 0;
   MuonTruthParticleAuxDyn_etaLayer2Hits = 0;
   MuonTruthParticleAuxDyn_etaLayer3Hits = 0;
   MuonTruthParticleAuxDyn_etaLayer4Hits = 0;
   MuonTruthParticleAuxDyn_extendedLargeHits = 0;
   MuonTruthParticleAuxDyn_extendedSmallHits = 0;
   MuonTruthParticleAuxDyn_innerLargeHits = 0;
   MuonTruthParticleAuxDyn_innerSmallHits = 0;
   MuonTruthParticleAuxDyn_middleLargeHits = 0;
   MuonTruthParticleAuxDyn_middleSmallHits = 0;
   MuonTruthParticleAuxDyn_nphiLayers = 0;
   MuonTruthParticleAuxDyn_nprecLayers = 0;
   MuonTruthParticleAuxDyn_ntrigEtaLayers = 0;
   MuonTruthParticleAuxDyn_outerLargeHits = 0;
   MuonTruthParticleAuxDyn_outerSmallHits = 0;
   MuonTruthParticleAuxDyn_phiLayer1Hits = 0;
   MuonTruthParticleAuxDyn_phiLayer2Hits = 0;
   MuonTruthParticleAuxDyn_phiLayer3Hits = 0;
   MuonTruthParticleAuxDyn_phiLayer4Hits = 0;
   MuonTruthParticleAuxDyn_truthOrigin = 0;
   MuonTruthParticleAuxDyn_truthType = 0;
   MuonTruthParticleAuxDyn_MuonEntryLayer_cov_extr = 0;
   MuonTruthParticleAuxDyn_MuonEntryLayer_px = 0;
   MuonTruthParticleAuxDyn_MuonEntryLayer_px_extr = 0;
   MuonTruthParticleAuxDyn_MuonEntryLayer_py = 0;
   MuonTruthParticleAuxDyn_MuonEntryLayer_py_extr = 0;
   MuonTruthParticleAuxDyn_MuonEntryLayer_pz = 0;
   MuonTruthParticleAuxDyn_MuonEntryLayer_pz_extr = 0;
   MuonsAuxDyn_m = 0;
   PhotonCollectionAuxDyn_truthOrigin = 0;
   PhotonCollectionAuxDyn_truthType = 0;
   PhotonCollectionAuxDyn_Loose = 0;
   PhotonCollectionAuxDyn_Tight = 0;
   TauPi0NeutralPFOContainerAuxDyn_cellBased_CENTER_LAMBDA = 0;
   TauPi0NeutralPFOContainerAuxDyn_cellBased_DELTA_PHI = 0;
   TauPi0NeutralPFOContainerAuxDyn_cellBased_DELTA_THETA = 0;
   TauPi0NeutralPFOContainerAuxDyn_cellBased_EM1CoreFrac = 0;
   TauPi0NeutralPFOContainerAuxDyn_cellBased_ENG_FRAC_CORE = 0;
   TauPi0NeutralPFOContainerAuxDyn_cellBased_ENG_FRAC_EM = 0;
   TauPi0NeutralPFOContainerAuxDyn_cellBased_ENG_FRAC_MAX = 0;
   TauPi0NeutralPFOContainerAuxDyn_cellBased_FIRST_ETA = 0;
   TauPi0NeutralPFOContainerAuxDyn_cellBased_LATERAL = 0;
   TauPi0NeutralPFOContainerAuxDyn_cellBased_LONGITUDINAL = 0;
   TauPi0NeutralPFOContainerAuxDyn_cellBased_NHitsInEM1 = 0;
   TauPi0NeutralPFOContainerAuxDyn_cellBased_NPosECells_EM1 = 0;
   TauPi0NeutralPFOContainerAuxDyn_cellBased_NPosECells_EM2 = 0;
   TauPi0NeutralPFOContainerAuxDyn_cellBased_NPosECells_PS = 0;
   TauPi0NeutralPFOContainerAuxDyn_cellBased_SECOND_ENG_DENS = 0;
   TauPi0NeutralPFOContainerAuxDyn_cellBased_SECOND_LAMBDA = 0;
   TauPi0NeutralPFOContainerAuxDyn_cellBased_SECOND_R = 0;
   TauPi0NeutralPFOContainerAuxDyn_cellBased_asymmetryInEM1WRTTrk = 0;
   TauPi0NeutralPFOContainerAuxDyn_cellBased_energy_EM1 = 0;
   TauPi0NeutralPFOContainerAuxDyn_cellBased_energy_EM2 = 0;
   TauPi0NeutralPFOContainerAuxDyn_cellBased_firstEtaWRTClusterPosition_EM1 = 0;
   TauPi0NeutralPFOContainerAuxDyn_cellBased_firstEtaWRTClusterPosition_EM2 = 0;
   TauPi0NeutralPFOContainerAuxDyn_cellBased_secondEtaWRTClusterPosition_EM1 = 0;
   TauPi0NeutralPFOContainerAuxDyn_cellBased_secondEtaWRTClusterPosition_EM2 = 0;
   TauPi0NeutralPFOContainerAuxDyn_nPi0 = 0;
   TauPi0NeutralPFOContainerAuxDyn_nPi0Proto = 0;
   TauShotPFOContainerAuxDyn_tauShots_Fside_5not1 = 0;
   TauShotPFOContainerAuxDyn_tauShots_Fside_5not3 = 0;
   TauShotPFOContainerAuxDyn_tauShots_deltaPt12_min = 0;
   TauShotPFOContainerAuxDyn_tauShots_fracSide_3not1 = 0;
   TauShotPFOContainerAuxDyn_tauShots_fracSide_5not1 = 0;
   TauShotPFOContainerAuxDyn_tauShots_fracSide_5not3 = 0;
   TauShotPFOContainerAuxDyn_tauShots_mergedScore = 0;
   TauShotPFOContainerAuxDyn_tauShots_nCellsInEta = 0;
   TauShotPFOContainerAuxDyn_tauShots_nPhotons = 0;
   TauShotPFOContainerAuxDyn_tauShots_pt1 = 0;
   TauShotPFOContainerAuxDyn_tauShots_pt1OverPt3 = 0;
   TauShotPFOContainerAuxDyn_tauShots_pt3 = 0;
   TauShotPFOContainerAuxDyn_tauShots_pt3OverPt5 = 0;
   TauShotPFOContainerAuxDyn_tauShots_pt5 = 0;
   TauShotPFOContainerAuxDyn_tauShots_sdevEta5_WRTmean = 0;
   TauShotPFOContainerAuxDyn_tauShots_sdevEta5_WRTmode = 0;
   TauShotPFOContainerAuxDyn_tauShots_sdevPt5 = 0;
   TauShotPFOContainerAuxDyn_tauShots_seedHash = 0;
   TauShotPFOContainerAuxDyn_tauShots_signalScore = 0;
   TauShotPFOContainerAuxDyn_tauShots_ws5 = 0;
   TauShotPFOContainerAuxDyn_tauShots_Fside_3not1 = 0;
   TruthEventAuxDyn_x1 = 0;
   TruthEventAuxDyn_x2 = 0;
   TruthEventAuxDyn_id1 = 0;
   TruthEventAuxDyn_id2 = 0;
   TruthEventAuxDyn_pdf1 = 0;
   TruthEventAuxDyn_pdf2 = 0;
   TruthEventAuxDyn_pdfId1 = 0;
   TruthEventAuxDyn_pdfId2 = 0;
   TruthEventAuxDyn_scalePDF = 0;
   TruthParticleAuxDyn_polarizationPhi = 0;
   TruthParticleAuxDyn_polarizationTheta = 0;
   chargedTauPFO_eflowRecAuxDyn_eflowRec_HOT_STRIP_FRAC = 0;
   chargedTauPFO_eflowRecAuxDyn_eflowRec_SECOND_R = 0;
   chargedTauPFO_eflowRecAuxDyn_eflowRec_THREE_CELL_STRIP_FRAC = 0;
   chargedTauPFO_eflowRecAuxDyn_PassEOverPCheck = 0;
   chargedTauPFO_eflowRecAuxDyn_eflowRec_CENTER_LAMBDA = 0;
   chargedTauPFO_eflowRecAuxDyn_eflowRec_DELTA_ALPHA = 0;
   chargedTauPFO_eflowRecAuxDyn_eflowRec_EM_FRAC_ENHANCED = 0;
   chargedTauPFO_eflowRecAuxDyn_eflowRec_ENG_FRAC_CORE = 0;
   chargedTauPFO_eflowRecAuxDyn_eflowRec_FIRST_ENG_DENS = 0;
   egClusterCollectionAuxDyn_emax_sampl = 0;
   egClusterCollectionAuxDyn_etamax_sampl = 0;
   egClusterCollectionAuxDyn_phimax_sampl = 0;
   egClusterCollectionAuxDyn_etaCalo = 0;
   egClusterCollectionAuxDyn_etas1Calo = 0;
   egClusterCollectionAuxDyn_etas2Calo = 0;
   egClusterCollectionAuxDyn_etasize_sampl = 0;
   egClusterCollectionAuxDyn_phiCalo = 0;
   egClusterCollectionAuxDyn_phisize_sampl = 0;
   egClusterCollectionAuxDyn_BadChannelList = 0;
   neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_FIRST_ENG_DENS = 0;
   neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_SECOND_R = 0;
   neutralJetETMissPFO_eflowRecAuxDyn_LeptonType = 0;
   neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_AVG_LAR_Q = 0;
   neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_AVG_TILE_Q = 0;
   neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_BADLARQ_FRAC = 0;
   neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_ENG_BAD_CELLS = 0;
   neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_ENG_FRAC_MAX = 0;
   neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_ENG_POS = 0;
   neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_ISOLATION = 0;
   neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_LATERAL = 0;
   neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_EM3 = 0;
   neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_HEC0 = 0;
   neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_Tile0 = 0;
   neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_LONGITUDINAL = 0;
   neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_N_BAD_CELLS = 0;
   neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_SIGNIFICANCE = 0;
   neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_CENTER_LAMBDA = 0;
   neutralJetETMiss_LCPFO_NonModified_eflowRecAuxDyn_eflowRec_LAYERENERGY_EM3 = 0;
   neutralJetETMiss_LCPFO_NonModified_eflowRecAuxDyn_eflowRec_LAYERENERGY_HEC0 = 0;
   neutralJetETMiss_LCPFO_NonModified_eflowRecAuxDyn_eflowRec_LAYERENERGY_Tile0 = 0;
   neutralJetETMiss_LCPFO_NonModified_eflowRecAuxDyn_LeptonType = 0;
   neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_FIRST_ENG_DENS = 0;
   neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_SECOND_R = 0;
   neutralJetETMiss_LCPFO_eflowRecAuxDyn_LeptonType = 0;
   neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_AVG_LAR_Q = 0;
   neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_AVG_TILE_Q = 0;
   neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_BADLARQ_FRAC = 0;
   neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_ENG_BAD_CELLS = 0;
   neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_ENG_FRAC_MAX = 0;
   neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_ENG_POS = 0;
   neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_ISOLATION = 0;
   neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_LATERAL = 0;
   neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_EM3 = 0;
   neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_HEC0 = 0;
   neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_Tile0 = 0;
   neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_LONGITUDINAL = 0;
   neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_N_BAD_CELLS = 0;
   neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_SIGNIFICANCE = 0;
   neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_CENTER_LAMBDA = 0;
   neutralTauPFO_eflowRecAuxDyn_eflowRec_HOT_STRIP_FRAC = 0;
   neutralTauPFO_eflowRecAuxDyn_eflowRec_SECOND_R = 0;
   neutralTauPFO_eflowRecAuxDyn_eflowRec_THREE_CELL_STRIP_FRAC = 0;
   neutralTauPFO_eflowRecAuxDyn_PassEOverPCheck = 0;
   neutralTauPFO_eflowRecAuxDyn_eflowRec_CENTER_LAMBDA = 0;
   neutralTauPFO_eflowRecAuxDyn_eflowRec_DELTA_ALPHA = 0;
   neutralTauPFO_eflowRecAuxDyn_eflowRec_EM_FRAC_ENHANCED = 0;
   neutralTauPFO_eflowRecAuxDyn_eflowRec_ENG_FRAC_CORE = 0;
   neutralTauPFO_eflowRecAuxDyn_eflowRec_FIRST_ENG_DENS = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("McEventInfo", &McEventInfo, &b_McEventInfo);
   fChain->SetBranchAddress("AODCellContainer", &AODCellContainer, &b_AODCellContainer);
   fChain->SetBranchAddress("MBTSContainer", &MBTSContainer, &b_MBTSContainer);
   fChain->SetBranchAddress("TileMuObj", &TileMuObj, &b_TileMuObj);
   fChain->SetBranchAddress("TrigConfKeys", &TrigConfKeys, &b_TrigConfKeys);
   fChain->SetBranchAddress("METMap_LocHadTopo", &METMap_LocHadTopo, &b_METMap_LocHadTopo);
   fChain->SetBranchAddress("METMap_LocHadTopoRegions", &METMap_LocHadTopoRegions, &b_METMap_LocHadTopoRegions);
   fChain->SetBranchAddress("METMap_RefFinal", &METMap_RefFinal, &b_METMap_RefFinal);
   fChain->SetBranchAddress("METMap_RefFinalRegions", &METMap_RefFinalRegions, &b_METMap_RefFinalRegions);
   fChain->SetBranchAddress("METMap_Track", &METMap_Track, &b_METMap_Track);
   fChain->SetBranchAddress("METMap_Truth", &METMap_Truth, &b_METMap_Truth);
   fChain->SetBranchAddress("METMap_TruthRegions", &METMap_TruthRegions, &b_METMap_TruthRegions);
   fChain->SetBranchAddress("EventInfoAux.runNumber", &EventInfoAux_runNumber, &b_EventInfoAux_runNumber);
   fChain->SetBranchAddress("EventInfoAux.eventNumber", &EventInfoAux_eventNumber, &b_EventInfoAux_eventNumber);
   fChain->SetBranchAddress("EventInfoAux.lumiBlock", &EventInfoAux_lumiBlock, &b_EventInfoAux_lumiBlock);
   fChain->SetBranchAddress("EventInfoAux.timeStamp", &EventInfoAux_timeStamp, &b_EventInfoAux_timeStamp);
   fChain->SetBranchAddress("EventInfoAux.timeStampNSOffset", &EventInfoAux_timeStampNSOffset, &b_EventInfoAux_timeStampNSOffset);
   fChain->SetBranchAddress("EventInfoAux.bcid", &EventInfoAux_bcid, &b_EventInfoAux_bcid);
   fChain->SetBranchAddress("EventInfoAux.detectorMask0", &EventInfoAux_detectorMask0, &b_EventInfoAux_detectorMask0);
   fChain->SetBranchAddress("EventInfoAux.detectorMask1", &EventInfoAux_detectorMask1, &b_EventInfoAux_detectorMask1);
   fChain->SetBranchAddress("EventInfoAux.eventTypeBitmask", &EventInfoAux_eventTypeBitmask, &b_EventInfoAux_eventTypeBitmask);
   fChain->SetBranchAddress("EventInfoAux.statusElement", &EventInfoAux_statusElement, &b_EventInfoAux_statusElement);
   fChain->SetBranchAddress("EventInfoAux.extendedLevel1ID", &EventInfoAux_extendedLevel1ID, &b_EventInfoAux_extendedLevel1ID);
   fChain->SetBranchAddress("EventInfoAux.level1TriggerType", &EventInfoAux_level1TriggerType, &b_EventInfoAux_level1TriggerType);
   fChain->SetBranchAddress("EventInfoAux.streamTagNames", &EventInfoAux_streamTagNames, &b_EventInfoAux_streamTagNames);
   fChain->SetBranchAddress("EventInfoAux.streamTagTypes", &EventInfoAux_streamTagTypes, &b_EventInfoAux_streamTagTypes);
   fChain->SetBranchAddress("EventInfoAux.streamTagObeysLumiblock", &EventInfoAux_streamTagObeysLumiblock, &b_EventInfoAux_streamTagObeysLumiblock);
   fChain->SetBranchAddress("EventInfoAux.actualInteractionsPerCrossing", &EventInfoAux_actualInteractionsPerCrossing, &b_EventInfoAux_actualInteractionsPerCrossing);
   fChain->SetBranchAddress("EventInfoAux.averageInteractionsPerCrossing", &EventInfoAux_averageInteractionsPerCrossing, &b_EventInfoAux_averageInteractionsPerCrossing);
   fChain->SetBranchAddress("EventInfoAux.pixelFlags", &EventInfoAux_pixelFlags, &b_EventInfoAux_pixelFlags);
   fChain->SetBranchAddress("EventInfoAux.sctFlags", &EventInfoAux_sctFlags, &b_EventInfoAux_sctFlags);
   fChain->SetBranchAddress("EventInfoAux.trtFlags", &EventInfoAux_trtFlags, &b_EventInfoAux_trtFlags);
   fChain->SetBranchAddress("EventInfoAux.larFlags", &EventInfoAux_larFlags, &b_EventInfoAux_larFlags);
   fChain->SetBranchAddress("EventInfoAux.tileFlags", &EventInfoAux_tileFlags, &b_EventInfoAux_tileFlags);
   fChain->SetBranchAddress("EventInfoAux.muonFlags", &EventInfoAux_muonFlags, &b_EventInfoAux_muonFlags);
   fChain->SetBranchAddress("EventInfoAux.forwardDetFlags", &EventInfoAux_forwardDetFlags, &b_EventInfoAux_forwardDetFlags);
   fChain->SetBranchAddress("EventInfoAux.coreFlags", &EventInfoAux_coreFlags, &b_EventInfoAux_coreFlags);
   fChain->SetBranchAddress("EventInfoAux.backgroundFlags", &EventInfoAux_backgroundFlags, &b_EventInfoAux_backgroundFlags);
   fChain->SetBranchAddress("EventInfoAux.lumiFlags", &EventInfoAux_lumiFlags, &b_EventInfoAux_lumiFlags);
   fChain->SetBranchAddress("EventInfoAux.beamPosX", &EventInfoAux_beamPosX, &b_EventInfoAux_beamPosX);
   fChain->SetBranchAddress("EventInfoAux.beamPosY", &EventInfoAux_beamPosY, &b_EventInfoAux_beamPosY);
   fChain->SetBranchAddress("EventInfoAux.beamPosZ", &EventInfoAux_beamPosZ, &b_EventInfoAux_beamPosZ);
   fChain->SetBranchAddress("EventInfoAux.beamPosSigmaX", &EventInfoAux_beamPosSigmaX, &b_EventInfoAux_beamPosSigmaX);
   fChain->SetBranchAddress("EventInfoAux.beamPosSigmaY", &EventInfoAux_beamPosSigmaY, &b_EventInfoAux_beamPosSigmaY);
   fChain->SetBranchAddress("EventInfoAux.beamPosSigmaZ", &EventInfoAux_beamPosSigmaZ, &b_EventInfoAux_beamPosSigmaZ);
   fChain->SetBranchAddress("EventInfoAux.beamPosSigmaXY", &EventInfoAux_beamPosSigmaXY, &b_EventInfoAux_beamPosSigmaXY);
   fChain->SetBranchAddress("EventInfoAux.beamTiltXZ", &EventInfoAux_beamTiltXZ, &b_EventInfoAux_beamTiltXZ);
   fChain->SetBranchAddress("EventInfoAux.beamTiltYZ", &EventInfoAux_beamTiltYZ, &b_EventInfoAux_beamTiltYZ);
   fChain->SetBranchAddress("EventInfoAux.beamStatus", &EventInfoAux_beamStatus, &b_EventInfoAux_beamStatus);
   fChain->SetBranchAddress("EventInfo", &EventInfo, &b_EventInfo);
   fChain->SetBranchAddress("ESDtoAOD_mems", &ESDtoAOD_mems, &b_ESDtoAOD_mems);
   fChain->SetBranchAddress("ESDtoAOD_timings", &ESDtoAOD_timings, &b_ESDtoAOD_timings);
   fChain->SetBranchAddress("EVNTtoHITS_timings", &EVNTtoHITS_timings, &b_EVNTtoHITS_timings);
   fChain->SetBranchAddress("HITStoRDO_timings", &HITStoRDO_timings, &b_HITStoRDO_timings);
   fChain->SetBranchAddress("RAWtoESD_mems", &RAWtoESD_mems, &b_RAWtoESD_mems);
   fChain->SetBranchAddress("RAWtoESD_timings", &RAWtoESD_timings, &b_RAWtoESD_timings);
   fChain->SetBranchAddress("LArNoisyROSummary", &LArNoisyROSummary, &b_LArNoisyROSummary);
   fChain->SetBranchAddress("GSFTracks", &GSFTracks, &b_GSFTracks);
   fChain->SetBranchAddress("METMap_LocHadTopoAux.wpx", &METMap_LocHadTopoAux_wpx, &b_METMap_LocHadTopoAux_wpx);
   fChain->SetBranchAddress("METMap_LocHadTopoAux.wpy", &METMap_LocHadTopoAux_wpy, &b_METMap_LocHadTopoAux_wpy);
   fChain->SetBranchAddress("METMap_LocHadTopoAux.wet", &METMap_LocHadTopoAux_wet, &b_METMap_LocHadTopoAux_wet);
   fChain->SetBranchAddress("METMap_LocHadTopoRegionsAux.wpx", &METMap_LocHadTopoRegionsAux_wpx, &b_METMap_LocHadTopoRegionsAux_wpx);
   fChain->SetBranchAddress("METMap_LocHadTopoRegionsAux.wpy", &METMap_LocHadTopoRegionsAux_wpy, &b_METMap_LocHadTopoRegionsAux_wpy);
   fChain->SetBranchAddress("METMap_LocHadTopoRegionsAux.wet", &METMap_LocHadTopoRegionsAux_wet, &b_METMap_LocHadTopoRegionsAux_wet);
   fChain->SetBranchAddress("METMap_RefFinalAux.wpx", &METMap_RefFinalAux_wpx, &b_METMap_RefFinalAux_wpx);
   fChain->SetBranchAddress("METMap_RefFinalAux.wpy", &METMap_RefFinalAux_wpy, &b_METMap_RefFinalAux_wpy);
   fChain->SetBranchAddress("METMap_RefFinalAux.wet", &METMap_RefFinalAux_wet, &b_METMap_RefFinalAux_wet);
   fChain->SetBranchAddress("METMap_RefFinalRegionsAux.wpx", &METMap_RefFinalRegionsAux_wpx, &b_METMap_RefFinalRegionsAux_wpx);
   fChain->SetBranchAddress("METMap_RefFinalRegionsAux.wpy", &METMap_RefFinalRegionsAux_wpy, &b_METMap_RefFinalRegionsAux_wpy);
   fChain->SetBranchAddress("METMap_RefFinalRegionsAux.wet", &METMap_RefFinalRegionsAux_wet, &b_METMap_RefFinalRegionsAux_wet);
   fChain->SetBranchAddress("METMap_TrackAux.wpx", &METMap_TrackAux_wpx, &b_METMap_TrackAux_wpx);
   fChain->SetBranchAddress("METMap_TrackAux.wpy", &METMap_TrackAux_wpy, &b_METMap_TrackAux_wpy);
   fChain->SetBranchAddress("METMap_TrackAux.wet", &METMap_TrackAux_wet, &b_METMap_TrackAux_wet);
   fChain->SetBranchAddress("METMap_TruthAux.wpx", &METMap_TruthAux_wpx, &b_METMap_TruthAux_wpx);
   fChain->SetBranchAddress("METMap_TruthAux.wpy", &METMap_TruthAux_wpy, &b_METMap_TruthAux_wpy);
   fChain->SetBranchAddress("METMap_TruthAux.wet", &METMap_TruthAux_wet, &b_METMap_TruthAux_wet);
   fChain->SetBranchAddress("METMap_TruthRegionsAux.wpx", &METMap_TruthRegionsAux_wpx, &b_METMap_TruthRegionsAux_wpx);
   fChain->SetBranchAddress("METMap_TruthRegionsAux.wpy", &METMap_TruthRegionsAux_wpy, &b_METMap_TruthRegionsAux_wpy);
   fChain->SetBranchAddress("METMap_TruthRegionsAux.wet", &METMap_TruthRegionsAux_wet, &b_METMap_TruthRegionsAux_wet);
   fChain->SetBranchAddress("ElectronCollection", &ElectronCollection, &b_ElectronCollection);
   fChain->SetBranchAddress("FwdElectrons", &FwdElectrons, &b_FwdElectrons);
   fChain->SetBranchAddress("GSFConversionVertices", &GSFConversionVertices, &b_GSFConversionVertices);
   fChain->SetBranchAddress("PrimaryVertices", &PrimaryVertices, &b_PrimaryVertices);
   fChain->SetBranchAddress("TauSecondaryVertexContainer", &TauSecondaryVertexContainer, &b_TauSecondaryVertexContainer);
   fChain->SetBranchAddress("MET_LocHadTopo", &MET_LocHadTopo, &b_MET_LocHadTopo);
   fChain->SetBranchAddress("MET_LocHadTopoRegions", &MET_LocHadTopoRegions, &b_MET_LocHadTopoRegions);
   fChain->SetBranchAddress("MET_RefFinal", &MET_RefFinal, &b_MET_RefFinal);
   fChain->SetBranchAddress("MET_RefFinalRegions", &MET_RefFinalRegions, &b_MET_RefFinalRegions);
   fChain->SetBranchAddress("MET_Track", &MET_Track, &b_MET_Track);
   fChain->SetBranchAddress("MET_Truth", &MET_Truth, &b_MET_Truth);
   fChain->SetBranchAddress("MET_TruthRegions", &MET_TruthRegions, &b_MET_TruthRegions);
   fChain->SetBranchAddress("PhotonCollection", &PhotonCollection, &b_PhotonCollection);
   fChain->SetBranchAddress("MuonTruthParticleAux.pdgId", &MuonTruthParticleAux_pdgId, &b_MuonTruthParticleAux_pdgId);
   fChain->SetBranchAddress("MuonTruthParticleAux.barcode", &MuonTruthParticleAux_barcode, &b_MuonTruthParticleAux_barcode);
   fChain->SetBranchAddress("MuonTruthParticleAux.status", &MuonTruthParticleAux_status, &b_MuonTruthParticleAux_status);
   fChain->SetBranchAddress("MuonTruthParticleAux.px", &MuonTruthParticleAux_px, &b_MuonTruthParticleAux_px);
   fChain->SetBranchAddress("MuonTruthParticleAux.py", &MuonTruthParticleAux_py, &b_MuonTruthParticleAux_py);
   fChain->SetBranchAddress("MuonTruthParticleAux.pz", &MuonTruthParticleAux_pz, &b_MuonTruthParticleAux_pz);
   fChain->SetBranchAddress("MuonTruthParticleAux.e", &MuonTruthParticleAux_e, &b_MuonTruthParticleAux_e);
   fChain->SetBranchAddress("MuonTruthParticleAux.m", &MuonTruthParticleAux_m, &b_MuonTruthParticleAux_m);
   fChain->SetBranchAddress("TruthParticleAux.pdgId", &TruthParticleAux_pdgId, &b_TruthParticleAux_pdgId);
   fChain->SetBranchAddress("TruthParticleAux.barcode", &TruthParticleAux_barcode, &b_TruthParticleAux_barcode);
   fChain->SetBranchAddress("TruthParticleAux.status", &TruthParticleAux_status, &b_TruthParticleAux_status);
   fChain->SetBranchAddress("TruthParticleAux.px", &TruthParticleAux_px, &b_TruthParticleAux_px);
   fChain->SetBranchAddress("TruthParticleAux.py", &TruthParticleAux_py, &b_TruthParticleAux_py);
   fChain->SetBranchAddress("TruthParticleAux.pz", &TruthParticleAux_pz, &b_TruthParticleAux_pz);
   fChain->SetBranchAddress("TruthParticleAux.e", &TruthParticleAux_e, &b_TruthParticleAux_e);
   fChain->SetBranchAddress("TruthParticleAux.m", &TruthParticleAux_m, &b_TruthParticleAux_m);
   fChain->SetBranchAddress("ElectronCollectionAux.charge", &ElectronCollectionAux_charge, &b_ElectronCollectionAux_charge);
   fChain->SetBranchAddress("ElectronCollectionAux.deltaEta0", &ElectronCollectionAux_deltaEta0, &b_ElectronCollectionAux_deltaEta0);
   fChain->SetBranchAddress("ElectronCollectionAux.deltaEta1", &ElectronCollectionAux_deltaEta1, &b_ElectronCollectionAux_deltaEta1);
   fChain->SetBranchAddress("ElectronCollectionAux.deltaEta2", &ElectronCollectionAux_deltaEta2, &b_ElectronCollectionAux_deltaEta2);
   fChain->SetBranchAddress("ElectronCollectionAux.deltaEta3", &ElectronCollectionAux_deltaEta3, &b_ElectronCollectionAux_deltaEta3);
   fChain->SetBranchAddress("ElectronCollectionAux.deltaPhi0", &ElectronCollectionAux_deltaPhi0, &b_ElectronCollectionAux_deltaPhi0);
   fChain->SetBranchAddress("ElectronCollectionAux.deltaPhi1", &ElectronCollectionAux_deltaPhi1, &b_ElectronCollectionAux_deltaPhi1);
   fChain->SetBranchAddress("ElectronCollectionAux.deltaPhi2", &ElectronCollectionAux_deltaPhi2, &b_ElectronCollectionAux_deltaPhi2);
   fChain->SetBranchAddress("ElectronCollectionAux.deltaPhi3", &ElectronCollectionAux_deltaPhi3, &b_ElectronCollectionAux_deltaPhi3);
   fChain->SetBranchAddress("ElectronCollectionAux.deltaPhiFromLastMeasurement", &ElectronCollectionAux_deltaPhiFromLastMeasurement, &b_ElectronCollectionAux_deltaPhiFromLastMeasurement);
   fChain->SetBranchAddress("ElectronCollectionAux.deltaPhiRescaled0", &ElectronCollectionAux_deltaPhiRescaled0, &b_ElectronCollectionAux_deltaPhiRescaled0);
   fChain->SetBranchAddress("ElectronCollectionAux.deltaPhiRescaled1", &ElectronCollectionAux_deltaPhiRescaled1, &b_ElectronCollectionAux_deltaPhiRescaled1);
   fChain->SetBranchAddress("ElectronCollectionAux.deltaPhiRescaled2", &ElectronCollectionAux_deltaPhiRescaled2, &b_ElectronCollectionAux_deltaPhiRescaled2);
   fChain->SetBranchAddress("ElectronCollectionAux.deltaPhiRescaled3", &ElectronCollectionAux_deltaPhiRescaled3, &b_ElectronCollectionAux_deltaPhiRescaled3);
   fChain->SetBranchAddress("FwdElectronsAux.charge", &FwdElectronsAux_charge, &b_FwdElectronsAux_charge);
   fChain->SetBranchAddress("FwdElectronsAux.deltaEta0", &FwdElectronsAux_deltaEta0, &b_FwdElectronsAux_deltaEta0);
   fChain->SetBranchAddress("FwdElectronsAux.deltaEta1", &FwdElectronsAux_deltaEta1, &b_FwdElectronsAux_deltaEta1);
   fChain->SetBranchAddress("FwdElectronsAux.deltaEta2", &FwdElectronsAux_deltaEta2, &b_FwdElectronsAux_deltaEta2);
   fChain->SetBranchAddress("FwdElectronsAux.deltaEta3", &FwdElectronsAux_deltaEta3, &b_FwdElectronsAux_deltaEta3);
   fChain->SetBranchAddress("FwdElectronsAux.deltaPhi0", &FwdElectronsAux_deltaPhi0, &b_FwdElectronsAux_deltaPhi0);
   fChain->SetBranchAddress("FwdElectronsAux.deltaPhi1", &FwdElectronsAux_deltaPhi1, &b_FwdElectronsAux_deltaPhi1);
   fChain->SetBranchAddress("FwdElectronsAux.deltaPhi2", &FwdElectronsAux_deltaPhi2, &b_FwdElectronsAux_deltaPhi2);
   fChain->SetBranchAddress("FwdElectronsAux.deltaPhi3", &FwdElectronsAux_deltaPhi3, &b_FwdElectronsAux_deltaPhi3);
   fChain->SetBranchAddress("FwdElectronsAux.deltaPhiFromLastMeasurement", &FwdElectronsAux_deltaPhiFromLastMeasurement, &b_FwdElectronsAux_deltaPhiFromLastMeasurement);
   fChain->SetBranchAddress("FwdElectronsAux.deltaPhiRescaled0", &FwdElectronsAux_deltaPhiRescaled0, &b_FwdElectronsAux_deltaPhiRescaled0);
   fChain->SetBranchAddress("FwdElectronsAux.deltaPhiRescaled1", &FwdElectronsAux_deltaPhiRescaled1, &b_FwdElectronsAux_deltaPhiRescaled1);
   fChain->SetBranchAddress("FwdElectronsAux.deltaPhiRescaled2", &FwdElectronsAux_deltaPhiRescaled2, &b_FwdElectronsAux_deltaPhiRescaled2);
   fChain->SetBranchAddress("FwdElectronsAux.deltaPhiRescaled3", &FwdElectronsAux_deltaPhiRescaled3, &b_FwdElectronsAux_deltaPhiRescaled3);
   fChain->SetBranchAddress("MuonSegments", &MuonSegments, &b_MuonSegments);
   fChain->SetBranchAddress("egClusterCollection_links", &egClusterCollection_links, &b_egClusterCollection_links);
   fChain->SetBranchAddress("MuonsAux.pt", &MuonsAux_pt, &b_MuonsAux_pt);
   fChain->SetBranchAddress("MuonsAux.eta", &MuonsAux_eta, &b_MuonsAux_eta);
   fChain->SetBranchAddress("MuonsAux.phi", &MuonsAux_phi, &b_MuonsAux_phi);
   fChain->SetBranchAddress("MuonsAux.e", &MuonsAux_e, &b_MuonsAux_e);
   fChain->SetBranchAddress("MuonsAux.allAuthors", &MuonsAux_allAuthors, &b_MuonsAux_allAuthors);
   fChain->SetBranchAddress("MuonsAux.author", &MuonsAux_author, &b_MuonsAux_author);
   fChain->SetBranchAddress("MuonsAux.muonType", &MuonsAux_muonType, &b_MuonsAux_muonType);
   fChain->SetBranchAddress("MuonsAux.quality", &MuonsAux_quality, &b_MuonsAux_quality);
   fChain->SetBranchAddress("MuonsAux.numberOfPrecisionLayers", &MuonsAux_numberOfPrecisionLayers, &b_MuonsAux_numberOfPrecisionLayers);
   fChain->SetBranchAddress("MuonsAux.numberOfPrecisionHoleLayers", &MuonsAux_numberOfPrecisionHoleLayers, &b_MuonsAux_numberOfPrecisionHoleLayers);
   fChain->SetBranchAddress("MuonsAux.numberOfPhiLayers", &MuonsAux_numberOfPhiLayers, &b_MuonsAux_numberOfPhiLayers);
   fChain->SetBranchAddress("MuonsAux.numberOfPhiHoleLayers", &MuonsAux_numberOfPhiHoleLayers, &b_MuonsAux_numberOfPhiHoleLayers);
   fChain->SetBranchAddress("MuonsAux.numberOfTriggerEtaLayers", &MuonsAux_numberOfTriggerEtaLayers, &b_MuonsAux_numberOfTriggerEtaLayers);
   fChain->SetBranchAddress("MuonsAux.numberOfTriggerEtaHoleLayers", &MuonsAux_numberOfTriggerEtaHoleLayers, &b_MuonsAux_numberOfTriggerEtaHoleLayers);
   fChain->SetBranchAddress("MuonsAux.primarySector", &MuonsAux_primarySector, &b_MuonsAux_primarySector);
   fChain->SetBranchAddress("MuonsAux.secondarySector", &MuonsAux_secondarySector, &b_MuonsAux_secondarySector);
   fChain->SetBranchAddress("MuonsAux.innerSmallHits", &MuonsAux_innerSmallHits, &b_MuonsAux_innerSmallHits);
   fChain->SetBranchAddress("MuonsAux.innerLargeHits", &MuonsAux_innerLargeHits, &b_MuonsAux_innerLargeHits);
   fChain->SetBranchAddress("MuonsAux.middleSmallHits", &MuonsAux_middleSmallHits, &b_MuonsAux_middleSmallHits);
   fChain->SetBranchAddress("MuonsAux.middleLargeHits", &MuonsAux_middleLargeHits, &b_MuonsAux_middleLargeHits);
   fChain->SetBranchAddress("MuonsAux.outerSmallHits", &MuonsAux_outerSmallHits, &b_MuonsAux_outerSmallHits);
   fChain->SetBranchAddress("MuonsAux.outerLargeHits", &MuonsAux_outerLargeHits, &b_MuonsAux_outerLargeHits);
   fChain->SetBranchAddress("MuonsAux.extendedSmallHits", &MuonsAux_extendedSmallHits, &b_MuonsAux_extendedSmallHits);
   fChain->SetBranchAddress("MuonsAux.extendedLargeHits", &MuonsAux_extendedLargeHits, &b_MuonsAux_extendedLargeHits);
   fChain->SetBranchAddress("MuonsAux.innerSmallHoles", &MuonsAux_innerSmallHoles, &b_MuonsAux_innerSmallHoles);
   fChain->SetBranchAddress("MuonsAux.innerLargeHoles", &MuonsAux_innerLargeHoles, &b_MuonsAux_innerLargeHoles);
   fChain->SetBranchAddress("MuonsAux.middleSmallHoles", &MuonsAux_middleSmallHoles, &b_MuonsAux_middleSmallHoles);
   fChain->SetBranchAddress("MuonsAux.middleLargeHoles", &MuonsAux_middleLargeHoles, &b_MuonsAux_middleLargeHoles);
   fChain->SetBranchAddress("MuonsAux.outerSmallHoles", &MuonsAux_outerSmallHoles, &b_MuonsAux_outerSmallHoles);
   fChain->SetBranchAddress("MuonsAux.outerLargeHoles", &MuonsAux_outerLargeHoles, &b_MuonsAux_outerLargeHoles);
   fChain->SetBranchAddress("MuonsAux.extendedSmallHoles", &MuonsAux_extendedSmallHoles, &b_MuonsAux_extendedSmallHoles);
   fChain->SetBranchAddress("MuonsAux.extendedLargeHoles", &MuonsAux_extendedLargeHoles, &b_MuonsAux_extendedLargeHoles);
   fChain->SetBranchAddress("MuonsAux.phiLayer1Hits", &MuonsAux_phiLayer1Hits, &b_MuonsAux_phiLayer1Hits);
   fChain->SetBranchAddress("MuonsAux.phiLayer2Hits", &MuonsAux_phiLayer2Hits, &b_MuonsAux_phiLayer2Hits);
   fChain->SetBranchAddress("MuonsAux.phiLayer3Hits", &MuonsAux_phiLayer3Hits, &b_MuonsAux_phiLayer3Hits);
   fChain->SetBranchAddress("MuonsAux.phiLayer4Hits", &MuonsAux_phiLayer4Hits, &b_MuonsAux_phiLayer4Hits);
   fChain->SetBranchAddress("MuonsAux.etaLayer1Hits", &MuonsAux_etaLayer1Hits, &b_MuonsAux_etaLayer1Hits);
   fChain->SetBranchAddress("MuonsAux.etaLayer2Hits", &MuonsAux_etaLayer2Hits, &b_MuonsAux_etaLayer2Hits);
   fChain->SetBranchAddress("MuonsAux.etaLayer3Hits", &MuonsAux_etaLayer3Hits, &b_MuonsAux_etaLayer3Hits);
   fChain->SetBranchAddress("MuonsAux.etaLayer4Hits", &MuonsAux_etaLayer4Hits, &b_MuonsAux_etaLayer4Hits);
   fChain->SetBranchAddress("MuonsAux.phiLayer1Holes", &MuonsAux_phiLayer1Holes, &b_MuonsAux_phiLayer1Holes);
   fChain->SetBranchAddress("MuonsAux.phiLayer2Holes", &MuonsAux_phiLayer2Holes, &b_MuonsAux_phiLayer2Holes);
   fChain->SetBranchAddress("MuonsAux.phiLayer3Holes", &MuonsAux_phiLayer3Holes, &b_MuonsAux_phiLayer3Holes);
   fChain->SetBranchAddress("MuonsAux.phiLayer4Holes", &MuonsAux_phiLayer4Holes, &b_MuonsAux_phiLayer4Holes);
   fChain->SetBranchAddress("MuonsAux.etaLayer1Holes", &MuonsAux_etaLayer1Holes, &b_MuonsAux_etaLayer1Holes);
   fChain->SetBranchAddress("MuonsAux.etaLayer2Holes", &MuonsAux_etaLayer2Holes, &b_MuonsAux_etaLayer2Holes);
   fChain->SetBranchAddress("MuonsAux.etaLayer3Holes", &MuonsAux_etaLayer3Holes, &b_MuonsAux_etaLayer3Holes);
   fChain->SetBranchAddress("MuonsAux.etaLayer4Holes", &MuonsAux_etaLayer4Holes, &b_MuonsAux_etaLayer4Holes);
   fChain->SetBranchAddress("MuonsAux.etcone10", &MuonsAux_etcone10, &b_MuonsAux_etcone10);
   fChain->SetBranchAddress("MuonsAux.etcone20", &MuonsAux_etcone20, &b_MuonsAux_etcone20);
   fChain->SetBranchAddress("MuonsAux.etcone30", &MuonsAux_etcone30, &b_MuonsAux_etcone30);
   fChain->SetBranchAddress("MuonsAux.etcone40", &MuonsAux_etcone40, &b_MuonsAux_etcone40);
   fChain->SetBranchAddress("MuonsAux.nucone10", &MuonsAux_nucone10, &b_MuonsAux_nucone10);
   fChain->SetBranchAddress("MuonsAux.nucone20", &MuonsAux_nucone20, &b_MuonsAux_nucone20);
   fChain->SetBranchAddress("MuonsAux.nucone30", &MuonsAux_nucone30, &b_MuonsAux_nucone30);
   fChain->SetBranchAddress("MuonsAux.nucone40", &MuonsAux_nucone40, &b_MuonsAux_nucone40);
   fChain->SetBranchAddress("MuonsAux.ptcone10", &MuonsAux_ptcone10, &b_MuonsAux_ptcone10);
   fChain->SetBranchAddress("MuonsAux.ptcone20", &MuonsAux_ptcone20, &b_MuonsAux_ptcone20);
   fChain->SetBranchAddress("MuonsAux.ptcone30", &MuonsAux_ptcone30, &b_MuonsAux_ptcone30);
   fChain->SetBranchAddress("MuonsAux.ptcone40", &MuonsAux_ptcone40, &b_MuonsAux_ptcone40);
   fChain->SetBranchAddress("MuonsAux.etconeNoEm10", &MuonsAux_etconeNoEm10, &b_MuonsAux_etconeNoEm10);
   fChain->SetBranchAddress("MuonsAux.etconeNoEm20", &MuonsAux_etconeNoEm20, &b_MuonsAux_etconeNoEm20);
   fChain->SetBranchAddress("MuonsAux.etconeNoEm30", &MuonsAux_etconeNoEm30, &b_MuonsAux_etconeNoEm30);
   fChain->SetBranchAddress("MuonsAux.etconeNoEm40", &MuonsAux_etconeNoEm40, &b_MuonsAux_etconeNoEm40);
   fChain->SetBranchAddress("MuonsAux.energyLossType", &MuonsAux_energyLossType, &b_MuonsAux_energyLossType);
   fChain->SetBranchAddress("TauRecContainer", &TauRecContainer, &b_TauRecContainer);
   fChain->SetBranchAddress("TauPi0ChargedPFOContainer", &TauPi0ChargedPFOContainer, &b_TauPi0ChargedPFOContainer);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainer", &TauPi0NeutralPFOContainer, &b_TauPi0NeutralPFOContainer);
   fChain->SetBranchAddress("TauShotPFOContainer", &TauShotPFOContainer, &b_TauShotPFOContainer);
   fChain->SetBranchAddress("chargedJetETMissPFO_eflowRec", &chargedJetETMissPFO_eflowRec, &b_chargedJetETMissPFO_eflowRec);
   fChain->SetBranchAddress("chargedTauPFO_eflowRec", &chargedTauPFO_eflowRec, &b_chargedTauPFO_eflowRec);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRec", &neutralJetETMissPFO_eflowRec, &b_neutralJetETMissPFO_eflowRec);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_NonModified_eflowRec", &neutralJetETMiss_LCPFO_NonModified_eflowRec, &b_neutralJetETMiss_LCPFO_NonModified_eflowRec);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRec", &neutralJetETMiss_LCPFO_eflowRec, &b_neutralJetETMiss_LCPFO_eflowRec);
   fChain->SetBranchAddress("neutralTauPFO_eflowRec", &neutralTauPFO_eflowRec, &b_neutralTauPFO_eflowRec);
   fChain->SetBranchAddress("Muons", &Muons, &b_Muons);
   fChain->SetBranchAddress("TruthEvent", &TruthEvent, &b_TruthEvent);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.d0", &CombinedMuonTrackParticlesAux_d0, &b_CombinedMuonTrackParticlesAux_d0);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.z0", &CombinedMuonTrackParticlesAux_z0, &b_CombinedMuonTrackParticlesAux_z0);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.phi", &CombinedMuonTrackParticlesAux_phi, &b_CombinedMuonTrackParticlesAux_phi);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.theta", &CombinedMuonTrackParticlesAux_theta, &b_CombinedMuonTrackParticlesAux_theta);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.qOverP", &CombinedMuonTrackParticlesAux_qOverP, &b_CombinedMuonTrackParticlesAux_qOverP);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.vx", &CombinedMuonTrackParticlesAux_vx, &b_CombinedMuonTrackParticlesAux_vx);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.vy", &CombinedMuonTrackParticlesAux_vy, &b_CombinedMuonTrackParticlesAux_vy);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.vz", &CombinedMuonTrackParticlesAux_vz, &b_CombinedMuonTrackParticlesAux_vz);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.chiSquared", &CombinedMuonTrackParticlesAux_chiSquared, &b_CombinedMuonTrackParticlesAux_chiSquared);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberDoF", &CombinedMuonTrackParticlesAux_numberDoF, &b_CombinedMuonTrackParticlesAux_numberDoF);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.trackFitter", &CombinedMuonTrackParticlesAux_trackFitter, &b_CombinedMuonTrackParticlesAux_trackFitter);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.particleHypothesis", &CombinedMuonTrackParticlesAux_particleHypothesis, &b_CombinedMuonTrackParticlesAux_particleHypothesis);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.trackProperties", &CombinedMuonTrackParticlesAux_trackProperties, &b_CombinedMuonTrackParticlesAux_trackProperties);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.patternRecoInfo", &CombinedMuonTrackParticlesAux_patternRecoInfo, &b_CombinedMuonTrackParticlesAux_patternRecoInfo);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfContribPixelLayers", &CombinedMuonTrackParticlesAux_numberOfContribPixelLayers, &b_CombinedMuonTrackParticlesAux_numberOfContribPixelLayers);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfBLayerHits", &CombinedMuonTrackParticlesAux_numberOfBLayerHits, &b_CombinedMuonTrackParticlesAux_numberOfBLayerHits);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfBLayerOutliers", &CombinedMuonTrackParticlesAux_numberOfBLayerOutliers, &b_CombinedMuonTrackParticlesAux_numberOfBLayerOutliers);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfBLayerSharedHits", &CombinedMuonTrackParticlesAux_numberOfBLayerSharedHits, &b_CombinedMuonTrackParticlesAux_numberOfBLayerSharedHits);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfBLayerSplitHits", &CombinedMuonTrackParticlesAux_numberOfBLayerSplitHits, &b_CombinedMuonTrackParticlesAux_numberOfBLayerSplitHits);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.expectBLayerHit", &CombinedMuonTrackParticlesAux_expectBLayerHit, &b_CombinedMuonTrackParticlesAux_expectBLayerHit);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfPixelHits", &CombinedMuonTrackParticlesAux_numberOfPixelHits, &b_CombinedMuonTrackParticlesAux_numberOfPixelHits);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfPixelOutliers", &CombinedMuonTrackParticlesAux_numberOfPixelOutliers, &b_CombinedMuonTrackParticlesAux_numberOfPixelOutliers);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfPixelHoles", &CombinedMuonTrackParticlesAux_numberOfPixelHoles, &b_CombinedMuonTrackParticlesAux_numberOfPixelHoles);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfPixelSharedHits", &CombinedMuonTrackParticlesAux_numberOfPixelSharedHits, &b_CombinedMuonTrackParticlesAux_numberOfPixelSharedHits);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfPixelSplitHits", &CombinedMuonTrackParticlesAux_numberOfPixelSplitHits, &b_CombinedMuonTrackParticlesAux_numberOfPixelSplitHits);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfGangedPixels", &CombinedMuonTrackParticlesAux_numberOfGangedPixels, &b_CombinedMuonTrackParticlesAux_numberOfGangedPixels);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfGangedFlaggedFakes", &CombinedMuonTrackParticlesAux_numberOfGangedFlaggedFakes, &b_CombinedMuonTrackParticlesAux_numberOfGangedFlaggedFakes);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfPixelDeadSensors", &CombinedMuonTrackParticlesAux_numberOfPixelDeadSensors, &b_CombinedMuonTrackParticlesAux_numberOfPixelDeadSensors);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfPixelSpoiltHits", &CombinedMuonTrackParticlesAux_numberOfPixelSpoiltHits, &b_CombinedMuonTrackParticlesAux_numberOfPixelSpoiltHits);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfSCTHits", &CombinedMuonTrackParticlesAux_numberOfSCTHits, &b_CombinedMuonTrackParticlesAux_numberOfSCTHits);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfSCTOutliers", &CombinedMuonTrackParticlesAux_numberOfSCTOutliers, &b_CombinedMuonTrackParticlesAux_numberOfSCTOutliers);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfSCTHoles", &CombinedMuonTrackParticlesAux_numberOfSCTHoles, &b_CombinedMuonTrackParticlesAux_numberOfSCTHoles);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfSCTDoubleHoles", &CombinedMuonTrackParticlesAux_numberOfSCTDoubleHoles, &b_CombinedMuonTrackParticlesAux_numberOfSCTDoubleHoles);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfSCTSharedHits", &CombinedMuonTrackParticlesAux_numberOfSCTSharedHits, &b_CombinedMuonTrackParticlesAux_numberOfSCTSharedHits);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfSCTDeadSensors", &CombinedMuonTrackParticlesAux_numberOfSCTDeadSensors, &b_CombinedMuonTrackParticlesAux_numberOfSCTDeadSensors);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfSCTSpoiltHits", &CombinedMuonTrackParticlesAux_numberOfSCTSpoiltHits, &b_CombinedMuonTrackParticlesAux_numberOfSCTSpoiltHits);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfTRTHits", &CombinedMuonTrackParticlesAux_numberOfTRTHits, &b_CombinedMuonTrackParticlesAux_numberOfTRTHits);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfTRTOutliers", &CombinedMuonTrackParticlesAux_numberOfTRTOutliers, &b_CombinedMuonTrackParticlesAux_numberOfTRTOutliers);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfTRTHoles", &CombinedMuonTrackParticlesAux_numberOfTRTHoles, &b_CombinedMuonTrackParticlesAux_numberOfTRTHoles);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfTRTHighThresholdHits", &CombinedMuonTrackParticlesAux_numberOfTRTHighThresholdHits, &b_CombinedMuonTrackParticlesAux_numberOfTRTHighThresholdHits);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfTRTHighThresholdOutliers", &CombinedMuonTrackParticlesAux_numberOfTRTHighThresholdOutliers, &b_CombinedMuonTrackParticlesAux_numberOfTRTHighThresholdOutliers);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfTRTDeadStraws", &CombinedMuonTrackParticlesAux_numberOfTRTDeadStraws, &b_CombinedMuonTrackParticlesAux_numberOfTRTDeadStraws);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfTRTTubeHits", &CombinedMuonTrackParticlesAux_numberOfTRTTubeHits, &b_CombinedMuonTrackParticlesAux_numberOfTRTTubeHits);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfTRTXenonHits", &CombinedMuonTrackParticlesAux_numberOfTRTXenonHits, &b_CombinedMuonTrackParticlesAux_numberOfTRTXenonHits);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfPrecisionLayers", &CombinedMuonTrackParticlesAux_numberOfPrecisionLayers, &b_CombinedMuonTrackParticlesAux_numberOfPrecisionLayers);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfPrecisionHoleLayers", &CombinedMuonTrackParticlesAux_numberOfPrecisionHoleLayers, &b_CombinedMuonTrackParticlesAux_numberOfPrecisionHoleLayers);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfPhiLayers", &CombinedMuonTrackParticlesAux_numberOfPhiLayers, &b_CombinedMuonTrackParticlesAux_numberOfPhiLayers);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfPhiHoleLayers", &CombinedMuonTrackParticlesAux_numberOfPhiHoleLayers, &b_CombinedMuonTrackParticlesAux_numberOfPhiHoleLayers);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfTriggerEtaLayers", &CombinedMuonTrackParticlesAux_numberOfTriggerEtaLayers, &b_CombinedMuonTrackParticlesAux_numberOfTriggerEtaLayers);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfTriggerEtaHoleLayers", &CombinedMuonTrackParticlesAux_numberOfTriggerEtaHoleLayers, &b_CombinedMuonTrackParticlesAux_numberOfTriggerEtaHoleLayers);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.numberOfOutliersOnTrack", &CombinedMuonTrackParticlesAux_numberOfOutliersOnTrack, &b_CombinedMuonTrackParticlesAux_numberOfOutliersOnTrack);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.standardDeviationOfChi2OS", &CombinedMuonTrackParticlesAux_standardDeviationOfChi2OS, &b_CombinedMuonTrackParticlesAux_standardDeviationOfChi2OS);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.eProbabilityComb", &CombinedMuonTrackParticlesAux_eProbabilityComb, &b_CombinedMuonTrackParticlesAux_eProbabilityComb);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.eProbabilityHT", &CombinedMuonTrackParticlesAux_eProbabilityHT, &b_CombinedMuonTrackParticlesAux_eProbabilityHT);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.eProbabilityToT", &CombinedMuonTrackParticlesAux_eProbabilityToT, &b_CombinedMuonTrackParticlesAux_eProbabilityToT);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAux.eProbabilityBrem", &CombinedMuonTrackParticlesAux_eProbabilityBrem, &b_CombinedMuonTrackParticlesAux_eProbabilityBrem);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.d0", &ExtrapolatedMuonTrackParticlesAux_d0, &b_ExtrapolatedMuonTrackParticlesAux_d0);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.z0", &ExtrapolatedMuonTrackParticlesAux_z0, &b_ExtrapolatedMuonTrackParticlesAux_z0);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.phi", &ExtrapolatedMuonTrackParticlesAux_phi, &b_ExtrapolatedMuonTrackParticlesAux_phi);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.theta", &ExtrapolatedMuonTrackParticlesAux_theta, &b_ExtrapolatedMuonTrackParticlesAux_theta);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.qOverP", &ExtrapolatedMuonTrackParticlesAux_qOverP, &b_ExtrapolatedMuonTrackParticlesAux_qOverP);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.vx", &ExtrapolatedMuonTrackParticlesAux_vx, &b_ExtrapolatedMuonTrackParticlesAux_vx);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.vy", &ExtrapolatedMuonTrackParticlesAux_vy, &b_ExtrapolatedMuonTrackParticlesAux_vy);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.vz", &ExtrapolatedMuonTrackParticlesAux_vz, &b_ExtrapolatedMuonTrackParticlesAux_vz);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.chiSquared", &ExtrapolatedMuonTrackParticlesAux_chiSquared, &b_ExtrapolatedMuonTrackParticlesAux_chiSquared);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberDoF", &ExtrapolatedMuonTrackParticlesAux_numberDoF, &b_ExtrapolatedMuonTrackParticlesAux_numberDoF);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.trackFitter", &ExtrapolatedMuonTrackParticlesAux_trackFitter, &b_ExtrapolatedMuonTrackParticlesAux_trackFitter);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.particleHypothesis", &ExtrapolatedMuonTrackParticlesAux_particleHypothesis, &b_ExtrapolatedMuonTrackParticlesAux_particleHypothesis);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.trackProperties", &ExtrapolatedMuonTrackParticlesAux_trackProperties, &b_ExtrapolatedMuonTrackParticlesAux_trackProperties);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.patternRecoInfo", &ExtrapolatedMuonTrackParticlesAux_patternRecoInfo, &b_ExtrapolatedMuonTrackParticlesAux_patternRecoInfo);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfContribPixelLayers", &ExtrapolatedMuonTrackParticlesAux_numberOfContribPixelLayers, &b_ExtrapolatedMuonTrackParticlesAux_numberOfContribPixelLayers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfBLayerHits", &ExtrapolatedMuonTrackParticlesAux_numberOfBLayerHits, &b_ExtrapolatedMuonTrackParticlesAux_numberOfBLayerHits);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfBLayerOutliers", &ExtrapolatedMuonTrackParticlesAux_numberOfBLayerOutliers, &b_ExtrapolatedMuonTrackParticlesAux_numberOfBLayerOutliers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfBLayerSharedHits", &ExtrapolatedMuonTrackParticlesAux_numberOfBLayerSharedHits, &b_ExtrapolatedMuonTrackParticlesAux_numberOfBLayerSharedHits);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfBLayerSplitHits", &ExtrapolatedMuonTrackParticlesAux_numberOfBLayerSplitHits, &b_ExtrapolatedMuonTrackParticlesAux_numberOfBLayerSplitHits);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.expectBLayerHit", &ExtrapolatedMuonTrackParticlesAux_expectBLayerHit, &b_ExtrapolatedMuonTrackParticlesAux_expectBLayerHit);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfPixelHits", &ExtrapolatedMuonTrackParticlesAux_numberOfPixelHits, &b_ExtrapolatedMuonTrackParticlesAux_numberOfPixelHits);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfPixelOutliers", &ExtrapolatedMuonTrackParticlesAux_numberOfPixelOutliers, &b_ExtrapolatedMuonTrackParticlesAux_numberOfPixelOutliers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfPixelHoles", &ExtrapolatedMuonTrackParticlesAux_numberOfPixelHoles, &b_ExtrapolatedMuonTrackParticlesAux_numberOfPixelHoles);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfPixelSharedHits", &ExtrapolatedMuonTrackParticlesAux_numberOfPixelSharedHits, &b_ExtrapolatedMuonTrackParticlesAux_numberOfPixelSharedHits);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfPixelSplitHits", &ExtrapolatedMuonTrackParticlesAux_numberOfPixelSplitHits, &b_ExtrapolatedMuonTrackParticlesAux_numberOfPixelSplitHits);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfGangedPixels", &ExtrapolatedMuonTrackParticlesAux_numberOfGangedPixels, &b_ExtrapolatedMuonTrackParticlesAux_numberOfGangedPixels);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfGangedFlaggedFakes", &ExtrapolatedMuonTrackParticlesAux_numberOfGangedFlaggedFakes, &b_ExtrapolatedMuonTrackParticlesAux_numberOfGangedFlaggedFakes);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfPixelDeadSensors", &ExtrapolatedMuonTrackParticlesAux_numberOfPixelDeadSensors, &b_ExtrapolatedMuonTrackParticlesAux_numberOfPixelDeadSensors);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfPixelSpoiltHits", &ExtrapolatedMuonTrackParticlesAux_numberOfPixelSpoiltHits, &b_ExtrapolatedMuonTrackParticlesAux_numberOfPixelSpoiltHits);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfSCTHits", &ExtrapolatedMuonTrackParticlesAux_numberOfSCTHits, &b_ExtrapolatedMuonTrackParticlesAux_numberOfSCTHits);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfSCTOutliers", &ExtrapolatedMuonTrackParticlesAux_numberOfSCTOutliers, &b_ExtrapolatedMuonTrackParticlesAux_numberOfSCTOutliers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfSCTHoles", &ExtrapolatedMuonTrackParticlesAux_numberOfSCTHoles, &b_ExtrapolatedMuonTrackParticlesAux_numberOfSCTHoles);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfSCTDoubleHoles", &ExtrapolatedMuonTrackParticlesAux_numberOfSCTDoubleHoles, &b_ExtrapolatedMuonTrackParticlesAux_numberOfSCTDoubleHoles);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfSCTSharedHits", &ExtrapolatedMuonTrackParticlesAux_numberOfSCTSharedHits, &b_ExtrapolatedMuonTrackParticlesAux_numberOfSCTSharedHits);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfSCTDeadSensors", &ExtrapolatedMuonTrackParticlesAux_numberOfSCTDeadSensors, &b_ExtrapolatedMuonTrackParticlesAux_numberOfSCTDeadSensors);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfSCTSpoiltHits", &ExtrapolatedMuonTrackParticlesAux_numberOfSCTSpoiltHits, &b_ExtrapolatedMuonTrackParticlesAux_numberOfSCTSpoiltHits);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfTRTHits", &ExtrapolatedMuonTrackParticlesAux_numberOfTRTHits, &b_ExtrapolatedMuonTrackParticlesAux_numberOfTRTHits);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfTRTOutliers", &ExtrapolatedMuonTrackParticlesAux_numberOfTRTOutliers, &b_ExtrapolatedMuonTrackParticlesAux_numberOfTRTOutliers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfTRTHoles", &ExtrapolatedMuonTrackParticlesAux_numberOfTRTHoles, &b_ExtrapolatedMuonTrackParticlesAux_numberOfTRTHoles);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfTRTHighThresholdHits", &ExtrapolatedMuonTrackParticlesAux_numberOfTRTHighThresholdHits, &b_ExtrapolatedMuonTrackParticlesAux_numberOfTRTHighThresholdHits);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfTRTHighThresholdOutliers", &ExtrapolatedMuonTrackParticlesAux_numberOfTRTHighThresholdOutliers, &b_ExtrapolatedMuonTrackParticlesAux_numberOfTRTHighThresholdOutliers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfTRTDeadStraws", &ExtrapolatedMuonTrackParticlesAux_numberOfTRTDeadStraws, &b_ExtrapolatedMuonTrackParticlesAux_numberOfTRTDeadStraws);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfTRTTubeHits", &ExtrapolatedMuonTrackParticlesAux_numberOfTRTTubeHits, &b_ExtrapolatedMuonTrackParticlesAux_numberOfTRTTubeHits);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfTRTXenonHits", &ExtrapolatedMuonTrackParticlesAux_numberOfTRTXenonHits, &b_ExtrapolatedMuonTrackParticlesAux_numberOfTRTXenonHits);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfPrecisionLayers", &ExtrapolatedMuonTrackParticlesAux_numberOfPrecisionLayers, &b_ExtrapolatedMuonTrackParticlesAux_numberOfPrecisionLayers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfPrecisionHoleLayers", &ExtrapolatedMuonTrackParticlesAux_numberOfPrecisionHoleLayers, &b_ExtrapolatedMuonTrackParticlesAux_numberOfPrecisionHoleLayers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfPhiLayers", &ExtrapolatedMuonTrackParticlesAux_numberOfPhiLayers, &b_ExtrapolatedMuonTrackParticlesAux_numberOfPhiLayers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfPhiHoleLayers", &ExtrapolatedMuonTrackParticlesAux_numberOfPhiHoleLayers, &b_ExtrapolatedMuonTrackParticlesAux_numberOfPhiHoleLayers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfTriggerEtaLayers", &ExtrapolatedMuonTrackParticlesAux_numberOfTriggerEtaLayers, &b_ExtrapolatedMuonTrackParticlesAux_numberOfTriggerEtaLayers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfTriggerEtaHoleLayers", &ExtrapolatedMuonTrackParticlesAux_numberOfTriggerEtaHoleLayers, &b_ExtrapolatedMuonTrackParticlesAux_numberOfTriggerEtaHoleLayers);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.numberOfOutliersOnTrack", &ExtrapolatedMuonTrackParticlesAux_numberOfOutliersOnTrack, &b_ExtrapolatedMuonTrackParticlesAux_numberOfOutliersOnTrack);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.standardDeviationOfChi2OS", &ExtrapolatedMuonTrackParticlesAux_standardDeviationOfChi2OS, &b_ExtrapolatedMuonTrackParticlesAux_standardDeviationOfChi2OS);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.eProbabilityComb", &ExtrapolatedMuonTrackParticlesAux_eProbabilityComb, &b_ExtrapolatedMuonTrackParticlesAux_eProbabilityComb);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.eProbabilityHT", &ExtrapolatedMuonTrackParticlesAux_eProbabilityHT, &b_ExtrapolatedMuonTrackParticlesAux_eProbabilityHT);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.eProbabilityToT", &ExtrapolatedMuonTrackParticlesAux_eProbabilityToT, &b_ExtrapolatedMuonTrackParticlesAux_eProbabilityToT);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAux.eProbabilityBrem", &ExtrapolatedMuonTrackParticlesAux_eProbabilityBrem, &b_ExtrapolatedMuonTrackParticlesAux_eProbabilityBrem);
   fChain->SetBranchAddress("GSFTrackParticlesAux.d0", &GSFTrackParticlesAux_d0, &b_GSFTrackParticlesAux_d0);
   fChain->SetBranchAddress("GSFTrackParticlesAux.z0", &GSFTrackParticlesAux_z0, &b_GSFTrackParticlesAux_z0);
   fChain->SetBranchAddress("GSFTrackParticlesAux.phi", &GSFTrackParticlesAux_phi, &b_GSFTrackParticlesAux_phi);
   fChain->SetBranchAddress("GSFTrackParticlesAux.theta", &GSFTrackParticlesAux_theta, &b_GSFTrackParticlesAux_theta);
   fChain->SetBranchAddress("GSFTrackParticlesAux.qOverP", &GSFTrackParticlesAux_qOverP, &b_GSFTrackParticlesAux_qOverP);
   fChain->SetBranchAddress("GSFTrackParticlesAux.vx", &GSFTrackParticlesAux_vx, &b_GSFTrackParticlesAux_vx);
   fChain->SetBranchAddress("GSFTrackParticlesAux.vy", &GSFTrackParticlesAux_vy, &b_GSFTrackParticlesAux_vy);
   fChain->SetBranchAddress("GSFTrackParticlesAux.vz", &GSFTrackParticlesAux_vz, &b_GSFTrackParticlesAux_vz);
   fChain->SetBranchAddress("GSFTrackParticlesAux.chiSquared", &GSFTrackParticlesAux_chiSquared, &b_GSFTrackParticlesAux_chiSquared);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberDoF", &GSFTrackParticlesAux_numberDoF, &b_GSFTrackParticlesAux_numberDoF);
   fChain->SetBranchAddress("GSFTrackParticlesAux.trackFitter", &GSFTrackParticlesAux_trackFitter, &b_GSFTrackParticlesAux_trackFitter);
   fChain->SetBranchAddress("GSFTrackParticlesAux.particleHypothesis", &GSFTrackParticlesAux_particleHypothesis, &b_GSFTrackParticlesAux_particleHypothesis);
   fChain->SetBranchAddress("GSFTrackParticlesAux.trackProperties", &GSFTrackParticlesAux_trackProperties, &b_GSFTrackParticlesAux_trackProperties);
   fChain->SetBranchAddress("GSFTrackParticlesAux.patternRecoInfo", &GSFTrackParticlesAux_patternRecoInfo, &b_GSFTrackParticlesAux_patternRecoInfo);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfContribPixelLayers", &GSFTrackParticlesAux_numberOfContribPixelLayers, &b_GSFTrackParticlesAux_numberOfContribPixelLayers);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfBLayerHits", &GSFTrackParticlesAux_numberOfBLayerHits, &b_GSFTrackParticlesAux_numberOfBLayerHits);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfBLayerOutliers", &GSFTrackParticlesAux_numberOfBLayerOutliers, &b_GSFTrackParticlesAux_numberOfBLayerOutliers);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfBLayerSharedHits", &GSFTrackParticlesAux_numberOfBLayerSharedHits, &b_GSFTrackParticlesAux_numberOfBLayerSharedHits);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfBLayerSplitHits", &GSFTrackParticlesAux_numberOfBLayerSplitHits, &b_GSFTrackParticlesAux_numberOfBLayerSplitHits);
   fChain->SetBranchAddress("GSFTrackParticlesAux.expectBLayerHit", &GSFTrackParticlesAux_expectBLayerHit, &b_GSFTrackParticlesAux_expectBLayerHit);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfPixelHits", &GSFTrackParticlesAux_numberOfPixelHits, &b_GSFTrackParticlesAux_numberOfPixelHits);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfPixelOutliers", &GSFTrackParticlesAux_numberOfPixelOutliers, &b_GSFTrackParticlesAux_numberOfPixelOutliers);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfPixelHoles", &GSFTrackParticlesAux_numberOfPixelHoles, &b_GSFTrackParticlesAux_numberOfPixelHoles);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfPixelSharedHits", &GSFTrackParticlesAux_numberOfPixelSharedHits, &b_GSFTrackParticlesAux_numberOfPixelSharedHits);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfPixelSplitHits", &GSFTrackParticlesAux_numberOfPixelSplitHits, &b_GSFTrackParticlesAux_numberOfPixelSplitHits);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfGangedPixels", &GSFTrackParticlesAux_numberOfGangedPixels, &b_GSFTrackParticlesAux_numberOfGangedPixels);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfGangedFlaggedFakes", &GSFTrackParticlesAux_numberOfGangedFlaggedFakes, &b_GSFTrackParticlesAux_numberOfGangedFlaggedFakes);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfPixelDeadSensors", &GSFTrackParticlesAux_numberOfPixelDeadSensors, &b_GSFTrackParticlesAux_numberOfPixelDeadSensors);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfPixelSpoiltHits", &GSFTrackParticlesAux_numberOfPixelSpoiltHits, &b_GSFTrackParticlesAux_numberOfPixelSpoiltHits);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfSCTHits", &GSFTrackParticlesAux_numberOfSCTHits, &b_GSFTrackParticlesAux_numberOfSCTHits);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfSCTOutliers", &GSFTrackParticlesAux_numberOfSCTOutliers, &b_GSFTrackParticlesAux_numberOfSCTOutliers);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfSCTHoles", &GSFTrackParticlesAux_numberOfSCTHoles, &b_GSFTrackParticlesAux_numberOfSCTHoles);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfSCTDoubleHoles", &GSFTrackParticlesAux_numberOfSCTDoubleHoles, &b_GSFTrackParticlesAux_numberOfSCTDoubleHoles);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfSCTSharedHits", &GSFTrackParticlesAux_numberOfSCTSharedHits, &b_GSFTrackParticlesAux_numberOfSCTSharedHits);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfSCTDeadSensors", &GSFTrackParticlesAux_numberOfSCTDeadSensors, &b_GSFTrackParticlesAux_numberOfSCTDeadSensors);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfSCTSpoiltHits", &GSFTrackParticlesAux_numberOfSCTSpoiltHits, &b_GSFTrackParticlesAux_numberOfSCTSpoiltHits);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfTRTHits", &GSFTrackParticlesAux_numberOfTRTHits, &b_GSFTrackParticlesAux_numberOfTRTHits);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfTRTOutliers", &GSFTrackParticlesAux_numberOfTRTOutliers, &b_GSFTrackParticlesAux_numberOfTRTOutliers);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfTRTHoles", &GSFTrackParticlesAux_numberOfTRTHoles, &b_GSFTrackParticlesAux_numberOfTRTHoles);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfTRTHighThresholdHits", &GSFTrackParticlesAux_numberOfTRTHighThresholdHits, &b_GSFTrackParticlesAux_numberOfTRTHighThresholdHits);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfTRTHighThresholdOutliers", &GSFTrackParticlesAux_numberOfTRTHighThresholdOutliers, &b_GSFTrackParticlesAux_numberOfTRTHighThresholdOutliers);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfTRTDeadStraws", &GSFTrackParticlesAux_numberOfTRTDeadStraws, &b_GSFTrackParticlesAux_numberOfTRTDeadStraws);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfTRTTubeHits", &GSFTrackParticlesAux_numberOfTRTTubeHits, &b_GSFTrackParticlesAux_numberOfTRTTubeHits);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfTRTXenonHits", &GSFTrackParticlesAux_numberOfTRTXenonHits, &b_GSFTrackParticlesAux_numberOfTRTXenonHits);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfPrecisionLayers", &GSFTrackParticlesAux_numberOfPrecisionLayers, &b_GSFTrackParticlesAux_numberOfPrecisionLayers);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfPrecisionHoleLayers", &GSFTrackParticlesAux_numberOfPrecisionHoleLayers, &b_GSFTrackParticlesAux_numberOfPrecisionHoleLayers);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfPhiLayers", &GSFTrackParticlesAux_numberOfPhiLayers, &b_GSFTrackParticlesAux_numberOfPhiLayers);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfPhiHoleLayers", &GSFTrackParticlesAux_numberOfPhiHoleLayers, &b_GSFTrackParticlesAux_numberOfPhiHoleLayers);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfTriggerEtaLayers", &GSFTrackParticlesAux_numberOfTriggerEtaLayers, &b_GSFTrackParticlesAux_numberOfTriggerEtaLayers);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfTriggerEtaHoleLayers", &GSFTrackParticlesAux_numberOfTriggerEtaHoleLayers, &b_GSFTrackParticlesAux_numberOfTriggerEtaHoleLayers);
   fChain->SetBranchAddress("GSFTrackParticlesAux.numberOfOutliersOnTrack", &GSFTrackParticlesAux_numberOfOutliersOnTrack, &b_GSFTrackParticlesAux_numberOfOutliersOnTrack);
   fChain->SetBranchAddress("GSFTrackParticlesAux.standardDeviationOfChi2OS", &GSFTrackParticlesAux_standardDeviationOfChi2OS, &b_GSFTrackParticlesAux_standardDeviationOfChi2OS);
   fChain->SetBranchAddress("GSFTrackParticlesAux.eProbabilityComb", &GSFTrackParticlesAux_eProbabilityComb, &b_GSFTrackParticlesAux_eProbabilityComb);
   fChain->SetBranchAddress("GSFTrackParticlesAux.eProbabilityHT", &GSFTrackParticlesAux_eProbabilityHT, &b_GSFTrackParticlesAux_eProbabilityHT);
   fChain->SetBranchAddress("GSFTrackParticlesAux.eProbabilityToT", &GSFTrackParticlesAux_eProbabilityToT, &b_GSFTrackParticlesAux_eProbabilityToT);
   fChain->SetBranchAddress("GSFTrackParticlesAux.eProbabilityBrem", &GSFTrackParticlesAux_eProbabilityBrem, &b_GSFTrackParticlesAux_eProbabilityBrem);
   fChain->SetBranchAddress("InDetTrackParticlesAux.d0", &InDetTrackParticlesAux_d0, &b_InDetTrackParticlesAux_d0);
   fChain->SetBranchAddress("InDetTrackParticlesAux.z0", &InDetTrackParticlesAux_z0, &b_InDetTrackParticlesAux_z0);
   fChain->SetBranchAddress("InDetTrackParticlesAux.phi", &InDetTrackParticlesAux_phi, &b_InDetTrackParticlesAux_phi);
   fChain->SetBranchAddress("InDetTrackParticlesAux.theta", &InDetTrackParticlesAux_theta, &b_InDetTrackParticlesAux_theta);
   fChain->SetBranchAddress("InDetTrackParticlesAux.qOverP", &InDetTrackParticlesAux_qOverP, &b_InDetTrackParticlesAux_qOverP);
   fChain->SetBranchAddress("InDetTrackParticlesAux.vx", &InDetTrackParticlesAux_vx, &b_InDetTrackParticlesAux_vx);
   fChain->SetBranchAddress("InDetTrackParticlesAux.vy", &InDetTrackParticlesAux_vy, &b_InDetTrackParticlesAux_vy);
   fChain->SetBranchAddress("InDetTrackParticlesAux.vz", &InDetTrackParticlesAux_vz, &b_InDetTrackParticlesAux_vz);
   fChain->SetBranchAddress("InDetTrackParticlesAux.chiSquared", &InDetTrackParticlesAux_chiSquared, &b_InDetTrackParticlesAux_chiSquared);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberDoF", &InDetTrackParticlesAux_numberDoF, &b_InDetTrackParticlesAux_numberDoF);
   fChain->SetBranchAddress("InDetTrackParticlesAux.trackFitter", &InDetTrackParticlesAux_trackFitter, &b_InDetTrackParticlesAux_trackFitter);
   fChain->SetBranchAddress("InDetTrackParticlesAux.particleHypothesis", &InDetTrackParticlesAux_particleHypothesis, &b_InDetTrackParticlesAux_particleHypothesis);
   fChain->SetBranchAddress("InDetTrackParticlesAux.trackProperties", &InDetTrackParticlesAux_trackProperties, &b_InDetTrackParticlesAux_trackProperties);
   fChain->SetBranchAddress("InDetTrackParticlesAux.patternRecoInfo", &InDetTrackParticlesAux_patternRecoInfo, &b_InDetTrackParticlesAux_patternRecoInfo);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfContribPixelLayers", &InDetTrackParticlesAux_numberOfContribPixelLayers, &b_InDetTrackParticlesAux_numberOfContribPixelLayers);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfBLayerHits", &InDetTrackParticlesAux_numberOfBLayerHits, &b_InDetTrackParticlesAux_numberOfBLayerHits);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfBLayerOutliers", &InDetTrackParticlesAux_numberOfBLayerOutliers, &b_InDetTrackParticlesAux_numberOfBLayerOutliers);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfBLayerSharedHits", &InDetTrackParticlesAux_numberOfBLayerSharedHits, &b_InDetTrackParticlesAux_numberOfBLayerSharedHits);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfBLayerSplitHits", &InDetTrackParticlesAux_numberOfBLayerSplitHits, &b_InDetTrackParticlesAux_numberOfBLayerSplitHits);
   fChain->SetBranchAddress("InDetTrackParticlesAux.expectBLayerHit", &InDetTrackParticlesAux_expectBLayerHit, &b_InDetTrackParticlesAux_expectBLayerHit);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfPixelHits", &InDetTrackParticlesAux_numberOfPixelHits, &b_InDetTrackParticlesAux_numberOfPixelHits);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfPixelOutliers", &InDetTrackParticlesAux_numberOfPixelOutliers, &b_InDetTrackParticlesAux_numberOfPixelOutliers);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfPixelHoles", &InDetTrackParticlesAux_numberOfPixelHoles, &b_InDetTrackParticlesAux_numberOfPixelHoles);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfPixelSharedHits", &InDetTrackParticlesAux_numberOfPixelSharedHits, &b_InDetTrackParticlesAux_numberOfPixelSharedHits);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfPixelSplitHits", &InDetTrackParticlesAux_numberOfPixelSplitHits, &b_InDetTrackParticlesAux_numberOfPixelSplitHits);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfGangedPixels", &InDetTrackParticlesAux_numberOfGangedPixels, &b_InDetTrackParticlesAux_numberOfGangedPixels);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfGangedFlaggedFakes", &InDetTrackParticlesAux_numberOfGangedFlaggedFakes, &b_InDetTrackParticlesAux_numberOfGangedFlaggedFakes);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfPixelDeadSensors", &InDetTrackParticlesAux_numberOfPixelDeadSensors, &b_InDetTrackParticlesAux_numberOfPixelDeadSensors);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfPixelSpoiltHits", &InDetTrackParticlesAux_numberOfPixelSpoiltHits, &b_InDetTrackParticlesAux_numberOfPixelSpoiltHits);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfSCTHits", &InDetTrackParticlesAux_numberOfSCTHits, &b_InDetTrackParticlesAux_numberOfSCTHits);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfSCTOutliers", &InDetTrackParticlesAux_numberOfSCTOutliers, &b_InDetTrackParticlesAux_numberOfSCTOutliers);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfSCTHoles", &InDetTrackParticlesAux_numberOfSCTHoles, &b_InDetTrackParticlesAux_numberOfSCTHoles);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfSCTDoubleHoles", &InDetTrackParticlesAux_numberOfSCTDoubleHoles, &b_InDetTrackParticlesAux_numberOfSCTDoubleHoles);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfSCTSharedHits", &InDetTrackParticlesAux_numberOfSCTSharedHits, &b_InDetTrackParticlesAux_numberOfSCTSharedHits);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfSCTDeadSensors", &InDetTrackParticlesAux_numberOfSCTDeadSensors, &b_InDetTrackParticlesAux_numberOfSCTDeadSensors);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfSCTSpoiltHits", &InDetTrackParticlesAux_numberOfSCTSpoiltHits, &b_InDetTrackParticlesAux_numberOfSCTSpoiltHits);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfTRTHits", &InDetTrackParticlesAux_numberOfTRTHits, &b_InDetTrackParticlesAux_numberOfTRTHits);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfTRTOutliers", &InDetTrackParticlesAux_numberOfTRTOutliers, &b_InDetTrackParticlesAux_numberOfTRTOutliers);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfTRTHoles", &InDetTrackParticlesAux_numberOfTRTHoles, &b_InDetTrackParticlesAux_numberOfTRTHoles);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfTRTHighThresholdHits", &InDetTrackParticlesAux_numberOfTRTHighThresholdHits, &b_InDetTrackParticlesAux_numberOfTRTHighThresholdHits);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfTRTHighThresholdOutliers", &InDetTrackParticlesAux_numberOfTRTHighThresholdOutliers, &b_InDetTrackParticlesAux_numberOfTRTHighThresholdOutliers);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfTRTDeadStraws", &InDetTrackParticlesAux_numberOfTRTDeadStraws, &b_InDetTrackParticlesAux_numberOfTRTDeadStraws);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfTRTTubeHits", &InDetTrackParticlesAux_numberOfTRTTubeHits, &b_InDetTrackParticlesAux_numberOfTRTTubeHits);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfTRTXenonHits", &InDetTrackParticlesAux_numberOfTRTXenonHits, &b_InDetTrackParticlesAux_numberOfTRTXenonHits);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfPrecisionLayers", &InDetTrackParticlesAux_numberOfPrecisionLayers, &b_InDetTrackParticlesAux_numberOfPrecisionLayers);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfPrecisionHoleLayers", &InDetTrackParticlesAux_numberOfPrecisionHoleLayers, &b_InDetTrackParticlesAux_numberOfPrecisionHoleLayers);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfPhiLayers", &InDetTrackParticlesAux_numberOfPhiLayers, &b_InDetTrackParticlesAux_numberOfPhiLayers);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfPhiHoleLayers", &InDetTrackParticlesAux_numberOfPhiHoleLayers, &b_InDetTrackParticlesAux_numberOfPhiHoleLayers);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfTriggerEtaLayers", &InDetTrackParticlesAux_numberOfTriggerEtaLayers, &b_InDetTrackParticlesAux_numberOfTriggerEtaLayers);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfTriggerEtaHoleLayers", &InDetTrackParticlesAux_numberOfTriggerEtaHoleLayers, &b_InDetTrackParticlesAux_numberOfTriggerEtaHoleLayers);
   fChain->SetBranchAddress("InDetTrackParticlesAux.numberOfOutliersOnTrack", &InDetTrackParticlesAux_numberOfOutliersOnTrack, &b_InDetTrackParticlesAux_numberOfOutliersOnTrack);
   fChain->SetBranchAddress("InDetTrackParticlesAux.standardDeviationOfChi2OS", &InDetTrackParticlesAux_standardDeviationOfChi2OS, &b_InDetTrackParticlesAux_standardDeviationOfChi2OS);
   fChain->SetBranchAddress("InDetTrackParticlesAux.eProbabilityComb", &InDetTrackParticlesAux_eProbabilityComb, &b_InDetTrackParticlesAux_eProbabilityComb);
   fChain->SetBranchAddress("InDetTrackParticlesAux.eProbabilityHT", &InDetTrackParticlesAux_eProbabilityHT, &b_InDetTrackParticlesAux_eProbabilityHT);
   fChain->SetBranchAddress("InDetTrackParticlesAux.eProbabilityToT", &InDetTrackParticlesAux_eProbabilityToT, &b_InDetTrackParticlesAux_eProbabilityToT);
   fChain->SetBranchAddress("InDetTrackParticlesAux.eProbabilityBrem", &InDetTrackParticlesAux_eProbabilityBrem, &b_InDetTrackParticlesAux_eProbabilityBrem);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.d0", &InDetTrackParticlesForwardAux_d0, &b_InDetTrackParticlesForwardAux_d0);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.z0", &InDetTrackParticlesForwardAux_z0, &b_InDetTrackParticlesForwardAux_z0);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.phi", &InDetTrackParticlesForwardAux_phi, &b_InDetTrackParticlesForwardAux_phi);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.theta", &InDetTrackParticlesForwardAux_theta, &b_InDetTrackParticlesForwardAux_theta);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.qOverP", &InDetTrackParticlesForwardAux_qOverP, &b_InDetTrackParticlesForwardAux_qOverP);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.vx", &InDetTrackParticlesForwardAux_vx, &b_InDetTrackParticlesForwardAux_vx);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.vy", &InDetTrackParticlesForwardAux_vy, &b_InDetTrackParticlesForwardAux_vy);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.vz", &InDetTrackParticlesForwardAux_vz, &b_InDetTrackParticlesForwardAux_vz);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.chiSquared", &InDetTrackParticlesForwardAux_chiSquared, &b_InDetTrackParticlesForwardAux_chiSquared);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberDoF", &InDetTrackParticlesForwardAux_numberDoF, &b_InDetTrackParticlesForwardAux_numberDoF);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.trackFitter", &InDetTrackParticlesForwardAux_trackFitter, &b_InDetTrackParticlesForwardAux_trackFitter);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.particleHypothesis", &InDetTrackParticlesForwardAux_particleHypothesis, &b_InDetTrackParticlesForwardAux_particleHypothesis);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.trackProperties", &InDetTrackParticlesForwardAux_trackProperties, &b_InDetTrackParticlesForwardAux_trackProperties);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.patternRecoInfo", &InDetTrackParticlesForwardAux_patternRecoInfo, &b_InDetTrackParticlesForwardAux_patternRecoInfo);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfContribPixelLayers", &InDetTrackParticlesForwardAux_numberOfContribPixelLayers, &b_InDetTrackParticlesForwardAux_numberOfContribPixelLayers);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfBLayerHits", &InDetTrackParticlesForwardAux_numberOfBLayerHits, &b_InDetTrackParticlesForwardAux_numberOfBLayerHits);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfBLayerOutliers", &InDetTrackParticlesForwardAux_numberOfBLayerOutliers, &b_InDetTrackParticlesForwardAux_numberOfBLayerOutliers);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfBLayerSharedHits", &InDetTrackParticlesForwardAux_numberOfBLayerSharedHits, &b_InDetTrackParticlesForwardAux_numberOfBLayerSharedHits);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfBLayerSplitHits", &InDetTrackParticlesForwardAux_numberOfBLayerSplitHits, &b_InDetTrackParticlesForwardAux_numberOfBLayerSplitHits);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.expectBLayerHit", &InDetTrackParticlesForwardAux_expectBLayerHit, &b_InDetTrackParticlesForwardAux_expectBLayerHit);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfPixelHits", &InDetTrackParticlesForwardAux_numberOfPixelHits, &b_InDetTrackParticlesForwardAux_numberOfPixelHits);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfPixelOutliers", &InDetTrackParticlesForwardAux_numberOfPixelOutliers, &b_InDetTrackParticlesForwardAux_numberOfPixelOutliers);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfPixelHoles", &InDetTrackParticlesForwardAux_numberOfPixelHoles, &b_InDetTrackParticlesForwardAux_numberOfPixelHoles);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfPixelSharedHits", &InDetTrackParticlesForwardAux_numberOfPixelSharedHits, &b_InDetTrackParticlesForwardAux_numberOfPixelSharedHits);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfPixelSplitHits", &InDetTrackParticlesForwardAux_numberOfPixelSplitHits, &b_InDetTrackParticlesForwardAux_numberOfPixelSplitHits);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfGangedPixels", &InDetTrackParticlesForwardAux_numberOfGangedPixels, &b_InDetTrackParticlesForwardAux_numberOfGangedPixels);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfGangedFlaggedFakes", &InDetTrackParticlesForwardAux_numberOfGangedFlaggedFakes, &b_InDetTrackParticlesForwardAux_numberOfGangedFlaggedFakes);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfPixelDeadSensors", &InDetTrackParticlesForwardAux_numberOfPixelDeadSensors, &b_InDetTrackParticlesForwardAux_numberOfPixelDeadSensors);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfPixelSpoiltHits", &InDetTrackParticlesForwardAux_numberOfPixelSpoiltHits, &b_InDetTrackParticlesForwardAux_numberOfPixelSpoiltHits);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfSCTHits", &InDetTrackParticlesForwardAux_numberOfSCTHits, &b_InDetTrackParticlesForwardAux_numberOfSCTHits);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfSCTOutliers", &InDetTrackParticlesForwardAux_numberOfSCTOutliers, &b_InDetTrackParticlesForwardAux_numberOfSCTOutliers);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfSCTHoles", &InDetTrackParticlesForwardAux_numberOfSCTHoles, &b_InDetTrackParticlesForwardAux_numberOfSCTHoles);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfSCTDoubleHoles", &InDetTrackParticlesForwardAux_numberOfSCTDoubleHoles, &b_InDetTrackParticlesForwardAux_numberOfSCTDoubleHoles);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfSCTSharedHits", &InDetTrackParticlesForwardAux_numberOfSCTSharedHits, &b_InDetTrackParticlesForwardAux_numberOfSCTSharedHits);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfSCTDeadSensors", &InDetTrackParticlesForwardAux_numberOfSCTDeadSensors, &b_InDetTrackParticlesForwardAux_numberOfSCTDeadSensors);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfSCTSpoiltHits", &InDetTrackParticlesForwardAux_numberOfSCTSpoiltHits, &b_InDetTrackParticlesForwardAux_numberOfSCTSpoiltHits);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfTRTHits", &InDetTrackParticlesForwardAux_numberOfTRTHits, &b_InDetTrackParticlesForwardAux_numberOfTRTHits);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfTRTOutliers", &InDetTrackParticlesForwardAux_numberOfTRTOutliers, &b_InDetTrackParticlesForwardAux_numberOfTRTOutliers);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfTRTHoles", &InDetTrackParticlesForwardAux_numberOfTRTHoles, &b_InDetTrackParticlesForwardAux_numberOfTRTHoles);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfTRTHighThresholdHits", &InDetTrackParticlesForwardAux_numberOfTRTHighThresholdHits, &b_InDetTrackParticlesForwardAux_numberOfTRTHighThresholdHits);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfTRTHighThresholdOutliers", &InDetTrackParticlesForwardAux_numberOfTRTHighThresholdOutliers, &b_InDetTrackParticlesForwardAux_numberOfTRTHighThresholdOutliers);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfTRTDeadStraws", &InDetTrackParticlesForwardAux_numberOfTRTDeadStraws, &b_InDetTrackParticlesForwardAux_numberOfTRTDeadStraws);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfTRTTubeHits", &InDetTrackParticlesForwardAux_numberOfTRTTubeHits, &b_InDetTrackParticlesForwardAux_numberOfTRTTubeHits);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfTRTXenonHits", &InDetTrackParticlesForwardAux_numberOfTRTXenonHits, &b_InDetTrackParticlesForwardAux_numberOfTRTXenonHits);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfPrecisionLayers", &InDetTrackParticlesForwardAux_numberOfPrecisionLayers, &b_InDetTrackParticlesForwardAux_numberOfPrecisionLayers);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfPrecisionHoleLayers", &InDetTrackParticlesForwardAux_numberOfPrecisionHoleLayers, &b_InDetTrackParticlesForwardAux_numberOfPrecisionHoleLayers);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfPhiLayers", &InDetTrackParticlesForwardAux_numberOfPhiLayers, &b_InDetTrackParticlesForwardAux_numberOfPhiLayers);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfPhiHoleLayers", &InDetTrackParticlesForwardAux_numberOfPhiHoleLayers, &b_InDetTrackParticlesForwardAux_numberOfPhiHoleLayers);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfTriggerEtaLayers", &InDetTrackParticlesForwardAux_numberOfTriggerEtaLayers, &b_InDetTrackParticlesForwardAux_numberOfTriggerEtaLayers);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfTriggerEtaHoleLayers", &InDetTrackParticlesForwardAux_numberOfTriggerEtaHoleLayers, &b_InDetTrackParticlesForwardAux_numberOfTriggerEtaHoleLayers);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.numberOfOutliersOnTrack", &InDetTrackParticlesForwardAux_numberOfOutliersOnTrack, &b_InDetTrackParticlesForwardAux_numberOfOutliersOnTrack);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.standardDeviationOfChi2OS", &InDetTrackParticlesForwardAux_standardDeviationOfChi2OS, &b_InDetTrackParticlesForwardAux_standardDeviationOfChi2OS);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.eProbabilityComb", &InDetTrackParticlesForwardAux_eProbabilityComb, &b_InDetTrackParticlesForwardAux_eProbabilityComb);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.eProbabilityHT", &InDetTrackParticlesForwardAux_eProbabilityHT, &b_InDetTrackParticlesForwardAux_eProbabilityHT);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.eProbabilityToT", &InDetTrackParticlesForwardAux_eProbabilityToT, &b_InDetTrackParticlesForwardAux_eProbabilityToT);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAux.eProbabilityBrem", &InDetTrackParticlesForwardAux_eProbabilityBrem, &b_InDetTrackParticlesForwardAux_eProbabilityBrem);
   fChain->SetBranchAddress("CaloCalTopoCluster", &CaloCalTopoCluster, &b_CaloCalTopoCluster);
   fChain->SetBranchAddress("LArClusterEMFrwd", &LArClusterEMFrwd, &b_LArClusterEMFrwd);
   fChain->SetBranchAddress("egClusterCollection", &egClusterCollection, &b_egClusterCollection);
   fChain->SetBranchAddress("TauPi0ChargedPFOContainerAux.bdtPi0Score", &TauPi0ChargedPFOContainerAux_bdtPi0Score, &b_TauPi0ChargedPFOContainerAux_bdtPi0Score);
   fChain->SetBranchAddress("TauPi0ChargedPFOContainerAux.centerMag", &TauPi0ChargedPFOContainerAux_centerMag, &b_TauPi0ChargedPFOContainerAux_centerMag);
   fChain->SetBranchAddress("TauPi0ChargedPFOContainerAux.charge", &TauPi0ChargedPFOContainerAux_charge, &b_TauPi0ChargedPFOContainerAux_charge);
   fChain->SetBranchAddress("TauPi0ChargedPFOContainerAux.pt", &TauPi0ChargedPFOContainerAux_pt, &b_TauPi0ChargedPFOContainerAux_pt);
   fChain->SetBranchAddress("TauPi0ChargedPFOContainerAux.eta", &TauPi0ChargedPFOContainerAux_eta, &b_TauPi0ChargedPFOContainerAux_eta);
   fChain->SetBranchAddress("TauPi0ChargedPFOContainerAux.phi", &TauPi0ChargedPFOContainerAux_phi, &b_TauPi0ChargedPFOContainerAux_phi);
   fChain->SetBranchAddress("TauPi0ChargedPFOContainerAux.m", &TauPi0ChargedPFOContainerAux_m, &b_TauPi0ChargedPFOContainerAux_m);
   fChain->SetBranchAddress("TauPi0ChargedPFOContainerAux.ptEM", &TauPi0ChargedPFOContainerAux_ptEM, &b_TauPi0ChargedPFOContainerAux_ptEM);
   fChain->SetBranchAddress("TauPi0ChargedPFOContainerAux.etaEM", &TauPi0ChargedPFOContainerAux_etaEM, &b_TauPi0ChargedPFOContainerAux_etaEM);
   fChain->SetBranchAddress("TauPi0ChargedPFOContainerAux.phiEM", &TauPi0ChargedPFOContainerAux_phiEM, &b_TauPi0ChargedPFOContainerAux_phiEM);
   fChain->SetBranchAddress("TauPi0ChargedPFOContainerAux.mEM", &TauPi0ChargedPFOContainerAux_mEM, &b_TauPi0ChargedPFOContainerAux_mEM);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAux.bdtPi0Score", &TauPi0NeutralPFOContainerAux_bdtPi0Score, &b_TauPi0NeutralPFOContainerAux_bdtPi0Score);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAux.centerMag", &TauPi0NeutralPFOContainerAux_centerMag, &b_TauPi0NeutralPFOContainerAux_centerMag);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAux.charge", &TauPi0NeutralPFOContainerAux_charge, &b_TauPi0NeutralPFOContainerAux_charge);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAux.pt", &TauPi0NeutralPFOContainerAux_pt, &b_TauPi0NeutralPFOContainerAux_pt);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAux.eta", &TauPi0NeutralPFOContainerAux_eta, &b_TauPi0NeutralPFOContainerAux_eta);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAux.phi", &TauPi0NeutralPFOContainerAux_phi, &b_TauPi0NeutralPFOContainerAux_phi);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAux.m", &TauPi0NeutralPFOContainerAux_m, &b_TauPi0NeutralPFOContainerAux_m);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAux.ptEM", &TauPi0NeutralPFOContainerAux_ptEM, &b_TauPi0NeutralPFOContainerAux_ptEM);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAux.etaEM", &TauPi0NeutralPFOContainerAux_etaEM, &b_TauPi0NeutralPFOContainerAux_etaEM);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAux.phiEM", &TauPi0NeutralPFOContainerAux_phiEM, &b_TauPi0NeutralPFOContainerAux_phiEM);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAux.mEM", &TauPi0NeutralPFOContainerAux_mEM, &b_TauPi0NeutralPFOContainerAux_mEM);
   fChain->SetBranchAddress("TauShotPFOContainerAux.bdtPi0Score", &TauShotPFOContainerAux_bdtPi0Score, &b_TauShotPFOContainerAux_bdtPi0Score);
   fChain->SetBranchAddress("TauShotPFOContainerAux.centerMag", &TauShotPFOContainerAux_centerMag, &b_TauShotPFOContainerAux_centerMag);
   fChain->SetBranchAddress("TauShotPFOContainerAux.charge", &TauShotPFOContainerAux_charge, &b_TauShotPFOContainerAux_charge);
   fChain->SetBranchAddress("TauShotPFOContainerAux.pt", &TauShotPFOContainerAux_pt, &b_TauShotPFOContainerAux_pt);
   fChain->SetBranchAddress("TauShotPFOContainerAux.eta", &TauShotPFOContainerAux_eta, &b_TauShotPFOContainerAux_eta);
   fChain->SetBranchAddress("TauShotPFOContainerAux.phi", &TauShotPFOContainerAux_phi, &b_TauShotPFOContainerAux_phi);
   fChain->SetBranchAddress("TauShotPFOContainerAux.m", &TauShotPFOContainerAux_m, &b_TauShotPFOContainerAux_m);
   fChain->SetBranchAddress("TauShotPFOContainerAux.ptEM", &TauShotPFOContainerAux_ptEM, &b_TauShotPFOContainerAux_ptEM);
   fChain->SetBranchAddress("TauShotPFOContainerAux.etaEM", &TauShotPFOContainerAux_etaEM, &b_TauShotPFOContainerAux_etaEM);
   fChain->SetBranchAddress("TauShotPFOContainerAux.phiEM", &TauShotPFOContainerAux_phiEM, &b_TauShotPFOContainerAux_phiEM);
   fChain->SetBranchAddress("TauShotPFOContainerAux.mEM", &TauShotPFOContainerAux_mEM, &b_TauShotPFOContainerAux_mEM);
   fChain->SetBranchAddress("chargedJetETMissPFO_eflowRecAux.bdtPi0Score", &chargedJetETMissPFO_eflowRecAux_bdtPi0Score, &b_chargedJetETMissPFO_eflowRecAux_bdtPi0Score);
   fChain->SetBranchAddress("chargedJetETMissPFO_eflowRecAux.centerMag", &chargedJetETMissPFO_eflowRecAux_centerMag, &b_chargedJetETMissPFO_eflowRecAux_centerMag);
   fChain->SetBranchAddress("chargedJetETMissPFO_eflowRecAux.charge", &chargedJetETMissPFO_eflowRecAux_charge, &b_chargedJetETMissPFO_eflowRecAux_charge);
   fChain->SetBranchAddress("chargedJetETMissPFO_eflowRecAux.pt", &chargedJetETMissPFO_eflowRecAux_pt, &b_chargedJetETMissPFO_eflowRecAux_pt);
   fChain->SetBranchAddress("chargedJetETMissPFO_eflowRecAux.eta", &chargedJetETMissPFO_eflowRecAux_eta, &b_chargedJetETMissPFO_eflowRecAux_eta);
   fChain->SetBranchAddress("chargedJetETMissPFO_eflowRecAux.phi", &chargedJetETMissPFO_eflowRecAux_phi, &b_chargedJetETMissPFO_eflowRecAux_phi);
   fChain->SetBranchAddress("chargedJetETMissPFO_eflowRecAux.m", &chargedJetETMissPFO_eflowRecAux_m, &b_chargedJetETMissPFO_eflowRecAux_m);
   fChain->SetBranchAddress("chargedJetETMissPFO_eflowRecAux.ptEM", &chargedJetETMissPFO_eflowRecAux_ptEM, &b_chargedJetETMissPFO_eflowRecAux_ptEM);
   fChain->SetBranchAddress("chargedJetETMissPFO_eflowRecAux.etaEM", &chargedJetETMissPFO_eflowRecAux_etaEM, &b_chargedJetETMissPFO_eflowRecAux_etaEM);
   fChain->SetBranchAddress("chargedJetETMissPFO_eflowRecAux.phiEM", &chargedJetETMissPFO_eflowRecAux_phiEM, &b_chargedJetETMissPFO_eflowRecAux_phiEM);
   fChain->SetBranchAddress("chargedJetETMissPFO_eflowRecAux.mEM", &chargedJetETMissPFO_eflowRecAux_mEM, &b_chargedJetETMissPFO_eflowRecAux_mEM);
   fChain->SetBranchAddress("chargedTauPFO_eflowRecAux.bdtPi0Score", &chargedTauPFO_eflowRecAux_bdtPi0Score, &b_chargedTauPFO_eflowRecAux_bdtPi0Score);
   fChain->SetBranchAddress("chargedTauPFO_eflowRecAux.centerMag", &chargedTauPFO_eflowRecAux_centerMag, &b_chargedTauPFO_eflowRecAux_centerMag);
   fChain->SetBranchAddress("chargedTauPFO_eflowRecAux.charge", &chargedTauPFO_eflowRecAux_charge, &b_chargedTauPFO_eflowRecAux_charge);
   fChain->SetBranchAddress("chargedTauPFO_eflowRecAux.pt", &chargedTauPFO_eflowRecAux_pt, &b_chargedTauPFO_eflowRecAux_pt);
   fChain->SetBranchAddress("chargedTauPFO_eflowRecAux.eta", &chargedTauPFO_eflowRecAux_eta, &b_chargedTauPFO_eflowRecAux_eta);
   fChain->SetBranchAddress("chargedTauPFO_eflowRecAux.phi", &chargedTauPFO_eflowRecAux_phi, &b_chargedTauPFO_eflowRecAux_phi);
   fChain->SetBranchAddress("chargedTauPFO_eflowRecAux.m", &chargedTauPFO_eflowRecAux_m, &b_chargedTauPFO_eflowRecAux_m);
   fChain->SetBranchAddress("chargedTauPFO_eflowRecAux.ptEM", &chargedTauPFO_eflowRecAux_ptEM, &b_chargedTauPFO_eflowRecAux_ptEM);
   fChain->SetBranchAddress("chargedTauPFO_eflowRecAux.etaEM", &chargedTauPFO_eflowRecAux_etaEM, &b_chargedTauPFO_eflowRecAux_etaEM);
   fChain->SetBranchAddress("chargedTauPFO_eflowRecAux.phiEM", &chargedTauPFO_eflowRecAux_phiEM, &b_chargedTauPFO_eflowRecAux_phiEM);
   fChain->SetBranchAddress("chargedTauPFO_eflowRecAux.mEM", &chargedTauPFO_eflowRecAux_mEM, &b_chargedTauPFO_eflowRecAux_mEM);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAux.bdtPi0Score", &neutralJetETMissPFO_eflowRecAux_bdtPi0Score, &b_neutralJetETMissPFO_eflowRecAux_bdtPi0Score);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAux.centerMag", &neutralJetETMissPFO_eflowRecAux_centerMag, &b_neutralJetETMissPFO_eflowRecAux_centerMag);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAux.charge", &neutralJetETMissPFO_eflowRecAux_charge, &b_neutralJetETMissPFO_eflowRecAux_charge);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAux.pt", &neutralJetETMissPFO_eflowRecAux_pt, &b_neutralJetETMissPFO_eflowRecAux_pt);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAux.eta", &neutralJetETMissPFO_eflowRecAux_eta, &b_neutralJetETMissPFO_eflowRecAux_eta);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAux.phi", &neutralJetETMissPFO_eflowRecAux_phi, &b_neutralJetETMissPFO_eflowRecAux_phi);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAux.m", &neutralJetETMissPFO_eflowRecAux_m, &b_neutralJetETMissPFO_eflowRecAux_m);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAux.ptEM", &neutralJetETMissPFO_eflowRecAux_ptEM, &b_neutralJetETMissPFO_eflowRecAux_ptEM);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAux.etaEM", &neutralJetETMissPFO_eflowRecAux_etaEM, &b_neutralJetETMissPFO_eflowRecAux_etaEM);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAux.phiEM", &neutralJetETMissPFO_eflowRecAux_phiEM, &b_neutralJetETMissPFO_eflowRecAux_phiEM);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAux.mEM", &neutralJetETMissPFO_eflowRecAux_mEM, &b_neutralJetETMissPFO_eflowRecAux_mEM);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_NonModified_eflowRecAux.bdtPi0Score", &neutralJetETMiss_LCPFO_NonModified_eflowRecAux_bdtPi0Score, &b_neutralJetETMiss_LCPFO_NonModified_eflowRecAux_bdtPi0Score);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_NonModified_eflowRecAux.centerMag", &neutralJetETMiss_LCPFO_NonModified_eflowRecAux_centerMag, &b_neutralJetETMiss_LCPFO_NonModified_eflowRecAux_centerMag);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_NonModified_eflowRecAux.charge", &neutralJetETMiss_LCPFO_NonModified_eflowRecAux_charge, &b_neutralJetETMiss_LCPFO_NonModified_eflowRecAux_charge);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_NonModified_eflowRecAux.pt", &neutralJetETMiss_LCPFO_NonModified_eflowRecAux_pt, &b_neutralJetETMiss_LCPFO_NonModified_eflowRecAux_pt);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_NonModified_eflowRecAux.eta", &neutralJetETMiss_LCPFO_NonModified_eflowRecAux_eta, &b_neutralJetETMiss_LCPFO_NonModified_eflowRecAux_eta);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_NonModified_eflowRecAux.phi", &neutralJetETMiss_LCPFO_NonModified_eflowRecAux_phi, &b_neutralJetETMiss_LCPFO_NonModified_eflowRecAux_phi);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_NonModified_eflowRecAux.m", &neutralJetETMiss_LCPFO_NonModified_eflowRecAux_m, &b_neutralJetETMiss_LCPFO_NonModified_eflowRecAux_m);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_NonModified_eflowRecAux.ptEM", &neutralJetETMiss_LCPFO_NonModified_eflowRecAux_ptEM, &b_neutralJetETMiss_LCPFO_NonModified_eflowRecAux_ptEM);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_NonModified_eflowRecAux.etaEM", &neutralJetETMiss_LCPFO_NonModified_eflowRecAux_etaEM, &b_neutralJetETMiss_LCPFO_NonModified_eflowRecAux_etaEM);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_NonModified_eflowRecAux.phiEM", &neutralJetETMiss_LCPFO_NonModified_eflowRecAux_phiEM, &b_neutralJetETMiss_LCPFO_NonModified_eflowRecAux_phiEM);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_NonModified_eflowRecAux.mEM", &neutralJetETMiss_LCPFO_NonModified_eflowRecAux_mEM, &b_neutralJetETMiss_LCPFO_NonModified_eflowRecAux_mEM);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAux.bdtPi0Score", &neutralJetETMiss_LCPFO_eflowRecAux_bdtPi0Score, &b_neutralJetETMiss_LCPFO_eflowRecAux_bdtPi0Score);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAux.centerMag", &neutralJetETMiss_LCPFO_eflowRecAux_centerMag, &b_neutralJetETMiss_LCPFO_eflowRecAux_centerMag);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAux.charge", &neutralJetETMiss_LCPFO_eflowRecAux_charge, &b_neutralJetETMiss_LCPFO_eflowRecAux_charge);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAux.pt", &neutralJetETMiss_LCPFO_eflowRecAux_pt, &b_neutralJetETMiss_LCPFO_eflowRecAux_pt);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAux.eta", &neutralJetETMiss_LCPFO_eflowRecAux_eta, &b_neutralJetETMiss_LCPFO_eflowRecAux_eta);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAux.phi", &neutralJetETMiss_LCPFO_eflowRecAux_phi, &b_neutralJetETMiss_LCPFO_eflowRecAux_phi);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAux.m", &neutralJetETMiss_LCPFO_eflowRecAux_m, &b_neutralJetETMiss_LCPFO_eflowRecAux_m);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAux.ptEM", &neutralJetETMiss_LCPFO_eflowRecAux_ptEM, &b_neutralJetETMiss_LCPFO_eflowRecAux_ptEM);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAux.etaEM", &neutralJetETMiss_LCPFO_eflowRecAux_etaEM, &b_neutralJetETMiss_LCPFO_eflowRecAux_etaEM);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAux.phiEM", &neutralJetETMiss_LCPFO_eflowRecAux_phiEM, &b_neutralJetETMiss_LCPFO_eflowRecAux_phiEM);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAux.mEM", &neutralJetETMiss_LCPFO_eflowRecAux_mEM, &b_neutralJetETMiss_LCPFO_eflowRecAux_mEM);
   fChain->SetBranchAddress("neutralTauPFO_eflowRecAux.bdtPi0Score", &neutralTauPFO_eflowRecAux_bdtPi0Score, &b_neutralTauPFO_eflowRecAux_bdtPi0Score);
   fChain->SetBranchAddress("neutralTauPFO_eflowRecAux.centerMag", &neutralTauPFO_eflowRecAux_centerMag, &b_neutralTauPFO_eflowRecAux_centerMag);
   fChain->SetBranchAddress("neutralTauPFO_eflowRecAux.charge", &neutralTauPFO_eflowRecAux_charge, &b_neutralTauPFO_eflowRecAux_charge);
   fChain->SetBranchAddress("neutralTauPFO_eflowRecAux.pt", &neutralTauPFO_eflowRecAux_pt, &b_neutralTauPFO_eflowRecAux_pt);
   fChain->SetBranchAddress("neutralTauPFO_eflowRecAux.eta", &neutralTauPFO_eflowRecAux_eta, &b_neutralTauPFO_eflowRecAux_eta);
   fChain->SetBranchAddress("neutralTauPFO_eflowRecAux.phi", &neutralTauPFO_eflowRecAux_phi, &b_neutralTauPFO_eflowRecAux_phi);
   fChain->SetBranchAddress("neutralTauPFO_eflowRecAux.m", &neutralTauPFO_eflowRecAux_m, &b_neutralTauPFO_eflowRecAux_m);
   fChain->SetBranchAddress("neutralTauPFO_eflowRecAux.ptEM", &neutralTauPFO_eflowRecAux_ptEM, &b_neutralTauPFO_eflowRecAux_ptEM);
   fChain->SetBranchAddress("neutralTauPFO_eflowRecAux.etaEM", &neutralTauPFO_eflowRecAux_etaEM, &b_neutralTauPFO_eflowRecAux_etaEM);
   fChain->SetBranchAddress("neutralTauPFO_eflowRecAux.phiEM", &neutralTauPFO_eflowRecAux_phiEM, &b_neutralTauPFO_eflowRecAux_phiEM);
   fChain->SetBranchAddress("neutralTauPFO_eflowRecAux.mEM", &neutralTauPFO_eflowRecAux_mEM, &b_neutralTauPFO_eflowRecAux_mEM);
   fChain->SetBranchAddress("MET_LocHadTopoAux.mpx", &MET_LocHadTopoAux_mpx, &b_MET_LocHadTopoAux_mpx);
   fChain->SetBranchAddress("MET_LocHadTopoAux.mpy", &MET_LocHadTopoAux_mpy, &b_MET_LocHadTopoAux_mpy);
   fChain->SetBranchAddress("MET_LocHadTopoAux.sumet", &MET_LocHadTopoAux_sumet, &b_MET_LocHadTopoAux_sumet);
   fChain->SetBranchAddress("MET_LocHadTopoAux.name", &MET_LocHadTopoAux_name, &b_MET_LocHadTopoAux_name);
   fChain->SetBranchAddress("MET_LocHadTopoRegionsAux.mpx", &MET_LocHadTopoRegionsAux_mpx, &b_MET_LocHadTopoRegionsAux_mpx);
   fChain->SetBranchAddress("MET_LocHadTopoRegionsAux.mpy", &MET_LocHadTopoRegionsAux_mpy, &b_MET_LocHadTopoRegionsAux_mpy);
   fChain->SetBranchAddress("MET_LocHadTopoRegionsAux.sumet", &MET_LocHadTopoRegionsAux_sumet, &b_MET_LocHadTopoRegionsAux_sumet);
   fChain->SetBranchAddress("MET_LocHadTopoRegionsAux.name", &MET_LocHadTopoRegionsAux_name, &b_MET_LocHadTopoRegionsAux_name);
   fChain->SetBranchAddress("MET_RefFinalAux.mpx", &MET_RefFinalAux_mpx, &b_MET_RefFinalAux_mpx);
   fChain->SetBranchAddress("MET_RefFinalAux.mpy", &MET_RefFinalAux_mpy, &b_MET_RefFinalAux_mpy);
   fChain->SetBranchAddress("MET_RefFinalAux.sumet", &MET_RefFinalAux_sumet, &b_MET_RefFinalAux_sumet);
   fChain->SetBranchAddress("MET_RefFinalAux.name", &MET_RefFinalAux_name, &b_MET_RefFinalAux_name);
   fChain->SetBranchAddress("MET_RefFinalRegionsAux.mpx", &MET_RefFinalRegionsAux_mpx, &b_MET_RefFinalRegionsAux_mpx);
   fChain->SetBranchAddress("MET_RefFinalRegionsAux.mpy", &MET_RefFinalRegionsAux_mpy, &b_MET_RefFinalRegionsAux_mpy);
   fChain->SetBranchAddress("MET_RefFinalRegionsAux.sumet", &MET_RefFinalRegionsAux_sumet, &b_MET_RefFinalRegionsAux_sumet);
   fChain->SetBranchAddress("MET_RefFinalRegionsAux.name", &MET_RefFinalRegionsAux_name, &b_MET_RefFinalRegionsAux_name);
   fChain->SetBranchAddress("MET_TrackAux.mpx", &MET_TrackAux_mpx, &b_MET_TrackAux_mpx);
   fChain->SetBranchAddress("MET_TrackAux.mpy", &MET_TrackAux_mpy, &b_MET_TrackAux_mpy);
   fChain->SetBranchAddress("MET_TrackAux.sumet", &MET_TrackAux_sumet, &b_MET_TrackAux_sumet);
   fChain->SetBranchAddress("MET_TrackAux.name", &MET_TrackAux_name, &b_MET_TrackAux_name);
   fChain->SetBranchAddress("MET_TruthAux.mpx", &MET_TruthAux_mpx, &b_MET_TruthAux_mpx);
   fChain->SetBranchAddress("MET_TruthAux.mpy", &MET_TruthAux_mpy, &b_MET_TruthAux_mpy);
   fChain->SetBranchAddress("MET_TruthAux.sumet", &MET_TruthAux_sumet, &b_MET_TruthAux_sumet);
   fChain->SetBranchAddress("MET_TruthAux.name", &MET_TruthAux_name, &b_MET_TruthAux_name);
   fChain->SetBranchAddress("MET_TruthRegionsAux.mpx", &MET_TruthRegionsAux_mpx, &b_MET_TruthRegionsAux_mpx);
   fChain->SetBranchAddress("MET_TruthRegionsAux.mpy", &MET_TruthRegionsAux_mpy, &b_MET_TruthRegionsAux_mpy);
   fChain->SetBranchAddress("MET_TruthRegionsAux.sumet", &MET_TruthRegionsAux_sumet, &b_MET_TruthRegionsAux_sumet);
   fChain->SetBranchAddress("MET_TruthRegionsAux.name", &MET_TruthRegionsAux_name, &b_MET_TruthRegionsAux_name);
   fChain->SetBranchAddress("MuonEntryLayerFilter", &MuonEntryLayerFilter, &b_MuonEntryLayerFilter);
   fChain->SetBranchAddress("MuonTruthParticle", &MuonTruthParticle, &b_MuonTruthParticle);
   fChain->SetBranchAddress("TruthParticle", &TruthParticle, &b_TruthParticle);
   fChain->SetBranchAddress("TruthVertex", &TruthVertex, &b_TruthVertex);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAux.SV0_significance3D", &BTagging_AntiKt10LCTopoAux_SV0_significance3D, &b_BTagging_AntiKt10LCTopoAux_SV0_significance3D);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAux.SV1_pb", &BTagging_AntiKt10LCTopoAux_SV1_pb, &b_BTagging_AntiKt10LCTopoAux_SV1_pb);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAux.SV1_pu", &BTagging_AntiKt10LCTopoAux_SV1_pu, &b_BTagging_AntiKt10LCTopoAux_SV1_pu);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAux.SV1_pc", &BTagging_AntiKt10LCTopoAux_SV1_pc, &b_BTagging_AntiKt10LCTopoAux_SV1_pc);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAux.IP2D_pb", &BTagging_AntiKt10LCTopoAux_IP2D_pb, &b_BTagging_AntiKt10LCTopoAux_IP2D_pb);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAux.IP2D_pu", &BTagging_AntiKt10LCTopoAux_IP2D_pu, &b_BTagging_AntiKt10LCTopoAux_IP2D_pu);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAux.IP2D_pc", &BTagging_AntiKt10LCTopoAux_IP2D_pc, &b_BTagging_AntiKt10LCTopoAux_IP2D_pc);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAux.IP3D_pb", &BTagging_AntiKt10LCTopoAux_IP3D_pb, &b_BTagging_AntiKt10LCTopoAux_IP3D_pb);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAux.IP3D_pu", &BTagging_AntiKt10LCTopoAux_IP3D_pu, &b_BTagging_AntiKt10LCTopoAux_IP3D_pu);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAux.IP3D_pc", &BTagging_AntiKt10LCTopoAux_IP3D_pc, &b_BTagging_AntiKt10LCTopoAux_IP3D_pc);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAux.JetFitter_pb", &BTagging_AntiKt10LCTopoAux_JetFitter_pb, &b_BTagging_AntiKt10LCTopoAux_JetFitter_pb);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAux.JetFitter_pu", &BTagging_AntiKt10LCTopoAux_JetFitter_pu, &b_BTagging_AntiKt10LCTopoAux_JetFitter_pu);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAux.JetFitter_pc", &BTagging_AntiKt10LCTopoAux_JetFitter_pc, &b_BTagging_AntiKt10LCTopoAux_JetFitter_pc);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAux.JetFitterCombNN_pb", &BTagging_AntiKt10LCTopoAux_JetFitterCombNN_pb, &b_BTagging_AntiKt10LCTopoAux_JetFitterCombNN_pb);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAux.JetFitterCombNN_pu", &BTagging_AntiKt10LCTopoAux_JetFitterCombNN_pu, &b_BTagging_AntiKt10LCTopoAux_JetFitterCombNN_pu);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAux.JetFitterCombNN_pc", &BTagging_AntiKt10LCTopoAux_JetFitterCombNN_pc, &b_BTagging_AntiKt10LCTopoAux_JetFitterCombNN_pc);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAux.MV1_discriminant", &BTagging_AntiKt10LCTopoAux_MV1_discriminant, &b_BTagging_AntiKt10LCTopoAux_MV1_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAux.SV0_significance3D", &BTagging_AntiKt10TruthAux_SV0_significance3D, &b_BTagging_AntiKt10TruthAux_SV0_significance3D);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAux.SV1_pb", &BTagging_AntiKt10TruthAux_SV1_pb, &b_BTagging_AntiKt10TruthAux_SV1_pb);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAux.SV1_pu", &BTagging_AntiKt10TruthAux_SV1_pu, &b_BTagging_AntiKt10TruthAux_SV1_pu);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAux.SV1_pc", &BTagging_AntiKt10TruthAux_SV1_pc, &b_BTagging_AntiKt10TruthAux_SV1_pc);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAux.IP2D_pb", &BTagging_AntiKt10TruthAux_IP2D_pb, &b_BTagging_AntiKt10TruthAux_IP2D_pb);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAux.IP2D_pu", &BTagging_AntiKt10TruthAux_IP2D_pu, &b_BTagging_AntiKt10TruthAux_IP2D_pu);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAux.IP2D_pc", &BTagging_AntiKt10TruthAux_IP2D_pc, &b_BTagging_AntiKt10TruthAux_IP2D_pc);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAux.IP3D_pb", &BTagging_AntiKt10TruthAux_IP3D_pb, &b_BTagging_AntiKt10TruthAux_IP3D_pb);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAux.IP3D_pu", &BTagging_AntiKt10TruthAux_IP3D_pu, &b_BTagging_AntiKt10TruthAux_IP3D_pu);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAux.IP3D_pc", &BTagging_AntiKt10TruthAux_IP3D_pc, &b_BTagging_AntiKt10TruthAux_IP3D_pc);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAux.JetFitter_pb", &BTagging_AntiKt10TruthAux_JetFitter_pb, &b_BTagging_AntiKt10TruthAux_JetFitter_pb);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAux.JetFitter_pu", &BTagging_AntiKt10TruthAux_JetFitter_pu, &b_BTagging_AntiKt10TruthAux_JetFitter_pu);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAux.JetFitter_pc", &BTagging_AntiKt10TruthAux_JetFitter_pc, &b_BTagging_AntiKt10TruthAux_JetFitter_pc);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAux.JetFitterCombNN_pb", &BTagging_AntiKt10TruthAux_JetFitterCombNN_pb, &b_BTagging_AntiKt10TruthAux_JetFitterCombNN_pb);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAux.JetFitterCombNN_pu", &BTagging_AntiKt10TruthAux_JetFitterCombNN_pu, &b_BTagging_AntiKt10TruthAux_JetFitterCombNN_pu);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAux.JetFitterCombNN_pc", &BTagging_AntiKt10TruthAux_JetFitterCombNN_pc, &b_BTagging_AntiKt10TruthAux_JetFitterCombNN_pc);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAux.MV1_discriminant", &BTagging_AntiKt10TruthAux_MV1_discriminant, &b_BTagging_AntiKt10TruthAux_MV1_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAux.SV0_significance3D", &BTagging_AntiKt10TruthWZAux_SV0_significance3D, &b_BTagging_AntiKt10TruthWZAux_SV0_significance3D);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAux.SV1_pb", &BTagging_AntiKt10TruthWZAux_SV1_pb, &b_BTagging_AntiKt10TruthWZAux_SV1_pb);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAux.SV1_pu", &BTagging_AntiKt10TruthWZAux_SV1_pu, &b_BTagging_AntiKt10TruthWZAux_SV1_pu);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAux.SV1_pc", &BTagging_AntiKt10TruthWZAux_SV1_pc, &b_BTagging_AntiKt10TruthWZAux_SV1_pc);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAux.IP2D_pb", &BTagging_AntiKt10TruthWZAux_IP2D_pb, &b_BTagging_AntiKt10TruthWZAux_IP2D_pb);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAux.IP2D_pu", &BTagging_AntiKt10TruthWZAux_IP2D_pu, &b_BTagging_AntiKt10TruthWZAux_IP2D_pu);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAux.IP2D_pc", &BTagging_AntiKt10TruthWZAux_IP2D_pc, &b_BTagging_AntiKt10TruthWZAux_IP2D_pc);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAux.IP3D_pb", &BTagging_AntiKt10TruthWZAux_IP3D_pb, &b_BTagging_AntiKt10TruthWZAux_IP3D_pb);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAux.IP3D_pu", &BTagging_AntiKt10TruthWZAux_IP3D_pu, &b_BTagging_AntiKt10TruthWZAux_IP3D_pu);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAux.IP3D_pc", &BTagging_AntiKt10TruthWZAux_IP3D_pc, &b_BTagging_AntiKt10TruthWZAux_IP3D_pc);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAux.JetFitter_pb", &BTagging_AntiKt10TruthWZAux_JetFitter_pb, &b_BTagging_AntiKt10TruthWZAux_JetFitter_pb);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAux.JetFitter_pu", &BTagging_AntiKt10TruthWZAux_JetFitter_pu, &b_BTagging_AntiKt10TruthWZAux_JetFitter_pu);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAux.JetFitter_pc", &BTagging_AntiKt10TruthWZAux_JetFitter_pc, &b_BTagging_AntiKt10TruthWZAux_JetFitter_pc);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAux.JetFitterCombNN_pb", &BTagging_AntiKt10TruthWZAux_JetFitterCombNN_pb, &b_BTagging_AntiKt10TruthWZAux_JetFitterCombNN_pb);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAux.JetFitterCombNN_pu", &BTagging_AntiKt10TruthWZAux_JetFitterCombNN_pu, &b_BTagging_AntiKt10TruthWZAux_JetFitterCombNN_pu);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAux.JetFitterCombNN_pc", &BTagging_AntiKt10TruthWZAux_JetFitterCombNN_pc, &b_BTagging_AntiKt10TruthWZAux_JetFitterCombNN_pc);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAux.MV1_discriminant", &BTagging_AntiKt10TruthWZAux_MV1_discriminant, &b_BTagging_AntiKt10TruthWZAux_MV1_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAux.SV0_significance3D", &BTagging_AntiKt4EMTopoAux_SV0_significance3D, &b_BTagging_AntiKt4EMTopoAux_SV0_significance3D);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAux.SV1_pb", &BTagging_AntiKt4EMTopoAux_SV1_pb, &b_BTagging_AntiKt4EMTopoAux_SV1_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAux.SV1_pu", &BTagging_AntiKt4EMTopoAux_SV1_pu, &b_BTagging_AntiKt4EMTopoAux_SV1_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAux.SV1_pc", &BTagging_AntiKt4EMTopoAux_SV1_pc, &b_BTagging_AntiKt4EMTopoAux_SV1_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAux.IP2D_pb", &BTagging_AntiKt4EMTopoAux_IP2D_pb, &b_BTagging_AntiKt4EMTopoAux_IP2D_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAux.IP2D_pu", &BTagging_AntiKt4EMTopoAux_IP2D_pu, &b_BTagging_AntiKt4EMTopoAux_IP2D_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAux.IP2D_pc", &BTagging_AntiKt4EMTopoAux_IP2D_pc, &b_BTagging_AntiKt4EMTopoAux_IP2D_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAux.IP3D_pb", &BTagging_AntiKt4EMTopoAux_IP3D_pb, &b_BTagging_AntiKt4EMTopoAux_IP3D_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAux.IP3D_pu", &BTagging_AntiKt4EMTopoAux_IP3D_pu, &b_BTagging_AntiKt4EMTopoAux_IP3D_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAux.IP3D_pc", &BTagging_AntiKt4EMTopoAux_IP3D_pc, &b_BTagging_AntiKt4EMTopoAux_IP3D_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAux.JetFitter_pb", &BTagging_AntiKt4EMTopoAux_JetFitter_pb, &b_BTagging_AntiKt4EMTopoAux_JetFitter_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAux.JetFitter_pu", &BTagging_AntiKt4EMTopoAux_JetFitter_pu, &b_BTagging_AntiKt4EMTopoAux_JetFitter_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAux.JetFitter_pc", &BTagging_AntiKt4EMTopoAux_JetFitter_pc, &b_BTagging_AntiKt4EMTopoAux_JetFitter_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAux.JetFitterCombNN_pb", &BTagging_AntiKt4EMTopoAux_JetFitterCombNN_pb, &b_BTagging_AntiKt4EMTopoAux_JetFitterCombNN_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAux.JetFitterCombNN_pu", &BTagging_AntiKt4EMTopoAux_JetFitterCombNN_pu, &b_BTagging_AntiKt4EMTopoAux_JetFitterCombNN_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAux.JetFitterCombNN_pc", &BTagging_AntiKt4EMTopoAux_JetFitterCombNN_pc, &b_BTagging_AntiKt4EMTopoAux_JetFitterCombNN_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAux.MV1_discriminant", &BTagging_AntiKt4EMTopoAux_MV1_discriminant, &b_BTagging_AntiKt4EMTopoAux_MV1_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAux.SV0_significance3D", &BTagging_AntiKt4LCTopoAux_SV0_significance3D, &b_BTagging_AntiKt4LCTopoAux_SV0_significance3D);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAux.SV1_pb", &BTagging_AntiKt4LCTopoAux_SV1_pb, &b_BTagging_AntiKt4LCTopoAux_SV1_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAux.SV1_pu", &BTagging_AntiKt4LCTopoAux_SV1_pu, &b_BTagging_AntiKt4LCTopoAux_SV1_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAux.SV1_pc", &BTagging_AntiKt4LCTopoAux_SV1_pc, &b_BTagging_AntiKt4LCTopoAux_SV1_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAux.IP2D_pb", &BTagging_AntiKt4LCTopoAux_IP2D_pb, &b_BTagging_AntiKt4LCTopoAux_IP2D_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAux.IP2D_pu", &BTagging_AntiKt4LCTopoAux_IP2D_pu, &b_BTagging_AntiKt4LCTopoAux_IP2D_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAux.IP2D_pc", &BTagging_AntiKt4LCTopoAux_IP2D_pc, &b_BTagging_AntiKt4LCTopoAux_IP2D_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAux.IP3D_pb", &BTagging_AntiKt4LCTopoAux_IP3D_pb, &b_BTagging_AntiKt4LCTopoAux_IP3D_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAux.IP3D_pu", &BTagging_AntiKt4LCTopoAux_IP3D_pu, &b_BTagging_AntiKt4LCTopoAux_IP3D_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAux.IP3D_pc", &BTagging_AntiKt4LCTopoAux_IP3D_pc, &b_BTagging_AntiKt4LCTopoAux_IP3D_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAux.JetFitter_pb", &BTagging_AntiKt4LCTopoAux_JetFitter_pb, &b_BTagging_AntiKt4LCTopoAux_JetFitter_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAux.JetFitter_pu", &BTagging_AntiKt4LCTopoAux_JetFitter_pu, &b_BTagging_AntiKt4LCTopoAux_JetFitter_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAux.JetFitter_pc", &BTagging_AntiKt4LCTopoAux_JetFitter_pc, &b_BTagging_AntiKt4LCTopoAux_JetFitter_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAux.JetFitterCombNN_pb", &BTagging_AntiKt4LCTopoAux_JetFitterCombNN_pb, &b_BTagging_AntiKt4LCTopoAux_JetFitterCombNN_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAux.JetFitterCombNN_pu", &BTagging_AntiKt4LCTopoAux_JetFitterCombNN_pu, &b_BTagging_AntiKt4LCTopoAux_JetFitterCombNN_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAux.JetFitterCombNN_pc", &BTagging_AntiKt4LCTopoAux_JetFitterCombNN_pc, &b_BTagging_AntiKt4LCTopoAux_JetFitterCombNN_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAux.MV1_discriminant", &BTagging_AntiKt4LCTopoAux_MV1_discriminant, &b_BTagging_AntiKt4LCTopoAux_MV1_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAux.SV0_significance3D", &BTagging_AntiKt4TruthAux_SV0_significance3D, &b_BTagging_AntiKt4TruthAux_SV0_significance3D);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAux.SV1_pb", &BTagging_AntiKt4TruthAux_SV1_pb, &b_BTagging_AntiKt4TruthAux_SV1_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAux.SV1_pu", &BTagging_AntiKt4TruthAux_SV1_pu, &b_BTagging_AntiKt4TruthAux_SV1_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAux.SV1_pc", &BTagging_AntiKt4TruthAux_SV1_pc, &b_BTagging_AntiKt4TruthAux_SV1_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAux.IP2D_pb", &BTagging_AntiKt4TruthAux_IP2D_pb, &b_BTagging_AntiKt4TruthAux_IP2D_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAux.IP2D_pu", &BTagging_AntiKt4TruthAux_IP2D_pu, &b_BTagging_AntiKt4TruthAux_IP2D_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAux.IP2D_pc", &BTagging_AntiKt4TruthAux_IP2D_pc, &b_BTagging_AntiKt4TruthAux_IP2D_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAux.IP3D_pb", &BTagging_AntiKt4TruthAux_IP3D_pb, &b_BTagging_AntiKt4TruthAux_IP3D_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAux.IP3D_pu", &BTagging_AntiKt4TruthAux_IP3D_pu, &b_BTagging_AntiKt4TruthAux_IP3D_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAux.IP3D_pc", &BTagging_AntiKt4TruthAux_IP3D_pc, &b_BTagging_AntiKt4TruthAux_IP3D_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAux.JetFitter_pb", &BTagging_AntiKt4TruthAux_JetFitter_pb, &b_BTagging_AntiKt4TruthAux_JetFitter_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAux.JetFitter_pu", &BTagging_AntiKt4TruthAux_JetFitter_pu, &b_BTagging_AntiKt4TruthAux_JetFitter_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAux.JetFitter_pc", &BTagging_AntiKt4TruthAux_JetFitter_pc, &b_BTagging_AntiKt4TruthAux_JetFitter_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAux.JetFitterCombNN_pb", &BTagging_AntiKt4TruthAux_JetFitterCombNN_pb, &b_BTagging_AntiKt4TruthAux_JetFitterCombNN_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAux.JetFitterCombNN_pu", &BTagging_AntiKt4TruthAux_JetFitterCombNN_pu, &b_BTagging_AntiKt4TruthAux_JetFitterCombNN_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAux.JetFitterCombNN_pc", &BTagging_AntiKt4TruthAux_JetFitterCombNN_pc, &b_BTagging_AntiKt4TruthAux_JetFitterCombNN_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAux.MV1_discriminant", &BTagging_AntiKt4TruthAux_MV1_discriminant, &b_BTagging_AntiKt4TruthAux_MV1_discriminant);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAux.SV0_significance3D", &BTagging_AntiKt4TruthWZAux_SV0_significance3D, &b_BTagging_AntiKt4TruthWZAux_SV0_significance3D);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAux.SV1_pb", &BTagging_AntiKt4TruthWZAux_SV1_pb, &b_BTagging_AntiKt4TruthWZAux_SV1_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAux.SV1_pu", &BTagging_AntiKt4TruthWZAux_SV1_pu, &b_BTagging_AntiKt4TruthWZAux_SV1_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAux.SV1_pc", &BTagging_AntiKt4TruthWZAux_SV1_pc, &b_BTagging_AntiKt4TruthWZAux_SV1_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAux.IP2D_pb", &BTagging_AntiKt4TruthWZAux_IP2D_pb, &b_BTagging_AntiKt4TruthWZAux_IP2D_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAux.IP2D_pu", &BTagging_AntiKt4TruthWZAux_IP2D_pu, &b_BTagging_AntiKt4TruthWZAux_IP2D_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAux.IP2D_pc", &BTagging_AntiKt4TruthWZAux_IP2D_pc, &b_BTagging_AntiKt4TruthWZAux_IP2D_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAux.IP3D_pb", &BTagging_AntiKt4TruthWZAux_IP3D_pb, &b_BTagging_AntiKt4TruthWZAux_IP3D_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAux.IP3D_pu", &BTagging_AntiKt4TruthWZAux_IP3D_pu, &b_BTagging_AntiKt4TruthWZAux_IP3D_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAux.IP3D_pc", &BTagging_AntiKt4TruthWZAux_IP3D_pc, &b_BTagging_AntiKt4TruthWZAux_IP3D_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAux.JetFitter_pb", &BTagging_AntiKt4TruthWZAux_JetFitter_pb, &b_BTagging_AntiKt4TruthWZAux_JetFitter_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAux.JetFitter_pu", &BTagging_AntiKt4TruthWZAux_JetFitter_pu, &b_BTagging_AntiKt4TruthWZAux_JetFitter_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAux.JetFitter_pc", &BTagging_AntiKt4TruthWZAux_JetFitter_pc, &b_BTagging_AntiKt4TruthWZAux_JetFitter_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAux.JetFitterCombNN_pb", &BTagging_AntiKt4TruthWZAux_JetFitterCombNN_pb, &b_BTagging_AntiKt4TruthWZAux_JetFitterCombNN_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAux.JetFitterCombNN_pu", &BTagging_AntiKt4TruthWZAux_JetFitterCombNN_pu, &b_BTagging_AntiKt4TruthWZAux_JetFitterCombNN_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAux.JetFitterCombNN_pc", &BTagging_AntiKt4TruthWZAux_JetFitterCombNN_pc, &b_BTagging_AntiKt4TruthWZAux_JetFitterCombNN_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAux.MV1_discriminant", &BTagging_AntiKt4TruthWZAux_MV1_discriminant, &b_BTagging_AntiKt4TruthWZAux_MV1_discriminant);
   fChain->SetBranchAddress("AntiKt10LCTopoJets", &AntiKt10LCTopoJets, &b_AntiKt10LCTopoJets);
   fChain->SetBranchAddress("AntiKt10TruthJets", &AntiKt10TruthJets, &b_AntiKt10TruthJets);
   fChain->SetBranchAddress("AntiKt10TruthWZJets", &AntiKt10TruthWZJets, &b_AntiKt10TruthWZJets);
   fChain->SetBranchAddress("AntiKt3PV0TrackJets", &AntiKt3PV0TrackJets, &b_AntiKt3PV0TrackJets);
   fChain->SetBranchAddress("AntiKt3ZTrackJets", &AntiKt3ZTrackJets, &b_AntiKt3ZTrackJets);
   fChain->SetBranchAddress("AntiKt4EMTopoJets", &AntiKt4EMTopoJets, &b_AntiKt4EMTopoJets);
   fChain->SetBranchAddress("AntiKt4LCTopoJets", &AntiKt4LCTopoJets, &b_AntiKt4LCTopoJets);
   fChain->SetBranchAddress("AntiKt4PV0TrackJets", &AntiKt4PV0TrackJets, &b_AntiKt4PV0TrackJets);
   fChain->SetBranchAddress("AntiKt4TruthJets", &AntiKt4TruthJets, &b_AntiKt4TruthJets);
   fChain->SetBranchAddress("AntiKt4TruthWZJets", &AntiKt4TruthWZJets, &b_AntiKt4TruthWZJets);
   fChain->SetBranchAddress("AntiKt4ZTrackJets", &AntiKt4ZTrackJets, &b_AntiKt4ZTrackJets);
   fChain->SetBranchAddress("CamKt12LCTopoJets", &CamKt12LCTopoJets, &b_CamKt12LCTopoJets);
   fChain->SetBranchAddress("CamKt12TruthJets", &CamKt12TruthJets, &b_CamKt12TruthJets);
   fChain->SetBranchAddress("CamKt12TruthWZJets", &CamKt12TruthWZJets, &b_CamKt12TruthWZJets);
   fChain->SetBranchAddress("PhotonCollectionAux.convMatchDeltaEta1", &PhotonCollectionAux_convMatchDeltaEta1, &b_PhotonCollectionAux_convMatchDeltaEta1);
   fChain->SetBranchAddress("PhotonCollectionAux.convMatchDeltaEta2", &PhotonCollectionAux_convMatchDeltaEta2, &b_PhotonCollectionAux_convMatchDeltaEta2);
   fChain->SetBranchAddress("PhotonCollectionAux.convMatchDeltaPhi1", &PhotonCollectionAux_convMatchDeltaPhi1, &b_PhotonCollectionAux_convMatchDeltaPhi1);
   fChain->SetBranchAddress("PhotonCollectionAux.convMatchDeltaPhi2", &PhotonCollectionAux_convMatchDeltaPhi2, &b_PhotonCollectionAux_convMatchDeltaPhi2);
   fChain->SetBranchAddress("TruthVertexAux.id", &TruthVertexAux_id, &b_TruthVertexAux_id);
   fChain->SetBranchAddress("TruthVertexAux.barcode", &TruthVertexAux_barcode, &b_TruthVertexAux_barcode);
   fChain->SetBranchAddress("TruthVertexAux.x", &TruthVertexAux_x, &b_TruthVertexAux_x);
   fChain->SetBranchAddress("TruthVertexAux.y", &TruthVertexAux_y, &b_TruthVertexAux_y);
   fChain->SetBranchAddress("TruthVertexAux.z", &TruthVertexAux_z, &b_TruthVertexAux_z);
   fChain->SetBranchAddress("TruthVertexAux.t", &TruthVertexAux_t, &b_TruthVertexAux_t);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopo", &BTagging_AntiKt10LCTopo, &b_BTagging_AntiKt10LCTopo);
   fChain->SetBranchAddress("BTagging_AntiKt10Truth", &BTagging_AntiKt10Truth, &b_BTagging_AntiKt10Truth);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZ", &BTagging_AntiKt10TruthWZ, &b_BTagging_AntiKt10TruthWZ);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopo", &BTagging_AntiKt4EMTopo, &b_BTagging_AntiKt4EMTopo);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopo", &BTagging_AntiKt4LCTopo, &b_BTagging_AntiKt4LCTopo);
   fChain->SetBranchAddress("BTagging_AntiKt4Truth", &BTagging_AntiKt4Truth, &b_BTagging_AntiKt4Truth);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZ", &BTagging_AntiKt4TruthWZ, &b_BTagging_AntiKt4TruthWZ);
   fChain->SetBranchAddress("TruthEventAux.eventScale", &TruthEventAux_eventScale, &b_TruthEventAux_eventScale);
   fChain->SetBranchAddress("TruthEventAux.alphaQCD", &TruthEventAux_alphaQCD, &b_TruthEventAux_alphaQCD);
   fChain->SetBranchAddress("TruthEventAux.alphaQED", &TruthEventAux_alphaQED, &b_TruthEventAux_alphaQED);
   fChain->SetBranchAddress("TruthEventAux.crossSection", &TruthEventAux_crossSection, &b_TruthEventAux_crossSection);
   fChain->SetBranchAddress("TruthEventAux.crossSectionError", &TruthEventAux_crossSectionError, &b_TruthEventAux_crossSectionError);
   fChain->SetBranchAddress("CombinedMuonTrackParticles", &CombinedMuonTrackParticles, &b_CombinedMuonTrackParticles);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticles", &ExtrapolatedMuonTrackParticles, &b_ExtrapolatedMuonTrackParticles);
   fChain->SetBranchAddress("GSFTrackParticles", &GSFTrackParticles, &b_GSFTrackParticles);
   fChain->SetBranchAddress("InDetTrackParticles", &InDetTrackParticles, &b_InDetTrackParticles);
   fChain->SetBranchAddress("InDetTrackParticlesForward", &InDetTrackParticlesForward, &b_InDetTrackParticlesForward);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAux.pt", &AntiKt10LCTopoJetsAux_pt, &b_AntiKt10LCTopoJetsAux_pt);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAux.eta", &AntiKt10LCTopoJetsAux_eta, &b_AntiKt10LCTopoJetsAux_eta);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAux.phi", &AntiKt10LCTopoJetsAux_phi, &b_AntiKt10LCTopoJetsAux_phi);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAux.m", &AntiKt10LCTopoJetsAux_m, &b_AntiKt10LCTopoJetsAux_m);
   fChain->SetBranchAddress("AntiKt10TruthJetsAux.pt", &AntiKt10TruthJetsAux_pt, &b_AntiKt10TruthJetsAux_pt);
   fChain->SetBranchAddress("AntiKt10TruthJetsAux.eta", &AntiKt10TruthJetsAux_eta, &b_AntiKt10TruthJetsAux_eta);
   fChain->SetBranchAddress("AntiKt10TruthJetsAux.phi", &AntiKt10TruthJetsAux_phi, &b_AntiKt10TruthJetsAux_phi);
   fChain->SetBranchAddress("AntiKt10TruthJetsAux.m", &AntiKt10TruthJetsAux_m, &b_AntiKt10TruthJetsAux_m);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAux.pt", &AntiKt10TruthWZJetsAux_pt, &b_AntiKt10TruthWZJetsAux_pt);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAux.eta", &AntiKt10TruthWZJetsAux_eta, &b_AntiKt10TruthWZJetsAux_eta);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAux.phi", &AntiKt10TruthWZJetsAux_phi, &b_AntiKt10TruthWZJetsAux_phi);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAux.m", &AntiKt10TruthWZJetsAux_m, &b_AntiKt10TruthWZJetsAux_m);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAux.pt", &AntiKt3PV0TrackJetsAux_pt, &b_AntiKt3PV0TrackJetsAux_pt);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAux.eta", &AntiKt3PV0TrackJetsAux_eta, &b_AntiKt3PV0TrackJetsAux_eta);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAux.phi", &AntiKt3PV0TrackJetsAux_phi, &b_AntiKt3PV0TrackJetsAux_phi);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAux.m", &AntiKt3PV0TrackJetsAux_m, &b_AntiKt3PV0TrackJetsAux_m);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAux.pt", &AntiKt3ZTrackJetsAux_pt, &b_AntiKt3ZTrackJetsAux_pt);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAux.eta", &AntiKt3ZTrackJetsAux_eta, &b_AntiKt3ZTrackJetsAux_eta);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAux.phi", &AntiKt3ZTrackJetsAux_phi, &b_AntiKt3ZTrackJetsAux_phi);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAux.m", &AntiKt3ZTrackJetsAux_m, &b_AntiKt3ZTrackJetsAux_m);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAux.pt", &AntiKt4EMTopoJetsAux_pt, &b_AntiKt4EMTopoJetsAux_pt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAux.eta", &AntiKt4EMTopoJetsAux_eta, &b_AntiKt4EMTopoJetsAux_eta);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAux.phi", &AntiKt4EMTopoJetsAux_phi, &b_AntiKt4EMTopoJetsAux_phi);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAux.m", &AntiKt4EMTopoJetsAux_m, &b_AntiKt4EMTopoJetsAux_m);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAux.pt", &AntiKt4LCTopoJetsAux_pt, &b_AntiKt4LCTopoJetsAux_pt);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAux.eta", &AntiKt4LCTopoJetsAux_eta, &b_AntiKt4LCTopoJetsAux_eta);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAux.phi", &AntiKt4LCTopoJetsAux_phi, &b_AntiKt4LCTopoJetsAux_phi);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAux.m", &AntiKt4LCTopoJetsAux_m, &b_AntiKt4LCTopoJetsAux_m);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAux.pt", &AntiKt4PV0TrackJetsAux_pt, &b_AntiKt4PV0TrackJetsAux_pt);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAux.eta", &AntiKt4PV0TrackJetsAux_eta, &b_AntiKt4PV0TrackJetsAux_eta);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAux.phi", &AntiKt4PV0TrackJetsAux_phi, &b_AntiKt4PV0TrackJetsAux_phi);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAux.m", &AntiKt4PV0TrackJetsAux_m, &b_AntiKt4PV0TrackJetsAux_m);
   fChain->SetBranchAddress("AntiKt4TruthJetsAux.pt", &AntiKt4TruthJetsAux_pt, &b_AntiKt4TruthJetsAux_pt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAux.eta", &AntiKt4TruthJetsAux_eta, &b_AntiKt4TruthJetsAux_eta);
   fChain->SetBranchAddress("AntiKt4TruthJetsAux.phi", &AntiKt4TruthJetsAux_phi, &b_AntiKt4TruthJetsAux_phi);
   fChain->SetBranchAddress("AntiKt4TruthJetsAux.m", &AntiKt4TruthJetsAux_m, &b_AntiKt4TruthJetsAux_m);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAux.pt", &AntiKt4TruthWZJetsAux_pt, &b_AntiKt4TruthWZJetsAux_pt);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAux.eta", &AntiKt4TruthWZJetsAux_eta, &b_AntiKt4TruthWZJetsAux_eta);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAux.phi", &AntiKt4TruthWZJetsAux_phi, &b_AntiKt4TruthWZJetsAux_phi);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAux.m", &AntiKt4TruthWZJetsAux_m, &b_AntiKt4TruthWZJetsAux_m);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAux.pt", &AntiKt4ZTrackJetsAux_pt, &b_AntiKt4ZTrackJetsAux_pt);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAux.eta", &AntiKt4ZTrackJetsAux_eta, &b_AntiKt4ZTrackJetsAux_eta);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAux.phi", &AntiKt4ZTrackJetsAux_phi, &b_AntiKt4ZTrackJetsAux_phi);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAux.m", &AntiKt4ZTrackJetsAux_m, &b_AntiKt4ZTrackJetsAux_m);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAux.pt", &CamKt12LCTopoJetsAux_pt, &b_CamKt12LCTopoJetsAux_pt);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAux.eta", &CamKt12LCTopoJetsAux_eta, &b_CamKt12LCTopoJetsAux_eta);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAux.phi", &CamKt12LCTopoJetsAux_phi, &b_CamKt12LCTopoJetsAux_phi);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAux.m", &CamKt12LCTopoJetsAux_m, &b_CamKt12LCTopoJetsAux_m);
   fChain->SetBranchAddress("CamKt12TruthJetsAux.pt", &CamKt12TruthJetsAux_pt, &b_CamKt12TruthJetsAux_pt);
   fChain->SetBranchAddress("CamKt12TruthJetsAux.eta", &CamKt12TruthJetsAux_eta, &b_CamKt12TruthJetsAux_eta);
   fChain->SetBranchAddress("CamKt12TruthJetsAux.phi", &CamKt12TruthJetsAux_phi, &b_CamKt12TruthJetsAux_phi);
   fChain->SetBranchAddress("CamKt12TruthJetsAux.m", &CamKt12TruthJetsAux_m, &b_CamKt12TruthJetsAux_m);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAux.pt", &CamKt12TruthWZJetsAux_pt, &b_CamKt12TruthWZJetsAux_pt);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAux.eta", &CamKt12TruthWZJetsAux_eta, &b_CamKt12TruthWZJetsAux_eta);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAux.phi", &CamKt12TruthWZJetsAux_phi, &b_CamKt12TruthWZJetsAux_phi);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAux.m", &CamKt12TruthWZJetsAux_m, &b_CamKt12TruthWZJetsAux_m);
   fChain->SetBranchAddress("CaloCalTopoClusterAux.time", &CaloCalTopoClusterAux_time, &b_CaloCalTopoClusterAux_time);
   fChain->SetBranchAddress("CaloCalTopoClusterAux.clusterSize", &CaloCalTopoClusterAux_clusterSize, &b_CaloCalTopoClusterAux_clusterSize);
   fChain->SetBranchAddress("CaloCalTopoClusterAux.eta0", &CaloCalTopoClusterAux_eta0, &b_CaloCalTopoClusterAux_eta0);
   fChain->SetBranchAddress("CaloCalTopoClusterAux.phi0", &CaloCalTopoClusterAux_phi0, &b_CaloCalTopoClusterAux_phi0);
   fChain->SetBranchAddress("CaloCalTopoClusterAux.rawE", &CaloCalTopoClusterAux_rawE, &b_CaloCalTopoClusterAux_rawE);
   fChain->SetBranchAddress("CaloCalTopoClusterAux.rawEta", &CaloCalTopoClusterAux_rawEta, &b_CaloCalTopoClusterAux_rawEta);
   fChain->SetBranchAddress("CaloCalTopoClusterAux.rawPhi", &CaloCalTopoClusterAux_rawPhi, &b_CaloCalTopoClusterAux_rawPhi);
   fChain->SetBranchAddress("CaloCalTopoClusterAux.rawM", &CaloCalTopoClusterAux_rawM, &b_CaloCalTopoClusterAux_rawM);
   fChain->SetBranchAddress("CaloCalTopoClusterAux.altE", &CaloCalTopoClusterAux_altE, &b_CaloCalTopoClusterAux_altE);
   fChain->SetBranchAddress("CaloCalTopoClusterAux.altEta", &CaloCalTopoClusterAux_altEta, &b_CaloCalTopoClusterAux_altEta);
   fChain->SetBranchAddress("CaloCalTopoClusterAux.altPhi", &CaloCalTopoClusterAux_altPhi, &b_CaloCalTopoClusterAux_altPhi);
   fChain->SetBranchAddress("CaloCalTopoClusterAux.altM", &CaloCalTopoClusterAux_altM, &b_CaloCalTopoClusterAux_altM);
   fChain->SetBranchAddress("CaloCalTopoClusterAux.calE", &CaloCalTopoClusterAux_calE, &b_CaloCalTopoClusterAux_calE);
   fChain->SetBranchAddress("CaloCalTopoClusterAux.calEta", &CaloCalTopoClusterAux_calEta, &b_CaloCalTopoClusterAux_calEta);
   fChain->SetBranchAddress("CaloCalTopoClusterAux.calPhi", &CaloCalTopoClusterAux_calPhi, &b_CaloCalTopoClusterAux_calPhi);
   fChain->SetBranchAddress("CaloCalTopoClusterAux.calM", &CaloCalTopoClusterAux_calM, &b_CaloCalTopoClusterAux_calM);
   fChain->SetBranchAddress("LArClusterEMFrwdAux.time", &LArClusterEMFrwdAux_time, &b_LArClusterEMFrwdAux_time);
   fChain->SetBranchAddress("LArClusterEMFrwdAux.clusterSize", &LArClusterEMFrwdAux_clusterSize, &b_LArClusterEMFrwdAux_clusterSize);
   fChain->SetBranchAddress("LArClusterEMFrwdAux.eta0", &LArClusterEMFrwdAux_eta0, &b_LArClusterEMFrwdAux_eta0);
   fChain->SetBranchAddress("LArClusterEMFrwdAux.phi0", &LArClusterEMFrwdAux_phi0, &b_LArClusterEMFrwdAux_phi0);
   fChain->SetBranchAddress("LArClusterEMFrwdAux.rawE", &LArClusterEMFrwdAux_rawE, &b_LArClusterEMFrwdAux_rawE);
   fChain->SetBranchAddress("LArClusterEMFrwdAux.rawEta", &LArClusterEMFrwdAux_rawEta, &b_LArClusterEMFrwdAux_rawEta);
   fChain->SetBranchAddress("LArClusterEMFrwdAux.rawPhi", &LArClusterEMFrwdAux_rawPhi, &b_LArClusterEMFrwdAux_rawPhi);
   fChain->SetBranchAddress("LArClusterEMFrwdAux.rawM", &LArClusterEMFrwdAux_rawM, &b_LArClusterEMFrwdAux_rawM);
   fChain->SetBranchAddress("LArClusterEMFrwdAux.altE", &LArClusterEMFrwdAux_altE, &b_LArClusterEMFrwdAux_altE);
   fChain->SetBranchAddress("LArClusterEMFrwdAux.altEta", &LArClusterEMFrwdAux_altEta, &b_LArClusterEMFrwdAux_altEta);
   fChain->SetBranchAddress("LArClusterEMFrwdAux.altPhi", &LArClusterEMFrwdAux_altPhi, &b_LArClusterEMFrwdAux_altPhi);
   fChain->SetBranchAddress("LArClusterEMFrwdAux.altM", &LArClusterEMFrwdAux_altM, &b_LArClusterEMFrwdAux_altM);
   fChain->SetBranchAddress("LArClusterEMFrwdAux.calE", &LArClusterEMFrwdAux_calE, &b_LArClusterEMFrwdAux_calE);
   fChain->SetBranchAddress("LArClusterEMFrwdAux.calEta", &LArClusterEMFrwdAux_calEta, &b_LArClusterEMFrwdAux_calEta);
   fChain->SetBranchAddress("LArClusterEMFrwdAux.calPhi", &LArClusterEMFrwdAux_calPhi, &b_LArClusterEMFrwdAux_calPhi);
   fChain->SetBranchAddress("LArClusterEMFrwdAux.calM", &LArClusterEMFrwdAux_calM, &b_LArClusterEMFrwdAux_calM);
   fChain->SetBranchAddress("egClusterCollectionAux.time", &egClusterCollectionAux_time, &b_egClusterCollectionAux_time);
   fChain->SetBranchAddress("egClusterCollectionAux.clusterSize", &egClusterCollectionAux_clusterSize, &b_egClusterCollectionAux_clusterSize);
   fChain->SetBranchAddress("egClusterCollectionAux.eta0", &egClusterCollectionAux_eta0, &b_egClusterCollectionAux_eta0);
   fChain->SetBranchAddress("egClusterCollectionAux.phi0", &egClusterCollectionAux_phi0, &b_egClusterCollectionAux_phi0);
   fChain->SetBranchAddress("egClusterCollectionAux.rawE", &egClusterCollectionAux_rawE, &b_egClusterCollectionAux_rawE);
   fChain->SetBranchAddress("egClusterCollectionAux.rawEta", &egClusterCollectionAux_rawEta, &b_egClusterCollectionAux_rawEta);
   fChain->SetBranchAddress("egClusterCollectionAux.rawPhi", &egClusterCollectionAux_rawPhi, &b_egClusterCollectionAux_rawPhi);
   fChain->SetBranchAddress("egClusterCollectionAux.rawM", &egClusterCollectionAux_rawM, &b_egClusterCollectionAux_rawM);
   fChain->SetBranchAddress("egClusterCollectionAux.altE", &egClusterCollectionAux_altE, &b_egClusterCollectionAux_altE);
   fChain->SetBranchAddress("egClusterCollectionAux.altEta", &egClusterCollectionAux_altEta, &b_egClusterCollectionAux_altEta);
   fChain->SetBranchAddress("egClusterCollectionAux.altPhi", &egClusterCollectionAux_altPhi, &b_egClusterCollectionAux_altPhi);
   fChain->SetBranchAddress("egClusterCollectionAux.altM", &egClusterCollectionAux_altM, &b_egClusterCollectionAux_altM);
   fChain->SetBranchAddress("egClusterCollectionAux.calE", &egClusterCollectionAux_calE, &b_egClusterCollectionAux_calE);
   fChain->SetBranchAddress("egClusterCollectionAux.calEta", &egClusterCollectionAux_calEta, &b_egClusterCollectionAux_calEta);
   fChain->SetBranchAddress("egClusterCollectionAux.calPhi", &egClusterCollectionAux_calPhi, &b_egClusterCollectionAux_calPhi);
   fChain->SetBranchAddress("egClusterCollectionAux.calM", &egClusterCollectionAux_calM, &b_egClusterCollectionAux_calM);
   fChain->SetBranchAddress("TauRecContainerAux.pt", &TauRecContainerAux_pt, &b_TauRecContainerAux_pt);
   fChain->SetBranchAddress("TauRecContainerAux.eta", &TauRecContainerAux_eta, &b_TauRecContainerAux_eta);
   fChain->SetBranchAddress("TauRecContainerAux.phi", &TauRecContainerAux_phi, &b_TauRecContainerAux_phi);
   fChain->SetBranchAddress("TauRecContainerAux.m", &TauRecContainerAux_m, &b_TauRecContainerAux_m);
   fChain->SetBranchAddress("TauRecContainerAux.ptJetSeed", &TauRecContainerAux_ptJetSeed, &b_TauRecContainerAux_ptJetSeed);
   fChain->SetBranchAddress("TauRecContainerAux.etaJetSeed", &TauRecContainerAux_etaJetSeed, &b_TauRecContainerAux_etaJetSeed);
   fChain->SetBranchAddress("TauRecContainerAux.phiJetSeed", &TauRecContainerAux_phiJetSeed, &b_TauRecContainerAux_phiJetSeed);
   fChain->SetBranchAddress("TauRecContainerAux.mJetSeed", &TauRecContainerAux_mJetSeed, &b_TauRecContainerAux_mJetSeed);
   fChain->SetBranchAddress("TauRecContainerAux.ptDetectorAxis", &TauRecContainerAux_ptDetectorAxis, &b_TauRecContainerAux_ptDetectorAxis);
   fChain->SetBranchAddress("TauRecContainerAux.etaDetectorAxis", &TauRecContainerAux_etaDetectorAxis, &b_TauRecContainerAux_etaDetectorAxis);
   fChain->SetBranchAddress("TauRecContainerAux.phiDetectorAxis", &TauRecContainerAux_phiDetectorAxis, &b_TauRecContainerAux_phiDetectorAxis);
   fChain->SetBranchAddress("TauRecContainerAux.mDetectorAxis", &TauRecContainerAux_mDetectorAxis, &b_TauRecContainerAux_mDetectorAxis);
   fChain->SetBranchAddress("TauRecContainerAux.ptIntermediateAxis", &TauRecContainerAux_ptIntermediateAxis, &b_TauRecContainerAux_ptIntermediateAxis);
   fChain->SetBranchAddress("TauRecContainerAux.etaIntermediateAxis", &TauRecContainerAux_etaIntermediateAxis, &b_TauRecContainerAux_etaIntermediateAxis);
   fChain->SetBranchAddress("TauRecContainerAux.phiIntermediateAxis", &TauRecContainerAux_phiIntermediateAxis, &b_TauRecContainerAux_phiIntermediateAxis);
   fChain->SetBranchAddress("TauRecContainerAux.mIntermediateAxis", &TauRecContainerAux_mIntermediateAxis, &b_TauRecContainerAux_mIntermediateAxis);
   fChain->SetBranchAddress("TauRecContainerAux.ptTauEnergyScale", &TauRecContainerAux_ptTauEnergyScale, &b_TauRecContainerAux_ptTauEnergyScale);
   fChain->SetBranchAddress("TauRecContainerAux.etaTauEnergyScale", &TauRecContainerAux_etaTauEnergyScale, &b_TauRecContainerAux_etaTauEnergyScale);
   fChain->SetBranchAddress("TauRecContainerAux.phiTauEnergyScale", &TauRecContainerAux_phiTauEnergyScale, &b_TauRecContainerAux_phiTauEnergyScale);
   fChain->SetBranchAddress("TauRecContainerAux.mTauEnergyScale", &TauRecContainerAux_mTauEnergyScale, &b_TauRecContainerAux_mTauEnergyScale);
   fChain->SetBranchAddress("TauRecContainerAux.ptTauEtaCalib", &TauRecContainerAux_ptTauEtaCalib, &b_TauRecContainerAux_ptTauEtaCalib);
   fChain->SetBranchAddress("TauRecContainerAux.etaTauEtaCalib", &TauRecContainerAux_etaTauEtaCalib, &b_TauRecContainerAux_etaTauEtaCalib);
   fChain->SetBranchAddress("TauRecContainerAux.phiTauEtaCalib", &TauRecContainerAux_phiTauEtaCalib, &b_TauRecContainerAux_phiTauEtaCalib);
   fChain->SetBranchAddress("TauRecContainerAux.mTauEtaCalib", &TauRecContainerAux_mTauEtaCalib, &b_TauRecContainerAux_mTauEtaCalib);
   fChain->SetBranchAddress("TauRecContainerAux.ptPanTauEFlowRecProto", &TauRecContainerAux_ptPanTauEFlowRecProto, &b_TauRecContainerAux_ptPanTauEFlowRecProto);
   fChain->SetBranchAddress("TauRecContainerAux.etaPanTauEFlowRecProto", &TauRecContainerAux_etaPanTauEFlowRecProto, &b_TauRecContainerAux_etaPanTauEFlowRecProto);
   fChain->SetBranchAddress("TauRecContainerAux.phiPanTauEFlowRecProto", &TauRecContainerAux_phiPanTauEFlowRecProto, &b_TauRecContainerAux_phiPanTauEFlowRecProto);
   fChain->SetBranchAddress("TauRecContainerAux.mPanTauEFlowRecProto", &TauRecContainerAux_mPanTauEFlowRecProto, &b_TauRecContainerAux_mPanTauEFlowRecProto);
   fChain->SetBranchAddress("TauRecContainerAux.ptPanTauEFlowRec", &TauRecContainerAux_ptPanTauEFlowRec, &b_TauRecContainerAux_ptPanTauEFlowRec);
   fChain->SetBranchAddress("TauRecContainerAux.etaPanTauEFlowRec", &TauRecContainerAux_etaPanTauEFlowRec, &b_TauRecContainerAux_etaPanTauEFlowRec);
   fChain->SetBranchAddress("TauRecContainerAux.phiPanTauEFlowRec", &TauRecContainerAux_phiPanTauEFlowRec, &b_TauRecContainerAux_phiPanTauEFlowRec);
   fChain->SetBranchAddress("TauRecContainerAux.mPanTauEFlowRec", &TauRecContainerAux_mPanTauEFlowRec, &b_TauRecContainerAux_mPanTauEFlowRec);
   fChain->SetBranchAddress("TauRecContainerAux.ptPanTauCellBasedProto", &TauRecContainerAux_ptPanTauCellBasedProto, &b_TauRecContainerAux_ptPanTauCellBasedProto);
   fChain->SetBranchAddress("TauRecContainerAux.etaPanTauCellBasedProto", &TauRecContainerAux_etaPanTauCellBasedProto, &b_TauRecContainerAux_etaPanTauCellBasedProto);
   fChain->SetBranchAddress("TauRecContainerAux.phiPanTauCellBasedProto", &TauRecContainerAux_phiPanTauCellBasedProto, &b_TauRecContainerAux_phiPanTauCellBasedProto);
   fChain->SetBranchAddress("TauRecContainerAux.mPanTauCellBasedProto", &TauRecContainerAux_mPanTauCellBasedProto, &b_TauRecContainerAux_mPanTauCellBasedProto);
   fChain->SetBranchAddress("TauRecContainerAux.ptPanTauCellBased", &TauRecContainerAux_ptPanTauCellBased, &b_TauRecContainerAux_ptPanTauCellBased);
   fChain->SetBranchAddress("TauRecContainerAux.etaPanTauCellBased", &TauRecContainerAux_etaPanTauCellBased, &b_TauRecContainerAux_etaPanTauCellBased);
   fChain->SetBranchAddress("TauRecContainerAux.phiPanTauCellBased", &TauRecContainerAux_phiPanTauCellBased, &b_TauRecContainerAux_phiPanTauCellBased);
   fChain->SetBranchAddress("TauRecContainerAux.mPanTauCellBased", &TauRecContainerAux_mPanTauCellBased, &b_TauRecContainerAux_mPanTauCellBased);
   fChain->SetBranchAddress("TauRecContainerAux.ROIWord", &TauRecContainerAux_ROIWord, &b_TauRecContainerAux_ROIWord);
   fChain->SetBranchAddress("TauRecContainerAux.charge", &TauRecContainerAux_charge, &b_TauRecContainerAux_charge);
   fChain->SetBranchAddress("TauRecContainerAux.vetoFlags", &TauRecContainerAux_vetoFlags, &b_TauRecContainerAux_vetoFlags);
   fChain->SetBranchAddress("TauRecContainerAux.isTauFlags", &TauRecContainerAux_isTauFlags, &b_TauRecContainerAux_isTauFlags);
   fChain->SetBranchAddress("TauRecContainerAux.Likelihood", &TauRecContainerAux_Likelihood, &b_TauRecContainerAux_Likelihood);
   fChain->SetBranchAddress("TauRecContainerAux.SafeLikelihood", &TauRecContainerAux_SafeLikelihood, &b_TauRecContainerAux_SafeLikelihood);
   fChain->SetBranchAddress("TauRecContainerAux.BDTJetScore", &TauRecContainerAux_BDTJetScore, &b_TauRecContainerAux_BDTJetScore);
   fChain->SetBranchAddress("TauRecContainerAux.BDTEleScore", &TauRecContainerAux_BDTEleScore, &b_TauRecContainerAux_BDTEleScore);
   fChain->SetBranchAddress("TauRecContainerAux.PanTauScore", &TauRecContainerAux_PanTauScore, &b_TauRecContainerAux_PanTauScore);
   fChain->SetBranchAddress("TauRecContainerAux.BDTJetScoreSigTrans", &TauRecContainerAux_BDTJetScoreSigTrans, &b_TauRecContainerAux_BDTJetScoreSigTrans);
   fChain->SetBranchAddress("TauRecContainerAux.BDTJetScoreBkgTrans", &TauRecContainerAux_BDTJetScoreBkgTrans, &b_TauRecContainerAux_BDTJetScoreBkgTrans);
   fChain->SetBranchAddress("TauRecContainerAux.trackFilterProngs", &TauRecContainerAux_trackFilterProngs, &b_TauRecContainerAux_trackFilterProngs);
   fChain->SetBranchAddress("TauRecContainerAux.trackFilterQuality", &TauRecContainerAux_trackFilterQuality, &b_TauRecContainerAux_trackFilterQuality);
   fChain->SetBranchAddress("TauRecContainerAux.pi0ConeDR", &TauRecContainerAux_pi0ConeDR, &b_TauRecContainerAux_pi0ConeDR);
   fChain->SetBranchAddress("TauRecContainerAux.ipZ0SinThetaSigLeadTrk", &TauRecContainerAux_ipZ0SinThetaSigLeadTrk, &b_TauRecContainerAux_ipZ0SinThetaSigLeadTrk);
   fChain->SetBranchAddress("TauRecContainerAux.etOverPtLeadTrk", &TauRecContainerAux_etOverPtLeadTrk, &b_TauRecContainerAux_etOverPtLeadTrk);
   fChain->SetBranchAddress("TauRecContainerAux.leadTrkPt", &TauRecContainerAux_leadTrkPt, &b_TauRecContainerAux_leadTrkPt);
   fChain->SetBranchAddress("TauRecContainerAux.ipSigLeadTrk", &TauRecContainerAux_ipSigLeadTrk, &b_TauRecContainerAux_ipSigLeadTrk);
   fChain->SetBranchAddress("TauRecContainerAux.massTrkSys", &TauRecContainerAux_massTrkSys, &b_TauRecContainerAux_massTrkSys);
   fChain->SetBranchAddress("TauRecContainerAux.trkWidth2", &TauRecContainerAux_trkWidth2, &b_TauRecContainerAux_trkWidth2);
   fChain->SetBranchAddress("TauRecContainerAux.trFlightPathSig", &TauRecContainerAux_trFlightPathSig, &b_TauRecContainerAux_trFlightPathSig);
   fChain->SetBranchAddress("TauRecContainerAux.ele_E237E277", &TauRecContainerAux_ele_E237E277, &b_TauRecContainerAux_ele_E237E277);
   fChain->SetBranchAddress("TauRecContainerAux.ele_PresamplerFraction", &TauRecContainerAux_ele_PresamplerFraction, &b_TauRecContainerAux_ele_PresamplerFraction);
   fChain->SetBranchAddress("TauRecContainerAux.ele_ECALFirstFraction", &TauRecContainerAux_ele_ECALFirstFraction, &b_TauRecContainerAux_ele_ECALFirstFraction);
   fChain->SetBranchAddress("TauRecContainerAux.numCells", &TauRecContainerAux_numCells, &b_TauRecContainerAux_numCells);
   fChain->SetBranchAddress("TauRecContainerAux.numTopoClusters", &TauRecContainerAux_numTopoClusters, &b_TauRecContainerAux_numTopoClusters);
   fChain->SetBranchAddress("TauRecContainerAux.numEffTopoClusters", &TauRecContainerAux_numEffTopoClusters, &b_TauRecContainerAux_numEffTopoClusters);
   fChain->SetBranchAddress("TauRecContainerAux.topoInvMass", &TauRecContainerAux_topoInvMass, &b_TauRecContainerAux_topoInvMass);
   fChain->SetBranchAddress("TauRecContainerAux.effTopoInvMass", &TauRecContainerAux_effTopoInvMass, &b_TauRecContainerAux_effTopoInvMass);
   fChain->SetBranchAddress("TauRecContainerAux.topoMeanDeltaR", &TauRecContainerAux_topoMeanDeltaR, &b_TauRecContainerAux_topoMeanDeltaR);
   fChain->SetBranchAddress("TauRecContainerAux.effTopoMeanDeltaR", &TauRecContainerAux_effTopoMeanDeltaR, &b_TauRecContainerAux_effTopoMeanDeltaR);
   fChain->SetBranchAddress("TauRecContainerAux.EMRadius", &TauRecContainerAux_EMRadius, &b_TauRecContainerAux_EMRadius);
   fChain->SetBranchAddress("TauRecContainerAux.hadRadius", &TauRecContainerAux_hadRadius, &b_TauRecContainerAux_hadRadius);
   fChain->SetBranchAddress("TauRecContainerAux.etEMAtEMScale", &TauRecContainerAux_etEMAtEMScale, &b_TauRecContainerAux_etEMAtEMScale);
   fChain->SetBranchAddress("TauRecContainerAux.etHadAtEMScale", &TauRecContainerAux_etHadAtEMScale, &b_TauRecContainerAux_etHadAtEMScale);
   fChain->SetBranchAddress("TauRecContainerAux.isolFrac", &TauRecContainerAux_isolFrac, &b_TauRecContainerAux_isolFrac);
   fChain->SetBranchAddress("TauRecContainerAux.centFrac", &TauRecContainerAux_centFrac, &b_TauRecContainerAux_centFrac);
   fChain->SetBranchAddress("TauRecContainerAux.stripWidth2", &TauRecContainerAux_stripWidth2, &b_TauRecContainerAux_stripWidth2);
   fChain->SetBranchAddress("TauRecContainerAux.nStrip", &TauRecContainerAux_nStrip, &b_TauRecContainerAux_nStrip);
   fChain->SetBranchAddress("TauRecContainerAux.etEMCalib", &TauRecContainerAux_etEMCalib, &b_TauRecContainerAux_etEMCalib);
   fChain->SetBranchAddress("TauRecContainerAux.etHadCalib", &TauRecContainerAux_etHadCalib, &b_TauRecContainerAux_etHadCalib);
   fChain->SetBranchAddress("TauRecContainerAux.seedCalo_eta", &TauRecContainerAux_seedCalo_eta, &b_TauRecContainerAux_seedCalo_eta);
   fChain->SetBranchAddress("TauRecContainerAux.seedCalo_phi", &TauRecContainerAux_seedCalo_phi, &b_TauRecContainerAux_seedCalo_phi);
   fChain->SetBranchAddress("TauRecContainerAux.trkAvgDist", &TauRecContainerAux_trkAvgDist, &b_TauRecContainerAux_trkAvgDist);
   fChain->SetBranchAddress("TauRecContainerAux.trkRmsDist", &TauRecContainerAux_trkRmsDist, &b_TauRecContainerAux_trkRmsDist);
   fChain->SetBranchAddress("TauRecContainerAux.lead2ClusterEOverAllClusterE", &TauRecContainerAux_lead2ClusterEOverAllClusterE, &b_TauRecContainerAux_lead2ClusterEOverAllClusterE);
   fChain->SetBranchAddress("TauRecContainerAux.lead3ClusterEOverAllClusterE", &TauRecContainerAux_lead3ClusterEOverAllClusterE, &b_TauRecContainerAux_lead3ClusterEOverAllClusterE);
   fChain->SetBranchAddress("TauRecContainerAux.caloIso", &TauRecContainerAux_caloIso, &b_TauRecContainerAux_caloIso);
   fChain->SetBranchAddress("TauRecContainerAux.caloIsoCorrected", &TauRecContainerAux_caloIsoCorrected, &b_TauRecContainerAux_caloIsoCorrected);
   fChain->SetBranchAddress("TauRecContainerAux.dRmax", &TauRecContainerAux_dRmax, &b_TauRecContainerAux_dRmax);
   fChain->SetBranchAddress("TauRecContainerAux.secMaxStripEt", &TauRecContainerAux_secMaxStripEt, &b_TauRecContainerAux_secMaxStripEt);
   fChain->SetBranchAddress("TauRecContainerAux.sumEMCellEtOverLeadTrkPt", &TauRecContainerAux_sumEMCellEtOverLeadTrkPt, &b_TauRecContainerAux_sumEMCellEtOverLeadTrkPt);
   fChain->SetBranchAddress("TauRecContainerAux.hadLeakEt", &TauRecContainerAux_hadLeakEt, &b_TauRecContainerAux_hadLeakEt);
   fChain->SetBranchAddress("TauRecContainerAux.EM_TES_scale", &TauRecContainerAux_EM_TES_scale, &b_TauRecContainerAux_EM_TES_scale);
   fChain->SetBranchAddress("TauRecContainerAux.LC_TES_precalib", &TauRecContainerAux_LC_TES_precalib, &b_TauRecContainerAux_LC_TES_precalib);
   fChain->SetBranchAddress("TauRecContainerAux.TESOffset", &TauRecContainerAux_TESOffset, &b_TauRecContainerAux_TESOffset);
   fChain->SetBranchAddress("TauRecContainerAux.TESCalibConstant", &TauRecContainerAux_TESCalibConstant, &b_TauRecContainerAux_TESCalibConstant);
   fChain->SetBranchAddress("TauRecContainerAux.cellBasedEnergyRing1", &TauRecContainerAux_cellBasedEnergyRing1, &b_TauRecContainerAux_cellBasedEnergyRing1);
   fChain->SetBranchAddress("TauRecContainerAux.cellBasedEnergyRing2", &TauRecContainerAux_cellBasedEnergyRing2, &b_TauRecContainerAux_cellBasedEnergyRing2);
   fChain->SetBranchAddress("TauRecContainerAux.cellBasedEnergyRing3", &TauRecContainerAux_cellBasedEnergyRing3, &b_TauRecContainerAux_cellBasedEnergyRing3);
   fChain->SetBranchAddress("TauRecContainerAux.cellBasedEnergyRing4", &TauRecContainerAux_cellBasedEnergyRing4, &b_TauRecContainerAux_cellBasedEnergyRing4);
   fChain->SetBranchAddress("TauRecContainerAux.cellBasedEnergyRing5", &TauRecContainerAux_cellBasedEnergyRing5, &b_TauRecContainerAux_cellBasedEnergyRing5);
   fChain->SetBranchAddress("TauRecContainerAux.cellBasedEnergyRing6", &TauRecContainerAux_cellBasedEnergyRing6, &b_TauRecContainerAux_cellBasedEnergyRing6);
   fChain->SetBranchAddress("TauRecContainerAux.cellBasedEnergyRing7", &TauRecContainerAux_cellBasedEnergyRing7, &b_TauRecContainerAux_cellBasedEnergyRing7);
   fChain->SetBranchAddress("TauRecContainerAux.TRT_NHT_OVER_NLT", &TauRecContainerAux_TRT_NHT_OVER_NLT, &b_TauRecContainerAux_TRT_NHT_OVER_NLT);
   fChain->SetBranchAddress("TauRecContainerAux.TauJetVtxFraction", &TauRecContainerAux_TauJetVtxFraction, &b_TauRecContainerAux_TauJetVtxFraction);
   fChain->SetBranchAddress("TauRecContainerAux.etEflow", &TauRecContainerAux_etEflow, &b_TauRecContainerAux_etEflow);
   fChain->SetBranchAddress("TauRecContainerAux.mEflow", &TauRecContainerAux_mEflow, &b_TauRecContainerAux_mEflow);
   fChain->SetBranchAddress("TauRecContainerAux.ptRatioEflow", &TauRecContainerAux_ptRatioEflow, &b_TauRecContainerAux_ptRatioEflow);
   fChain->SetBranchAddress("TauRecContainerAux.nPi0", &TauRecContainerAux_nPi0, &b_TauRecContainerAux_nPi0);
   fChain->SetBranchAddress("TauRecContainerAux.nCharged", &TauRecContainerAux_nCharged, &b_TauRecContainerAux_nCharged);
   fChain->SetBranchAddress("TauRecContainerAux.etEflowTopo", &TauRecContainerAux_etEflowTopo, &b_TauRecContainerAux_etEflowTopo);
   fChain->SetBranchAddress("TauRecContainerAux.mEflowTopo", &TauRecContainerAux_mEflowTopo, &b_TauRecContainerAux_mEflowTopo);
   fChain->SetBranchAddress("TauRecContainerAux.ptRatioEflowTopo", &TauRecContainerAux_ptRatioEflowTopo, &b_TauRecContainerAux_ptRatioEflowTopo);
   fChain->SetBranchAddress("TauRecContainerAux.nPi0Topo", &TauRecContainerAux_nPi0Topo, &b_TauRecContainerAux_nPi0Topo);
   fChain->SetBranchAddress("TauRecContainerAux.nChargedTopo", &TauRecContainerAux_nChargedTopo, &b_TauRecContainerAux_nChargedTopo);
   fChain->SetBranchAddress("TauRecContainerAux.PSSFraction", &TauRecContainerAux_PSSFraction, &b_TauRecContainerAux_PSSFraction);
   fChain->SetBranchAddress("TauRecContainerAux.ChPiEMEOverCaloEME", &TauRecContainerAux_ChPiEMEOverCaloEME, &b_TauRecContainerAux_ChPiEMEOverCaloEME);
   fChain->SetBranchAddress("TauRecContainerAux.EMPOverTrkSysP", &TauRecContainerAux_EMPOverTrkSysP, &b_TauRecContainerAux_EMPOverTrkSysP);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_CellBasedInput_isPanTauCandidate", &TauRecContainerAux_pantau_CellBasedInput_isPanTauCandidate, &b_TauRecContainerAux_pantau_CellBasedInput_isPanTauCandidate);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_CellBasedInput_DecayModeProto", &TauRecContainerAux_pantau_CellBasedInput_DecayModeProto, &b_TauRecContainerAux_pantau_CellBasedInput_DecayModeProto);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_CellBasedInput_DecayMode", &TauRecContainerAux_pantau_CellBasedInput_DecayMode, &b_TauRecContainerAux_pantau_CellBasedInput_DecayMode);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_CellBasedInput_BDTValue_1p0n_vs_1p1n", &TauRecContainerAux_pantau_CellBasedInput_BDTValue_1p0n_vs_1p1n, &b_TauRecContainerAux_pantau_CellBasedInput_BDTValue_1p0n_vs_1p1n);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_CellBasedInput_BDTValue_1p1n_vs_1pXn", &TauRecContainerAux_pantau_CellBasedInput_BDTValue_1p1n_vs_1pXn, &b_TauRecContainerAux_pantau_CellBasedInput_BDTValue_1p1n_vs_1pXn);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_CellBasedInput_BDTValue_3p0n_vs_3pXn", &TauRecContainerAux_pantau_CellBasedInput_BDTValue_3p0n_vs_3pXn, &b_TauRecContainerAux_pantau_CellBasedInput_BDTValue_3p0n_vs_3pXn);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_CellBasedInput_BDTVar_Basic_NNeutralConsts", &TauRecContainerAux_pantau_CellBasedInput_BDTVar_Basic_NNeutralConsts, &b_TauRecContainerAux_pantau_CellBasedInput_BDTVar_Basic_NNeutralConsts);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_CellBasedInput_BDTVar_Charged_JetMoment_EtDRxTotalEt", &TauRecContainerAux_pantau_CellBasedInput_BDTVar_Charged_JetMoment_EtDRxTotalEt, &b_TauRecContainerAux_pantau_CellBasedInput_BDTVar_Charged_JetMoment_EtDRxTotalEt);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_CellBasedInput_BDTVar_Charged_StdDev_Et_WrtEtAllConsts", &TauRecContainerAux_pantau_CellBasedInput_BDTVar_Charged_StdDev_Et_WrtEtAllConsts, &b_TauRecContainerAux_pantau_CellBasedInput_BDTVar_Charged_StdDev_Et_WrtEtAllConsts);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_HLV_SumM", &TauRecContainerAux_pantau_CellBasedInput_BDTVar_Neutral_HLV_SumM, &b_TauRecContainerAux_pantau_CellBasedInput_BDTVar_Neutral_HLV_SumM);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_1", &TauRecContainerAux_pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_1, &b_TauRecContainerAux_pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_1);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2", &TauRecContainerAux_pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2, &b_TauRecContainerAux_pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Ratio_1stBDTEtOverEtAllConsts", &TauRecContainerAux_pantau_CellBasedInput_BDTVar_Neutral_Ratio_1stBDTEtOverEtAllConsts, &b_TauRecContainerAux_pantau_CellBasedInput_BDTVar_Neutral_Ratio_1stBDTEtOverEtAllConsts);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts", &TauRecContainerAux_pantau_CellBasedInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts, &b_TauRecContainerAux_pantau_CellBasedInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Shots_NPhotonsInSeed", &TauRecContainerAux_pantau_CellBasedInput_BDTVar_Neutral_Shots_NPhotonsInSeed, &b_TauRecContainerAux_pantau_CellBasedInput_BDTVar_Neutral_Shots_NPhotonsInSeed);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_CellBasedInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged", &TauRecContainerAux_pantau_CellBasedInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged, &b_TauRecContainerAux_pantau_CellBasedInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_eflowRecInput_isPanTauCandidate", &TauRecContainerAux_pantau_eflowRecInput_isPanTauCandidate, &b_TauRecContainerAux_pantau_eflowRecInput_isPanTauCandidate);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_eflowRecInput_DecayModeProto", &TauRecContainerAux_pantau_eflowRecInput_DecayModeProto, &b_TauRecContainerAux_pantau_eflowRecInput_DecayModeProto);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_eflowRecInput_DecayMode", &TauRecContainerAux_pantau_eflowRecInput_DecayMode, &b_TauRecContainerAux_pantau_eflowRecInput_DecayMode);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_eflowRecInput_BDTValue_1p0n_vs_1p1n", &TauRecContainerAux_pantau_eflowRecInput_BDTValue_1p0n_vs_1p1n, &b_TauRecContainerAux_pantau_eflowRecInput_BDTValue_1p0n_vs_1p1n);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_eflowRecInput_BDTValue_1p1n_vs_1pXn", &TauRecContainerAux_pantau_eflowRecInput_BDTValue_1p1n_vs_1pXn, &b_TauRecContainerAux_pantau_eflowRecInput_BDTValue_1p1n_vs_1pXn);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_eflowRecInput_BDTValue_3p0n_vs_3pXn", &TauRecContainerAux_pantau_eflowRecInput_BDTValue_3p0n_vs_3pXn, &b_TauRecContainerAux_pantau_eflowRecInput_BDTValue_3p0n_vs_3pXn);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_eflowRecInput_BDTVar_Basic_NPi0NeutConsts", &TauRecContainerAux_pantau_eflowRecInput_BDTVar_Basic_NPi0NeutConsts, &b_TauRecContainerAux_pantau_eflowRecInput_BDTVar_Basic_NPi0NeutConsts);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_eflowRecInput_BDTVar_Basic_NNeutralConsts", &TauRecContainerAux_pantau_eflowRecInput_BDTVar_Basic_NNeutralConsts, &b_TauRecContainerAux_pantau_eflowRecInput_BDTVar_Basic_NNeutralConsts);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_eflowRecInput_BDTVar_Charged_HLV_SumPt", &TauRecContainerAux_pantau_eflowRecInput_BDTVar_Charged_HLV_SumPt, &b_TauRecContainerAux_pantau_eflowRecInput_BDTVar_Charged_HLV_SumPt);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_eflowRecInput_BDTVar_Charged_Ratio_EtOverEtAllConsts", &TauRecContainerAux_pantau_eflowRecInput_BDTVar_Charged_Ratio_EtOverEtAllConsts, &b_TauRecContainerAux_pantau_eflowRecInput_BDTVar_Charged_Ratio_EtOverEtAllConsts);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_HLV_SumM", &TauRecContainerAux_pantau_eflowRecInput_BDTVar_Neutral_HLV_SumM, &b_TauRecContainerAux_pantau_eflowRecInput_BDTVar_Neutral_HLV_SumM);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_EtSort_1", &TauRecContainerAux_pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_EtSort_1, &b_TauRecContainerAux_pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_EtSort_1);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2", &TauRecContainerAux_pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2, &b_TauRecContainerAux_pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts", &TauRecContainerAux_pantau_eflowRecInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts, &b_TauRecContainerAux_pantau_eflowRecInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_Mean_DRToLeading_WrtEtAllConsts", &TauRecContainerAux_pantau_eflowRecInput_BDTVar_Neutral_Mean_DRToLeading_WrtEtAllConsts, &b_TauRecContainerAux_pantau_eflowRecInput_BDTVar_Neutral_Mean_DRToLeading_WrtEtAllConsts);
   fChain->SetBranchAddress("TauRecContainerAux.pantau_eflowRecInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged", &TauRecContainerAux_pantau_eflowRecInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged, &b_TauRecContainerAux_pantau_eflowRecInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged);
   fChain->SetBranchAddress("LArCalibrationHitActive", &LArCalibrationHitActive, &b_LArCalibrationHitActive);
   fChain->SetBranchAddress("LArCalibrationHitDeadMaterial", &LArCalibrationHitDeadMaterial, &b_LArCalibrationHitDeadMaterial);
   fChain->SetBranchAddress("LArCalibrationHitInactive", &LArCalibrationHitInactive, &b_LArCalibrationHitInactive);
   fChain->SetBranchAddress("GSFConversionVerticesAux.chiSquared", &GSFConversionVerticesAux_chiSquared, &b_GSFConversionVerticesAux_chiSquared);
   fChain->SetBranchAddress("GSFConversionVerticesAux.numberDoF", &GSFConversionVerticesAux_numberDoF, &b_GSFConversionVerticesAux_numberDoF);
   fChain->SetBranchAddress("GSFConversionVerticesAux.x", &GSFConversionVerticesAux_x, &b_GSFConversionVerticesAux_x);
   fChain->SetBranchAddress("GSFConversionVerticesAux.y", &GSFConversionVerticesAux_y, &b_GSFConversionVerticesAux_y);
   fChain->SetBranchAddress("GSFConversionVerticesAux.z", &GSFConversionVerticesAux_z, &b_GSFConversionVerticesAux_z);
   fChain->SetBranchAddress("GSFConversionVerticesAux.vertexType", &GSFConversionVerticesAux_vertexType, &b_GSFConversionVerticesAux_vertexType);
   fChain->SetBranchAddress("PrimaryVerticesAux.chiSquared", &PrimaryVerticesAux_chiSquared, &b_PrimaryVerticesAux_chiSquared);
   fChain->SetBranchAddress("PrimaryVerticesAux.numberDoF", &PrimaryVerticesAux_numberDoF, &b_PrimaryVerticesAux_numberDoF);
   fChain->SetBranchAddress("PrimaryVerticesAux.x", &PrimaryVerticesAux_x, &b_PrimaryVerticesAux_x);
   fChain->SetBranchAddress("PrimaryVerticesAux.y", &PrimaryVerticesAux_y, &b_PrimaryVerticesAux_y);
   fChain->SetBranchAddress("PrimaryVerticesAux.z", &PrimaryVerticesAux_z, &b_PrimaryVerticesAux_z);
   fChain->SetBranchAddress("PrimaryVerticesAux.vertexType", &PrimaryVerticesAux_vertexType, &b_PrimaryVerticesAux_vertexType);
   fChain->SetBranchAddress("TauSecondaryVertexContainerAux.chiSquared", &TauSecondaryVertexContainerAux_chiSquared, &b_TauSecondaryVertexContainerAux_chiSquared);
   fChain->SetBranchAddress("TauSecondaryVertexContainerAux.numberDoF", &TauSecondaryVertexContainerAux_numberDoF, &b_TauSecondaryVertexContainerAux_numberDoF);
   fChain->SetBranchAddress("TauSecondaryVertexContainerAux.x", &TauSecondaryVertexContainerAux_x, &b_TauSecondaryVertexContainerAux_x);
   fChain->SetBranchAddress("TauSecondaryVertexContainerAux.y", &TauSecondaryVertexContainerAux_y, &b_TauSecondaryVertexContainerAux_y);
   fChain->SetBranchAddress("TauSecondaryVertexContainerAux.z", &TauSecondaryVertexContainerAux_z, &b_TauSecondaryVertexContainerAux_z);
   fChain->SetBranchAddress("TauSecondaryVertexContainerAux.vertexType", &TauSecondaryVertexContainerAux_vertexType, &b_TauSecondaryVertexContainerAux_vertexType);
   fChain->SetBranchAddress("MuonSegmentsAux.x", &MuonSegmentsAux_x, &b_MuonSegmentsAux_x);
   fChain->SetBranchAddress("MuonSegmentsAux.y", &MuonSegmentsAux_y, &b_MuonSegmentsAux_y);
   fChain->SetBranchAddress("MuonSegmentsAux.z", &MuonSegmentsAux_z, &b_MuonSegmentsAux_z);
   fChain->SetBranchAddress("MuonSegmentsAux.px", &MuonSegmentsAux_px, &b_MuonSegmentsAux_px);
   fChain->SetBranchAddress("MuonSegmentsAux.py", &MuonSegmentsAux_py, &b_MuonSegmentsAux_py);
   fChain->SetBranchAddress("MuonSegmentsAux.pz", &MuonSegmentsAux_pz, &b_MuonSegmentsAux_pz);
   fChain->SetBranchAddress("MuonSegmentsAux.t0", &MuonSegmentsAux_t0, &b_MuonSegmentsAux_t0);
   fChain->SetBranchAddress("MuonSegmentsAux.t0error", &MuonSegmentsAux_t0error, &b_MuonSegmentsAux_t0error);
   fChain->SetBranchAddress("MuonSegmentsAux.chiSquared", &MuonSegmentsAux_chiSquared, &b_MuonSegmentsAux_chiSquared);
   fChain->SetBranchAddress("MuonSegmentsAux.numberDoF", &MuonSegmentsAux_numberDoF, &b_MuonSegmentsAux_numberDoF);
   fChain->SetBranchAddress("MuonSegmentsAux.sector", &MuonSegmentsAux_sector, &b_MuonSegmentsAux_sector);
   fChain->SetBranchAddress("MuonSegmentsAux.chamberIndex", &MuonSegmentsAux_chamberIndex, &b_MuonSegmentsAux_chamberIndex);
   fChain->SetBranchAddress("MuonSegmentsAux.etaIndex", &MuonSegmentsAux_etaIndex, &b_MuonSegmentsAux_etaIndex);
   fChain->SetBranchAddress("MuonSegmentsAux.technology", &MuonSegmentsAux_technology, &b_MuonSegmentsAux_technology);
   fChain->SetBranchAddress("MuonSegmentsAux.nPrecisionHits", &MuonSegmentsAux_nPrecisionHits, &b_MuonSegmentsAux_nPrecisionHits);
   fChain->SetBranchAddress("MuonSegmentsAux.nPhiLayers", &MuonSegmentsAux_nPhiLayers, &b_MuonSegmentsAux_nPhiLayers);
   fChain->SetBranchAddress("MuonSegmentsAux.nTrigEtaLayers", &MuonSegmentsAux_nTrigEtaLayers, &b_MuonSegmentsAux_nTrigEtaLayers);
   fChain->SetBranchAddress("MuonCaloEnergyCollection", &MuonCaloEnergyCollection, &b_MuonCaloEnergyCollection);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.N90Constituents", &AntiKt10LCTopoJetsAuxDyn_N90Constituents, &b_AntiKt10LCTopoJetsAuxDyn_N90Constituents);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.NegativeE", &AntiKt10LCTopoJetsAuxDyn_NegativeE, &b_AntiKt10LCTopoJetsAuxDyn_NegativeE);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.NumTrkPt1000", &AntiKt10LCTopoJetsAuxDyn_NumTrkPt1000, &b_AntiKt10LCTopoJetsAuxDyn_NumTrkPt1000);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.NumTrkPt500", &AntiKt10LCTopoJetsAuxDyn_NumTrkPt500, &b_AntiKt10LCTopoJetsAuxDyn_NumTrkPt500);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.OotFracClusters10", &AntiKt10LCTopoJetsAuxDyn_OotFracClusters10, &b_AntiKt10LCTopoJetsAuxDyn_OotFracClusters10);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.OotFracClusters5", &AntiKt10LCTopoJetsAuxDyn_OotFracClusters5, &b_AntiKt10LCTopoJetsAuxDyn_OotFracClusters5);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.PlanarFlow", &AntiKt10LCTopoJetsAuxDyn_PlanarFlow, &b_AntiKt10LCTopoJetsAuxDyn_PlanarFlow);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.Sphericity", &AntiKt10LCTopoJetsAuxDyn_Sphericity, &b_AntiKt10LCTopoJetsAuxDyn_Sphericity);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.Split12", &AntiKt10LCTopoJetsAuxDyn_Split12, &b_AntiKt10LCTopoJetsAuxDyn_Split12);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.Split23", &AntiKt10LCTopoJetsAuxDyn_Split23, &b_AntiKt10LCTopoJetsAuxDyn_Split23);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.Split34", &AntiKt10LCTopoJetsAuxDyn_Split34, &b_AntiKt10LCTopoJetsAuxDyn_Split34);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.SumPtTrkPt1000", &AntiKt10LCTopoJetsAuxDyn_SumPtTrkPt1000, &b_AntiKt10LCTopoJetsAuxDyn_SumPtTrkPt1000);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.SumPtTrkPt500", &AntiKt10LCTopoJetsAuxDyn_SumPtTrkPt500, &b_AntiKt10LCTopoJetsAuxDyn_SumPtTrkPt500);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.Tau1", &AntiKt10LCTopoJetsAuxDyn_Tau1, &b_AntiKt10LCTopoJetsAuxDyn_Tau1);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.Tau2", &AntiKt10LCTopoJetsAuxDyn_Tau2, &b_AntiKt10LCTopoJetsAuxDyn_Tau2);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.Tau3", &AntiKt10LCTopoJetsAuxDyn_Tau3, &b_AntiKt10LCTopoJetsAuxDyn_Tau3);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.ThrustMaj", &AntiKt10LCTopoJetsAuxDyn_ThrustMaj, &b_AntiKt10LCTopoJetsAuxDyn_ThrustMaj);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.ThrustMin", &AntiKt10LCTopoJetsAuxDyn_ThrustMin, &b_AntiKt10LCTopoJetsAuxDyn_ThrustMin);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.Timing", &AntiKt10LCTopoJetsAuxDyn_Timing, &b_AntiKt10LCTopoJetsAuxDyn_Timing);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.Track", &AntiKt10LCTopoJetsAuxDyn_Track, &b_AntiKt10LCTopoJetsAuxDyn_Track);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.TrackCount", &AntiKt10LCTopoJetsAuxDyn_TrackCount, &b_AntiKt10LCTopoJetsAuxDyn_TrackCount);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.TrackPt", &AntiKt10LCTopoJetsAuxDyn_TrackPt, &b_AntiKt10LCTopoJetsAuxDyn_TrackPt);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.TrackWidthPt1000", &AntiKt10LCTopoJetsAuxDyn_TrackWidthPt1000, &b_AntiKt10LCTopoJetsAuxDyn_TrackWidthPt1000);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.TrackWidthPt500", &AntiKt10LCTopoJetsAuxDyn_TrackWidthPt500, &b_AntiKt10LCTopoJetsAuxDyn_TrackWidthPt500);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.Truth", &AntiKt10LCTopoJetsAuxDyn_Truth, &b_AntiKt10LCTopoJetsAuxDyn_Truth);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.TruthCount", &AntiKt10LCTopoJetsAuxDyn_TruthCount, &b_AntiKt10LCTopoJetsAuxDyn_TruthCount);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.TruthLabelDeltaR_B", &AntiKt10LCTopoJetsAuxDyn_TruthLabelDeltaR_B, &b_AntiKt10LCTopoJetsAuxDyn_TruthLabelDeltaR_B);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.TruthLabelDeltaR_C", &AntiKt10LCTopoJetsAuxDyn_TruthLabelDeltaR_C, &b_AntiKt10LCTopoJetsAuxDyn_TruthLabelDeltaR_C);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.ConstituentScale", &AntiKt10LCTopoJetsAuxDyn_ConstituentScale, &b_AntiKt10LCTopoJetsAuxDyn_ConstituentScale);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.TruthLabelDeltaR_T", &AntiKt10LCTopoJetsAuxDyn_TruthLabelDeltaR_T, &b_AntiKt10LCTopoJetsAuxDyn_TruthLabelDeltaR_T);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.JetEMScaleMomentum_pt", &AntiKt10LCTopoJetsAuxDyn_JetEMScaleMomentum_pt, &b_AntiKt10LCTopoJetsAuxDyn_JetEMScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.TruthLabelID", &AntiKt10LCTopoJetsAuxDyn_TruthLabelID, &b_AntiKt10LCTopoJetsAuxDyn_TruthLabelID);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.JetEMScaleMomentum_eta", &AntiKt10LCTopoJetsAuxDyn_JetEMScaleMomentum_eta, &b_AntiKt10LCTopoJetsAuxDyn_JetEMScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.TruthPt", &AntiKt10LCTopoJetsAuxDyn_TruthPt, &b_AntiKt10LCTopoJetsAuxDyn_TruthPt);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.JetEMScaleMomentum_phi", &AntiKt10LCTopoJetsAuxDyn_JetEMScaleMomentum_phi, &b_AntiKt10LCTopoJetsAuxDyn_JetEMScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.TruthWZ", &AntiKt10LCTopoJetsAuxDyn_TruthWZ, &b_AntiKt10LCTopoJetsAuxDyn_TruthWZ);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.JetEMScaleMomentum_m", &AntiKt10LCTopoJetsAuxDyn_JetEMScaleMomentum_m, &b_AntiKt10LCTopoJetsAuxDyn_JetEMScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.TruthWZCount", &AntiKt10LCTopoJetsAuxDyn_TruthWZCount, &b_AntiKt10LCTopoJetsAuxDyn_TruthWZCount);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt10LCTopoJetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt10LCTopoJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.TruthWZPt", &AntiKt10LCTopoJetsAuxDyn_TruthWZPt, &b_AntiKt10LCTopoJetsAuxDyn_TruthWZPt);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt10LCTopoJetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt10LCTopoJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.Width", &AntiKt10LCTopoJetsAuxDyn_Width, &b_AntiKt10LCTopoJetsAuxDyn_Width);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt10LCTopoJetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt10LCTopoJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.ZCut12", &AntiKt10LCTopoJetsAuxDyn_ZCut12, &b_AntiKt10LCTopoJetsAuxDyn_ZCut12);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt10LCTopoJetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt10LCTopoJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.ZCut23", &AntiKt10LCTopoJetsAuxDyn_ZCut23, &b_AntiKt10LCTopoJetsAuxDyn_ZCut23);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.InputType", &AntiKt10LCTopoJetsAuxDyn_InputType, &b_AntiKt10LCTopoJetsAuxDyn_InputType);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.ZCut34", &AntiKt10LCTopoJetsAuxDyn_ZCut34, &b_AntiKt10LCTopoJetsAuxDyn_ZCut34);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.AlgorithmType", &AntiKt10LCTopoJetsAuxDyn_AlgorithmType, &b_AntiKt10LCTopoJetsAuxDyn_AlgorithmType);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.SizeParameter", &AntiKt10LCTopoJetsAuxDyn_SizeParameter, &b_AntiKt10LCTopoJetsAuxDyn_SizeParameter);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.btaggingLink", &AntiKt10LCTopoJetsAuxDyn_btaggingLink_, &b_AntiKt10LCTopoJetsAuxDyn_btaggingLink_);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.btaggingLink.m_persKey", AntiKt10LCTopoJetsAuxDyn_btaggingLink_m_persKey, &b_AntiKt10LCTopoJetsAuxDyn_btaggingLink_m_persKey);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.btaggingLink.m_persIndex", AntiKt10LCTopoJetsAuxDyn_btaggingLink_m_persIndex, &b_AntiKt10LCTopoJetsAuxDyn_btaggingLink_m_persIndex);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.ActiveArea", &AntiKt10LCTopoJetsAuxDyn_ActiveArea, &b_AntiKt10LCTopoJetsAuxDyn_ActiveArea);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.ActiveArea4vec_eta", &AntiKt10LCTopoJetsAuxDyn_ActiveArea4vec_eta, &b_AntiKt10LCTopoJetsAuxDyn_ActiveArea4vec_eta);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.ActiveArea4vec_m", &AntiKt10LCTopoJetsAuxDyn_ActiveArea4vec_m, &b_AntiKt10LCTopoJetsAuxDyn_ActiveArea4vec_m);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.ActiveArea4vec_phi", &AntiKt10LCTopoJetsAuxDyn_ActiveArea4vec_phi, &b_AntiKt10LCTopoJetsAuxDyn_ActiveArea4vec_phi);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.ActiveArea4vec_pt", &AntiKt10LCTopoJetsAuxDyn_ActiveArea4vec_pt, &b_AntiKt10LCTopoJetsAuxDyn_ActiveArea4vec_pt);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.Angularity", &AntiKt10LCTopoJetsAuxDyn_Angularity, &b_AntiKt10LCTopoJetsAuxDyn_Angularity);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.Aplanarity", &AntiKt10LCTopoJetsAuxDyn_Aplanarity, &b_AntiKt10LCTopoJetsAuxDyn_Aplanarity);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.AverageLArQF", &AntiKt10LCTopoJetsAuxDyn_AverageLArQF, &b_AntiKt10LCTopoJetsAuxDyn_AverageLArQF);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.BchCorrCell", &AntiKt10LCTopoJetsAuxDyn_BchCorrCell, &b_AntiKt10LCTopoJetsAuxDyn_BchCorrCell);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.CentroidR", &AntiKt10LCTopoJetsAuxDyn_CentroidR, &b_AntiKt10LCTopoJetsAuxDyn_CentroidR);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.Dip12", &AntiKt10LCTopoJetsAuxDyn_Dip12, &b_AntiKt10LCTopoJetsAuxDyn_Dip12);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.Dip13", &AntiKt10LCTopoJetsAuxDyn_Dip13, &b_AntiKt10LCTopoJetsAuxDyn_Dip13);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.Dip23", &AntiKt10LCTopoJetsAuxDyn_Dip23, &b_AntiKt10LCTopoJetsAuxDyn_Dip23);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.DipExcl12", &AntiKt10LCTopoJetsAuxDyn_DipExcl12, &b_AntiKt10LCTopoJetsAuxDyn_DipExcl12);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.ECF1", &AntiKt10LCTopoJetsAuxDyn_ECF1, &b_AntiKt10LCTopoJetsAuxDyn_ECF1);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.ECF2", &AntiKt10LCTopoJetsAuxDyn_ECF2, &b_AntiKt10LCTopoJetsAuxDyn_ECF2);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.ECF3", &AntiKt10LCTopoJetsAuxDyn_ECF3, &b_AntiKt10LCTopoJetsAuxDyn_ECF3);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.EMFrac", &AntiKt10LCTopoJetsAuxDyn_EMFrac, &b_AntiKt10LCTopoJetsAuxDyn_EMFrac);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.EMTopo", &AntiKt10LCTopoJetsAuxDyn_EMTopo, &b_AntiKt10LCTopoJetsAuxDyn_EMTopo);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.EMTopoCount", &AntiKt10LCTopoJetsAuxDyn_EMTopoCount, &b_AntiKt10LCTopoJetsAuxDyn_EMTopoCount);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.EMTopoPt", &AntiKt10LCTopoJetsAuxDyn_EMTopoPt, &b_AntiKt10LCTopoJetsAuxDyn_EMTopoPt);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.EnergyPerSampling", &AntiKt10LCTopoJetsAuxDyn_EnergyPerSampling, &b_AntiKt10LCTopoJetsAuxDyn_EnergyPerSampling);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.FoxWolfram0", &AntiKt10LCTopoJetsAuxDyn_FoxWolfram0, &b_AntiKt10LCTopoJetsAuxDyn_FoxWolfram0);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.FoxWolfram1", &AntiKt10LCTopoJetsAuxDyn_FoxWolfram1, &b_AntiKt10LCTopoJetsAuxDyn_FoxWolfram1);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.FoxWolfram2", &AntiKt10LCTopoJetsAuxDyn_FoxWolfram2, &b_AntiKt10LCTopoJetsAuxDyn_FoxWolfram2);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.FoxWolfram3", &AntiKt10LCTopoJetsAuxDyn_FoxWolfram3, &b_AntiKt10LCTopoJetsAuxDyn_FoxWolfram3);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.FoxWolfram4", &AntiKt10LCTopoJetsAuxDyn_FoxWolfram4, &b_AntiKt10LCTopoJetsAuxDyn_FoxWolfram4);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.FracSamplingMax", &AntiKt10LCTopoJetsAuxDyn_FracSamplingMax, &b_AntiKt10LCTopoJetsAuxDyn_FracSamplingMax);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.FracSamplingMaxIndex", &AntiKt10LCTopoJetsAuxDyn_FracSamplingMaxIndex, &b_AntiKt10LCTopoJetsAuxDyn_FracSamplingMaxIndex);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.GhostAntiKt3TrackJet", &AntiKt10LCTopoJetsAuxDyn_GhostAntiKt3TrackJet, &b_AntiKt10LCTopoJetsAuxDyn_GhostAntiKt3TrackJet);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.GhostAntiKt3TrackJetCount", &AntiKt10LCTopoJetsAuxDyn_GhostAntiKt3TrackJetCount, &b_AntiKt10LCTopoJetsAuxDyn_GhostAntiKt3TrackJetCount);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.GhostAntiKt3TrackJetPt", &AntiKt10LCTopoJetsAuxDyn_GhostAntiKt3TrackJetPt, &b_AntiKt10LCTopoJetsAuxDyn_GhostAntiKt3TrackJetPt);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.GhostAntiKt4TrackJet", &AntiKt10LCTopoJetsAuxDyn_GhostAntiKt4TrackJet, &b_AntiKt10LCTopoJetsAuxDyn_GhostAntiKt4TrackJet);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.GhostAntiKt4TrackJetCount", &AntiKt10LCTopoJetsAuxDyn_GhostAntiKt4TrackJetCount, &b_AntiKt10LCTopoJetsAuxDyn_GhostAntiKt4TrackJetCount);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.GhostAntiKt4TrackJetPt", &AntiKt10LCTopoJetsAuxDyn_GhostAntiKt4TrackJetPt, &b_AntiKt10LCTopoJetsAuxDyn_GhostAntiKt4TrackJetPt);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.GhostMuonSegment", &AntiKt10LCTopoJetsAuxDyn_GhostMuonSegment, &b_AntiKt10LCTopoJetsAuxDyn_GhostMuonSegment);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.GhostMuonSegmentCount", &AntiKt10LCTopoJetsAuxDyn_GhostMuonSegmentCount, &b_AntiKt10LCTopoJetsAuxDyn_GhostMuonSegmentCount);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.GhostTrack", &AntiKt10LCTopoJetsAuxDyn_GhostTrack, &b_AntiKt10LCTopoJetsAuxDyn_GhostTrack);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.GhostTrackCount", &AntiKt10LCTopoJetsAuxDyn_GhostTrackCount, &b_AntiKt10LCTopoJetsAuxDyn_GhostTrackCount);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.GhostTrackPt", &AntiKt10LCTopoJetsAuxDyn_GhostTrackPt, &b_AntiKt10LCTopoJetsAuxDyn_GhostTrackPt);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.GhostTruth", &AntiKt10LCTopoJetsAuxDyn_GhostTruth, &b_AntiKt10LCTopoJetsAuxDyn_GhostTruth);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.GhostTruthAssociationFraction", &AntiKt10LCTopoJetsAuxDyn_GhostTruthAssociationFraction, &b_AntiKt10LCTopoJetsAuxDyn_GhostTruthAssociationFraction);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.GhostTruthAssociationLink", &AntiKt10LCTopoJetsAuxDyn_GhostTruthAssociationLink_, &b_AntiKt10LCTopoJetsAuxDyn_GhostTruthAssociationLink_);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.GhostTruthAssociationLink.m_persKey", AntiKt10LCTopoJetsAuxDyn_GhostTruthAssociationLink_m_persKey, &b_AntiKt10LCTopoJetsAuxDyn_GhostTruthAssociationLink_m_persKey);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.GhostTruthAssociationLink.m_persIndex", AntiKt10LCTopoJetsAuxDyn_GhostTruthAssociationLink_m_persIndex, &b_AntiKt10LCTopoJetsAuxDyn_GhostTruthAssociationLink_m_persIndex);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.GhostTruthCount", &AntiKt10LCTopoJetsAuxDyn_GhostTruthCount, &b_AntiKt10LCTopoJetsAuxDyn_GhostTruthCount);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.GhostTruthPt", &AntiKt10LCTopoJetsAuxDyn_GhostTruthPt, &b_AntiKt10LCTopoJetsAuxDyn_GhostTruthPt);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.HECFrac", &AntiKt10LCTopoJetsAuxDyn_HECFrac, &b_AntiKt10LCTopoJetsAuxDyn_HECFrac);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.HECQuality", &AntiKt10LCTopoJetsAuxDyn_HECQuality, &b_AntiKt10LCTopoJetsAuxDyn_HECQuality);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.HighestJVFVtx", &AntiKt10LCTopoJetsAuxDyn_HighestJVFVtx_, &b_AntiKt10LCTopoJetsAuxDyn_HighestJVFVtx_);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.HighestJVFVtx.m_persKey", AntiKt10LCTopoJetsAuxDyn_HighestJVFVtx_m_persKey, &b_AntiKt10LCTopoJetsAuxDyn_HighestJVFVtx_m_persKey);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.HighestJVFVtx.m_persIndex", AntiKt10LCTopoJetsAuxDyn_HighestJVFVtx_m_persIndex, &b_AntiKt10LCTopoJetsAuxDyn_HighestJVFVtx_m_persIndex);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.JVF", &AntiKt10LCTopoJetsAuxDyn_JVF, &b_AntiKt10LCTopoJetsAuxDyn_JVF);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.JetGhostArea", &AntiKt10LCTopoJetsAuxDyn_JetGhostArea, &b_AntiKt10LCTopoJetsAuxDyn_JetGhostArea);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.KtDR", &AntiKt10LCTopoJetsAuxDyn_KtDR, &b_AntiKt10LCTopoJetsAuxDyn_KtDR);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.LArQuality", &AntiKt10LCTopoJetsAuxDyn_LArQuality, &b_AntiKt10LCTopoJetsAuxDyn_LArQuality);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.LCTopo", &AntiKt10LCTopoJetsAuxDyn_LCTopo, &b_AntiKt10LCTopoJetsAuxDyn_LCTopo);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.LCTopoCount", &AntiKt10LCTopoJetsAuxDyn_LCTopoCount, &b_AntiKt10LCTopoJetsAuxDyn_LCTopoCount);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.LCTopoPt", &AntiKt10LCTopoJetsAuxDyn_LCTopoPt, &b_AntiKt10LCTopoJetsAuxDyn_LCTopoPt);
   fChain->SetBranchAddress("AntiKt10LCTopoJetsAuxDyn.Mu12", &AntiKt10LCTopoJetsAuxDyn_Mu12, &b_AntiKt10LCTopoJetsAuxDyn_Mu12);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.JetGhostArea", &AntiKt10TruthJetsAuxDyn_JetGhostArea, &b_AntiKt10TruthJetsAuxDyn_JetGhostArea);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.KtDR", &AntiKt10TruthJetsAuxDyn_KtDR, &b_AntiKt10TruthJetsAuxDyn_KtDR);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.Mu12", &AntiKt10TruthJetsAuxDyn_Mu12, &b_AntiKt10TruthJetsAuxDyn_Mu12);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.PlanarFlow", &AntiKt10TruthJetsAuxDyn_PlanarFlow, &b_AntiKt10TruthJetsAuxDyn_PlanarFlow);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.Sphericity", &AntiKt10TruthJetsAuxDyn_Sphericity, &b_AntiKt10TruthJetsAuxDyn_Sphericity);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.Split12", &AntiKt10TruthJetsAuxDyn_Split12, &b_AntiKt10TruthJetsAuxDyn_Split12);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.Split23", &AntiKt10TruthJetsAuxDyn_Split23, &b_AntiKt10TruthJetsAuxDyn_Split23);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.Split34", &AntiKt10TruthJetsAuxDyn_Split34, &b_AntiKt10TruthJetsAuxDyn_Split34);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.ConstituentScale", &AntiKt10TruthJetsAuxDyn_ConstituentScale, &b_AntiKt10TruthJetsAuxDyn_ConstituentScale);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.Tau1", &AntiKt10TruthJetsAuxDyn_Tau1, &b_AntiKt10TruthJetsAuxDyn_Tau1);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.Tau2", &AntiKt10TruthJetsAuxDyn_Tau2, &b_AntiKt10TruthJetsAuxDyn_Tau2);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.Tau3", &AntiKt10TruthJetsAuxDyn_Tau3, &b_AntiKt10TruthJetsAuxDyn_Tau3);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.ThrustMaj", &AntiKt10TruthJetsAuxDyn_ThrustMaj, &b_AntiKt10TruthJetsAuxDyn_ThrustMaj);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt10TruthJetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt10TruthJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.ThrustMin", &AntiKt10TruthJetsAuxDyn_ThrustMin, &b_AntiKt10TruthJetsAuxDyn_ThrustMin);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt10TruthJetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt10TruthJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt10TruthJetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt10TruthJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt10TruthJetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt10TruthJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.InputType", &AntiKt10TruthJetsAuxDyn_InputType, &b_AntiKt10TruthJetsAuxDyn_InputType);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.AlgorithmType", &AntiKt10TruthJetsAuxDyn_AlgorithmType, &b_AntiKt10TruthJetsAuxDyn_AlgorithmType);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.SizeParameter", &AntiKt10TruthJetsAuxDyn_SizeParameter, &b_AntiKt10TruthJetsAuxDyn_SizeParameter);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.Truth", &AntiKt10TruthJetsAuxDyn_Truth, &b_AntiKt10TruthJetsAuxDyn_Truth);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.btaggingLink", &AntiKt10TruthJetsAuxDyn_btaggingLink_, &b_AntiKt10TruthJetsAuxDyn_btaggingLink_);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.btaggingLink.m_persKey", AntiKt10TruthJetsAuxDyn_btaggingLink_m_persKey, &b_AntiKt10TruthJetsAuxDyn_btaggingLink_m_persKey);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.btaggingLink.m_persIndex", AntiKt10TruthJetsAuxDyn_btaggingLink_m_persIndex, &b_AntiKt10TruthJetsAuxDyn_btaggingLink_m_persIndex);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.TruthCount", &AntiKt10TruthJetsAuxDyn_TruthCount, &b_AntiKt10TruthJetsAuxDyn_TruthCount);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.TruthLabelDeltaR_B", &AntiKt10TruthJetsAuxDyn_TruthLabelDeltaR_B, &b_AntiKt10TruthJetsAuxDyn_TruthLabelDeltaR_B);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.TruthLabelDeltaR_C", &AntiKt10TruthJetsAuxDyn_TruthLabelDeltaR_C, &b_AntiKt10TruthJetsAuxDyn_TruthLabelDeltaR_C);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.TruthLabelDeltaR_T", &AntiKt10TruthJetsAuxDyn_TruthLabelDeltaR_T, &b_AntiKt10TruthJetsAuxDyn_TruthLabelDeltaR_T);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.TruthLabelID", &AntiKt10TruthJetsAuxDyn_TruthLabelID, &b_AntiKt10TruthJetsAuxDyn_TruthLabelID);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.TruthPt", &AntiKt10TruthJetsAuxDyn_TruthPt, &b_AntiKt10TruthJetsAuxDyn_TruthPt);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.TruthWZ", &AntiKt10TruthJetsAuxDyn_TruthWZ, &b_AntiKt10TruthJetsAuxDyn_TruthWZ);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.TruthWZCount", &AntiKt10TruthJetsAuxDyn_TruthWZCount, &b_AntiKt10TruthJetsAuxDyn_TruthWZCount);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.TruthWZPt", &AntiKt10TruthJetsAuxDyn_TruthWZPt, &b_AntiKt10TruthJetsAuxDyn_TruthWZPt);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.Width", &AntiKt10TruthJetsAuxDyn_Width, &b_AntiKt10TruthJetsAuxDyn_Width);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.ZCut12", &AntiKt10TruthJetsAuxDyn_ZCut12, &b_AntiKt10TruthJetsAuxDyn_ZCut12);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.ZCut23", &AntiKt10TruthJetsAuxDyn_ZCut23, &b_AntiKt10TruthJetsAuxDyn_ZCut23);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.ZCut34", &AntiKt10TruthJetsAuxDyn_ZCut34, &b_AntiKt10TruthJetsAuxDyn_ZCut34);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.Angularity", &AntiKt10TruthJetsAuxDyn_Angularity, &b_AntiKt10TruthJetsAuxDyn_Angularity);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.Aplanarity", &AntiKt10TruthJetsAuxDyn_Aplanarity, &b_AntiKt10TruthJetsAuxDyn_Aplanarity);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.Dip12", &AntiKt10TruthJetsAuxDyn_Dip12, &b_AntiKt10TruthJetsAuxDyn_Dip12);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.Dip13", &AntiKt10TruthJetsAuxDyn_Dip13, &b_AntiKt10TruthJetsAuxDyn_Dip13);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.Dip23", &AntiKt10TruthJetsAuxDyn_Dip23, &b_AntiKt10TruthJetsAuxDyn_Dip23);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.DipExcl12", &AntiKt10TruthJetsAuxDyn_DipExcl12, &b_AntiKt10TruthJetsAuxDyn_DipExcl12);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.ECF1", &AntiKt10TruthJetsAuxDyn_ECF1, &b_AntiKt10TruthJetsAuxDyn_ECF1);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.ECF2", &AntiKt10TruthJetsAuxDyn_ECF2, &b_AntiKt10TruthJetsAuxDyn_ECF2);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.ECF3", &AntiKt10TruthJetsAuxDyn_ECF3, &b_AntiKt10TruthJetsAuxDyn_ECF3);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.FoxWolfram0", &AntiKt10TruthJetsAuxDyn_FoxWolfram0, &b_AntiKt10TruthJetsAuxDyn_FoxWolfram0);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.FoxWolfram1", &AntiKt10TruthJetsAuxDyn_FoxWolfram1, &b_AntiKt10TruthJetsAuxDyn_FoxWolfram1);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.FoxWolfram2", &AntiKt10TruthJetsAuxDyn_FoxWolfram2, &b_AntiKt10TruthJetsAuxDyn_FoxWolfram2);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.FoxWolfram3", &AntiKt10TruthJetsAuxDyn_FoxWolfram3, &b_AntiKt10TruthJetsAuxDyn_FoxWolfram3);
   fChain->SetBranchAddress("AntiKt10TruthJetsAuxDyn.FoxWolfram4", &AntiKt10TruthJetsAuxDyn_FoxWolfram4, &b_AntiKt10TruthJetsAuxDyn_FoxWolfram4);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.JetGhostArea", &AntiKt10TruthWZJetsAuxDyn_JetGhostArea, &b_AntiKt10TruthWZJetsAuxDyn_JetGhostArea);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.KtDR", &AntiKt10TruthWZJetsAuxDyn_KtDR, &b_AntiKt10TruthWZJetsAuxDyn_KtDR);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.Mu12", &AntiKt10TruthWZJetsAuxDyn_Mu12, &b_AntiKt10TruthWZJetsAuxDyn_Mu12);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.PlanarFlow", &AntiKt10TruthWZJetsAuxDyn_PlanarFlow, &b_AntiKt10TruthWZJetsAuxDyn_PlanarFlow);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.Sphericity", &AntiKt10TruthWZJetsAuxDyn_Sphericity, &b_AntiKt10TruthWZJetsAuxDyn_Sphericity);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.Split12", &AntiKt10TruthWZJetsAuxDyn_Split12, &b_AntiKt10TruthWZJetsAuxDyn_Split12);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.Split23", &AntiKt10TruthWZJetsAuxDyn_Split23, &b_AntiKt10TruthWZJetsAuxDyn_Split23);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.Split34", &AntiKt10TruthWZJetsAuxDyn_Split34, &b_AntiKt10TruthWZJetsAuxDyn_Split34);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.ConstituentScale", &AntiKt10TruthWZJetsAuxDyn_ConstituentScale, &b_AntiKt10TruthWZJetsAuxDyn_ConstituentScale);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.Tau1", &AntiKt10TruthWZJetsAuxDyn_Tau1, &b_AntiKt10TruthWZJetsAuxDyn_Tau1);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.Tau2", &AntiKt10TruthWZJetsAuxDyn_Tau2, &b_AntiKt10TruthWZJetsAuxDyn_Tau2);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.Tau3", &AntiKt10TruthWZJetsAuxDyn_Tau3, &b_AntiKt10TruthWZJetsAuxDyn_Tau3);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.ThrustMaj", &AntiKt10TruthWZJetsAuxDyn_ThrustMaj, &b_AntiKt10TruthWZJetsAuxDyn_ThrustMaj);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt10TruthWZJetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt10TruthWZJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.ThrustMin", &AntiKt10TruthWZJetsAuxDyn_ThrustMin, &b_AntiKt10TruthWZJetsAuxDyn_ThrustMin);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt10TruthWZJetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt10TruthWZJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt10TruthWZJetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt10TruthWZJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt10TruthWZJetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt10TruthWZJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.InputType", &AntiKt10TruthWZJetsAuxDyn_InputType, &b_AntiKt10TruthWZJetsAuxDyn_InputType);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.AlgorithmType", &AntiKt10TruthWZJetsAuxDyn_AlgorithmType, &b_AntiKt10TruthWZJetsAuxDyn_AlgorithmType);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.SizeParameter", &AntiKt10TruthWZJetsAuxDyn_SizeParameter, &b_AntiKt10TruthWZJetsAuxDyn_SizeParameter);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.Truth", &AntiKt10TruthWZJetsAuxDyn_Truth, &b_AntiKt10TruthWZJetsAuxDyn_Truth);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.btaggingLink", &AntiKt10TruthWZJetsAuxDyn_btaggingLink_, &b_AntiKt10TruthWZJetsAuxDyn_btaggingLink_);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.btaggingLink.m_persKey", AntiKt10TruthWZJetsAuxDyn_btaggingLink_m_persKey, &b_AntiKt10TruthWZJetsAuxDyn_btaggingLink_m_persKey);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.btaggingLink.m_persIndex", AntiKt10TruthWZJetsAuxDyn_btaggingLink_m_persIndex, &b_AntiKt10TruthWZJetsAuxDyn_btaggingLink_m_persIndex);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.TruthCount", &AntiKt10TruthWZJetsAuxDyn_TruthCount, &b_AntiKt10TruthWZJetsAuxDyn_TruthCount);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.TruthLabelDeltaR_B", &AntiKt10TruthWZJetsAuxDyn_TruthLabelDeltaR_B, &b_AntiKt10TruthWZJetsAuxDyn_TruthLabelDeltaR_B);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.TruthLabelDeltaR_C", &AntiKt10TruthWZJetsAuxDyn_TruthLabelDeltaR_C, &b_AntiKt10TruthWZJetsAuxDyn_TruthLabelDeltaR_C);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.TruthLabelDeltaR_T", &AntiKt10TruthWZJetsAuxDyn_TruthLabelDeltaR_T, &b_AntiKt10TruthWZJetsAuxDyn_TruthLabelDeltaR_T);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.TruthLabelID", &AntiKt10TruthWZJetsAuxDyn_TruthLabelID, &b_AntiKt10TruthWZJetsAuxDyn_TruthLabelID);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.TruthPt", &AntiKt10TruthWZJetsAuxDyn_TruthPt, &b_AntiKt10TruthWZJetsAuxDyn_TruthPt);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.TruthWZ", &AntiKt10TruthWZJetsAuxDyn_TruthWZ, &b_AntiKt10TruthWZJetsAuxDyn_TruthWZ);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.TruthWZCount", &AntiKt10TruthWZJetsAuxDyn_TruthWZCount, &b_AntiKt10TruthWZJetsAuxDyn_TruthWZCount);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.TruthWZPt", &AntiKt10TruthWZJetsAuxDyn_TruthWZPt, &b_AntiKt10TruthWZJetsAuxDyn_TruthWZPt);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.Width", &AntiKt10TruthWZJetsAuxDyn_Width, &b_AntiKt10TruthWZJetsAuxDyn_Width);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.ZCut12", &AntiKt10TruthWZJetsAuxDyn_ZCut12, &b_AntiKt10TruthWZJetsAuxDyn_ZCut12);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.ZCut23", &AntiKt10TruthWZJetsAuxDyn_ZCut23, &b_AntiKt10TruthWZJetsAuxDyn_ZCut23);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.ZCut34", &AntiKt10TruthWZJetsAuxDyn_ZCut34, &b_AntiKt10TruthWZJetsAuxDyn_ZCut34);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.Angularity", &AntiKt10TruthWZJetsAuxDyn_Angularity, &b_AntiKt10TruthWZJetsAuxDyn_Angularity);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.Aplanarity", &AntiKt10TruthWZJetsAuxDyn_Aplanarity, &b_AntiKt10TruthWZJetsAuxDyn_Aplanarity);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.Dip12", &AntiKt10TruthWZJetsAuxDyn_Dip12, &b_AntiKt10TruthWZJetsAuxDyn_Dip12);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.Dip13", &AntiKt10TruthWZJetsAuxDyn_Dip13, &b_AntiKt10TruthWZJetsAuxDyn_Dip13);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.Dip23", &AntiKt10TruthWZJetsAuxDyn_Dip23, &b_AntiKt10TruthWZJetsAuxDyn_Dip23);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.DipExcl12", &AntiKt10TruthWZJetsAuxDyn_DipExcl12, &b_AntiKt10TruthWZJetsAuxDyn_DipExcl12);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.ECF1", &AntiKt10TruthWZJetsAuxDyn_ECF1, &b_AntiKt10TruthWZJetsAuxDyn_ECF1);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.ECF2", &AntiKt10TruthWZJetsAuxDyn_ECF2, &b_AntiKt10TruthWZJetsAuxDyn_ECF2);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.ECF3", &AntiKt10TruthWZJetsAuxDyn_ECF3, &b_AntiKt10TruthWZJetsAuxDyn_ECF3);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.FoxWolfram0", &AntiKt10TruthWZJetsAuxDyn_FoxWolfram0, &b_AntiKt10TruthWZJetsAuxDyn_FoxWolfram0);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.FoxWolfram1", &AntiKt10TruthWZJetsAuxDyn_FoxWolfram1, &b_AntiKt10TruthWZJetsAuxDyn_FoxWolfram1);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.FoxWolfram2", &AntiKt10TruthWZJetsAuxDyn_FoxWolfram2, &b_AntiKt10TruthWZJetsAuxDyn_FoxWolfram2);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.FoxWolfram3", &AntiKt10TruthWZJetsAuxDyn_FoxWolfram3, &b_AntiKt10TruthWZJetsAuxDyn_FoxWolfram3);
   fChain->SetBranchAddress("AntiKt10TruthWZJetsAuxDyn.FoxWolfram4", &AntiKt10TruthWZJetsAuxDyn_FoxWolfram4, &b_AntiKt10TruthWZJetsAuxDyn_FoxWolfram4);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.GhostTruthCount", &AntiKt3PV0TrackJetsAuxDyn_GhostTruthCount, &b_AntiKt3PV0TrackJetsAuxDyn_GhostTruthCount);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.GhostTruthPt", &AntiKt3PV0TrackJetsAuxDyn_GhostTruthPt, &b_AntiKt3PV0TrackJetsAuxDyn_GhostTruthPt);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.JetGhostArea", &AntiKt3PV0TrackJetsAuxDyn_JetGhostArea, &b_AntiKt3PV0TrackJetsAuxDyn_JetGhostArea);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.KtDR", &AntiKt3PV0TrackJetsAuxDyn_KtDR, &b_AntiKt3PV0TrackJetsAuxDyn_KtDR);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.Mu12", &AntiKt3PV0TrackJetsAuxDyn_Mu12, &b_AntiKt3PV0TrackJetsAuxDyn_Mu12);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.PlanarFlow", &AntiKt3PV0TrackJetsAuxDyn_PlanarFlow, &b_AntiKt3PV0TrackJetsAuxDyn_PlanarFlow);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.Sphericity", &AntiKt3PV0TrackJetsAuxDyn_Sphericity, &b_AntiKt3PV0TrackJetsAuxDyn_Sphericity);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.Split12", &AntiKt3PV0TrackJetsAuxDyn_Split12, &b_AntiKt3PV0TrackJetsAuxDyn_Split12);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.Split23", &AntiKt3PV0TrackJetsAuxDyn_Split23, &b_AntiKt3PV0TrackJetsAuxDyn_Split23);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.Split34", &AntiKt3PV0TrackJetsAuxDyn_Split34, &b_AntiKt3PV0TrackJetsAuxDyn_Split34);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.ConstituentScale", &AntiKt3PV0TrackJetsAuxDyn_ConstituentScale, &b_AntiKt3PV0TrackJetsAuxDyn_ConstituentScale);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.Tau1", &AntiKt3PV0TrackJetsAuxDyn_Tau1, &b_AntiKt3PV0TrackJetsAuxDyn_Tau1);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.Tau2", &AntiKt3PV0TrackJetsAuxDyn_Tau2, &b_AntiKt3PV0TrackJetsAuxDyn_Tau2);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.Tau3", &AntiKt3PV0TrackJetsAuxDyn_Tau3, &b_AntiKt3PV0TrackJetsAuxDyn_Tau3);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.ThrustMaj", &AntiKt3PV0TrackJetsAuxDyn_ThrustMaj, &b_AntiKt3PV0TrackJetsAuxDyn_ThrustMaj);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt3PV0TrackJetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt3PV0TrackJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.ThrustMin", &AntiKt3PV0TrackJetsAuxDyn_ThrustMin, &b_AntiKt3PV0TrackJetsAuxDyn_ThrustMin);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt3PV0TrackJetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt3PV0TrackJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt3PV0TrackJetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt3PV0TrackJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.Track", &AntiKt3PV0TrackJetsAuxDyn_Track, &b_AntiKt3PV0TrackJetsAuxDyn_Track);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt3PV0TrackJetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt3PV0TrackJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.TrackCount", &AntiKt3PV0TrackJetsAuxDyn_TrackCount, &b_AntiKt3PV0TrackJetsAuxDyn_TrackCount);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.InputType", &AntiKt3PV0TrackJetsAuxDyn_InputType, &b_AntiKt3PV0TrackJetsAuxDyn_InputType);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.TrackPt", &AntiKt3PV0TrackJetsAuxDyn_TrackPt, &b_AntiKt3PV0TrackJetsAuxDyn_TrackPt);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.AlgorithmType", &AntiKt3PV0TrackJetsAuxDyn_AlgorithmType, &b_AntiKt3PV0TrackJetsAuxDyn_AlgorithmType);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.SizeParameter", &AntiKt3PV0TrackJetsAuxDyn_SizeParameter, &b_AntiKt3PV0TrackJetsAuxDyn_SizeParameter);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.Truth", &AntiKt3PV0TrackJetsAuxDyn_Truth, &b_AntiKt3PV0TrackJetsAuxDyn_Truth);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.TruthCount", &AntiKt3PV0TrackJetsAuxDyn_TruthCount, &b_AntiKt3PV0TrackJetsAuxDyn_TruthCount);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.TruthPt", &AntiKt3PV0TrackJetsAuxDyn_TruthPt, &b_AntiKt3PV0TrackJetsAuxDyn_TruthPt);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.TruthWZ", &AntiKt3PV0TrackJetsAuxDyn_TruthWZ, &b_AntiKt3PV0TrackJetsAuxDyn_TruthWZ);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.TruthWZCount", &AntiKt3PV0TrackJetsAuxDyn_TruthWZCount, &b_AntiKt3PV0TrackJetsAuxDyn_TruthWZCount);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.TruthWZPt", &AntiKt3PV0TrackJetsAuxDyn_TruthWZPt, &b_AntiKt3PV0TrackJetsAuxDyn_TruthWZPt);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.Width", &AntiKt3PV0TrackJetsAuxDyn_Width, &b_AntiKt3PV0TrackJetsAuxDyn_Width);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.ZCut12", &AntiKt3PV0TrackJetsAuxDyn_ZCut12, &b_AntiKt3PV0TrackJetsAuxDyn_ZCut12);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.ZCut23", &AntiKt3PV0TrackJetsAuxDyn_ZCut23, &b_AntiKt3PV0TrackJetsAuxDyn_ZCut23);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.ZCut34", &AntiKt3PV0TrackJetsAuxDyn_ZCut34, &b_AntiKt3PV0TrackJetsAuxDyn_ZCut34);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.OriginVertex", &AntiKt3PV0TrackJetsAuxDyn_OriginVertex_, &b_AntiKt3PV0TrackJetsAuxDyn_OriginVertex_);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.OriginVertex.m_persKey", AntiKt3PV0TrackJetsAuxDyn_OriginVertex_m_persKey, &b_AntiKt3PV0TrackJetsAuxDyn_OriginVertex_m_persKey);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.OriginVertex.m_persIndex", AntiKt3PV0TrackJetsAuxDyn_OriginVertex_m_persIndex, &b_AntiKt3PV0TrackJetsAuxDyn_OriginVertex_m_persIndex);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.Angularity", &AntiKt3PV0TrackJetsAuxDyn_Angularity, &b_AntiKt3PV0TrackJetsAuxDyn_Angularity);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.Aplanarity", &AntiKt3PV0TrackJetsAuxDyn_Aplanarity, &b_AntiKt3PV0TrackJetsAuxDyn_Aplanarity);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.Dip12", &AntiKt3PV0TrackJetsAuxDyn_Dip12, &b_AntiKt3PV0TrackJetsAuxDyn_Dip12);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.Dip13", &AntiKt3PV0TrackJetsAuxDyn_Dip13, &b_AntiKt3PV0TrackJetsAuxDyn_Dip13);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.Dip23", &AntiKt3PV0TrackJetsAuxDyn_Dip23, &b_AntiKt3PV0TrackJetsAuxDyn_Dip23);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.DipExcl12", &AntiKt3PV0TrackJetsAuxDyn_DipExcl12, &b_AntiKt3PV0TrackJetsAuxDyn_DipExcl12);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.ECF1", &AntiKt3PV0TrackJetsAuxDyn_ECF1, &b_AntiKt3PV0TrackJetsAuxDyn_ECF1);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.ECF2", &AntiKt3PV0TrackJetsAuxDyn_ECF2, &b_AntiKt3PV0TrackJetsAuxDyn_ECF2);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.ECF3", &AntiKt3PV0TrackJetsAuxDyn_ECF3, &b_AntiKt3PV0TrackJetsAuxDyn_ECF3);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.FoxWolfram0", &AntiKt3PV0TrackJetsAuxDyn_FoxWolfram0, &b_AntiKt3PV0TrackJetsAuxDyn_FoxWolfram0);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.FoxWolfram1", &AntiKt3PV0TrackJetsAuxDyn_FoxWolfram1, &b_AntiKt3PV0TrackJetsAuxDyn_FoxWolfram1);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.FoxWolfram2", &AntiKt3PV0TrackJetsAuxDyn_FoxWolfram2, &b_AntiKt3PV0TrackJetsAuxDyn_FoxWolfram2);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.FoxWolfram3", &AntiKt3PV0TrackJetsAuxDyn_FoxWolfram3, &b_AntiKt3PV0TrackJetsAuxDyn_FoxWolfram3);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.FoxWolfram4", &AntiKt3PV0TrackJetsAuxDyn_FoxWolfram4, &b_AntiKt3PV0TrackJetsAuxDyn_FoxWolfram4);
   fChain->SetBranchAddress("AntiKt3PV0TrackJetsAuxDyn.GhostTruth", &AntiKt3PV0TrackJetsAuxDyn_GhostTruth, &b_AntiKt3PV0TrackJetsAuxDyn_GhostTruth);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.GhostTruthCount", &AntiKt3ZTrackJetsAuxDyn_GhostTruthCount, &b_AntiKt3ZTrackJetsAuxDyn_GhostTruthCount);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.GhostTruthPt", &AntiKt3ZTrackJetsAuxDyn_GhostTruthPt, &b_AntiKt3ZTrackJetsAuxDyn_GhostTruthPt);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.JetGhostArea", &AntiKt3ZTrackJetsAuxDyn_JetGhostArea, &b_AntiKt3ZTrackJetsAuxDyn_JetGhostArea);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.KtDR", &AntiKt3ZTrackJetsAuxDyn_KtDR, &b_AntiKt3ZTrackJetsAuxDyn_KtDR);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.Mu12", &AntiKt3ZTrackJetsAuxDyn_Mu12, &b_AntiKt3ZTrackJetsAuxDyn_Mu12);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.PlanarFlow", &AntiKt3ZTrackJetsAuxDyn_PlanarFlow, &b_AntiKt3ZTrackJetsAuxDyn_PlanarFlow);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.Sphericity", &AntiKt3ZTrackJetsAuxDyn_Sphericity, &b_AntiKt3ZTrackJetsAuxDyn_Sphericity);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.Split12", &AntiKt3ZTrackJetsAuxDyn_Split12, &b_AntiKt3ZTrackJetsAuxDyn_Split12);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.Split23", &AntiKt3ZTrackJetsAuxDyn_Split23, &b_AntiKt3ZTrackJetsAuxDyn_Split23);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.Split34", &AntiKt3ZTrackJetsAuxDyn_Split34, &b_AntiKt3ZTrackJetsAuxDyn_Split34);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.ConstituentScale", &AntiKt3ZTrackJetsAuxDyn_ConstituentScale, &b_AntiKt3ZTrackJetsAuxDyn_ConstituentScale);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.Tau1", &AntiKt3ZTrackJetsAuxDyn_Tau1, &b_AntiKt3ZTrackJetsAuxDyn_Tau1);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.Tau2", &AntiKt3ZTrackJetsAuxDyn_Tau2, &b_AntiKt3ZTrackJetsAuxDyn_Tau2);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.Tau3", &AntiKt3ZTrackJetsAuxDyn_Tau3, &b_AntiKt3ZTrackJetsAuxDyn_Tau3);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.ThrustMaj", &AntiKt3ZTrackJetsAuxDyn_ThrustMaj, &b_AntiKt3ZTrackJetsAuxDyn_ThrustMaj);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt3ZTrackJetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt3ZTrackJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.ThrustMin", &AntiKt3ZTrackJetsAuxDyn_ThrustMin, &b_AntiKt3ZTrackJetsAuxDyn_ThrustMin);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt3ZTrackJetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt3ZTrackJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt3ZTrackJetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt3ZTrackJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.Track", &AntiKt3ZTrackJetsAuxDyn_Track, &b_AntiKt3ZTrackJetsAuxDyn_Track);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt3ZTrackJetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt3ZTrackJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.TrackCount", &AntiKt3ZTrackJetsAuxDyn_TrackCount, &b_AntiKt3ZTrackJetsAuxDyn_TrackCount);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.InputType", &AntiKt3ZTrackJetsAuxDyn_InputType, &b_AntiKt3ZTrackJetsAuxDyn_InputType);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.TrackPt", &AntiKt3ZTrackJetsAuxDyn_TrackPt, &b_AntiKt3ZTrackJetsAuxDyn_TrackPt);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.AlgorithmType", &AntiKt3ZTrackJetsAuxDyn_AlgorithmType, &b_AntiKt3ZTrackJetsAuxDyn_AlgorithmType);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.SizeParameter", &AntiKt3ZTrackJetsAuxDyn_SizeParameter, &b_AntiKt3ZTrackJetsAuxDyn_SizeParameter);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.Truth", &AntiKt3ZTrackJetsAuxDyn_Truth, &b_AntiKt3ZTrackJetsAuxDyn_Truth);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.TruthCount", &AntiKt3ZTrackJetsAuxDyn_TruthCount, &b_AntiKt3ZTrackJetsAuxDyn_TruthCount);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.TruthPt", &AntiKt3ZTrackJetsAuxDyn_TruthPt, &b_AntiKt3ZTrackJetsAuxDyn_TruthPt);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.TruthWZ", &AntiKt3ZTrackJetsAuxDyn_TruthWZ, &b_AntiKt3ZTrackJetsAuxDyn_TruthWZ);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.TruthWZCount", &AntiKt3ZTrackJetsAuxDyn_TruthWZCount, &b_AntiKt3ZTrackJetsAuxDyn_TruthWZCount);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.TruthWZPt", &AntiKt3ZTrackJetsAuxDyn_TruthWZPt, &b_AntiKt3ZTrackJetsAuxDyn_TruthWZPt);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.Width", &AntiKt3ZTrackJetsAuxDyn_Width, &b_AntiKt3ZTrackJetsAuxDyn_Width);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.ZCut12", &AntiKt3ZTrackJetsAuxDyn_ZCut12, &b_AntiKt3ZTrackJetsAuxDyn_ZCut12);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.ZCut23", &AntiKt3ZTrackJetsAuxDyn_ZCut23, &b_AntiKt3ZTrackJetsAuxDyn_ZCut23);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.ZCut34", &AntiKt3ZTrackJetsAuxDyn_ZCut34, &b_AntiKt3ZTrackJetsAuxDyn_ZCut34);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.OriginVertex", &AntiKt3ZTrackJetsAuxDyn_OriginVertex_, &b_AntiKt3ZTrackJetsAuxDyn_OriginVertex_);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.OriginVertex.m_persKey", AntiKt3ZTrackJetsAuxDyn_OriginVertex_m_persKey, &b_AntiKt3ZTrackJetsAuxDyn_OriginVertex_m_persKey);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.OriginVertex.m_persIndex", AntiKt3ZTrackJetsAuxDyn_OriginVertex_m_persIndex, &b_AntiKt3ZTrackJetsAuxDyn_OriginVertex_m_persIndex);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.Angularity", &AntiKt3ZTrackJetsAuxDyn_Angularity, &b_AntiKt3ZTrackJetsAuxDyn_Angularity);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.Aplanarity", &AntiKt3ZTrackJetsAuxDyn_Aplanarity, &b_AntiKt3ZTrackJetsAuxDyn_Aplanarity);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.Dip12", &AntiKt3ZTrackJetsAuxDyn_Dip12, &b_AntiKt3ZTrackJetsAuxDyn_Dip12);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.Dip13", &AntiKt3ZTrackJetsAuxDyn_Dip13, &b_AntiKt3ZTrackJetsAuxDyn_Dip13);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.Dip23", &AntiKt3ZTrackJetsAuxDyn_Dip23, &b_AntiKt3ZTrackJetsAuxDyn_Dip23);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.DipExcl12", &AntiKt3ZTrackJetsAuxDyn_DipExcl12, &b_AntiKt3ZTrackJetsAuxDyn_DipExcl12);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.ECF1", &AntiKt3ZTrackJetsAuxDyn_ECF1, &b_AntiKt3ZTrackJetsAuxDyn_ECF1);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.ECF2", &AntiKt3ZTrackJetsAuxDyn_ECF2, &b_AntiKt3ZTrackJetsAuxDyn_ECF2);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.ECF3", &AntiKt3ZTrackJetsAuxDyn_ECF3, &b_AntiKt3ZTrackJetsAuxDyn_ECF3);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.FoxWolfram0", &AntiKt3ZTrackJetsAuxDyn_FoxWolfram0, &b_AntiKt3ZTrackJetsAuxDyn_FoxWolfram0);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.FoxWolfram1", &AntiKt3ZTrackJetsAuxDyn_FoxWolfram1, &b_AntiKt3ZTrackJetsAuxDyn_FoxWolfram1);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.FoxWolfram2", &AntiKt3ZTrackJetsAuxDyn_FoxWolfram2, &b_AntiKt3ZTrackJetsAuxDyn_FoxWolfram2);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.FoxWolfram3", &AntiKt3ZTrackJetsAuxDyn_FoxWolfram3, &b_AntiKt3ZTrackJetsAuxDyn_FoxWolfram3);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.FoxWolfram4", &AntiKt3ZTrackJetsAuxDyn_FoxWolfram4, &b_AntiKt3ZTrackJetsAuxDyn_FoxWolfram4);
   fChain->SetBranchAddress("AntiKt3ZTrackJetsAuxDyn.GhostTruth", &AntiKt3ZTrackJetsAuxDyn_GhostTruth, &b_AntiKt3ZTrackJetsAuxDyn_GhostTruth);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.N90Constituents", &AntiKt4EMTopoJetsAuxDyn_N90Constituents, &b_AntiKt4EMTopoJetsAuxDyn_N90Constituents);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.NegativeE", &AntiKt4EMTopoJetsAuxDyn_NegativeE, &b_AntiKt4EMTopoJetsAuxDyn_NegativeE);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.NumTrkPt1000", &AntiKt4EMTopoJetsAuxDyn_NumTrkPt1000, &b_AntiKt4EMTopoJetsAuxDyn_NumTrkPt1000);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.NumTrkPt500", &AntiKt4EMTopoJetsAuxDyn_NumTrkPt500, &b_AntiKt4EMTopoJetsAuxDyn_NumTrkPt500);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.OotFracClusters10", &AntiKt4EMTopoJetsAuxDyn_OotFracClusters10, &b_AntiKt4EMTopoJetsAuxDyn_OotFracClusters10);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.OotFracClusters5", &AntiKt4EMTopoJetsAuxDyn_OotFracClusters5, &b_AntiKt4EMTopoJetsAuxDyn_OotFracClusters5);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.PlanarFlow", &AntiKt4EMTopoJetsAuxDyn_PlanarFlow, &b_AntiKt4EMTopoJetsAuxDyn_PlanarFlow);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.Sphericity", &AntiKt4EMTopoJetsAuxDyn_Sphericity, &b_AntiKt4EMTopoJetsAuxDyn_Sphericity);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.Split12", &AntiKt4EMTopoJetsAuxDyn_Split12, &b_AntiKt4EMTopoJetsAuxDyn_Split12);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.Split23", &AntiKt4EMTopoJetsAuxDyn_Split23, &b_AntiKt4EMTopoJetsAuxDyn_Split23);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.Split34", &AntiKt4EMTopoJetsAuxDyn_Split34, &b_AntiKt4EMTopoJetsAuxDyn_Split34);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.SumPtTrkPt1000", &AntiKt4EMTopoJetsAuxDyn_SumPtTrkPt1000, &b_AntiKt4EMTopoJetsAuxDyn_SumPtTrkPt1000);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.SumPtTrkPt500", &AntiKt4EMTopoJetsAuxDyn_SumPtTrkPt500, &b_AntiKt4EMTopoJetsAuxDyn_SumPtTrkPt500);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.Tau1", &AntiKt4EMTopoJetsAuxDyn_Tau1, &b_AntiKt4EMTopoJetsAuxDyn_Tau1);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.Tau2", &AntiKt4EMTopoJetsAuxDyn_Tau2, &b_AntiKt4EMTopoJetsAuxDyn_Tau2);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.Tau3", &AntiKt4EMTopoJetsAuxDyn_Tau3, &b_AntiKt4EMTopoJetsAuxDyn_Tau3);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ThrustMaj", &AntiKt4EMTopoJetsAuxDyn_ThrustMaj, &b_AntiKt4EMTopoJetsAuxDyn_ThrustMaj);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ThrustMin", &AntiKt4EMTopoJetsAuxDyn_ThrustMin, &b_AntiKt4EMTopoJetsAuxDyn_ThrustMin);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.Timing", &AntiKt4EMTopoJetsAuxDyn_Timing, &b_AntiKt4EMTopoJetsAuxDyn_Timing);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.Track", &AntiKt4EMTopoJetsAuxDyn_Track, &b_AntiKt4EMTopoJetsAuxDyn_Track);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.TrackCount", &AntiKt4EMTopoJetsAuxDyn_TrackCount, &b_AntiKt4EMTopoJetsAuxDyn_TrackCount);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.TrackPt", &AntiKt4EMTopoJetsAuxDyn_TrackPt, &b_AntiKt4EMTopoJetsAuxDyn_TrackPt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.TrackWidthPt1000", &AntiKt4EMTopoJetsAuxDyn_TrackWidthPt1000, &b_AntiKt4EMTopoJetsAuxDyn_TrackWidthPt1000);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.TrackWidthPt500", &AntiKt4EMTopoJetsAuxDyn_TrackWidthPt500, &b_AntiKt4EMTopoJetsAuxDyn_TrackWidthPt500);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.Truth", &AntiKt4EMTopoJetsAuxDyn_Truth, &b_AntiKt4EMTopoJetsAuxDyn_Truth);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.TruthCount", &AntiKt4EMTopoJetsAuxDyn_TruthCount, &b_AntiKt4EMTopoJetsAuxDyn_TruthCount);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.TruthLabelDeltaR_B", &AntiKt4EMTopoJetsAuxDyn_TruthLabelDeltaR_B, &b_AntiKt4EMTopoJetsAuxDyn_TruthLabelDeltaR_B);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.TruthLabelDeltaR_C", &AntiKt4EMTopoJetsAuxDyn_TruthLabelDeltaR_C, &b_AntiKt4EMTopoJetsAuxDyn_TruthLabelDeltaR_C);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ConstituentScale", &AntiKt4EMTopoJetsAuxDyn_ConstituentScale, &b_AntiKt4EMTopoJetsAuxDyn_ConstituentScale);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.TruthLabelDeltaR_T", &AntiKt4EMTopoJetsAuxDyn_TruthLabelDeltaR_T, &b_AntiKt4EMTopoJetsAuxDyn_TruthLabelDeltaR_T);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JetEMScaleMomentum_pt", &AntiKt4EMTopoJetsAuxDyn_JetEMScaleMomentum_pt, &b_AntiKt4EMTopoJetsAuxDyn_JetEMScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.TruthLabelID", &AntiKt4EMTopoJetsAuxDyn_TruthLabelID, &b_AntiKt4EMTopoJetsAuxDyn_TruthLabelID);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JetEMScaleMomentum_eta", &AntiKt4EMTopoJetsAuxDyn_JetEMScaleMomentum_eta, &b_AntiKt4EMTopoJetsAuxDyn_JetEMScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.TruthPt", &AntiKt4EMTopoJetsAuxDyn_TruthPt, &b_AntiKt4EMTopoJetsAuxDyn_TruthPt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JetEMScaleMomentum_phi", &AntiKt4EMTopoJetsAuxDyn_JetEMScaleMomentum_phi, &b_AntiKt4EMTopoJetsAuxDyn_JetEMScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.TruthWZ", &AntiKt4EMTopoJetsAuxDyn_TruthWZ, &b_AntiKt4EMTopoJetsAuxDyn_TruthWZ);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JetEMScaleMomentum_m", &AntiKt4EMTopoJetsAuxDyn_JetEMScaleMomentum_m, &b_AntiKt4EMTopoJetsAuxDyn_JetEMScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.TruthWZCount", &AntiKt4EMTopoJetsAuxDyn_TruthWZCount, &b_AntiKt4EMTopoJetsAuxDyn_TruthWZCount);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.TruthWZPt", &AntiKt4EMTopoJetsAuxDyn_TruthWZPt, &b_AntiKt4EMTopoJetsAuxDyn_TruthWZPt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.Width", &AntiKt4EMTopoJetsAuxDyn_Width, &b_AntiKt4EMTopoJetsAuxDyn_Width);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ZCut12", &AntiKt4EMTopoJetsAuxDyn_ZCut12, &b_AntiKt4EMTopoJetsAuxDyn_ZCut12);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt4EMTopoJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ZCut23", &AntiKt4EMTopoJetsAuxDyn_ZCut23, &b_AntiKt4EMTopoJetsAuxDyn_ZCut23);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.InputType", &AntiKt4EMTopoJetsAuxDyn_InputType, &b_AntiKt4EMTopoJetsAuxDyn_InputType);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ZCut34", &AntiKt4EMTopoJetsAuxDyn_ZCut34, &b_AntiKt4EMTopoJetsAuxDyn_ZCut34);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.AlgorithmType", &AntiKt4EMTopoJetsAuxDyn_AlgorithmType, &b_AntiKt4EMTopoJetsAuxDyn_AlgorithmType);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.SizeParameter", &AntiKt4EMTopoJetsAuxDyn_SizeParameter, &b_AntiKt4EMTopoJetsAuxDyn_SizeParameter);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.btaggingLink", &AntiKt4EMTopoJetsAuxDyn_btaggingLink_, &b_AntiKt4EMTopoJetsAuxDyn_btaggingLink_);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.btaggingLink.m_persKey", AntiKt4EMTopoJetsAuxDyn_btaggingLink_m_persKey, &b_AntiKt4EMTopoJetsAuxDyn_btaggingLink_m_persKey);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.btaggingLink.m_persIndex", AntiKt4EMTopoJetsAuxDyn_btaggingLink_m_persIndex, &b_AntiKt4EMTopoJetsAuxDyn_btaggingLink_m_persIndex);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ActiveArea", &AntiKt4EMTopoJetsAuxDyn_ActiveArea, &b_AntiKt4EMTopoJetsAuxDyn_ActiveArea);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ActiveArea4vec_eta", &AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_eta, &b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_eta);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ActiveArea4vec_m", &AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_m, &b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_m);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ActiveArea4vec_phi", &AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_phi, &b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_phi);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ActiveArea4vec_pt", &AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_pt, &b_AntiKt4EMTopoJetsAuxDyn_ActiveArea4vec_pt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.Angularity", &AntiKt4EMTopoJetsAuxDyn_Angularity, &b_AntiKt4EMTopoJetsAuxDyn_Angularity);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.Aplanarity", &AntiKt4EMTopoJetsAuxDyn_Aplanarity, &b_AntiKt4EMTopoJetsAuxDyn_Aplanarity);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.AverageLArQF", &AntiKt4EMTopoJetsAuxDyn_AverageLArQF, &b_AntiKt4EMTopoJetsAuxDyn_AverageLArQF);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.BchCorrCell", &AntiKt4EMTopoJetsAuxDyn_BchCorrCell, &b_AntiKt4EMTopoJetsAuxDyn_BchCorrCell);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.CentroidR", &AntiKt4EMTopoJetsAuxDyn_CentroidR, &b_AntiKt4EMTopoJetsAuxDyn_CentroidR);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.Dip12", &AntiKt4EMTopoJetsAuxDyn_Dip12, &b_AntiKt4EMTopoJetsAuxDyn_Dip12);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.Dip13", &AntiKt4EMTopoJetsAuxDyn_Dip13, &b_AntiKt4EMTopoJetsAuxDyn_Dip13);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.Dip23", &AntiKt4EMTopoJetsAuxDyn_Dip23, &b_AntiKt4EMTopoJetsAuxDyn_Dip23);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.DipExcl12", &AntiKt4EMTopoJetsAuxDyn_DipExcl12, &b_AntiKt4EMTopoJetsAuxDyn_DipExcl12);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ECF1", &AntiKt4EMTopoJetsAuxDyn_ECF1, &b_AntiKt4EMTopoJetsAuxDyn_ECF1);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ECF2", &AntiKt4EMTopoJetsAuxDyn_ECF2, &b_AntiKt4EMTopoJetsAuxDyn_ECF2);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.ECF3", &AntiKt4EMTopoJetsAuxDyn_ECF3, &b_AntiKt4EMTopoJetsAuxDyn_ECF3);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.EMFrac", &AntiKt4EMTopoJetsAuxDyn_EMFrac, &b_AntiKt4EMTopoJetsAuxDyn_EMFrac);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.EMTopo", &AntiKt4EMTopoJetsAuxDyn_EMTopo, &b_AntiKt4EMTopoJetsAuxDyn_EMTopo);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.EMTopoCount", &AntiKt4EMTopoJetsAuxDyn_EMTopoCount, &b_AntiKt4EMTopoJetsAuxDyn_EMTopoCount);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.EMTopoPt", &AntiKt4EMTopoJetsAuxDyn_EMTopoPt, &b_AntiKt4EMTopoJetsAuxDyn_EMTopoPt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.EnergyPerSampling", &AntiKt4EMTopoJetsAuxDyn_EnergyPerSampling, &b_AntiKt4EMTopoJetsAuxDyn_EnergyPerSampling);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.FoxWolfram0", &AntiKt4EMTopoJetsAuxDyn_FoxWolfram0, &b_AntiKt4EMTopoJetsAuxDyn_FoxWolfram0);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.FoxWolfram1", &AntiKt4EMTopoJetsAuxDyn_FoxWolfram1, &b_AntiKt4EMTopoJetsAuxDyn_FoxWolfram1);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.FoxWolfram2", &AntiKt4EMTopoJetsAuxDyn_FoxWolfram2, &b_AntiKt4EMTopoJetsAuxDyn_FoxWolfram2);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.FoxWolfram3", &AntiKt4EMTopoJetsAuxDyn_FoxWolfram3, &b_AntiKt4EMTopoJetsAuxDyn_FoxWolfram3);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.FoxWolfram4", &AntiKt4EMTopoJetsAuxDyn_FoxWolfram4, &b_AntiKt4EMTopoJetsAuxDyn_FoxWolfram4);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.FracSamplingMax", &AntiKt4EMTopoJetsAuxDyn_FracSamplingMax, &b_AntiKt4EMTopoJetsAuxDyn_FracSamplingMax);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.FracSamplingMaxIndex", &AntiKt4EMTopoJetsAuxDyn_FracSamplingMaxIndex, &b_AntiKt4EMTopoJetsAuxDyn_FracSamplingMaxIndex);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostAntiKt3TrackJet", &AntiKt4EMTopoJetsAuxDyn_GhostAntiKt3TrackJet, &b_AntiKt4EMTopoJetsAuxDyn_GhostAntiKt3TrackJet);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostAntiKt3TrackJetCount", &AntiKt4EMTopoJetsAuxDyn_GhostAntiKt3TrackJetCount, &b_AntiKt4EMTopoJetsAuxDyn_GhostAntiKt3TrackJetCount);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostAntiKt3TrackJetPt", &AntiKt4EMTopoJetsAuxDyn_GhostAntiKt3TrackJetPt, &b_AntiKt4EMTopoJetsAuxDyn_GhostAntiKt3TrackJetPt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostAntiKt4TrackJet", &AntiKt4EMTopoJetsAuxDyn_GhostAntiKt4TrackJet, &b_AntiKt4EMTopoJetsAuxDyn_GhostAntiKt4TrackJet);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostAntiKt4TrackJetCount", &AntiKt4EMTopoJetsAuxDyn_GhostAntiKt4TrackJetCount, &b_AntiKt4EMTopoJetsAuxDyn_GhostAntiKt4TrackJetCount);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostAntiKt4TrackJetPt", &AntiKt4EMTopoJetsAuxDyn_GhostAntiKt4TrackJetPt, &b_AntiKt4EMTopoJetsAuxDyn_GhostAntiKt4TrackJetPt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostMuonSegment", &AntiKt4EMTopoJetsAuxDyn_GhostMuonSegment, &b_AntiKt4EMTopoJetsAuxDyn_GhostMuonSegment);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostMuonSegmentCount", &AntiKt4EMTopoJetsAuxDyn_GhostMuonSegmentCount, &b_AntiKt4EMTopoJetsAuxDyn_GhostMuonSegmentCount);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostTrack", &AntiKt4EMTopoJetsAuxDyn_GhostTrack, &b_AntiKt4EMTopoJetsAuxDyn_GhostTrack);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostTrackCount", &AntiKt4EMTopoJetsAuxDyn_GhostTrackCount, &b_AntiKt4EMTopoJetsAuxDyn_GhostTrackCount);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostTrackPt", &AntiKt4EMTopoJetsAuxDyn_GhostTrackPt, &b_AntiKt4EMTopoJetsAuxDyn_GhostTrackPt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostTruth", &AntiKt4EMTopoJetsAuxDyn_GhostTruth, &b_AntiKt4EMTopoJetsAuxDyn_GhostTruth);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostTruthAssociationFraction", &AntiKt4EMTopoJetsAuxDyn_GhostTruthAssociationFraction, &b_AntiKt4EMTopoJetsAuxDyn_GhostTruthAssociationFraction);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostTruthAssociationLink", &AntiKt4EMTopoJetsAuxDyn_GhostTruthAssociationLink_, &b_AntiKt4EMTopoJetsAuxDyn_GhostTruthAssociationLink_);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostTruthAssociationLink.m_persKey", AntiKt4EMTopoJetsAuxDyn_GhostTruthAssociationLink_m_persKey, &b_AntiKt4EMTopoJetsAuxDyn_GhostTruthAssociationLink_m_persKey);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostTruthAssociationLink.m_persIndex", AntiKt4EMTopoJetsAuxDyn_GhostTruthAssociationLink_m_persIndex, &b_AntiKt4EMTopoJetsAuxDyn_GhostTruthAssociationLink_m_persIndex);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostTruthCount", &AntiKt4EMTopoJetsAuxDyn_GhostTruthCount, &b_AntiKt4EMTopoJetsAuxDyn_GhostTruthCount);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.GhostTruthPt", &AntiKt4EMTopoJetsAuxDyn_GhostTruthPt, &b_AntiKt4EMTopoJetsAuxDyn_GhostTruthPt);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.HECFrac", &AntiKt4EMTopoJetsAuxDyn_HECFrac, &b_AntiKt4EMTopoJetsAuxDyn_HECFrac);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.HECQuality", &AntiKt4EMTopoJetsAuxDyn_HECQuality, &b_AntiKt4EMTopoJetsAuxDyn_HECQuality);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.HighestJVFVtx", &AntiKt4EMTopoJetsAuxDyn_HighestJVFVtx_, &b_AntiKt4EMTopoJetsAuxDyn_HighestJVFVtx_);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.HighestJVFVtx.m_persKey", AntiKt4EMTopoJetsAuxDyn_HighestJVFVtx_m_persKey, &b_AntiKt4EMTopoJetsAuxDyn_HighestJVFVtx_m_persKey);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.HighestJVFVtx.m_persIndex", AntiKt4EMTopoJetsAuxDyn_HighestJVFVtx_m_persIndex, &b_AntiKt4EMTopoJetsAuxDyn_HighestJVFVtx_m_persIndex);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JVF", &AntiKt4EMTopoJetsAuxDyn_JVF, &b_AntiKt4EMTopoJetsAuxDyn_JVF);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.JetGhostArea", &AntiKt4EMTopoJetsAuxDyn_JetGhostArea, &b_AntiKt4EMTopoJetsAuxDyn_JetGhostArea);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.KtDR", &AntiKt4EMTopoJetsAuxDyn_KtDR, &b_AntiKt4EMTopoJetsAuxDyn_KtDR);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.LArQuality", &AntiKt4EMTopoJetsAuxDyn_LArQuality, &b_AntiKt4EMTopoJetsAuxDyn_LArQuality);
   fChain->SetBranchAddress("AntiKt4EMTopoJetsAuxDyn.Mu12", &AntiKt4EMTopoJetsAuxDyn_Mu12, &b_AntiKt4EMTopoJetsAuxDyn_Mu12);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.N90Constituents", &AntiKt4LCTopoJetsAuxDyn_N90Constituents, &b_AntiKt4LCTopoJetsAuxDyn_N90Constituents);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.NegativeE", &AntiKt4LCTopoJetsAuxDyn_NegativeE, &b_AntiKt4LCTopoJetsAuxDyn_NegativeE);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.NumTrkPt1000", &AntiKt4LCTopoJetsAuxDyn_NumTrkPt1000, &b_AntiKt4LCTopoJetsAuxDyn_NumTrkPt1000);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.NumTrkPt500", &AntiKt4LCTopoJetsAuxDyn_NumTrkPt500, &b_AntiKt4LCTopoJetsAuxDyn_NumTrkPt500);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.OotFracClusters10", &AntiKt4LCTopoJetsAuxDyn_OotFracClusters10, &b_AntiKt4LCTopoJetsAuxDyn_OotFracClusters10);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.OotFracClusters5", &AntiKt4LCTopoJetsAuxDyn_OotFracClusters5, &b_AntiKt4LCTopoJetsAuxDyn_OotFracClusters5);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.PlanarFlow", &AntiKt4LCTopoJetsAuxDyn_PlanarFlow, &b_AntiKt4LCTopoJetsAuxDyn_PlanarFlow);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.Sphericity", &AntiKt4LCTopoJetsAuxDyn_Sphericity, &b_AntiKt4LCTopoJetsAuxDyn_Sphericity);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.Split12", &AntiKt4LCTopoJetsAuxDyn_Split12, &b_AntiKt4LCTopoJetsAuxDyn_Split12);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.Split23", &AntiKt4LCTopoJetsAuxDyn_Split23, &b_AntiKt4LCTopoJetsAuxDyn_Split23);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.Split34", &AntiKt4LCTopoJetsAuxDyn_Split34, &b_AntiKt4LCTopoJetsAuxDyn_Split34);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.SumPtTrkPt1000", &AntiKt4LCTopoJetsAuxDyn_SumPtTrkPt1000, &b_AntiKt4LCTopoJetsAuxDyn_SumPtTrkPt1000);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.SumPtTrkPt500", &AntiKt4LCTopoJetsAuxDyn_SumPtTrkPt500, &b_AntiKt4LCTopoJetsAuxDyn_SumPtTrkPt500);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.Tau1", &AntiKt4LCTopoJetsAuxDyn_Tau1, &b_AntiKt4LCTopoJetsAuxDyn_Tau1);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.Tau2", &AntiKt4LCTopoJetsAuxDyn_Tau2, &b_AntiKt4LCTopoJetsAuxDyn_Tau2);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.Tau3", &AntiKt4LCTopoJetsAuxDyn_Tau3, &b_AntiKt4LCTopoJetsAuxDyn_Tau3);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.ThrustMaj", &AntiKt4LCTopoJetsAuxDyn_ThrustMaj, &b_AntiKt4LCTopoJetsAuxDyn_ThrustMaj);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.ThrustMin", &AntiKt4LCTopoJetsAuxDyn_ThrustMin, &b_AntiKt4LCTopoJetsAuxDyn_ThrustMin);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.Timing", &AntiKt4LCTopoJetsAuxDyn_Timing, &b_AntiKt4LCTopoJetsAuxDyn_Timing);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.Track", &AntiKt4LCTopoJetsAuxDyn_Track, &b_AntiKt4LCTopoJetsAuxDyn_Track);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.TrackCount", &AntiKt4LCTopoJetsAuxDyn_TrackCount, &b_AntiKt4LCTopoJetsAuxDyn_TrackCount);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.TrackPt", &AntiKt4LCTopoJetsAuxDyn_TrackPt, &b_AntiKt4LCTopoJetsAuxDyn_TrackPt);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.TrackWidthPt1000", &AntiKt4LCTopoJetsAuxDyn_TrackWidthPt1000, &b_AntiKt4LCTopoJetsAuxDyn_TrackWidthPt1000);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.TrackWidthPt500", &AntiKt4LCTopoJetsAuxDyn_TrackWidthPt500, &b_AntiKt4LCTopoJetsAuxDyn_TrackWidthPt500);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.Truth", &AntiKt4LCTopoJetsAuxDyn_Truth, &b_AntiKt4LCTopoJetsAuxDyn_Truth);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.TruthCount", &AntiKt4LCTopoJetsAuxDyn_TruthCount, &b_AntiKt4LCTopoJetsAuxDyn_TruthCount);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.TruthLabelDeltaR_B", &AntiKt4LCTopoJetsAuxDyn_TruthLabelDeltaR_B, &b_AntiKt4LCTopoJetsAuxDyn_TruthLabelDeltaR_B);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.TruthLabelDeltaR_C", &AntiKt4LCTopoJetsAuxDyn_TruthLabelDeltaR_C, &b_AntiKt4LCTopoJetsAuxDyn_TruthLabelDeltaR_C);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.ConstituentScale", &AntiKt4LCTopoJetsAuxDyn_ConstituentScale, &b_AntiKt4LCTopoJetsAuxDyn_ConstituentScale);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.TruthLabelDeltaR_T", &AntiKt4LCTopoJetsAuxDyn_TruthLabelDeltaR_T, &b_AntiKt4LCTopoJetsAuxDyn_TruthLabelDeltaR_T);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.JetEMScaleMomentum_pt", &AntiKt4LCTopoJetsAuxDyn_JetEMScaleMomentum_pt, &b_AntiKt4LCTopoJetsAuxDyn_JetEMScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.TruthLabelID", &AntiKt4LCTopoJetsAuxDyn_TruthLabelID, &b_AntiKt4LCTopoJetsAuxDyn_TruthLabelID);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.JetEMScaleMomentum_eta", &AntiKt4LCTopoJetsAuxDyn_JetEMScaleMomentum_eta, &b_AntiKt4LCTopoJetsAuxDyn_JetEMScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.TruthPt", &AntiKt4LCTopoJetsAuxDyn_TruthPt, &b_AntiKt4LCTopoJetsAuxDyn_TruthPt);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.JetEMScaleMomentum_phi", &AntiKt4LCTopoJetsAuxDyn_JetEMScaleMomentum_phi, &b_AntiKt4LCTopoJetsAuxDyn_JetEMScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.TruthWZ", &AntiKt4LCTopoJetsAuxDyn_TruthWZ, &b_AntiKt4LCTopoJetsAuxDyn_TruthWZ);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.JetEMScaleMomentum_m", &AntiKt4LCTopoJetsAuxDyn_JetEMScaleMomentum_m, &b_AntiKt4LCTopoJetsAuxDyn_JetEMScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.TruthWZCount", &AntiKt4LCTopoJetsAuxDyn_TruthWZCount, &b_AntiKt4LCTopoJetsAuxDyn_TruthWZCount);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt4LCTopoJetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt4LCTopoJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.TruthWZPt", &AntiKt4LCTopoJetsAuxDyn_TruthWZPt, &b_AntiKt4LCTopoJetsAuxDyn_TruthWZPt);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt4LCTopoJetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt4LCTopoJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.Width", &AntiKt4LCTopoJetsAuxDyn_Width, &b_AntiKt4LCTopoJetsAuxDyn_Width);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt4LCTopoJetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt4LCTopoJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.ZCut12", &AntiKt4LCTopoJetsAuxDyn_ZCut12, &b_AntiKt4LCTopoJetsAuxDyn_ZCut12);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt4LCTopoJetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt4LCTopoJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.ZCut23", &AntiKt4LCTopoJetsAuxDyn_ZCut23, &b_AntiKt4LCTopoJetsAuxDyn_ZCut23);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.InputType", &AntiKt4LCTopoJetsAuxDyn_InputType, &b_AntiKt4LCTopoJetsAuxDyn_InputType);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.ZCut34", &AntiKt4LCTopoJetsAuxDyn_ZCut34, &b_AntiKt4LCTopoJetsAuxDyn_ZCut34);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.AlgorithmType", &AntiKt4LCTopoJetsAuxDyn_AlgorithmType, &b_AntiKt4LCTopoJetsAuxDyn_AlgorithmType);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.SizeParameter", &AntiKt4LCTopoJetsAuxDyn_SizeParameter, &b_AntiKt4LCTopoJetsAuxDyn_SizeParameter);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.btaggingLink", &AntiKt4LCTopoJetsAuxDyn_btaggingLink_, &b_AntiKt4LCTopoJetsAuxDyn_btaggingLink_);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.btaggingLink.m_persKey", AntiKt4LCTopoJetsAuxDyn_btaggingLink_m_persKey, &b_AntiKt4LCTopoJetsAuxDyn_btaggingLink_m_persKey);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.btaggingLink.m_persIndex", AntiKt4LCTopoJetsAuxDyn_btaggingLink_m_persIndex, &b_AntiKt4LCTopoJetsAuxDyn_btaggingLink_m_persIndex);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.ActiveArea", &AntiKt4LCTopoJetsAuxDyn_ActiveArea, &b_AntiKt4LCTopoJetsAuxDyn_ActiveArea);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.ActiveArea4vec_eta", &AntiKt4LCTopoJetsAuxDyn_ActiveArea4vec_eta, &b_AntiKt4LCTopoJetsAuxDyn_ActiveArea4vec_eta);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.ActiveArea4vec_m", &AntiKt4LCTopoJetsAuxDyn_ActiveArea4vec_m, &b_AntiKt4LCTopoJetsAuxDyn_ActiveArea4vec_m);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.ActiveArea4vec_phi", &AntiKt4LCTopoJetsAuxDyn_ActiveArea4vec_phi, &b_AntiKt4LCTopoJetsAuxDyn_ActiveArea4vec_phi);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.ActiveArea4vec_pt", &AntiKt4LCTopoJetsAuxDyn_ActiveArea4vec_pt, &b_AntiKt4LCTopoJetsAuxDyn_ActiveArea4vec_pt);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.Angularity", &AntiKt4LCTopoJetsAuxDyn_Angularity, &b_AntiKt4LCTopoJetsAuxDyn_Angularity);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.Aplanarity", &AntiKt4LCTopoJetsAuxDyn_Aplanarity, &b_AntiKt4LCTopoJetsAuxDyn_Aplanarity);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.AverageLArQF", &AntiKt4LCTopoJetsAuxDyn_AverageLArQF, &b_AntiKt4LCTopoJetsAuxDyn_AverageLArQF);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.BchCorrCell", &AntiKt4LCTopoJetsAuxDyn_BchCorrCell, &b_AntiKt4LCTopoJetsAuxDyn_BchCorrCell);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.CentroidR", &AntiKt4LCTopoJetsAuxDyn_CentroidR, &b_AntiKt4LCTopoJetsAuxDyn_CentroidR);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.Dip12", &AntiKt4LCTopoJetsAuxDyn_Dip12, &b_AntiKt4LCTopoJetsAuxDyn_Dip12);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.Dip13", &AntiKt4LCTopoJetsAuxDyn_Dip13, &b_AntiKt4LCTopoJetsAuxDyn_Dip13);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.Dip23", &AntiKt4LCTopoJetsAuxDyn_Dip23, &b_AntiKt4LCTopoJetsAuxDyn_Dip23);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.DipExcl12", &AntiKt4LCTopoJetsAuxDyn_DipExcl12, &b_AntiKt4LCTopoJetsAuxDyn_DipExcl12);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.ECF1", &AntiKt4LCTopoJetsAuxDyn_ECF1, &b_AntiKt4LCTopoJetsAuxDyn_ECF1);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.ECF2", &AntiKt4LCTopoJetsAuxDyn_ECF2, &b_AntiKt4LCTopoJetsAuxDyn_ECF2);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.ECF3", &AntiKt4LCTopoJetsAuxDyn_ECF3, &b_AntiKt4LCTopoJetsAuxDyn_ECF3);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.EMFrac", &AntiKt4LCTopoJetsAuxDyn_EMFrac, &b_AntiKt4LCTopoJetsAuxDyn_EMFrac);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.EMTopo", &AntiKt4LCTopoJetsAuxDyn_EMTopo, &b_AntiKt4LCTopoJetsAuxDyn_EMTopo);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.EMTopoCount", &AntiKt4LCTopoJetsAuxDyn_EMTopoCount, &b_AntiKt4LCTopoJetsAuxDyn_EMTopoCount);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.EMTopoPt", &AntiKt4LCTopoJetsAuxDyn_EMTopoPt, &b_AntiKt4LCTopoJetsAuxDyn_EMTopoPt);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.EnergyPerSampling", &AntiKt4LCTopoJetsAuxDyn_EnergyPerSampling, &b_AntiKt4LCTopoJetsAuxDyn_EnergyPerSampling);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.FoxWolfram0", &AntiKt4LCTopoJetsAuxDyn_FoxWolfram0, &b_AntiKt4LCTopoJetsAuxDyn_FoxWolfram0);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.FoxWolfram1", &AntiKt4LCTopoJetsAuxDyn_FoxWolfram1, &b_AntiKt4LCTopoJetsAuxDyn_FoxWolfram1);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.FoxWolfram2", &AntiKt4LCTopoJetsAuxDyn_FoxWolfram2, &b_AntiKt4LCTopoJetsAuxDyn_FoxWolfram2);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.FoxWolfram3", &AntiKt4LCTopoJetsAuxDyn_FoxWolfram3, &b_AntiKt4LCTopoJetsAuxDyn_FoxWolfram3);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.FoxWolfram4", &AntiKt4LCTopoJetsAuxDyn_FoxWolfram4, &b_AntiKt4LCTopoJetsAuxDyn_FoxWolfram4);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.FracSamplingMax", &AntiKt4LCTopoJetsAuxDyn_FracSamplingMax, &b_AntiKt4LCTopoJetsAuxDyn_FracSamplingMax);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.FracSamplingMaxIndex", &AntiKt4LCTopoJetsAuxDyn_FracSamplingMaxIndex, &b_AntiKt4LCTopoJetsAuxDyn_FracSamplingMaxIndex);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.GhostAntiKt3TrackJet", &AntiKt4LCTopoJetsAuxDyn_GhostAntiKt3TrackJet, &b_AntiKt4LCTopoJetsAuxDyn_GhostAntiKt3TrackJet);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.GhostAntiKt3TrackJetCount", &AntiKt4LCTopoJetsAuxDyn_GhostAntiKt3TrackJetCount, &b_AntiKt4LCTopoJetsAuxDyn_GhostAntiKt3TrackJetCount);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.GhostAntiKt3TrackJetPt", &AntiKt4LCTopoJetsAuxDyn_GhostAntiKt3TrackJetPt, &b_AntiKt4LCTopoJetsAuxDyn_GhostAntiKt3TrackJetPt);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.GhostAntiKt4TrackJet", &AntiKt4LCTopoJetsAuxDyn_GhostAntiKt4TrackJet, &b_AntiKt4LCTopoJetsAuxDyn_GhostAntiKt4TrackJet);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.GhostAntiKt4TrackJetCount", &AntiKt4LCTopoJetsAuxDyn_GhostAntiKt4TrackJetCount, &b_AntiKt4LCTopoJetsAuxDyn_GhostAntiKt4TrackJetCount);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.GhostAntiKt4TrackJetPt", &AntiKt4LCTopoJetsAuxDyn_GhostAntiKt4TrackJetPt, &b_AntiKt4LCTopoJetsAuxDyn_GhostAntiKt4TrackJetPt);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.GhostMuonSegment", &AntiKt4LCTopoJetsAuxDyn_GhostMuonSegment, &b_AntiKt4LCTopoJetsAuxDyn_GhostMuonSegment);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.GhostMuonSegmentCount", &AntiKt4LCTopoJetsAuxDyn_GhostMuonSegmentCount, &b_AntiKt4LCTopoJetsAuxDyn_GhostMuonSegmentCount);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.GhostTrack", &AntiKt4LCTopoJetsAuxDyn_GhostTrack, &b_AntiKt4LCTopoJetsAuxDyn_GhostTrack);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.GhostTrackCount", &AntiKt4LCTopoJetsAuxDyn_GhostTrackCount, &b_AntiKt4LCTopoJetsAuxDyn_GhostTrackCount);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.GhostTrackPt", &AntiKt4LCTopoJetsAuxDyn_GhostTrackPt, &b_AntiKt4LCTopoJetsAuxDyn_GhostTrackPt);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.GhostTruth", &AntiKt4LCTopoJetsAuxDyn_GhostTruth, &b_AntiKt4LCTopoJetsAuxDyn_GhostTruth);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.GhostTruthAssociationFraction", &AntiKt4LCTopoJetsAuxDyn_GhostTruthAssociationFraction, &b_AntiKt4LCTopoJetsAuxDyn_GhostTruthAssociationFraction);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.GhostTruthAssociationLink", &AntiKt4LCTopoJetsAuxDyn_GhostTruthAssociationLink_, &b_AntiKt4LCTopoJetsAuxDyn_GhostTruthAssociationLink_);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.GhostTruthAssociationLink.m_persKey", AntiKt4LCTopoJetsAuxDyn_GhostTruthAssociationLink_m_persKey, &b_AntiKt4LCTopoJetsAuxDyn_GhostTruthAssociationLink_m_persKey);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.GhostTruthAssociationLink.m_persIndex", AntiKt4LCTopoJetsAuxDyn_GhostTruthAssociationLink_m_persIndex, &b_AntiKt4LCTopoJetsAuxDyn_GhostTruthAssociationLink_m_persIndex);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.GhostTruthCount", &AntiKt4LCTopoJetsAuxDyn_GhostTruthCount, &b_AntiKt4LCTopoJetsAuxDyn_GhostTruthCount);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.GhostTruthPt", &AntiKt4LCTopoJetsAuxDyn_GhostTruthPt, &b_AntiKt4LCTopoJetsAuxDyn_GhostTruthPt);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.HECFrac", &AntiKt4LCTopoJetsAuxDyn_HECFrac, &b_AntiKt4LCTopoJetsAuxDyn_HECFrac);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.HECQuality", &AntiKt4LCTopoJetsAuxDyn_HECQuality, &b_AntiKt4LCTopoJetsAuxDyn_HECQuality);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.HighestJVFVtx", &AntiKt4LCTopoJetsAuxDyn_HighestJVFVtx_, &b_AntiKt4LCTopoJetsAuxDyn_HighestJVFVtx_);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.HighestJVFVtx.m_persKey", AntiKt4LCTopoJetsAuxDyn_HighestJVFVtx_m_persKey, &b_AntiKt4LCTopoJetsAuxDyn_HighestJVFVtx_m_persKey);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.HighestJVFVtx.m_persIndex", AntiKt4LCTopoJetsAuxDyn_HighestJVFVtx_m_persIndex, &b_AntiKt4LCTopoJetsAuxDyn_HighestJVFVtx_m_persIndex);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.JVF", &AntiKt4LCTopoJetsAuxDyn_JVF, &b_AntiKt4LCTopoJetsAuxDyn_JVF);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.JetGhostArea", &AntiKt4LCTopoJetsAuxDyn_JetGhostArea, &b_AntiKt4LCTopoJetsAuxDyn_JetGhostArea);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.KtDR", &AntiKt4LCTopoJetsAuxDyn_KtDR, &b_AntiKt4LCTopoJetsAuxDyn_KtDR);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.LArQuality", &AntiKt4LCTopoJetsAuxDyn_LArQuality, &b_AntiKt4LCTopoJetsAuxDyn_LArQuality);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.LCTopo", &AntiKt4LCTopoJetsAuxDyn_LCTopo, &b_AntiKt4LCTopoJetsAuxDyn_LCTopo);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.LCTopoCount", &AntiKt4LCTopoJetsAuxDyn_LCTopoCount, &b_AntiKt4LCTopoJetsAuxDyn_LCTopoCount);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.LCTopoPt", &AntiKt4LCTopoJetsAuxDyn_LCTopoPt, &b_AntiKt4LCTopoJetsAuxDyn_LCTopoPt);
   fChain->SetBranchAddress("AntiKt4LCTopoJetsAuxDyn.Mu12", &AntiKt4LCTopoJetsAuxDyn_Mu12, &b_AntiKt4LCTopoJetsAuxDyn_Mu12);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.GhostTruthCount", &AntiKt4PV0TrackJetsAuxDyn_GhostTruthCount, &b_AntiKt4PV0TrackJetsAuxDyn_GhostTruthCount);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.GhostTruthPt", &AntiKt4PV0TrackJetsAuxDyn_GhostTruthPt, &b_AntiKt4PV0TrackJetsAuxDyn_GhostTruthPt);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.JetGhostArea", &AntiKt4PV0TrackJetsAuxDyn_JetGhostArea, &b_AntiKt4PV0TrackJetsAuxDyn_JetGhostArea);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.KtDR", &AntiKt4PV0TrackJetsAuxDyn_KtDR, &b_AntiKt4PV0TrackJetsAuxDyn_KtDR);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.Mu12", &AntiKt4PV0TrackJetsAuxDyn_Mu12, &b_AntiKt4PV0TrackJetsAuxDyn_Mu12);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.PlanarFlow", &AntiKt4PV0TrackJetsAuxDyn_PlanarFlow, &b_AntiKt4PV0TrackJetsAuxDyn_PlanarFlow);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.Sphericity", &AntiKt4PV0TrackJetsAuxDyn_Sphericity, &b_AntiKt4PV0TrackJetsAuxDyn_Sphericity);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.Split12", &AntiKt4PV0TrackJetsAuxDyn_Split12, &b_AntiKt4PV0TrackJetsAuxDyn_Split12);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.Split23", &AntiKt4PV0TrackJetsAuxDyn_Split23, &b_AntiKt4PV0TrackJetsAuxDyn_Split23);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.Split34", &AntiKt4PV0TrackJetsAuxDyn_Split34, &b_AntiKt4PV0TrackJetsAuxDyn_Split34);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.ConstituentScale", &AntiKt4PV0TrackJetsAuxDyn_ConstituentScale, &b_AntiKt4PV0TrackJetsAuxDyn_ConstituentScale);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.Tau1", &AntiKt4PV0TrackJetsAuxDyn_Tau1, &b_AntiKt4PV0TrackJetsAuxDyn_Tau1);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.Tau2", &AntiKt4PV0TrackJetsAuxDyn_Tau2, &b_AntiKt4PV0TrackJetsAuxDyn_Tau2);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.Tau3", &AntiKt4PV0TrackJetsAuxDyn_Tau3, &b_AntiKt4PV0TrackJetsAuxDyn_Tau3);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.ThrustMaj", &AntiKt4PV0TrackJetsAuxDyn_ThrustMaj, &b_AntiKt4PV0TrackJetsAuxDyn_ThrustMaj);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt4PV0TrackJetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt4PV0TrackJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.ThrustMin", &AntiKt4PV0TrackJetsAuxDyn_ThrustMin, &b_AntiKt4PV0TrackJetsAuxDyn_ThrustMin);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt4PV0TrackJetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt4PV0TrackJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt4PV0TrackJetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt4PV0TrackJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.Track", &AntiKt4PV0TrackJetsAuxDyn_Track, &b_AntiKt4PV0TrackJetsAuxDyn_Track);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt4PV0TrackJetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt4PV0TrackJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.TrackCount", &AntiKt4PV0TrackJetsAuxDyn_TrackCount, &b_AntiKt4PV0TrackJetsAuxDyn_TrackCount);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.InputType", &AntiKt4PV0TrackJetsAuxDyn_InputType, &b_AntiKt4PV0TrackJetsAuxDyn_InputType);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.TrackPt", &AntiKt4PV0TrackJetsAuxDyn_TrackPt, &b_AntiKt4PV0TrackJetsAuxDyn_TrackPt);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.AlgorithmType", &AntiKt4PV0TrackJetsAuxDyn_AlgorithmType, &b_AntiKt4PV0TrackJetsAuxDyn_AlgorithmType);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.SizeParameter", &AntiKt4PV0TrackJetsAuxDyn_SizeParameter, &b_AntiKt4PV0TrackJetsAuxDyn_SizeParameter);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.Truth", &AntiKt4PV0TrackJetsAuxDyn_Truth, &b_AntiKt4PV0TrackJetsAuxDyn_Truth);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.TruthCount", &AntiKt4PV0TrackJetsAuxDyn_TruthCount, &b_AntiKt4PV0TrackJetsAuxDyn_TruthCount);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.TruthPt", &AntiKt4PV0TrackJetsAuxDyn_TruthPt, &b_AntiKt4PV0TrackJetsAuxDyn_TruthPt);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.TruthWZ", &AntiKt4PV0TrackJetsAuxDyn_TruthWZ, &b_AntiKt4PV0TrackJetsAuxDyn_TruthWZ);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.TruthWZCount", &AntiKt4PV0TrackJetsAuxDyn_TruthWZCount, &b_AntiKt4PV0TrackJetsAuxDyn_TruthWZCount);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.TruthWZPt", &AntiKt4PV0TrackJetsAuxDyn_TruthWZPt, &b_AntiKt4PV0TrackJetsAuxDyn_TruthWZPt);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.Width", &AntiKt4PV0TrackJetsAuxDyn_Width, &b_AntiKt4PV0TrackJetsAuxDyn_Width);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.ZCut12", &AntiKt4PV0TrackJetsAuxDyn_ZCut12, &b_AntiKt4PV0TrackJetsAuxDyn_ZCut12);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.ZCut23", &AntiKt4PV0TrackJetsAuxDyn_ZCut23, &b_AntiKt4PV0TrackJetsAuxDyn_ZCut23);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.ZCut34", &AntiKt4PV0TrackJetsAuxDyn_ZCut34, &b_AntiKt4PV0TrackJetsAuxDyn_ZCut34);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.OriginVertex", &AntiKt4PV0TrackJetsAuxDyn_OriginVertex_, &b_AntiKt4PV0TrackJetsAuxDyn_OriginVertex_);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.OriginVertex.m_persKey", AntiKt4PV0TrackJetsAuxDyn_OriginVertex_m_persKey, &b_AntiKt4PV0TrackJetsAuxDyn_OriginVertex_m_persKey);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.OriginVertex.m_persIndex", AntiKt4PV0TrackJetsAuxDyn_OriginVertex_m_persIndex, &b_AntiKt4PV0TrackJetsAuxDyn_OriginVertex_m_persIndex);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.Angularity", &AntiKt4PV0TrackJetsAuxDyn_Angularity, &b_AntiKt4PV0TrackJetsAuxDyn_Angularity);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.Aplanarity", &AntiKt4PV0TrackJetsAuxDyn_Aplanarity, &b_AntiKt4PV0TrackJetsAuxDyn_Aplanarity);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.Dip12", &AntiKt4PV0TrackJetsAuxDyn_Dip12, &b_AntiKt4PV0TrackJetsAuxDyn_Dip12);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.Dip13", &AntiKt4PV0TrackJetsAuxDyn_Dip13, &b_AntiKt4PV0TrackJetsAuxDyn_Dip13);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.Dip23", &AntiKt4PV0TrackJetsAuxDyn_Dip23, &b_AntiKt4PV0TrackJetsAuxDyn_Dip23);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.DipExcl12", &AntiKt4PV0TrackJetsAuxDyn_DipExcl12, &b_AntiKt4PV0TrackJetsAuxDyn_DipExcl12);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.ECF1", &AntiKt4PV0TrackJetsAuxDyn_ECF1, &b_AntiKt4PV0TrackJetsAuxDyn_ECF1);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.ECF2", &AntiKt4PV0TrackJetsAuxDyn_ECF2, &b_AntiKt4PV0TrackJetsAuxDyn_ECF2);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.ECF3", &AntiKt4PV0TrackJetsAuxDyn_ECF3, &b_AntiKt4PV0TrackJetsAuxDyn_ECF3);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.FoxWolfram0", &AntiKt4PV0TrackJetsAuxDyn_FoxWolfram0, &b_AntiKt4PV0TrackJetsAuxDyn_FoxWolfram0);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.FoxWolfram1", &AntiKt4PV0TrackJetsAuxDyn_FoxWolfram1, &b_AntiKt4PV0TrackJetsAuxDyn_FoxWolfram1);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.FoxWolfram2", &AntiKt4PV0TrackJetsAuxDyn_FoxWolfram2, &b_AntiKt4PV0TrackJetsAuxDyn_FoxWolfram2);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.FoxWolfram3", &AntiKt4PV0TrackJetsAuxDyn_FoxWolfram3, &b_AntiKt4PV0TrackJetsAuxDyn_FoxWolfram3);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.FoxWolfram4", &AntiKt4PV0TrackJetsAuxDyn_FoxWolfram4, &b_AntiKt4PV0TrackJetsAuxDyn_FoxWolfram4);
   fChain->SetBranchAddress("AntiKt4PV0TrackJetsAuxDyn.GhostTruth", &AntiKt4PV0TrackJetsAuxDyn_GhostTruth, &b_AntiKt4PV0TrackJetsAuxDyn_GhostTruth);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.Tau2", &AntiKt4TruthJetsAuxDyn_Tau2, &b_AntiKt4TruthJetsAuxDyn_Tau2);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.FoxWolfram1", &AntiKt4TruthJetsAuxDyn_FoxWolfram1, &b_AntiKt4TruthJetsAuxDyn_FoxWolfram1);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.Tau3", &AntiKt4TruthJetsAuxDyn_Tau3, &b_AntiKt4TruthJetsAuxDyn_Tau3);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.FoxWolfram2", &AntiKt4TruthJetsAuxDyn_FoxWolfram2, &b_AntiKt4TruthJetsAuxDyn_FoxWolfram2);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ThrustMaj", &AntiKt4TruthJetsAuxDyn_ThrustMaj, &b_AntiKt4TruthJetsAuxDyn_ThrustMaj);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.FoxWolfram3", &AntiKt4TruthJetsAuxDyn_FoxWolfram3, &b_AntiKt4TruthJetsAuxDyn_FoxWolfram3);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ThrustMin", &AntiKt4TruthJetsAuxDyn_ThrustMin, &b_AntiKt4TruthJetsAuxDyn_ThrustMin);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.FoxWolfram4", &AntiKt4TruthJetsAuxDyn_FoxWolfram4, &b_AntiKt4TruthJetsAuxDyn_FoxWolfram4);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.Truth", &AntiKt4TruthJetsAuxDyn_Truth, &b_AntiKt4TruthJetsAuxDyn_Truth);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.TruthCount", &AntiKt4TruthJetsAuxDyn_TruthCount, &b_AntiKt4TruthJetsAuxDyn_TruthCount);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.TruthLabelDeltaR_B", &AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_B, &b_AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_B);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.TruthLabelDeltaR_C", &AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_C, &b_AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_C);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.TruthLabelDeltaR_T", &AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_T, &b_AntiKt4TruthJetsAuxDyn_TruthLabelDeltaR_T);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.TruthLabelID", &AntiKt4TruthJetsAuxDyn_TruthLabelID, &b_AntiKt4TruthJetsAuxDyn_TruthLabelID);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.TruthPt", &AntiKt4TruthJetsAuxDyn_TruthPt, &b_AntiKt4TruthJetsAuxDyn_TruthPt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.Width", &AntiKt4TruthJetsAuxDyn_Width, &b_AntiKt4TruthJetsAuxDyn_Width);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ZCut12", &AntiKt4TruthJetsAuxDyn_ZCut12, &b_AntiKt4TruthJetsAuxDyn_ZCut12);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ZCut23", &AntiKt4TruthJetsAuxDyn_ZCut23, &b_AntiKt4TruthJetsAuxDyn_ZCut23);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ZCut34", &AntiKt4TruthJetsAuxDyn_ZCut34, &b_AntiKt4TruthJetsAuxDyn_ZCut34);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.JetGhostArea", &AntiKt4TruthJetsAuxDyn_JetGhostArea, &b_AntiKt4TruthJetsAuxDyn_JetGhostArea);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.KtDR", &AntiKt4TruthJetsAuxDyn_KtDR, &b_AntiKt4TruthJetsAuxDyn_KtDR);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ConstituentScale", &AntiKt4TruthJetsAuxDyn_ConstituentScale, &b_AntiKt4TruthJetsAuxDyn_ConstituentScale);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.Angularity", &AntiKt4TruthJetsAuxDyn_Angularity, &b_AntiKt4TruthJetsAuxDyn_Angularity);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.Aplanarity", &AntiKt4TruthJetsAuxDyn_Aplanarity, &b_AntiKt4TruthJetsAuxDyn_Aplanarity);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.Mu12", &AntiKt4TruthJetsAuxDyn_Mu12, &b_AntiKt4TruthJetsAuxDyn_Mu12);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.Dip12", &AntiKt4TruthJetsAuxDyn_Dip12, &b_AntiKt4TruthJetsAuxDyn_Dip12);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt4TruthJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.Dip13", &AntiKt4TruthJetsAuxDyn_Dip13, &b_AntiKt4TruthJetsAuxDyn_Dip13);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.InputType", &AntiKt4TruthJetsAuxDyn_InputType, &b_AntiKt4TruthJetsAuxDyn_InputType);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.Dip23", &AntiKt4TruthJetsAuxDyn_Dip23, &b_AntiKt4TruthJetsAuxDyn_Dip23);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.AlgorithmType", &AntiKt4TruthJetsAuxDyn_AlgorithmType, &b_AntiKt4TruthJetsAuxDyn_AlgorithmType);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.DipExcl12", &AntiKt4TruthJetsAuxDyn_DipExcl12, &b_AntiKt4TruthJetsAuxDyn_DipExcl12);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.SizeParameter", &AntiKt4TruthJetsAuxDyn_SizeParameter, &b_AntiKt4TruthJetsAuxDyn_SizeParameter);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ECF1", &AntiKt4TruthJetsAuxDyn_ECF1, &b_AntiKt4TruthJetsAuxDyn_ECF1);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.PlanarFlow", &AntiKt4TruthJetsAuxDyn_PlanarFlow, &b_AntiKt4TruthJetsAuxDyn_PlanarFlow);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ECF2", &AntiKt4TruthJetsAuxDyn_ECF2, &b_AntiKt4TruthJetsAuxDyn_ECF2);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.btaggingLink", &AntiKt4TruthJetsAuxDyn_btaggingLink_, &b_AntiKt4TruthJetsAuxDyn_btaggingLink_);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.btaggingLink.m_persKey", AntiKt4TruthJetsAuxDyn_btaggingLink_m_persKey, &b_AntiKt4TruthJetsAuxDyn_btaggingLink_m_persKey);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.btaggingLink.m_persIndex", AntiKt4TruthJetsAuxDyn_btaggingLink_m_persIndex, &b_AntiKt4TruthJetsAuxDyn_btaggingLink_m_persIndex);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.Sphericity", &AntiKt4TruthJetsAuxDyn_Sphericity, &b_AntiKt4TruthJetsAuxDyn_Sphericity);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.ECF3", &AntiKt4TruthJetsAuxDyn_ECF3, &b_AntiKt4TruthJetsAuxDyn_ECF3);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.Split12", &AntiKt4TruthJetsAuxDyn_Split12, &b_AntiKt4TruthJetsAuxDyn_Split12);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.Split23", &AntiKt4TruthJetsAuxDyn_Split23, &b_AntiKt4TruthJetsAuxDyn_Split23);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.Split34", &AntiKt4TruthJetsAuxDyn_Split34, &b_AntiKt4TruthJetsAuxDyn_Split34);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.Tau1", &AntiKt4TruthJetsAuxDyn_Tau1, &b_AntiKt4TruthJetsAuxDyn_Tau1);
   fChain->SetBranchAddress("AntiKt4TruthJetsAuxDyn.FoxWolfram0", &AntiKt4TruthJetsAuxDyn_FoxWolfram0, &b_AntiKt4TruthJetsAuxDyn_FoxWolfram0);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.JetGhostArea", &AntiKt4TruthWZJetsAuxDyn_JetGhostArea, &b_AntiKt4TruthWZJetsAuxDyn_JetGhostArea);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.KtDR", &AntiKt4TruthWZJetsAuxDyn_KtDR, &b_AntiKt4TruthWZJetsAuxDyn_KtDR);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.Mu12", &AntiKt4TruthWZJetsAuxDyn_Mu12, &b_AntiKt4TruthWZJetsAuxDyn_Mu12);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.PlanarFlow", &AntiKt4TruthWZJetsAuxDyn_PlanarFlow, &b_AntiKt4TruthWZJetsAuxDyn_PlanarFlow);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.Sphericity", &AntiKt4TruthWZJetsAuxDyn_Sphericity, &b_AntiKt4TruthWZJetsAuxDyn_Sphericity);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.Split12", &AntiKt4TruthWZJetsAuxDyn_Split12, &b_AntiKt4TruthWZJetsAuxDyn_Split12);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.Split23", &AntiKt4TruthWZJetsAuxDyn_Split23, &b_AntiKt4TruthWZJetsAuxDyn_Split23);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.Split34", &AntiKt4TruthWZJetsAuxDyn_Split34, &b_AntiKt4TruthWZJetsAuxDyn_Split34);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.ConstituentScale", &AntiKt4TruthWZJetsAuxDyn_ConstituentScale, &b_AntiKt4TruthWZJetsAuxDyn_ConstituentScale);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.Tau1", &AntiKt4TruthWZJetsAuxDyn_Tau1, &b_AntiKt4TruthWZJetsAuxDyn_Tau1);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.Tau2", &AntiKt4TruthWZJetsAuxDyn_Tau2, &b_AntiKt4TruthWZJetsAuxDyn_Tau2);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.Tau3", &AntiKt4TruthWZJetsAuxDyn_Tau3, &b_AntiKt4TruthWZJetsAuxDyn_Tau3);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.ThrustMaj", &AntiKt4TruthWZJetsAuxDyn_ThrustMaj, &b_AntiKt4TruthWZJetsAuxDyn_ThrustMaj);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt4TruthWZJetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt4TruthWZJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.ThrustMin", &AntiKt4TruthWZJetsAuxDyn_ThrustMin, &b_AntiKt4TruthWZJetsAuxDyn_ThrustMin);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt4TruthWZJetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt4TruthWZJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt4TruthWZJetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt4TruthWZJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt4TruthWZJetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt4TruthWZJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.InputType", &AntiKt4TruthWZJetsAuxDyn_InputType, &b_AntiKt4TruthWZJetsAuxDyn_InputType);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.AlgorithmType", &AntiKt4TruthWZJetsAuxDyn_AlgorithmType, &b_AntiKt4TruthWZJetsAuxDyn_AlgorithmType);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.SizeParameter", &AntiKt4TruthWZJetsAuxDyn_SizeParameter, &b_AntiKt4TruthWZJetsAuxDyn_SizeParameter);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.Truth", &AntiKt4TruthWZJetsAuxDyn_Truth, &b_AntiKt4TruthWZJetsAuxDyn_Truth);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.btaggingLink", &AntiKt4TruthWZJetsAuxDyn_btaggingLink_, &b_AntiKt4TruthWZJetsAuxDyn_btaggingLink_);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.btaggingLink.m_persKey", AntiKt4TruthWZJetsAuxDyn_btaggingLink_m_persKey, &b_AntiKt4TruthWZJetsAuxDyn_btaggingLink_m_persKey);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.btaggingLink.m_persIndex", AntiKt4TruthWZJetsAuxDyn_btaggingLink_m_persIndex, &b_AntiKt4TruthWZJetsAuxDyn_btaggingLink_m_persIndex);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.TruthCount", &AntiKt4TruthWZJetsAuxDyn_TruthCount, &b_AntiKt4TruthWZJetsAuxDyn_TruthCount);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.TruthLabelDeltaR_B", &AntiKt4TruthWZJetsAuxDyn_TruthLabelDeltaR_B, &b_AntiKt4TruthWZJetsAuxDyn_TruthLabelDeltaR_B);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.TruthLabelDeltaR_C", &AntiKt4TruthWZJetsAuxDyn_TruthLabelDeltaR_C, &b_AntiKt4TruthWZJetsAuxDyn_TruthLabelDeltaR_C);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.TruthLabelDeltaR_T", &AntiKt4TruthWZJetsAuxDyn_TruthLabelDeltaR_T, &b_AntiKt4TruthWZJetsAuxDyn_TruthLabelDeltaR_T);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.TruthLabelID", &AntiKt4TruthWZJetsAuxDyn_TruthLabelID, &b_AntiKt4TruthWZJetsAuxDyn_TruthLabelID);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.TruthPt", &AntiKt4TruthWZJetsAuxDyn_TruthPt, &b_AntiKt4TruthWZJetsAuxDyn_TruthPt);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.TruthWZ", &AntiKt4TruthWZJetsAuxDyn_TruthWZ, &b_AntiKt4TruthWZJetsAuxDyn_TruthWZ);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.TruthWZCount", &AntiKt4TruthWZJetsAuxDyn_TruthWZCount, &b_AntiKt4TruthWZJetsAuxDyn_TruthWZCount);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.TruthWZPt", &AntiKt4TruthWZJetsAuxDyn_TruthWZPt, &b_AntiKt4TruthWZJetsAuxDyn_TruthWZPt);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.Width", &AntiKt4TruthWZJetsAuxDyn_Width, &b_AntiKt4TruthWZJetsAuxDyn_Width);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.ZCut12", &AntiKt4TruthWZJetsAuxDyn_ZCut12, &b_AntiKt4TruthWZJetsAuxDyn_ZCut12);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.ZCut23", &AntiKt4TruthWZJetsAuxDyn_ZCut23, &b_AntiKt4TruthWZJetsAuxDyn_ZCut23);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.ZCut34", &AntiKt4TruthWZJetsAuxDyn_ZCut34, &b_AntiKt4TruthWZJetsAuxDyn_ZCut34);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.Angularity", &AntiKt4TruthWZJetsAuxDyn_Angularity, &b_AntiKt4TruthWZJetsAuxDyn_Angularity);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.Aplanarity", &AntiKt4TruthWZJetsAuxDyn_Aplanarity, &b_AntiKt4TruthWZJetsAuxDyn_Aplanarity);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.Dip12", &AntiKt4TruthWZJetsAuxDyn_Dip12, &b_AntiKt4TruthWZJetsAuxDyn_Dip12);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.Dip13", &AntiKt4TruthWZJetsAuxDyn_Dip13, &b_AntiKt4TruthWZJetsAuxDyn_Dip13);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.Dip23", &AntiKt4TruthWZJetsAuxDyn_Dip23, &b_AntiKt4TruthWZJetsAuxDyn_Dip23);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.DipExcl12", &AntiKt4TruthWZJetsAuxDyn_DipExcl12, &b_AntiKt4TruthWZJetsAuxDyn_DipExcl12);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.ECF1", &AntiKt4TruthWZJetsAuxDyn_ECF1, &b_AntiKt4TruthWZJetsAuxDyn_ECF1);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.ECF2", &AntiKt4TruthWZJetsAuxDyn_ECF2, &b_AntiKt4TruthWZJetsAuxDyn_ECF2);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.ECF3", &AntiKt4TruthWZJetsAuxDyn_ECF3, &b_AntiKt4TruthWZJetsAuxDyn_ECF3);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.FoxWolfram0", &AntiKt4TruthWZJetsAuxDyn_FoxWolfram0, &b_AntiKt4TruthWZJetsAuxDyn_FoxWolfram0);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.FoxWolfram1", &AntiKt4TruthWZJetsAuxDyn_FoxWolfram1, &b_AntiKt4TruthWZJetsAuxDyn_FoxWolfram1);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.FoxWolfram2", &AntiKt4TruthWZJetsAuxDyn_FoxWolfram2, &b_AntiKt4TruthWZJetsAuxDyn_FoxWolfram2);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.FoxWolfram3", &AntiKt4TruthWZJetsAuxDyn_FoxWolfram3, &b_AntiKt4TruthWZJetsAuxDyn_FoxWolfram3);
   fChain->SetBranchAddress("AntiKt4TruthWZJetsAuxDyn.FoxWolfram4", &AntiKt4TruthWZJetsAuxDyn_FoxWolfram4, &b_AntiKt4TruthWZJetsAuxDyn_FoxWolfram4);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.GhostTruthCount", &AntiKt4ZTrackJetsAuxDyn_GhostTruthCount, &b_AntiKt4ZTrackJetsAuxDyn_GhostTruthCount);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.GhostTruthPt", &AntiKt4ZTrackJetsAuxDyn_GhostTruthPt, &b_AntiKt4ZTrackJetsAuxDyn_GhostTruthPt);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.JetGhostArea", &AntiKt4ZTrackJetsAuxDyn_JetGhostArea, &b_AntiKt4ZTrackJetsAuxDyn_JetGhostArea);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.KtDR", &AntiKt4ZTrackJetsAuxDyn_KtDR, &b_AntiKt4ZTrackJetsAuxDyn_KtDR);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.Mu12", &AntiKt4ZTrackJetsAuxDyn_Mu12, &b_AntiKt4ZTrackJetsAuxDyn_Mu12);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.PlanarFlow", &AntiKt4ZTrackJetsAuxDyn_PlanarFlow, &b_AntiKt4ZTrackJetsAuxDyn_PlanarFlow);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.Sphericity", &AntiKt4ZTrackJetsAuxDyn_Sphericity, &b_AntiKt4ZTrackJetsAuxDyn_Sphericity);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.Split12", &AntiKt4ZTrackJetsAuxDyn_Split12, &b_AntiKt4ZTrackJetsAuxDyn_Split12);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.Split23", &AntiKt4ZTrackJetsAuxDyn_Split23, &b_AntiKt4ZTrackJetsAuxDyn_Split23);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.Split34", &AntiKt4ZTrackJetsAuxDyn_Split34, &b_AntiKt4ZTrackJetsAuxDyn_Split34);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.ConstituentScale", &AntiKt4ZTrackJetsAuxDyn_ConstituentScale, &b_AntiKt4ZTrackJetsAuxDyn_ConstituentScale);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.Tau1", &AntiKt4ZTrackJetsAuxDyn_Tau1, &b_AntiKt4ZTrackJetsAuxDyn_Tau1);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.Tau2", &AntiKt4ZTrackJetsAuxDyn_Tau2, &b_AntiKt4ZTrackJetsAuxDyn_Tau2);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.Tau3", &AntiKt4ZTrackJetsAuxDyn_Tau3, &b_AntiKt4ZTrackJetsAuxDyn_Tau3);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.ThrustMaj", &AntiKt4ZTrackJetsAuxDyn_ThrustMaj, &b_AntiKt4ZTrackJetsAuxDyn_ThrustMaj);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.JetConstitScaleMomentum_pt", &AntiKt4ZTrackJetsAuxDyn_JetConstitScaleMomentum_pt, &b_AntiKt4ZTrackJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.ThrustMin", &AntiKt4ZTrackJetsAuxDyn_ThrustMin, &b_AntiKt4ZTrackJetsAuxDyn_ThrustMin);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.JetConstitScaleMomentum_eta", &AntiKt4ZTrackJetsAuxDyn_JetConstitScaleMomentum_eta, &b_AntiKt4ZTrackJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.JetConstitScaleMomentum_phi", &AntiKt4ZTrackJetsAuxDyn_JetConstitScaleMomentum_phi, &b_AntiKt4ZTrackJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.Track", &AntiKt4ZTrackJetsAuxDyn_Track, &b_AntiKt4ZTrackJetsAuxDyn_Track);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.JetConstitScaleMomentum_m", &AntiKt4ZTrackJetsAuxDyn_JetConstitScaleMomentum_m, &b_AntiKt4ZTrackJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.TrackCount", &AntiKt4ZTrackJetsAuxDyn_TrackCount, &b_AntiKt4ZTrackJetsAuxDyn_TrackCount);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.InputType", &AntiKt4ZTrackJetsAuxDyn_InputType, &b_AntiKt4ZTrackJetsAuxDyn_InputType);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.TrackPt", &AntiKt4ZTrackJetsAuxDyn_TrackPt, &b_AntiKt4ZTrackJetsAuxDyn_TrackPt);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.AlgorithmType", &AntiKt4ZTrackJetsAuxDyn_AlgorithmType, &b_AntiKt4ZTrackJetsAuxDyn_AlgorithmType);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.SizeParameter", &AntiKt4ZTrackJetsAuxDyn_SizeParameter, &b_AntiKt4ZTrackJetsAuxDyn_SizeParameter);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.Truth", &AntiKt4ZTrackJetsAuxDyn_Truth, &b_AntiKt4ZTrackJetsAuxDyn_Truth);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.TruthCount", &AntiKt4ZTrackJetsAuxDyn_TruthCount, &b_AntiKt4ZTrackJetsAuxDyn_TruthCount);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.TruthPt", &AntiKt4ZTrackJetsAuxDyn_TruthPt, &b_AntiKt4ZTrackJetsAuxDyn_TruthPt);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.TruthWZ", &AntiKt4ZTrackJetsAuxDyn_TruthWZ, &b_AntiKt4ZTrackJetsAuxDyn_TruthWZ);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.TruthWZCount", &AntiKt4ZTrackJetsAuxDyn_TruthWZCount, &b_AntiKt4ZTrackJetsAuxDyn_TruthWZCount);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.TruthWZPt", &AntiKt4ZTrackJetsAuxDyn_TruthWZPt, &b_AntiKt4ZTrackJetsAuxDyn_TruthWZPt);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.Width", &AntiKt4ZTrackJetsAuxDyn_Width, &b_AntiKt4ZTrackJetsAuxDyn_Width);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.ZCut12", &AntiKt4ZTrackJetsAuxDyn_ZCut12, &b_AntiKt4ZTrackJetsAuxDyn_ZCut12);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.ZCut23", &AntiKt4ZTrackJetsAuxDyn_ZCut23, &b_AntiKt4ZTrackJetsAuxDyn_ZCut23);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.ZCut34", &AntiKt4ZTrackJetsAuxDyn_ZCut34, &b_AntiKt4ZTrackJetsAuxDyn_ZCut34);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.OriginVertex", &AntiKt4ZTrackJetsAuxDyn_OriginVertex_, &b_AntiKt4ZTrackJetsAuxDyn_OriginVertex_);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.OriginVertex.m_persKey", AntiKt4ZTrackJetsAuxDyn_OriginVertex_m_persKey, &b_AntiKt4ZTrackJetsAuxDyn_OriginVertex_m_persKey);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.OriginVertex.m_persIndex", AntiKt4ZTrackJetsAuxDyn_OriginVertex_m_persIndex, &b_AntiKt4ZTrackJetsAuxDyn_OriginVertex_m_persIndex);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.Angularity", &AntiKt4ZTrackJetsAuxDyn_Angularity, &b_AntiKt4ZTrackJetsAuxDyn_Angularity);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.Aplanarity", &AntiKt4ZTrackJetsAuxDyn_Aplanarity, &b_AntiKt4ZTrackJetsAuxDyn_Aplanarity);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.Dip12", &AntiKt4ZTrackJetsAuxDyn_Dip12, &b_AntiKt4ZTrackJetsAuxDyn_Dip12);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.Dip13", &AntiKt4ZTrackJetsAuxDyn_Dip13, &b_AntiKt4ZTrackJetsAuxDyn_Dip13);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.Dip23", &AntiKt4ZTrackJetsAuxDyn_Dip23, &b_AntiKt4ZTrackJetsAuxDyn_Dip23);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.DipExcl12", &AntiKt4ZTrackJetsAuxDyn_DipExcl12, &b_AntiKt4ZTrackJetsAuxDyn_DipExcl12);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.ECF1", &AntiKt4ZTrackJetsAuxDyn_ECF1, &b_AntiKt4ZTrackJetsAuxDyn_ECF1);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.ECF2", &AntiKt4ZTrackJetsAuxDyn_ECF2, &b_AntiKt4ZTrackJetsAuxDyn_ECF2);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.ECF3", &AntiKt4ZTrackJetsAuxDyn_ECF3, &b_AntiKt4ZTrackJetsAuxDyn_ECF3);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.FoxWolfram0", &AntiKt4ZTrackJetsAuxDyn_FoxWolfram0, &b_AntiKt4ZTrackJetsAuxDyn_FoxWolfram0);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.FoxWolfram1", &AntiKt4ZTrackJetsAuxDyn_FoxWolfram1, &b_AntiKt4ZTrackJetsAuxDyn_FoxWolfram1);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.FoxWolfram2", &AntiKt4ZTrackJetsAuxDyn_FoxWolfram2, &b_AntiKt4ZTrackJetsAuxDyn_FoxWolfram2);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.FoxWolfram3", &AntiKt4ZTrackJetsAuxDyn_FoxWolfram3, &b_AntiKt4ZTrackJetsAuxDyn_FoxWolfram3);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.FoxWolfram4", &AntiKt4ZTrackJetsAuxDyn_FoxWolfram4, &b_AntiKt4ZTrackJetsAuxDyn_FoxWolfram4);
   fChain->SetBranchAddress("AntiKt4ZTrackJetsAuxDyn.GhostTruth", &AntiKt4ZTrackJetsAuxDyn_GhostTruth, &b_AntiKt4ZTrackJetsAuxDyn_GhostTruth);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.BTagTrackToJetAssociator", &BTagging_AntiKt10LCTopoAuxDyn_BTagTrackToJetAssociator, &b_BTagging_AntiKt10LCTopoAuxDyn_BTagTrackToJetAssociator);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.IP2D_flagFromV0ofTracks", &BTagging_AntiKt10LCTopoAuxDyn_IP2D_flagFromV0ofTracks, &b_BTagging_AntiKt10LCTopoAuxDyn_IP2D_flagFromV0ofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.IP2D_gradeOfTracks", &BTagging_AntiKt10LCTopoAuxDyn_IP2D_gradeOfTracks, &b_BTagging_AntiKt10LCTopoAuxDyn_IP2D_gradeOfTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.SV0_TrackParticleLinks", &BTagging_AntiKt10LCTopoAuxDyn_SV0_TrackParticleLinks, &b_BTagging_AntiKt10LCTopoAuxDyn_SV0_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.IP2D_sigD0wrtPVofTracks", &BTagging_AntiKt10LCTopoAuxDyn_IP2D_sigD0wrtPVofTracks, &b_BTagging_AntiKt10LCTopoAuxDyn_IP2D_sigD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.IP2D_valD0wrtPVofTracks", &BTagging_AntiKt10LCTopoAuxDyn_IP2D_valD0wrtPVofTracks, &b_BTagging_AntiKt10LCTopoAuxDyn_IP2D_valD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.SV1_TrackParticleLinks", &BTagging_AntiKt10LCTopoAuxDyn_SV1_TrackParticleLinks, &b_BTagging_AntiKt10LCTopoAuxDyn_SV1_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.IP2D_weightBofTracks", &BTagging_AntiKt10LCTopoAuxDyn_IP2D_weightBofTracks, &b_BTagging_AntiKt10LCTopoAuxDyn_IP2D_weightBofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.IP2D_weightCofTracks", &BTagging_AntiKt10LCTopoAuxDyn_IP2D_weightCofTracks, &b_BTagging_AntiKt10LCTopoAuxDyn_IP2D_weightCofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.IP2D_TrackParticleLinks", &BTagging_AntiKt10LCTopoAuxDyn_IP2D_TrackParticleLinks, &b_BTagging_AntiKt10LCTopoAuxDyn_IP2D_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.IP2D_weightUofTracks", &BTagging_AntiKt10LCTopoAuxDyn_IP2D_weightUofTracks, &b_BTagging_AntiKt10LCTopoAuxDyn_IP2D_weightUofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.IP3D_flagFromV0ofTracks", &BTagging_AntiKt10LCTopoAuxDyn_IP3D_flagFromV0ofTracks, &b_BTagging_AntiKt10LCTopoAuxDyn_IP3D_flagFromV0ofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.IP3D_TrackParticleLinks", &BTagging_AntiKt10LCTopoAuxDyn_IP3D_TrackParticleLinks, &b_BTagging_AntiKt10LCTopoAuxDyn_IP3D_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.IP3D_gradeOfTracks", &BTagging_AntiKt10LCTopoAuxDyn_IP3D_gradeOfTracks, &b_BTagging_AntiKt10LCTopoAuxDyn_IP3D_gradeOfTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.IP3D_sigD0wrtPVofTracks", &BTagging_AntiKt10LCTopoAuxDyn_IP3D_sigD0wrtPVofTracks, &b_BTagging_AntiKt10LCTopoAuxDyn_IP3D_sigD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.IP3D_sigZ0wrtPVofTracks", &BTagging_AntiKt10LCTopoAuxDyn_IP3D_sigZ0wrtPVofTracks, &b_BTagging_AntiKt10LCTopoAuxDyn_IP3D_sigZ0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.IP3D_valD0wrtPVofTracks", &BTagging_AntiKt10LCTopoAuxDyn_IP3D_valD0wrtPVofTracks, &b_BTagging_AntiKt10LCTopoAuxDyn_IP3D_valD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.IP3D_valZ0wrtPVofTracks", &BTagging_AntiKt10LCTopoAuxDyn_IP3D_valZ0wrtPVofTracks, &b_BTagging_AntiKt10LCTopoAuxDyn_IP3D_valZ0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.IP3D_weightBofTracks", &BTagging_AntiKt10LCTopoAuxDyn_IP3D_weightBofTracks, &b_BTagging_AntiKt10LCTopoAuxDyn_IP3D_weightBofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.IP3D_weightCofTracks", &BTagging_AntiKt10LCTopoAuxDyn_IP3D_weightCofTracks, &b_BTagging_AntiKt10LCTopoAuxDyn_IP3D_weightCofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.IP3D_weightUofTracks", &BTagging_AntiKt10LCTopoAuxDyn_IP3D_weightUofTracks, &b_BTagging_AntiKt10LCTopoAuxDyn_IP3D_weightUofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.SV0_N2Tpair", &BTagging_AntiKt10LCTopoAuxDyn_SV0_N2Tpair, &b_BTagging_AntiKt10LCTopoAuxDyn_SV0_N2Tpair);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.SV0_NGTinSvx", &BTagging_AntiKt10LCTopoAuxDyn_SV0_NGTinSvx, &b_BTagging_AntiKt10LCTopoAuxDyn_SV0_NGTinSvx);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.SV0_badTracksIP", &BTagging_AntiKt10LCTopoAuxDyn_SV0_badTracksIP, &b_BTagging_AntiKt10LCTopoAuxDyn_SV0_badTracksIP);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.SV0_efracsvx", &BTagging_AntiKt10LCTopoAuxDyn_SV0_efracsvx, &b_BTagging_AntiKt10LCTopoAuxDyn_SV0_efracsvx);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.SV0_energyTrkInJet", &BTagging_AntiKt10LCTopoAuxDyn_SV0_energyTrkInJet, &b_BTagging_AntiKt10LCTopoAuxDyn_SV0_energyTrkInJet);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.SV0_masssvx", &BTagging_AntiKt10LCTopoAuxDyn_SV0_masssvx, &b_BTagging_AntiKt10LCTopoAuxDyn_SV0_masssvx);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.SV0_normdist", &BTagging_AntiKt10LCTopoAuxDyn_SV0_normdist, &b_BTagging_AntiKt10LCTopoAuxDyn_SV0_normdist);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.SV0_pb", &BTagging_AntiKt10LCTopoAuxDyn_SV0_pb, &b_BTagging_AntiKt10LCTopoAuxDyn_SV0_pb);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.SV0_pc", &BTagging_AntiKt10LCTopoAuxDyn_SV0_pc, &b_BTagging_AntiKt10LCTopoAuxDyn_SV0_pc);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.SV0_pu", &BTagging_AntiKt10LCTopoAuxDyn_SV0_pu, &b_BTagging_AntiKt10LCTopoAuxDyn_SV0_pu);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.SV0_vertices", &BTagging_AntiKt10LCTopoAuxDyn_SV0_vertices, &b_BTagging_AntiKt10LCTopoAuxDyn_SV0_vertices);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.SV1_N2Tpair", &BTagging_AntiKt10LCTopoAuxDyn_SV1_N2Tpair, &b_BTagging_AntiKt10LCTopoAuxDyn_SV1_N2Tpair);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.SV1_NGTinSvx", &BTagging_AntiKt10LCTopoAuxDyn_SV1_NGTinSvx, &b_BTagging_AntiKt10LCTopoAuxDyn_SV1_NGTinSvx);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.SV1_badTracksIP", &BTagging_AntiKt10LCTopoAuxDyn_SV1_badTracksIP, &b_BTagging_AntiKt10LCTopoAuxDyn_SV1_badTracksIP);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.SV1_efracsvx", &BTagging_AntiKt10LCTopoAuxDyn_SV1_efracsvx, &b_BTagging_AntiKt10LCTopoAuxDyn_SV1_efracsvx);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.SV1_energyTrkInJet", &BTagging_AntiKt10LCTopoAuxDyn_SV1_energyTrkInJet, &b_BTagging_AntiKt10LCTopoAuxDyn_SV1_energyTrkInJet);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.SV1_masssvx", &BTagging_AntiKt10LCTopoAuxDyn_SV1_masssvx, &b_BTagging_AntiKt10LCTopoAuxDyn_SV1_masssvx);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.SV1_normdist", &BTagging_AntiKt10LCTopoAuxDyn_SV1_normdist, &b_BTagging_AntiKt10LCTopoAuxDyn_SV1_normdist);
   fChain->SetBranchAddress("BTagging_AntiKt10LCTopoAuxDyn.SV1_vertices", &BTagging_AntiKt10LCTopoAuxDyn_SV1_vertices, &b_BTagging_AntiKt10LCTopoAuxDyn_SV1_vertices);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.BTagTrackToJetAssociator", &BTagging_AntiKt10TruthAuxDyn_BTagTrackToJetAssociator, &b_BTagging_AntiKt10TruthAuxDyn_BTagTrackToJetAssociator);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.IP2D_flagFromV0ofTracks", &BTagging_AntiKt10TruthAuxDyn_IP2D_flagFromV0ofTracks, &b_BTagging_AntiKt10TruthAuxDyn_IP2D_flagFromV0ofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.IP2D_gradeOfTracks", &BTagging_AntiKt10TruthAuxDyn_IP2D_gradeOfTracks, &b_BTagging_AntiKt10TruthAuxDyn_IP2D_gradeOfTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.SV0_TrackParticleLinks", &BTagging_AntiKt10TruthAuxDyn_SV0_TrackParticleLinks, &b_BTagging_AntiKt10TruthAuxDyn_SV0_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.IP2D_sigD0wrtPVofTracks", &BTagging_AntiKt10TruthAuxDyn_IP2D_sigD0wrtPVofTracks, &b_BTagging_AntiKt10TruthAuxDyn_IP2D_sigD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.IP2D_valD0wrtPVofTracks", &BTagging_AntiKt10TruthAuxDyn_IP2D_valD0wrtPVofTracks, &b_BTagging_AntiKt10TruthAuxDyn_IP2D_valD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.SV1_TrackParticleLinks", &BTagging_AntiKt10TruthAuxDyn_SV1_TrackParticleLinks, &b_BTagging_AntiKt10TruthAuxDyn_SV1_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.IP2D_weightBofTracks", &BTagging_AntiKt10TruthAuxDyn_IP2D_weightBofTracks, &b_BTagging_AntiKt10TruthAuxDyn_IP2D_weightBofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.IP2D_weightCofTracks", &BTagging_AntiKt10TruthAuxDyn_IP2D_weightCofTracks, &b_BTagging_AntiKt10TruthAuxDyn_IP2D_weightCofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.IP2D_TrackParticleLinks", &BTagging_AntiKt10TruthAuxDyn_IP2D_TrackParticleLinks, &b_BTagging_AntiKt10TruthAuxDyn_IP2D_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.IP2D_weightUofTracks", &BTagging_AntiKt10TruthAuxDyn_IP2D_weightUofTracks, &b_BTagging_AntiKt10TruthAuxDyn_IP2D_weightUofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.IP3D_flagFromV0ofTracks", &BTagging_AntiKt10TruthAuxDyn_IP3D_flagFromV0ofTracks, &b_BTagging_AntiKt10TruthAuxDyn_IP3D_flagFromV0ofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.IP3D_TrackParticleLinks", &BTagging_AntiKt10TruthAuxDyn_IP3D_TrackParticleLinks, &b_BTagging_AntiKt10TruthAuxDyn_IP3D_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.IP3D_gradeOfTracks", &BTagging_AntiKt10TruthAuxDyn_IP3D_gradeOfTracks, &b_BTagging_AntiKt10TruthAuxDyn_IP3D_gradeOfTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.IP3D_sigD0wrtPVofTracks", &BTagging_AntiKt10TruthAuxDyn_IP3D_sigD0wrtPVofTracks, &b_BTagging_AntiKt10TruthAuxDyn_IP3D_sigD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.IP3D_sigZ0wrtPVofTracks", &BTagging_AntiKt10TruthAuxDyn_IP3D_sigZ0wrtPVofTracks, &b_BTagging_AntiKt10TruthAuxDyn_IP3D_sigZ0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.IP3D_valD0wrtPVofTracks", &BTagging_AntiKt10TruthAuxDyn_IP3D_valD0wrtPVofTracks, &b_BTagging_AntiKt10TruthAuxDyn_IP3D_valD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.IP3D_valZ0wrtPVofTracks", &BTagging_AntiKt10TruthAuxDyn_IP3D_valZ0wrtPVofTracks, &b_BTagging_AntiKt10TruthAuxDyn_IP3D_valZ0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.IP3D_weightBofTracks", &BTagging_AntiKt10TruthAuxDyn_IP3D_weightBofTracks, &b_BTagging_AntiKt10TruthAuxDyn_IP3D_weightBofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.IP3D_weightCofTracks", &BTagging_AntiKt10TruthAuxDyn_IP3D_weightCofTracks, &b_BTagging_AntiKt10TruthAuxDyn_IP3D_weightCofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.IP3D_weightUofTracks", &BTagging_AntiKt10TruthAuxDyn_IP3D_weightUofTracks, &b_BTagging_AntiKt10TruthAuxDyn_IP3D_weightUofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.SV0_N2Tpair", &BTagging_AntiKt10TruthAuxDyn_SV0_N2Tpair, &b_BTagging_AntiKt10TruthAuxDyn_SV0_N2Tpair);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.SV0_NGTinSvx", &BTagging_AntiKt10TruthAuxDyn_SV0_NGTinSvx, &b_BTagging_AntiKt10TruthAuxDyn_SV0_NGTinSvx);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.SV0_badTracksIP", &BTagging_AntiKt10TruthAuxDyn_SV0_badTracksIP, &b_BTagging_AntiKt10TruthAuxDyn_SV0_badTracksIP);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.SV0_efracsvx", &BTagging_AntiKt10TruthAuxDyn_SV0_efracsvx, &b_BTagging_AntiKt10TruthAuxDyn_SV0_efracsvx);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.SV0_energyTrkInJet", &BTagging_AntiKt10TruthAuxDyn_SV0_energyTrkInJet, &b_BTagging_AntiKt10TruthAuxDyn_SV0_energyTrkInJet);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.SV0_masssvx", &BTagging_AntiKt10TruthAuxDyn_SV0_masssvx, &b_BTagging_AntiKt10TruthAuxDyn_SV0_masssvx);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.SV0_normdist", &BTagging_AntiKt10TruthAuxDyn_SV0_normdist, &b_BTagging_AntiKt10TruthAuxDyn_SV0_normdist);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.SV0_pb", &BTagging_AntiKt10TruthAuxDyn_SV0_pb, &b_BTagging_AntiKt10TruthAuxDyn_SV0_pb);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.SV0_pc", &BTagging_AntiKt10TruthAuxDyn_SV0_pc, &b_BTagging_AntiKt10TruthAuxDyn_SV0_pc);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.SV0_pu", &BTagging_AntiKt10TruthAuxDyn_SV0_pu, &b_BTagging_AntiKt10TruthAuxDyn_SV0_pu);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.SV0_vertices", &BTagging_AntiKt10TruthAuxDyn_SV0_vertices, &b_BTagging_AntiKt10TruthAuxDyn_SV0_vertices);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.SV1_N2Tpair", &BTagging_AntiKt10TruthAuxDyn_SV1_N2Tpair, &b_BTagging_AntiKt10TruthAuxDyn_SV1_N2Tpair);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.SV1_NGTinSvx", &BTagging_AntiKt10TruthAuxDyn_SV1_NGTinSvx, &b_BTagging_AntiKt10TruthAuxDyn_SV1_NGTinSvx);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.SV1_badTracksIP", &BTagging_AntiKt10TruthAuxDyn_SV1_badTracksIP, &b_BTagging_AntiKt10TruthAuxDyn_SV1_badTracksIP);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.SV1_efracsvx", &BTagging_AntiKt10TruthAuxDyn_SV1_efracsvx, &b_BTagging_AntiKt10TruthAuxDyn_SV1_efracsvx);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.SV1_energyTrkInJet", &BTagging_AntiKt10TruthAuxDyn_SV1_energyTrkInJet, &b_BTagging_AntiKt10TruthAuxDyn_SV1_energyTrkInJet);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.SV1_masssvx", &BTagging_AntiKt10TruthAuxDyn_SV1_masssvx, &b_BTagging_AntiKt10TruthAuxDyn_SV1_masssvx);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.SV1_normdist", &BTagging_AntiKt10TruthAuxDyn_SV1_normdist, &b_BTagging_AntiKt10TruthAuxDyn_SV1_normdist);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthAuxDyn.SV1_vertices", &BTagging_AntiKt10TruthAuxDyn_SV1_vertices, &b_BTagging_AntiKt10TruthAuxDyn_SV1_vertices);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.BTagTrackToJetAssociator", &BTagging_AntiKt10TruthWZAuxDyn_BTagTrackToJetAssociator, &b_BTagging_AntiKt10TruthWZAuxDyn_BTagTrackToJetAssociator);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.IP2D_flagFromV0ofTracks", &BTagging_AntiKt10TruthWZAuxDyn_IP2D_flagFromV0ofTracks, &b_BTagging_AntiKt10TruthWZAuxDyn_IP2D_flagFromV0ofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.IP2D_gradeOfTracks", &BTagging_AntiKt10TruthWZAuxDyn_IP2D_gradeOfTracks, &b_BTagging_AntiKt10TruthWZAuxDyn_IP2D_gradeOfTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.SV0_TrackParticleLinks", &BTagging_AntiKt10TruthWZAuxDyn_SV0_TrackParticleLinks, &b_BTagging_AntiKt10TruthWZAuxDyn_SV0_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.IP2D_sigD0wrtPVofTracks", &BTagging_AntiKt10TruthWZAuxDyn_IP2D_sigD0wrtPVofTracks, &b_BTagging_AntiKt10TruthWZAuxDyn_IP2D_sigD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.IP2D_valD0wrtPVofTracks", &BTagging_AntiKt10TruthWZAuxDyn_IP2D_valD0wrtPVofTracks, &b_BTagging_AntiKt10TruthWZAuxDyn_IP2D_valD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.SV1_TrackParticleLinks", &BTagging_AntiKt10TruthWZAuxDyn_SV1_TrackParticleLinks, &b_BTagging_AntiKt10TruthWZAuxDyn_SV1_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.IP2D_weightBofTracks", &BTagging_AntiKt10TruthWZAuxDyn_IP2D_weightBofTracks, &b_BTagging_AntiKt10TruthWZAuxDyn_IP2D_weightBofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.IP2D_weightCofTracks", &BTagging_AntiKt10TruthWZAuxDyn_IP2D_weightCofTracks, &b_BTagging_AntiKt10TruthWZAuxDyn_IP2D_weightCofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.IP2D_TrackParticleLinks", &BTagging_AntiKt10TruthWZAuxDyn_IP2D_TrackParticleLinks, &b_BTagging_AntiKt10TruthWZAuxDyn_IP2D_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.IP2D_weightUofTracks", &BTagging_AntiKt10TruthWZAuxDyn_IP2D_weightUofTracks, &b_BTagging_AntiKt10TruthWZAuxDyn_IP2D_weightUofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.IP3D_flagFromV0ofTracks", &BTagging_AntiKt10TruthWZAuxDyn_IP3D_flagFromV0ofTracks, &b_BTagging_AntiKt10TruthWZAuxDyn_IP3D_flagFromV0ofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.IP3D_TrackParticleLinks", &BTagging_AntiKt10TruthWZAuxDyn_IP3D_TrackParticleLinks, &b_BTagging_AntiKt10TruthWZAuxDyn_IP3D_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.IP3D_gradeOfTracks", &BTagging_AntiKt10TruthWZAuxDyn_IP3D_gradeOfTracks, &b_BTagging_AntiKt10TruthWZAuxDyn_IP3D_gradeOfTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.IP3D_sigD0wrtPVofTracks", &BTagging_AntiKt10TruthWZAuxDyn_IP3D_sigD0wrtPVofTracks, &b_BTagging_AntiKt10TruthWZAuxDyn_IP3D_sigD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.IP3D_sigZ0wrtPVofTracks", &BTagging_AntiKt10TruthWZAuxDyn_IP3D_sigZ0wrtPVofTracks, &b_BTagging_AntiKt10TruthWZAuxDyn_IP3D_sigZ0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.IP3D_valD0wrtPVofTracks", &BTagging_AntiKt10TruthWZAuxDyn_IP3D_valD0wrtPVofTracks, &b_BTagging_AntiKt10TruthWZAuxDyn_IP3D_valD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.IP3D_valZ0wrtPVofTracks", &BTagging_AntiKt10TruthWZAuxDyn_IP3D_valZ0wrtPVofTracks, &b_BTagging_AntiKt10TruthWZAuxDyn_IP3D_valZ0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.IP3D_weightBofTracks", &BTagging_AntiKt10TruthWZAuxDyn_IP3D_weightBofTracks, &b_BTagging_AntiKt10TruthWZAuxDyn_IP3D_weightBofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.IP3D_weightCofTracks", &BTagging_AntiKt10TruthWZAuxDyn_IP3D_weightCofTracks, &b_BTagging_AntiKt10TruthWZAuxDyn_IP3D_weightCofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.IP3D_weightUofTracks", &BTagging_AntiKt10TruthWZAuxDyn_IP3D_weightUofTracks, &b_BTagging_AntiKt10TruthWZAuxDyn_IP3D_weightUofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.SV0_N2Tpair", &BTagging_AntiKt10TruthWZAuxDyn_SV0_N2Tpair, &b_BTagging_AntiKt10TruthWZAuxDyn_SV0_N2Tpair);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.SV0_NGTinSvx", &BTagging_AntiKt10TruthWZAuxDyn_SV0_NGTinSvx, &b_BTagging_AntiKt10TruthWZAuxDyn_SV0_NGTinSvx);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.SV0_badTracksIP", &BTagging_AntiKt10TruthWZAuxDyn_SV0_badTracksIP, &b_BTagging_AntiKt10TruthWZAuxDyn_SV0_badTracksIP);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.SV0_efracsvx", &BTagging_AntiKt10TruthWZAuxDyn_SV0_efracsvx, &b_BTagging_AntiKt10TruthWZAuxDyn_SV0_efracsvx);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.SV0_energyTrkInJet", &BTagging_AntiKt10TruthWZAuxDyn_SV0_energyTrkInJet, &b_BTagging_AntiKt10TruthWZAuxDyn_SV0_energyTrkInJet);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.SV0_masssvx", &BTagging_AntiKt10TruthWZAuxDyn_SV0_masssvx, &b_BTagging_AntiKt10TruthWZAuxDyn_SV0_masssvx);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.SV0_normdist", &BTagging_AntiKt10TruthWZAuxDyn_SV0_normdist, &b_BTagging_AntiKt10TruthWZAuxDyn_SV0_normdist);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.SV0_pb", &BTagging_AntiKt10TruthWZAuxDyn_SV0_pb, &b_BTagging_AntiKt10TruthWZAuxDyn_SV0_pb);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.SV0_pc", &BTagging_AntiKt10TruthWZAuxDyn_SV0_pc, &b_BTagging_AntiKt10TruthWZAuxDyn_SV0_pc);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.SV0_pu", &BTagging_AntiKt10TruthWZAuxDyn_SV0_pu, &b_BTagging_AntiKt10TruthWZAuxDyn_SV0_pu);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.SV0_vertices", &BTagging_AntiKt10TruthWZAuxDyn_SV0_vertices, &b_BTagging_AntiKt10TruthWZAuxDyn_SV0_vertices);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.SV1_N2Tpair", &BTagging_AntiKt10TruthWZAuxDyn_SV1_N2Tpair, &b_BTagging_AntiKt10TruthWZAuxDyn_SV1_N2Tpair);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.SV1_NGTinSvx", &BTagging_AntiKt10TruthWZAuxDyn_SV1_NGTinSvx, &b_BTagging_AntiKt10TruthWZAuxDyn_SV1_NGTinSvx);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.SV1_badTracksIP", &BTagging_AntiKt10TruthWZAuxDyn_SV1_badTracksIP, &b_BTagging_AntiKt10TruthWZAuxDyn_SV1_badTracksIP);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.SV1_efracsvx", &BTagging_AntiKt10TruthWZAuxDyn_SV1_efracsvx, &b_BTagging_AntiKt10TruthWZAuxDyn_SV1_efracsvx);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.SV1_energyTrkInJet", &BTagging_AntiKt10TruthWZAuxDyn_SV1_energyTrkInJet, &b_BTagging_AntiKt10TruthWZAuxDyn_SV1_energyTrkInJet);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.SV1_masssvx", &BTagging_AntiKt10TruthWZAuxDyn_SV1_masssvx, &b_BTagging_AntiKt10TruthWZAuxDyn_SV1_masssvx);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.SV1_normdist", &BTagging_AntiKt10TruthWZAuxDyn_SV1_normdist, &b_BTagging_AntiKt10TruthWZAuxDyn_SV1_normdist);
   fChain->SetBranchAddress("BTagging_AntiKt10TruthWZAuxDyn.SV1_vertices", &BTagging_AntiKt10TruthWZAuxDyn_SV1_vertices, &b_BTagging_AntiKt10TruthWZAuxDyn_SV1_vertices);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.BTagTrackToJetAssociator", &BTagging_AntiKt4EMTopoAuxDyn_BTagTrackToJetAssociator, &b_BTagging_AntiKt4EMTopoAuxDyn_BTagTrackToJetAssociator);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.IP2D_flagFromV0ofTracks", &BTagging_AntiKt4EMTopoAuxDyn_IP2D_flagFromV0ofTracks, &b_BTagging_AntiKt4EMTopoAuxDyn_IP2D_flagFromV0ofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.IP2D_gradeOfTracks", &BTagging_AntiKt4EMTopoAuxDyn_IP2D_gradeOfTracks, &b_BTagging_AntiKt4EMTopoAuxDyn_IP2D_gradeOfTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.SV0_TrackParticleLinks", &BTagging_AntiKt4EMTopoAuxDyn_SV0_TrackParticleLinks, &b_BTagging_AntiKt4EMTopoAuxDyn_SV0_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.IP2D_sigD0wrtPVofTracks", &BTagging_AntiKt4EMTopoAuxDyn_IP2D_sigD0wrtPVofTracks, &b_BTagging_AntiKt4EMTopoAuxDyn_IP2D_sigD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.IP2D_valD0wrtPVofTracks", &BTagging_AntiKt4EMTopoAuxDyn_IP2D_valD0wrtPVofTracks, &b_BTagging_AntiKt4EMTopoAuxDyn_IP2D_valD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.SV1_TrackParticleLinks", &BTagging_AntiKt4EMTopoAuxDyn_SV1_TrackParticleLinks, &b_BTagging_AntiKt4EMTopoAuxDyn_SV1_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.IP2D_weightBofTracks", &BTagging_AntiKt4EMTopoAuxDyn_IP2D_weightBofTracks, &b_BTagging_AntiKt4EMTopoAuxDyn_IP2D_weightBofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.IP2D_weightCofTracks", &BTagging_AntiKt4EMTopoAuxDyn_IP2D_weightCofTracks, &b_BTagging_AntiKt4EMTopoAuxDyn_IP2D_weightCofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.IP2D_TrackParticleLinks", &BTagging_AntiKt4EMTopoAuxDyn_IP2D_TrackParticleLinks, &b_BTagging_AntiKt4EMTopoAuxDyn_IP2D_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.IP2D_weightUofTracks", &BTagging_AntiKt4EMTopoAuxDyn_IP2D_weightUofTracks, &b_BTagging_AntiKt4EMTopoAuxDyn_IP2D_weightUofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.IP3D_flagFromV0ofTracks", &BTagging_AntiKt4EMTopoAuxDyn_IP3D_flagFromV0ofTracks, &b_BTagging_AntiKt4EMTopoAuxDyn_IP3D_flagFromV0ofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.IP3D_TrackParticleLinks", &BTagging_AntiKt4EMTopoAuxDyn_IP3D_TrackParticleLinks, &b_BTagging_AntiKt4EMTopoAuxDyn_IP3D_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.IP3D_gradeOfTracks", &BTagging_AntiKt4EMTopoAuxDyn_IP3D_gradeOfTracks, &b_BTagging_AntiKt4EMTopoAuxDyn_IP3D_gradeOfTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.IP3D_sigD0wrtPVofTracks", &BTagging_AntiKt4EMTopoAuxDyn_IP3D_sigD0wrtPVofTracks, &b_BTagging_AntiKt4EMTopoAuxDyn_IP3D_sigD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.IP3D_sigZ0wrtPVofTracks", &BTagging_AntiKt4EMTopoAuxDyn_IP3D_sigZ0wrtPVofTracks, &b_BTagging_AntiKt4EMTopoAuxDyn_IP3D_sigZ0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.IP3D_valD0wrtPVofTracks", &BTagging_AntiKt4EMTopoAuxDyn_IP3D_valD0wrtPVofTracks, &b_BTagging_AntiKt4EMTopoAuxDyn_IP3D_valD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.IP3D_valZ0wrtPVofTracks", &BTagging_AntiKt4EMTopoAuxDyn_IP3D_valZ0wrtPVofTracks, &b_BTagging_AntiKt4EMTopoAuxDyn_IP3D_valZ0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.IP3D_weightBofTracks", &BTagging_AntiKt4EMTopoAuxDyn_IP3D_weightBofTracks, &b_BTagging_AntiKt4EMTopoAuxDyn_IP3D_weightBofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.IP3D_weightCofTracks", &BTagging_AntiKt4EMTopoAuxDyn_IP3D_weightCofTracks, &b_BTagging_AntiKt4EMTopoAuxDyn_IP3D_weightCofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.IP3D_weightUofTracks", &BTagging_AntiKt4EMTopoAuxDyn_IP3D_weightUofTracks, &b_BTagging_AntiKt4EMTopoAuxDyn_IP3D_weightUofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.SV0_N2Tpair", &BTagging_AntiKt4EMTopoAuxDyn_SV0_N2Tpair, &b_BTagging_AntiKt4EMTopoAuxDyn_SV0_N2Tpair);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.SV0_NGTinSvx", &BTagging_AntiKt4EMTopoAuxDyn_SV0_NGTinSvx, &b_BTagging_AntiKt4EMTopoAuxDyn_SV0_NGTinSvx);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.SV0_badTracksIP", &BTagging_AntiKt4EMTopoAuxDyn_SV0_badTracksIP, &b_BTagging_AntiKt4EMTopoAuxDyn_SV0_badTracksIP);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.SV0_efracsvx", &BTagging_AntiKt4EMTopoAuxDyn_SV0_efracsvx, &b_BTagging_AntiKt4EMTopoAuxDyn_SV0_efracsvx);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.SV0_energyTrkInJet", &BTagging_AntiKt4EMTopoAuxDyn_SV0_energyTrkInJet, &b_BTagging_AntiKt4EMTopoAuxDyn_SV0_energyTrkInJet);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.SV0_masssvx", &BTagging_AntiKt4EMTopoAuxDyn_SV0_masssvx, &b_BTagging_AntiKt4EMTopoAuxDyn_SV0_masssvx);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.SV0_normdist", &BTagging_AntiKt4EMTopoAuxDyn_SV0_normdist, &b_BTagging_AntiKt4EMTopoAuxDyn_SV0_normdist);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.SV0_pb", &BTagging_AntiKt4EMTopoAuxDyn_SV0_pb, &b_BTagging_AntiKt4EMTopoAuxDyn_SV0_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.SV0_pc", &BTagging_AntiKt4EMTopoAuxDyn_SV0_pc, &b_BTagging_AntiKt4EMTopoAuxDyn_SV0_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.SV0_pu", &BTagging_AntiKt4EMTopoAuxDyn_SV0_pu, &b_BTagging_AntiKt4EMTopoAuxDyn_SV0_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.SV0_vertices", &BTagging_AntiKt4EMTopoAuxDyn_SV0_vertices, &b_BTagging_AntiKt4EMTopoAuxDyn_SV0_vertices);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.SV1_N2Tpair", &BTagging_AntiKt4EMTopoAuxDyn_SV1_N2Tpair, &b_BTagging_AntiKt4EMTopoAuxDyn_SV1_N2Tpair);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.SV1_NGTinSvx", &BTagging_AntiKt4EMTopoAuxDyn_SV1_NGTinSvx, &b_BTagging_AntiKt4EMTopoAuxDyn_SV1_NGTinSvx);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.SV1_badTracksIP", &BTagging_AntiKt4EMTopoAuxDyn_SV1_badTracksIP, &b_BTagging_AntiKt4EMTopoAuxDyn_SV1_badTracksIP);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.SV1_efracsvx", &BTagging_AntiKt4EMTopoAuxDyn_SV1_efracsvx, &b_BTagging_AntiKt4EMTopoAuxDyn_SV1_efracsvx);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.SV1_energyTrkInJet", &BTagging_AntiKt4EMTopoAuxDyn_SV1_energyTrkInJet, &b_BTagging_AntiKt4EMTopoAuxDyn_SV1_energyTrkInJet);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.SV1_masssvx", &BTagging_AntiKt4EMTopoAuxDyn_SV1_masssvx, &b_BTagging_AntiKt4EMTopoAuxDyn_SV1_masssvx);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.SV1_normdist", &BTagging_AntiKt4EMTopoAuxDyn_SV1_normdist, &b_BTagging_AntiKt4EMTopoAuxDyn_SV1_normdist);
   fChain->SetBranchAddress("BTagging_AntiKt4EMTopoAuxDyn.SV1_vertices", &BTagging_AntiKt4EMTopoAuxDyn_SV1_vertices, &b_BTagging_AntiKt4EMTopoAuxDyn_SV1_vertices);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.BTagTrackToJetAssociator", &BTagging_AntiKt4LCTopoAuxDyn_BTagTrackToJetAssociator, &b_BTagging_AntiKt4LCTopoAuxDyn_BTagTrackToJetAssociator);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.IP2D_flagFromV0ofTracks", &BTagging_AntiKt4LCTopoAuxDyn_IP2D_flagFromV0ofTracks, &b_BTagging_AntiKt4LCTopoAuxDyn_IP2D_flagFromV0ofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.IP2D_gradeOfTracks", &BTagging_AntiKt4LCTopoAuxDyn_IP2D_gradeOfTracks, &b_BTagging_AntiKt4LCTopoAuxDyn_IP2D_gradeOfTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.SV0_TrackParticleLinks", &BTagging_AntiKt4LCTopoAuxDyn_SV0_TrackParticleLinks, &b_BTagging_AntiKt4LCTopoAuxDyn_SV0_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.IP2D_sigD0wrtPVofTracks", &BTagging_AntiKt4LCTopoAuxDyn_IP2D_sigD0wrtPVofTracks, &b_BTagging_AntiKt4LCTopoAuxDyn_IP2D_sigD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.IP2D_valD0wrtPVofTracks", &BTagging_AntiKt4LCTopoAuxDyn_IP2D_valD0wrtPVofTracks, &b_BTagging_AntiKt4LCTopoAuxDyn_IP2D_valD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.SV1_TrackParticleLinks", &BTagging_AntiKt4LCTopoAuxDyn_SV1_TrackParticleLinks, &b_BTagging_AntiKt4LCTopoAuxDyn_SV1_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.IP2D_weightBofTracks", &BTagging_AntiKt4LCTopoAuxDyn_IP2D_weightBofTracks, &b_BTagging_AntiKt4LCTopoAuxDyn_IP2D_weightBofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.IP2D_weightCofTracks", &BTagging_AntiKt4LCTopoAuxDyn_IP2D_weightCofTracks, &b_BTagging_AntiKt4LCTopoAuxDyn_IP2D_weightCofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.IP2D_TrackParticleLinks", &BTagging_AntiKt4LCTopoAuxDyn_IP2D_TrackParticleLinks, &b_BTagging_AntiKt4LCTopoAuxDyn_IP2D_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.IP2D_weightUofTracks", &BTagging_AntiKt4LCTopoAuxDyn_IP2D_weightUofTracks, &b_BTagging_AntiKt4LCTopoAuxDyn_IP2D_weightUofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.IP3D_flagFromV0ofTracks", &BTagging_AntiKt4LCTopoAuxDyn_IP3D_flagFromV0ofTracks, &b_BTagging_AntiKt4LCTopoAuxDyn_IP3D_flagFromV0ofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.IP3D_TrackParticleLinks", &BTagging_AntiKt4LCTopoAuxDyn_IP3D_TrackParticleLinks, &b_BTagging_AntiKt4LCTopoAuxDyn_IP3D_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.IP3D_gradeOfTracks", &BTagging_AntiKt4LCTopoAuxDyn_IP3D_gradeOfTracks, &b_BTagging_AntiKt4LCTopoAuxDyn_IP3D_gradeOfTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.IP3D_sigD0wrtPVofTracks", &BTagging_AntiKt4LCTopoAuxDyn_IP3D_sigD0wrtPVofTracks, &b_BTagging_AntiKt4LCTopoAuxDyn_IP3D_sigD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.IP3D_sigZ0wrtPVofTracks", &BTagging_AntiKt4LCTopoAuxDyn_IP3D_sigZ0wrtPVofTracks, &b_BTagging_AntiKt4LCTopoAuxDyn_IP3D_sigZ0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.IP3D_valD0wrtPVofTracks", &BTagging_AntiKt4LCTopoAuxDyn_IP3D_valD0wrtPVofTracks, &b_BTagging_AntiKt4LCTopoAuxDyn_IP3D_valD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.IP3D_valZ0wrtPVofTracks", &BTagging_AntiKt4LCTopoAuxDyn_IP3D_valZ0wrtPVofTracks, &b_BTagging_AntiKt4LCTopoAuxDyn_IP3D_valZ0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.IP3D_weightBofTracks", &BTagging_AntiKt4LCTopoAuxDyn_IP3D_weightBofTracks, &b_BTagging_AntiKt4LCTopoAuxDyn_IP3D_weightBofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.IP3D_weightCofTracks", &BTagging_AntiKt4LCTopoAuxDyn_IP3D_weightCofTracks, &b_BTagging_AntiKt4LCTopoAuxDyn_IP3D_weightCofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.IP3D_weightUofTracks", &BTagging_AntiKt4LCTopoAuxDyn_IP3D_weightUofTracks, &b_BTagging_AntiKt4LCTopoAuxDyn_IP3D_weightUofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.SV0_N2Tpair", &BTagging_AntiKt4LCTopoAuxDyn_SV0_N2Tpair, &b_BTagging_AntiKt4LCTopoAuxDyn_SV0_N2Tpair);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.SV0_NGTinSvx", &BTagging_AntiKt4LCTopoAuxDyn_SV0_NGTinSvx, &b_BTagging_AntiKt4LCTopoAuxDyn_SV0_NGTinSvx);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.SV0_badTracksIP", &BTagging_AntiKt4LCTopoAuxDyn_SV0_badTracksIP, &b_BTagging_AntiKt4LCTopoAuxDyn_SV0_badTracksIP);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.SV0_efracsvx", &BTagging_AntiKt4LCTopoAuxDyn_SV0_efracsvx, &b_BTagging_AntiKt4LCTopoAuxDyn_SV0_efracsvx);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.SV0_energyTrkInJet", &BTagging_AntiKt4LCTopoAuxDyn_SV0_energyTrkInJet, &b_BTagging_AntiKt4LCTopoAuxDyn_SV0_energyTrkInJet);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.SV0_masssvx", &BTagging_AntiKt4LCTopoAuxDyn_SV0_masssvx, &b_BTagging_AntiKt4LCTopoAuxDyn_SV0_masssvx);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.SV0_normdist", &BTagging_AntiKt4LCTopoAuxDyn_SV0_normdist, &b_BTagging_AntiKt4LCTopoAuxDyn_SV0_normdist);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.SV0_pb", &BTagging_AntiKt4LCTopoAuxDyn_SV0_pb, &b_BTagging_AntiKt4LCTopoAuxDyn_SV0_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.SV0_pc", &BTagging_AntiKt4LCTopoAuxDyn_SV0_pc, &b_BTagging_AntiKt4LCTopoAuxDyn_SV0_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.SV0_pu", &BTagging_AntiKt4LCTopoAuxDyn_SV0_pu, &b_BTagging_AntiKt4LCTopoAuxDyn_SV0_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.SV0_vertices", &BTagging_AntiKt4LCTopoAuxDyn_SV0_vertices, &b_BTagging_AntiKt4LCTopoAuxDyn_SV0_vertices);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.SV1_N2Tpair", &BTagging_AntiKt4LCTopoAuxDyn_SV1_N2Tpair, &b_BTagging_AntiKt4LCTopoAuxDyn_SV1_N2Tpair);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.SV1_NGTinSvx", &BTagging_AntiKt4LCTopoAuxDyn_SV1_NGTinSvx, &b_BTagging_AntiKt4LCTopoAuxDyn_SV1_NGTinSvx);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.SV1_badTracksIP", &BTagging_AntiKt4LCTopoAuxDyn_SV1_badTracksIP, &b_BTagging_AntiKt4LCTopoAuxDyn_SV1_badTracksIP);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.SV1_efracsvx", &BTagging_AntiKt4LCTopoAuxDyn_SV1_efracsvx, &b_BTagging_AntiKt4LCTopoAuxDyn_SV1_efracsvx);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.SV1_energyTrkInJet", &BTagging_AntiKt4LCTopoAuxDyn_SV1_energyTrkInJet, &b_BTagging_AntiKt4LCTopoAuxDyn_SV1_energyTrkInJet);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.SV1_masssvx", &BTagging_AntiKt4LCTopoAuxDyn_SV1_masssvx, &b_BTagging_AntiKt4LCTopoAuxDyn_SV1_masssvx);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.SV1_normdist", &BTagging_AntiKt4LCTopoAuxDyn_SV1_normdist, &b_BTagging_AntiKt4LCTopoAuxDyn_SV1_normdist);
   fChain->SetBranchAddress("BTagging_AntiKt4LCTopoAuxDyn.SV1_vertices", &BTagging_AntiKt4LCTopoAuxDyn_SV1_vertices, &b_BTagging_AntiKt4LCTopoAuxDyn_SV1_vertices);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.BTagTrackToJetAssociator", &BTagging_AntiKt4TruthAuxDyn_BTagTrackToJetAssociator, &b_BTagging_AntiKt4TruthAuxDyn_BTagTrackToJetAssociator);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.IP2D_flagFromV0ofTracks", &BTagging_AntiKt4TruthAuxDyn_IP2D_flagFromV0ofTracks, &b_BTagging_AntiKt4TruthAuxDyn_IP2D_flagFromV0ofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.IP2D_gradeOfTracks", &BTagging_AntiKt4TruthAuxDyn_IP2D_gradeOfTracks, &b_BTagging_AntiKt4TruthAuxDyn_IP2D_gradeOfTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.SV0_TrackParticleLinks", &BTagging_AntiKt4TruthAuxDyn_SV0_TrackParticleLinks, &b_BTagging_AntiKt4TruthAuxDyn_SV0_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.IP2D_sigD0wrtPVofTracks", &BTagging_AntiKt4TruthAuxDyn_IP2D_sigD0wrtPVofTracks, &b_BTagging_AntiKt4TruthAuxDyn_IP2D_sigD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.IP2D_valD0wrtPVofTracks", &BTagging_AntiKt4TruthAuxDyn_IP2D_valD0wrtPVofTracks, &b_BTagging_AntiKt4TruthAuxDyn_IP2D_valD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.SV1_TrackParticleLinks", &BTagging_AntiKt4TruthAuxDyn_SV1_TrackParticleLinks, &b_BTagging_AntiKt4TruthAuxDyn_SV1_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.IP2D_weightBofTracks", &BTagging_AntiKt4TruthAuxDyn_IP2D_weightBofTracks, &b_BTagging_AntiKt4TruthAuxDyn_IP2D_weightBofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.IP2D_weightCofTracks", &BTagging_AntiKt4TruthAuxDyn_IP2D_weightCofTracks, &b_BTagging_AntiKt4TruthAuxDyn_IP2D_weightCofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.IP2D_TrackParticleLinks", &BTagging_AntiKt4TruthAuxDyn_IP2D_TrackParticleLinks, &b_BTagging_AntiKt4TruthAuxDyn_IP2D_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.IP2D_weightUofTracks", &BTagging_AntiKt4TruthAuxDyn_IP2D_weightUofTracks, &b_BTagging_AntiKt4TruthAuxDyn_IP2D_weightUofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.IP3D_flagFromV0ofTracks", &BTagging_AntiKt4TruthAuxDyn_IP3D_flagFromV0ofTracks, &b_BTagging_AntiKt4TruthAuxDyn_IP3D_flagFromV0ofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.IP3D_TrackParticleLinks", &BTagging_AntiKt4TruthAuxDyn_IP3D_TrackParticleLinks, &b_BTagging_AntiKt4TruthAuxDyn_IP3D_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.IP3D_gradeOfTracks", &BTagging_AntiKt4TruthAuxDyn_IP3D_gradeOfTracks, &b_BTagging_AntiKt4TruthAuxDyn_IP3D_gradeOfTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.IP3D_sigD0wrtPVofTracks", &BTagging_AntiKt4TruthAuxDyn_IP3D_sigD0wrtPVofTracks, &b_BTagging_AntiKt4TruthAuxDyn_IP3D_sigD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.IP3D_sigZ0wrtPVofTracks", &BTagging_AntiKt4TruthAuxDyn_IP3D_sigZ0wrtPVofTracks, &b_BTagging_AntiKt4TruthAuxDyn_IP3D_sigZ0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.IP3D_valD0wrtPVofTracks", &BTagging_AntiKt4TruthAuxDyn_IP3D_valD0wrtPVofTracks, &b_BTagging_AntiKt4TruthAuxDyn_IP3D_valD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.IP3D_valZ0wrtPVofTracks", &BTagging_AntiKt4TruthAuxDyn_IP3D_valZ0wrtPVofTracks, &b_BTagging_AntiKt4TruthAuxDyn_IP3D_valZ0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.IP3D_weightBofTracks", &BTagging_AntiKt4TruthAuxDyn_IP3D_weightBofTracks, &b_BTagging_AntiKt4TruthAuxDyn_IP3D_weightBofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.IP3D_weightCofTracks", &BTagging_AntiKt4TruthAuxDyn_IP3D_weightCofTracks, &b_BTagging_AntiKt4TruthAuxDyn_IP3D_weightCofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.IP3D_weightUofTracks", &BTagging_AntiKt4TruthAuxDyn_IP3D_weightUofTracks, &b_BTagging_AntiKt4TruthAuxDyn_IP3D_weightUofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.SV0_N2Tpair", &BTagging_AntiKt4TruthAuxDyn_SV0_N2Tpair, &b_BTagging_AntiKt4TruthAuxDyn_SV0_N2Tpair);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.SV0_NGTinSvx", &BTagging_AntiKt4TruthAuxDyn_SV0_NGTinSvx, &b_BTagging_AntiKt4TruthAuxDyn_SV0_NGTinSvx);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.SV0_badTracksIP", &BTagging_AntiKt4TruthAuxDyn_SV0_badTracksIP, &b_BTagging_AntiKt4TruthAuxDyn_SV0_badTracksIP);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.SV0_efracsvx", &BTagging_AntiKt4TruthAuxDyn_SV0_efracsvx, &b_BTagging_AntiKt4TruthAuxDyn_SV0_efracsvx);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.SV0_energyTrkInJet", &BTagging_AntiKt4TruthAuxDyn_SV0_energyTrkInJet, &b_BTagging_AntiKt4TruthAuxDyn_SV0_energyTrkInJet);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.SV0_masssvx", &BTagging_AntiKt4TruthAuxDyn_SV0_masssvx, &b_BTagging_AntiKt4TruthAuxDyn_SV0_masssvx);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.SV0_normdist", &BTagging_AntiKt4TruthAuxDyn_SV0_normdist, &b_BTagging_AntiKt4TruthAuxDyn_SV0_normdist);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.SV0_pb", &BTagging_AntiKt4TruthAuxDyn_SV0_pb, &b_BTagging_AntiKt4TruthAuxDyn_SV0_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.SV0_pc", &BTagging_AntiKt4TruthAuxDyn_SV0_pc, &b_BTagging_AntiKt4TruthAuxDyn_SV0_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.SV0_pu", &BTagging_AntiKt4TruthAuxDyn_SV0_pu, &b_BTagging_AntiKt4TruthAuxDyn_SV0_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.SV0_vertices", &BTagging_AntiKt4TruthAuxDyn_SV0_vertices, &b_BTagging_AntiKt4TruthAuxDyn_SV0_vertices);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.SV1_N2Tpair", &BTagging_AntiKt4TruthAuxDyn_SV1_N2Tpair, &b_BTagging_AntiKt4TruthAuxDyn_SV1_N2Tpair);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.SV1_NGTinSvx", &BTagging_AntiKt4TruthAuxDyn_SV1_NGTinSvx, &b_BTagging_AntiKt4TruthAuxDyn_SV1_NGTinSvx);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.SV1_badTracksIP", &BTagging_AntiKt4TruthAuxDyn_SV1_badTracksIP, &b_BTagging_AntiKt4TruthAuxDyn_SV1_badTracksIP);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.SV1_efracsvx", &BTagging_AntiKt4TruthAuxDyn_SV1_efracsvx, &b_BTagging_AntiKt4TruthAuxDyn_SV1_efracsvx);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.SV1_energyTrkInJet", &BTagging_AntiKt4TruthAuxDyn_SV1_energyTrkInJet, &b_BTagging_AntiKt4TruthAuxDyn_SV1_energyTrkInJet);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.SV1_masssvx", &BTagging_AntiKt4TruthAuxDyn_SV1_masssvx, &b_BTagging_AntiKt4TruthAuxDyn_SV1_masssvx);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.SV1_normdist", &BTagging_AntiKt4TruthAuxDyn_SV1_normdist, &b_BTagging_AntiKt4TruthAuxDyn_SV1_normdist);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthAuxDyn.SV1_vertices", &BTagging_AntiKt4TruthAuxDyn_SV1_vertices, &b_BTagging_AntiKt4TruthAuxDyn_SV1_vertices);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.BTagTrackToJetAssociator", &BTagging_AntiKt4TruthWZAuxDyn_BTagTrackToJetAssociator, &b_BTagging_AntiKt4TruthWZAuxDyn_BTagTrackToJetAssociator);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.IP2D_flagFromV0ofTracks", &BTagging_AntiKt4TruthWZAuxDyn_IP2D_flagFromV0ofTracks, &b_BTagging_AntiKt4TruthWZAuxDyn_IP2D_flagFromV0ofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.IP2D_gradeOfTracks", &BTagging_AntiKt4TruthWZAuxDyn_IP2D_gradeOfTracks, &b_BTagging_AntiKt4TruthWZAuxDyn_IP2D_gradeOfTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.SV0_TrackParticleLinks", &BTagging_AntiKt4TruthWZAuxDyn_SV0_TrackParticleLinks, &b_BTagging_AntiKt4TruthWZAuxDyn_SV0_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.IP2D_sigD0wrtPVofTracks", &BTagging_AntiKt4TruthWZAuxDyn_IP2D_sigD0wrtPVofTracks, &b_BTagging_AntiKt4TruthWZAuxDyn_IP2D_sigD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.IP2D_valD0wrtPVofTracks", &BTagging_AntiKt4TruthWZAuxDyn_IP2D_valD0wrtPVofTracks, &b_BTagging_AntiKt4TruthWZAuxDyn_IP2D_valD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.SV1_TrackParticleLinks", &BTagging_AntiKt4TruthWZAuxDyn_SV1_TrackParticleLinks, &b_BTagging_AntiKt4TruthWZAuxDyn_SV1_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.IP2D_weightBofTracks", &BTagging_AntiKt4TruthWZAuxDyn_IP2D_weightBofTracks, &b_BTagging_AntiKt4TruthWZAuxDyn_IP2D_weightBofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.IP2D_weightCofTracks", &BTagging_AntiKt4TruthWZAuxDyn_IP2D_weightCofTracks, &b_BTagging_AntiKt4TruthWZAuxDyn_IP2D_weightCofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.IP2D_TrackParticleLinks", &BTagging_AntiKt4TruthWZAuxDyn_IP2D_TrackParticleLinks, &b_BTagging_AntiKt4TruthWZAuxDyn_IP2D_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.IP2D_weightUofTracks", &BTagging_AntiKt4TruthWZAuxDyn_IP2D_weightUofTracks, &b_BTagging_AntiKt4TruthWZAuxDyn_IP2D_weightUofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.IP3D_flagFromV0ofTracks", &BTagging_AntiKt4TruthWZAuxDyn_IP3D_flagFromV0ofTracks, &b_BTagging_AntiKt4TruthWZAuxDyn_IP3D_flagFromV0ofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.IP3D_TrackParticleLinks", &BTagging_AntiKt4TruthWZAuxDyn_IP3D_TrackParticleLinks, &b_BTagging_AntiKt4TruthWZAuxDyn_IP3D_TrackParticleLinks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.IP3D_gradeOfTracks", &BTagging_AntiKt4TruthWZAuxDyn_IP3D_gradeOfTracks, &b_BTagging_AntiKt4TruthWZAuxDyn_IP3D_gradeOfTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.IP3D_sigD0wrtPVofTracks", &BTagging_AntiKt4TruthWZAuxDyn_IP3D_sigD0wrtPVofTracks, &b_BTagging_AntiKt4TruthWZAuxDyn_IP3D_sigD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.IP3D_sigZ0wrtPVofTracks", &BTagging_AntiKt4TruthWZAuxDyn_IP3D_sigZ0wrtPVofTracks, &b_BTagging_AntiKt4TruthWZAuxDyn_IP3D_sigZ0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.IP3D_valD0wrtPVofTracks", &BTagging_AntiKt4TruthWZAuxDyn_IP3D_valD0wrtPVofTracks, &b_BTagging_AntiKt4TruthWZAuxDyn_IP3D_valD0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.IP3D_valZ0wrtPVofTracks", &BTagging_AntiKt4TruthWZAuxDyn_IP3D_valZ0wrtPVofTracks, &b_BTagging_AntiKt4TruthWZAuxDyn_IP3D_valZ0wrtPVofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.IP3D_weightBofTracks", &BTagging_AntiKt4TruthWZAuxDyn_IP3D_weightBofTracks, &b_BTagging_AntiKt4TruthWZAuxDyn_IP3D_weightBofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.IP3D_weightCofTracks", &BTagging_AntiKt4TruthWZAuxDyn_IP3D_weightCofTracks, &b_BTagging_AntiKt4TruthWZAuxDyn_IP3D_weightCofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.IP3D_weightUofTracks", &BTagging_AntiKt4TruthWZAuxDyn_IP3D_weightUofTracks, &b_BTagging_AntiKt4TruthWZAuxDyn_IP3D_weightUofTracks);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.SV0_N2Tpair", &BTagging_AntiKt4TruthWZAuxDyn_SV0_N2Tpair, &b_BTagging_AntiKt4TruthWZAuxDyn_SV0_N2Tpair);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.SV0_NGTinSvx", &BTagging_AntiKt4TruthWZAuxDyn_SV0_NGTinSvx, &b_BTagging_AntiKt4TruthWZAuxDyn_SV0_NGTinSvx);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.SV0_badTracksIP", &BTagging_AntiKt4TruthWZAuxDyn_SV0_badTracksIP, &b_BTagging_AntiKt4TruthWZAuxDyn_SV0_badTracksIP);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.SV0_efracsvx", &BTagging_AntiKt4TruthWZAuxDyn_SV0_efracsvx, &b_BTagging_AntiKt4TruthWZAuxDyn_SV0_efracsvx);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.SV0_energyTrkInJet", &BTagging_AntiKt4TruthWZAuxDyn_SV0_energyTrkInJet, &b_BTagging_AntiKt4TruthWZAuxDyn_SV0_energyTrkInJet);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.SV0_masssvx", &BTagging_AntiKt4TruthWZAuxDyn_SV0_masssvx, &b_BTagging_AntiKt4TruthWZAuxDyn_SV0_masssvx);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.SV0_normdist", &BTagging_AntiKt4TruthWZAuxDyn_SV0_normdist, &b_BTagging_AntiKt4TruthWZAuxDyn_SV0_normdist);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.SV0_pb", &BTagging_AntiKt4TruthWZAuxDyn_SV0_pb, &b_BTagging_AntiKt4TruthWZAuxDyn_SV0_pb);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.SV0_pc", &BTagging_AntiKt4TruthWZAuxDyn_SV0_pc, &b_BTagging_AntiKt4TruthWZAuxDyn_SV0_pc);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.SV0_pu", &BTagging_AntiKt4TruthWZAuxDyn_SV0_pu, &b_BTagging_AntiKt4TruthWZAuxDyn_SV0_pu);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.SV0_vertices", &BTagging_AntiKt4TruthWZAuxDyn_SV0_vertices, &b_BTagging_AntiKt4TruthWZAuxDyn_SV0_vertices);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.SV1_N2Tpair", &BTagging_AntiKt4TruthWZAuxDyn_SV1_N2Tpair, &b_BTagging_AntiKt4TruthWZAuxDyn_SV1_N2Tpair);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.SV1_NGTinSvx", &BTagging_AntiKt4TruthWZAuxDyn_SV1_NGTinSvx, &b_BTagging_AntiKt4TruthWZAuxDyn_SV1_NGTinSvx);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.SV1_badTracksIP", &BTagging_AntiKt4TruthWZAuxDyn_SV1_badTracksIP, &b_BTagging_AntiKt4TruthWZAuxDyn_SV1_badTracksIP);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.SV1_efracsvx", &BTagging_AntiKt4TruthWZAuxDyn_SV1_efracsvx, &b_BTagging_AntiKt4TruthWZAuxDyn_SV1_efracsvx);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.SV1_energyTrkInJet", &BTagging_AntiKt4TruthWZAuxDyn_SV1_energyTrkInJet, &b_BTagging_AntiKt4TruthWZAuxDyn_SV1_energyTrkInJet);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.SV1_masssvx", &BTagging_AntiKt4TruthWZAuxDyn_SV1_masssvx, &b_BTagging_AntiKt4TruthWZAuxDyn_SV1_masssvx);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.SV1_normdist", &BTagging_AntiKt4TruthWZAuxDyn_SV1_normdist, &b_BTagging_AntiKt4TruthWZAuxDyn_SV1_normdist);
   fChain->SetBranchAddress("BTagging_AntiKt4TruthWZAuxDyn.SV1_vertices", &BTagging_AntiKt4TruthWZAuxDyn_SV1_vertices, &b_BTagging_AntiKt4TruthWZAuxDyn_SV1_vertices);
   fChain->SetBranchAddress("CaloCalTopoClusterAuxDyn.FIRST_ENG_DENS", &CaloCalTopoClusterAuxDyn_FIRST_ENG_DENS, &b_CaloCalTopoClusterAuxDyn_FIRST_ENG_DENS);
   fChain->SetBranchAddress("CaloCalTopoClusterAuxDyn.ISOLATION", &CaloCalTopoClusterAuxDyn_ISOLATION, &b_CaloCalTopoClusterAuxDyn_ISOLATION);
   fChain->SetBranchAddress("CaloCalTopoClusterAuxDyn.LATERAL", &CaloCalTopoClusterAuxDyn_LATERAL, &b_CaloCalTopoClusterAuxDyn_LATERAL);
   fChain->SetBranchAddress("CaloCalTopoClusterAuxDyn.LONGITUDINAL", &CaloCalTopoClusterAuxDyn_LONGITUDINAL, &b_CaloCalTopoClusterAuxDyn_LONGITUDINAL);
   fChain->SetBranchAddress("CaloCalTopoClusterAuxDyn.N_BAD_CELLS", &CaloCalTopoClusterAuxDyn_N_BAD_CELLS, &b_CaloCalTopoClusterAuxDyn_N_BAD_CELLS);
   fChain->SetBranchAddress("CaloCalTopoClusterAuxDyn.SECOND_LAMBDA", &CaloCalTopoClusterAuxDyn_SECOND_LAMBDA, &b_CaloCalTopoClusterAuxDyn_SECOND_LAMBDA);
   fChain->SetBranchAddress("CaloCalTopoClusterAuxDyn.SECOND_R", &CaloCalTopoClusterAuxDyn_SECOND_R, &b_CaloCalTopoClusterAuxDyn_SECOND_R);
   fChain->SetBranchAddress("CaloCalTopoClusterAuxDyn.SIGNIFICANCE", &CaloCalTopoClusterAuxDyn_SIGNIFICANCE, &b_CaloCalTopoClusterAuxDyn_SIGNIFICANCE);
   fChain->SetBranchAddress("CaloCalTopoClusterAuxDyn.AVG_LAR_Q", &CaloCalTopoClusterAuxDyn_AVG_LAR_Q, &b_CaloCalTopoClusterAuxDyn_AVG_LAR_Q);
   fChain->SetBranchAddress("CaloCalTopoClusterAuxDyn.AVG_TILE_Q", &CaloCalTopoClusterAuxDyn_AVG_TILE_Q, &b_CaloCalTopoClusterAuxDyn_AVG_TILE_Q);
   fChain->SetBranchAddress("CaloCalTopoClusterAuxDyn.BADLARQ_FRAC", &CaloCalTopoClusterAuxDyn_BADLARQ_FRAC, &b_CaloCalTopoClusterAuxDyn_BADLARQ_FRAC);
   fChain->SetBranchAddress("CaloCalTopoClusterAuxDyn.BadChannelList", &CaloCalTopoClusterAuxDyn_BadChannelList, &b_CaloCalTopoClusterAuxDyn_BadChannelList);
   fChain->SetBranchAddress("CaloCalTopoClusterAuxDyn.CELL_SIGNIFICANCE", &CaloCalTopoClusterAuxDyn_CELL_SIGNIFICANCE, &b_CaloCalTopoClusterAuxDyn_CELL_SIGNIFICANCE);
   fChain->SetBranchAddress("CaloCalTopoClusterAuxDyn.CELL_SIG_SAMPLING", &CaloCalTopoClusterAuxDyn_CELL_SIG_SAMPLING, &b_CaloCalTopoClusterAuxDyn_CELL_SIG_SAMPLING);
   fChain->SetBranchAddress("CaloCalTopoClusterAuxDyn.CENTER_LAMBDA", &CaloCalTopoClusterAuxDyn_CENTER_LAMBDA, &b_CaloCalTopoClusterAuxDyn_CENTER_LAMBDA);
   fChain->SetBranchAddress("CaloCalTopoClusterAuxDyn.CENTER_MAG", &CaloCalTopoClusterAuxDyn_CENTER_MAG, &b_CaloCalTopoClusterAuxDyn_CENTER_MAG);
   fChain->SetBranchAddress("CaloCalTopoClusterAuxDyn.EM_PROBABILITY", &CaloCalTopoClusterAuxDyn_EM_PROBABILITY, &b_CaloCalTopoClusterAuxDyn_EM_PROBABILITY);
   fChain->SetBranchAddress("CaloCalTopoClusterAuxDyn.ENG_BAD_CELLS", &CaloCalTopoClusterAuxDyn_ENG_BAD_CELLS, &b_CaloCalTopoClusterAuxDyn_ENG_BAD_CELLS);
   fChain->SetBranchAddress("CaloCalTopoClusterAuxDyn.ENG_FRAC_MAX", &CaloCalTopoClusterAuxDyn_ENG_FRAC_MAX, &b_CaloCalTopoClusterAuxDyn_ENG_FRAC_MAX);
   fChain->SetBranchAddress("CaloCalTopoClusterAuxDyn.ENG_POS", &CaloCalTopoClusterAuxDyn_ENG_POS, &b_CaloCalTopoClusterAuxDyn_ENG_POS);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.N90Constituents", &CamKt12LCTopoJetsAuxDyn_N90Constituents, &b_CamKt12LCTopoJetsAuxDyn_N90Constituents);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.NegativeE", &CamKt12LCTopoJetsAuxDyn_NegativeE, &b_CamKt12LCTopoJetsAuxDyn_NegativeE);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.NumTrkPt1000", &CamKt12LCTopoJetsAuxDyn_NumTrkPt1000, &b_CamKt12LCTopoJetsAuxDyn_NumTrkPt1000);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.NumTrkPt500", &CamKt12LCTopoJetsAuxDyn_NumTrkPt500, &b_CamKt12LCTopoJetsAuxDyn_NumTrkPt500);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.OotFracClusters10", &CamKt12LCTopoJetsAuxDyn_OotFracClusters10, &b_CamKt12LCTopoJetsAuxDyn_OotFracClusters10);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.OotFracClusters5", &CamKt12LCTopoJetsAuxDyn_OotFracClusters5, &b_CamKt12LCTopoJetsAuxDyn_OotFracClusters5);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.PlanarFlow", &CamKt12LCTopoJetsAuxDyn_PlanarFlow, &b_CamKt12LCTopoJetsAuxDyn_PlanarFlow);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.Sphericity", &CamKt12LCTopoJetsAuxDyn_Sphericity, &b_CamKt12LCTopoJetsAuxDyn_Sphericity);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.Split12", &CamKt12LCTopoJetsAuxDyn_Split12, &b_CamKt12LCTopoJetsAuxDyn_Split12);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.Split23", &CamKt12LCTopoJetsAuxDyn_Split23, &b_CamKt12LCTopoJetsAuxDyn_Split23);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.Split34", &CamKt12LCTopoJetsAuxDyn_Split34, &b_CamKt12LCTopoJetsAuxDyn_Split34);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.SumPtTrkPt1000", &CamKt12LCTopoJetsAuxDyn_SumPtTrkPt1000, &b_CamKt12LCTopoJetsAuxDyn_SumPtTrkPt1000);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.SumPtTrkPt500", &CamKt12LCTopoJetsAuxDyn_SumPtTrkPt500, &b_CamKt12LCTopoJetsAuxDyn_SumPtTrkPt500);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.Tau1", &CamKt12LCTopoJetsAuxDyn_Tau1, &b_CamKt12LCTopoJetsAuxDyn_Tau1);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.Tau2", &CamKt12LCTopoJetsAuxDyn_Tau2, &b_CamKt12LCTopoJetsAuxDyn_Tau2);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.Tau3", &CamKt12LCTopoJetsAuxDyn_Tau3, &b_CamKt12LCTopoJetsAuxDyn_Tau3);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.ThrustMaj", &CamKt12LCTopoJetsAuxDyn_ThrustMaj, &b_CamKt12LCTopoJetsAuxDyn_ThrustMaj);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.ThrustMin", &CamKt12LCTopoJetsAuxDyn_ThrustMin, &b_CamKt12LCTopoJetsAuxDyn_ThrustMin);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.Timing", &CamKt12LCTopoJetsAuxDyn_Timing, &b_CamKt12LCTopoJetsAuxDyn_Timing);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.Track", &CamKt12LCTopoJetsAuxDyn_Track, &b_CamKt12LCTopoJetsAuxDyn_Track);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.TrackCount", &CamKt12LCTopoJetsAuxDyn_TrackCount, &b_CamKt12LCTopoJetsAuxDyn_TrackCount);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.TrackPt", &CamKt12LCTopoJetsAuxDyn_TrackPt, &b_CamKt12LCTopoJetsAuxDyn_TrackPt);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.TrackWidthPt1000", &CamKt12LCTopoJetsAuxDyn_TrackWidthPt1000, &b_CamKt12LCTopoJetsAuxDyn_TrackWidthPt1000);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.TrackWidthPt500", &CamKt12LCTopoJetsAuxDyn_TrackWidthPt500, &b_CamKt12LCTopoJetsAuxDyn_TrackWidthPt500);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.Truth", &CamKt12LCTopoJetsAuxDyn_Truth, &b_CamKt12LCTopoJetsAuxDyn_Truth);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.TruthCount", &CamKt12LCTopoJetsAuxDyn_TruthCount, &b_CamKt12LCTopoJetsAuxDyn_TruthCount);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.ConstituentScale", &CamKt12LCTopoJetsAuxDyn_ConstituentScale, &b_CamKt12LCTopoJetsAuxDyn_ConstituentScale);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.JetEMScaleMomentum_pt", &CamKt12LCTopoJetsAuxDyn_JetEMScaleMomentum_pt, &b_CamKt12LCTopoJetsAuxDyn_JetEMScaleMomentum_pt);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.JetEMScaleMomentum_eta", &CamKt12LCTopoJetsAuxDyn_JetEMScaleMomentum_eta, &b_CamKt12LCTopoJetsAuxDyn_JetEMScaleMomentum_eta);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.TruthPt", &CamKt12LCTopoJetsAuxDyn_TruthPt, &b_CamKt12LCTopoJetsAuxDyn_TruthPt);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.JetEMScaleMomentum_phi", &CamKt12LCTopoJetsAuxDyn_JetEMScaleMomentum_phi, &b_CamKt12LCTopoJetsAuxDyn_JetEMScaleMomentum_phi);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.TruthWZ", &CamKt12LCTopoJetsAuxDyn_TruthWZ, &b_CamKt12LCTopoJetsAuxDyn_TruthWZ);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.JetEMScaleMomentum_m", &CamKt12LCTopoJetsAuxDyn_JetEMScaleMomentum_m, &b_CamKt12LCTopoJetsAuxDyn_JetEMScaleMomentum_m);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.TruthWZCount", &CamKt12LCTopoJetsAuxDyn_TruthWZCount, &b_CamKt12LCTopoJetsAuxDyn_TruthWZCount);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.JetConstitScaleMomentum_pt", &CamKt12LCTopoJetsAuxDyn_JetConstitScaleMomentum_pt, &b_CamKt12LCTopoJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.TruthWZPt", &CamKt12LCTopoJetsAuxDyn_TruthWZPt, &b_CamKt12LCTopoJetsAuxDyn_TruthWZPt);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.JetConstitScaleMomentum_eta", &CamKt12LCTopoJetsAuxDyn_JetConstitScaleMomentum_eta, &b_CamKt12LCTopoJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.Width", &CamKt12LCTopoJetsAuxDyn_Width, &b_CamKt12LCTopoJetsAuxDyn_Width);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.JetConstitScaleMomentum_phi", &CamKt12LCTopoJetsAuxDyn_JetConstitScaleMomentum_phi, &b_CamKt12LCTopoJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.ZCut12", &CamKt12LCTopoJetsAuxDyn_ZCut12, &b_CamKt12LCTopoJetsAuxDyn_ZCut12);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.JetConstitScaleMomentum_m", &CamKt12LCTopoJetsAuxDyn_JetConstitScaleMomentum_m, &b_CamKt12LCTopoJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.ZCut23", &CamKt12LCTopoJetsAuxDyn_ZCut23, &b_CamKt12LCTopoJetsAuxDyn_ZCut23);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.InputType", &CamKt12LCTopoJetsAuxDyn_InputType, &b_CamKt12LCTopoJetsAuxDyn_InputType);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.ZCut34", &CamKt12LCTopoJetsAuxDyn_ZCut34, &b_CamKt12LCTopoJetsAuxDyn_ZCut34);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.AlgorithmType", &CamKt12LCTopoJetsAuxDyn_AlgorithmType, &b_CamKt12LCTopoJetsAuxDyn_AlgorithmType);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.SizeParameter", &CamKt12LCTopoJetsAuxDyn_SizeParameter, &b_CamKt12LCTopoJetsAuxDyn_SizeParameter);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.ActiveArea", &CamKt12LCTopoJetsAuxDyn_ActiveArea, &b_CamKt12LCTopoJetsAuxDyn_ActiveArea);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.ActiveArea4vec_eta", &CamKt12LCTopoJetsAuxDyn_ActiveArea4vec_eta, &b_CamKt12LCTopoJetsAuxDyn_ActiveArea4vec_eta);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.ActiveArea4vec_m", &CamKt12LCTopoJetsAuxDyn_ActiveArea4vec_m, &b_CamKt12LCTopoJetsAuxDyn_ActiveArea4vec_m);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.ActiveArea4vec_phi", &CamKt12LCTopoJetsAuxDyn_ActiveArea4vec_phi, &b_CamKt12LCTopoJetsAuxDyn_ActiveArea4vec_phi);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.ActiveArea4vec_pt", &CamKt12LCTopoJetsAuxDyn_ActiveArea4vec_pt, &b_CamKt12LCTopoJetsAuxDyn_ActiveArea4vec_pt);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.Angularity", &CamKt12LCTopoJetsAuxDyn_Angularity, &b_CamKt12LCTopoJetsAuxDyn_Angularity);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.Aplanarity", &CamKt12LCTopoJetsAuxDyn_Aplanarity, &b_CamKt12LCTopoJetsAuxDyn_Aplanarity);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.AverageLArQF", &CamKt12LCTopoJetsAuxDyn_AverageLArQF, &b_CamKt12LCTopoJetsAuxDyn_AverageLArQF);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.BchCorrCell", &CamKt12LCTopoJetsAuxDyn_BchCorrCell, &b_CamKt12LCTopoJetsAuxDyn_BchCorrCell);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.CentroidR", &CamKt12LCTopoJetsAuxDyn_CentroidR, &b_CamKt12LCTopoJetsAuxDyn_CentroidR);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.Dip12", &CamKt12LCTopoJetsAuxDyn_Dip12, &b_CamKt12LCTopoJetsAuxDyn_Dip12);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.Dip13", &CamKt12LCTopoJetsAuxDyn_Dip13, &b_CamKt12LCTopoJetsAuxDyn_Dip13);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.Dip23", &CamKt12LCTopoJetsAuxDyn_Dip23, &b_CamKt12LCTopoJetsAuxDyn_Dip23);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.DipExcl12", &CamKt12LCTopoJetsAuxDyn_DipExcl12, &b_CamKt12LCTopoJetsAuxDyn_DipExcl12);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.ECF1", &CamKt12LCTopoJetsAuxDyn_ECF1, &b_CamKt12LCTopoJetsAuxDyn_ECF1);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.ECF2", &CamKt12LCTopoJetsAuxDyn_ECF2, &b_CamKt12LCTopoJetsAuxDyn_ECF2);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.ECF3", &CamKt12LCTopoJetsAuxDyn_ECF3, &b_CamKt12LCTopoJetsAuxDyn_ECF3);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.EMFrac", &CamKt12LCTopoJetsAuxDyn_EMFrac, &b_CamKt12LCTopoJetsAuxDyn_EMFrac);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.EMTopo", &CamKt12LCTopoJetsAuxDyn_EMTopo, &b_CamKt12LCTopoJetsAuxDyn_EMTopo);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.EMTopoCount", &CamKt12LCTopoJetsAuxDyn_EMTopoCount, &b_CamKt12LCTopoJetsAuxDyn_EMTopoCount);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.EMTopoPt", &CamKt12LCTopoJetsAuxDyn_EMTopoPt, &b_CamKt12LCTopoJetsAuxDyn_EMTopoPt);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.EnergyPerSampling", &CamKt12LCTopoJetsAuxDyn_EnergyPerSampling, &b_CamKt12LCTopoJetsAuxDyn_EnergyPerSampling);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.FoxWolfram0", &CamKt12LCTopoJetsAuxDyn_FoxWolfram0, &b_CamKt12LCTopoJetsAuxDyn_FoxWolfram0);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.FoxWolfram1", &CamKt12LCTopoJetsAuxDyn_FoxWolfram1, &b_CamKt12LCTopoJetsAuxDyn_FoxWolfram1);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.FoxWolfram2", &CamKt12LCTopoJetsAuxDyn_FoxWolfram2, &b_CamKt12LCTopoJetsAuxDyn_FoxWolfram2);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.FoxWolfram3", &CamKt12LCTopoJetsAuxDyn_FoxWolfram3, &b_CamKt12LCTopoJetsAuxDyn_FoxWolfram3);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.FoxWolfram4", &CamKt12LCTopoJetsAuxDyn_FoxWolfram4, &b_CamKt12LCTopoJetsAuxDyn_FoxWolfram4);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.FracSamplingMax", &CamKt12LCTopoJetsAuxDyn_FracSamplingMax, &b_CamKt12LCTopoJetsAuxDyn_FracSamplingMax);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.FracSamplingMaxIndex", &CamKt12LCTopoJetsAuxDyn_FracSamplingMaxIndex, &b_CamKt12LCTopoJetsAuxDyn_FracSamplingMaxIndex);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.GhostAntiKt3TrackJet", &CamKt12LCTopoJetsAuxDyn_GhostAntiKt3TrackJet, &b_CamKt12LCTopoJetsAuxDyn_GhostAntiKt3TrackJet);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.GhostAntiKt3TrackJetCount", &CamKt12LCTopoJetsAuxDyn_GhostAntiKt3TrackJetCount, &b_CamKt12LCTopoJetsAuxDyn_GhostAntiKt3TrackJetCount);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.GhostAntiKt3TrackJetPt", &CamKt12LCTopoJetsAuxDyn_GhostAntiKt3TrackJetPt, &b_CamKt12LCTopoJetsAuxDyn_GhostAntiKt3TrackJetPt);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.GhostAntiKt4TrackJet", &CamKt12LCTopoJetsAuxDyn_GhostAntiKt4TrackJet, &b_CamKt12LCTopoJetsAuxDyn_GhostAntiKt4TrackJet);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.GhostAntiKt4TrackJetCount", &CamKt12LCTopoJetsAuxDyn_GhostAntiKt4TrackJetCount, &b_CamKt12LCTopoJetsAuxDyn_GhostAntiKt4TrackJetCount);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.GhostAntiKt4TrackJetPt", &CamKt12LCTopoJetsAuxDyn_GhostAntiKt4TrackJetPt, &b_CamKt12LCTopoJetsAuxDyn_GhostAntiKt4TrackJetPt);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.GhostMuonSegment", &CamKt12LCTopoJetsAuxDyn_GhostMuonSegment, &b_CamKt12LCTopoJetsAuxDyn_GhostMuonSegment);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.GhostMuonSegmentCount", &CamKt12LCTopoJetsAuxDyn_GhostMuonSegmentCount, &b_CamKt12LCTopoJetsAuxDyn_GhostMuonSegmentCount);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.GhostTrack", &CamKt12LCTopoJetsAuxDyn_GhostTrack, &b_CamKt12LCTopoJetsAuxDyn_GhostTrack);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.GhostTrackCount", &CamKt12LCTopoJetsAuxDyn_GhostTrackCount, &b_CamKt12LCTopoJetsAuxDyn_GhostTrackCount);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.GhostTrackPt", &CamKt12LCTopoJetsAuxDyn_GhostTrackPt, &b_CamKt12LCTopoJetsAuxDyn_GhostTrackPt);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.GhostTruth", &CamKt12LCTopoJetsAuxDyn_GhostTruth, &b_CamKt12LCTopoJetsAuxDyn_GhostTruth);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.GhostTruthAssociationFraction", &CamKt12LCTopoJetsAuxDyn_GhostTruthAssociationFraction, &b_CamKt12LCTopoJetsAuxDyn_GhostTruthAssociationFraction);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.GhostTruthAssociationLink", &CamKt12LCTopoJetsAuxDyn_GhostTruthAssociationLink_, &b_CamKt12LCTopoJetsAuxDyn_GhostTruthAssociationLink_);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.GhostTruthAssociationLink.m_persKey", CamKt12LCTopoJetsAuxDyn_GhostTruthAssociationLink_m_persKey, &b_CamKt12LCTopoJetsAuxDyn_GhostTruthAssociationLink_m_persKey);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.GhostTruthAssociationLink.m_persIndex", CamKt12LCTopoJetsAuxDyn_GhostTruthAssociationLink_m_persIndex, &b_CamKt12LCTopoJetsAuxDyn_GhostTruthAssociationLink_m_persIndex);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.GhostTruthCount", &CamKt12LCTopoJetsAuxDyn_GhostTruthCount, &b_CamKt12LCTopoJetsAuxDyn_GhostTruthCount);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.GhostTruthPt", &CamKt12LCTopoJetsAuxDyn_GhostTruthPt, &b_CamKt12LCTopoJetsAuxDyn_GhostTruthPt);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.HECFrac", &CamKt12LCTopoJetsAuxDyn_HECFrac, &b_CamKt12LCTopoJetsAuxDyn_HECFrac);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.HECQuality", &CamKt12LCTopoJetsAuxDyn_HECQuality, &b_CamKt12LCTopoJetsAuxDyn_HECQuality);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.HighestJVFVtx", &CamKt12LCTopoJetsAuxDyn_HighestJVFVtx_, &b_CamKt12LCTopoJetsAuxDyn_HighestJVFVtx_);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.HighestJVFVtx.m_persKey", CamKt12LCTopoJetsAuxDyn_HighestJVFVtx_m_persKey, &b_CamKt12LCTopoJetsAuxDyn_HighestJVFVtx_m_persKey);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.HighestJVFVtx.m_persIndex", CamKt12LCTopoJetsAuxDyn_HighestJVFVtx_m_persIndex, &b_CamKt12LCTopoJetsAuxDyn_HighestJVFVtx_m_persIndex);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.JVF", &CamKt12LCTopoJetsAuxDyn_JVF, &b_CamKt12LCTopoJetsAuxDyn_JVF);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.JetGhostArea", &CamKt12LCTopoJetsAuxDyn_JetGhostArea, &b_CamKt12LCTopoJetsAuxDyn_JetGhostArea);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.KtDR", &CamKt12LCTopoJetsAuxDyn_KtDR, &b_CamKt12LCTopoJetsAuxDyn_KtDR);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.LArQuality", &CamKt12LCTopoJetsAuxDyn_LArQuality, &b_CamKt12LCTopoJetsAuxDyn_LArQuality);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.LCTopo", &CamKt12LCTopoJetsAuxDyn_LCTopo, &b_CamKt12LCTopoJetsAuxDyn_LCTopo);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.LCTopoCount", &CamKt12LCTopoJetsAuxDyn_LCTopoCount, &b_CamKt12LCTopoJetsAuxDyn_LCTopoCount);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.LCTopoPt", &CamKt12LCTopoJetsAuxDyn_LCTopoPt, &b_CamKt12LCTopoJetsAuxDyn_LCTopoPt);
   fChain->SetBranchAddress("CamKt12LCTopoJetsAuxDyn.Mu12", &CamKt12LCTopoJetsAuxDyn_Mu12, &b_CamKt12LCTopoJetsAuxDyn_Mu12);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.Tau2", &CamKt12TruthJetsAuxDyn_Tau2, &b_CamKt12TruthJetsAuxDyn_Tau2);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.FoxWolfram1", &CamKt12TruthJetsAuxDyn_FoxWolfram1, &b_CamKt12TruthJetsAuxDyn_FoxWolfram1);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.Tau3", &CamKt12TruthJetsAuxDyn_Tau3, &b_CamKt12TruthJetsAuxDyn_Tau3);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.FoxWolfram2", &CamKt12TruthJetsAuxDyn_FoxWolfram2, &b_CamKt12TruthJetsAuxDyn_FoxWolfram2);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.ThrustMaj", &CamKt12TruthJetsAuxDyn_ThrustMaj, &b_CamKt12TruthJetsAuxDyn_ThrustMaj);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.FoxWolfram3", &CamKt12TruthJetsAuxDyn_FoxWolfram3, &b_CamKt12TruthJetsAuxDyn_FoxWolfram3);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.ThrustMin", &CamKt12TruthJetsAuxDyn_ThrustMin, &b_CamKt12TruthJetsAuxDyn_ThrustMin);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.FoxWolfram4", &CamKt12TruthJetsAuxDyn_FoxWolfram4, &b_CamKt12TruthJetsAuxDyn_FoxWolfram4);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.Truth", &CamKt12TruthJetsAuxDyn_Truth, &b_CamKt12TruthJetsAuxDyn_Truth);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.TruthCount", &CamKt12TruthJetsAuxDyn_TruthCount, &b_CamKt12TruthJetsAuxDyn_TruthCount);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.TruthPt", &CamKt12TruthJetsAuxDyn_TruthPt, &b_CamKt12TruthJetsAuxDyn_TruthPt);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.TruthWZ", &CamKt12TruthJetsAuxDyn_TruthWZ, &b_CamKt12TruthJetsAuxDyn_TruthWZ);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.TruthWZCount", &CamKt12TruthJetsAuxDyn_TruthWZCount, &b_CamKt12TruthJetsAuxDyn_TruthWZCount);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.TruthWZPt", &CamKt12TruthJetsAuxDyn_TruthWZPt, &b_CamKt12TruthJetsAuxDyn_TruthWZPt);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.Width", &CamKt12TruthJetsAuxDyn_Width, &b_CamKt12TruthJetsAuxDyn_Width);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.ZCut12", &CamKt12TruthJetsAuxDyn_ZCut12, &b_CamKt12TruthJetsAuxDyn_ZCut12);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.ZCut23", &CamKt12TruthJetsAuxDyn_ZCut23, &b_CamKt12TruthJetsAuxDyn_ZCut23);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.ZCut34", &CamKt12TruthJetsAuxDyn_ZCut34, &b_CamKt12TruthJetsAuxDyn_ZCut34);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.JetGhostArea", &CamKt12TruthJetsAuxDyn_JetGhostArea, &b_CamKt12TruthJetsAuxDyn_JetGhostArea);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.KtDR", &CamKt12TruthJetsAuxDyn_KtDR, &b_CamKt12TruthJetsAuxDyn_KtDR);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.ConstituentScale", &CamKt12TruthJetsAuxDyn_ConstituentScale, &b_CamKt12TruthJetsAuxDyn_ConstituentScale);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.Angularity", &CamKt12TruthJetsAuxDyn_Angularity, &b_CamKt12TruthJetsAuxDyn_Angularity);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.Aplanarity", &CamKt12TruthJetsAuxDyn_Aplanarity, &b_CamKt12TruthJetsAuxDyn_Aplanarity);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.Mu12", &CamKt12TruthJetsAuxDyn_Mu12, &b_CamKt12TruthJetsAuxDyn_Mu12);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.JetConstitScaleMomentum_pt", &CamKt12TruthJetsAuxDyn_JetConstitScaleMomentum_pt, &b_CamKt12TruthJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.JetConstitScaleMomentum_eta", &CamKt12TruthJetsAuxDyn_JetConstitScaleMomentum_eta, &b_CamKt12TruthJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.Dip12", &CamKt12TruthJetsAuxDyn_Dip12, &b_CamKt12TruthJetsAuxDyn_Dip12);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.JetConstitScaleMomentum_phi", &CamKt12TruthJetsAuxDyn_JetConstitScaleMomentum_phi, &b_CamKt12TruthJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.JetConstitScaleMomentum_m", &CamKt12TruthJetsAuxDyn_JetConstitScaleMomentum_m, &b_CamKt12TruthJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.Dip13", &CamKt12TruthJetsAuxDyn_Dip13, &b_CamKt12TruthJetsAuxDyn_Dip13);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.InputType", &CamKt12TruthJetsAuxDyn_InputType, &b_CamKt12TruthJetsAuxDyn_InputType);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.Dip23", &CamKt12TruthJetsAuxDyn_Dip23, &b_CamKt12TruthJetsAuxDyn_Dip23);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.AlgorithmType", &CamKt12TruthJetsAuxDyn_AlgorithmType, &b_CamKt12TruthJetsAuxDyn_AlgorithmType);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.DipExcl12", &CamKt12TruthJetsAuxDyn_DipExcl12, &b_CamKt12TruthJetsAuxDyn_DipExcl12);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.SizeParameter", &CamKt12TruthJetsAuxDyn_SizeParameter, &b_CamKt12TruthJetsAuxDyn_SizeParameter);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.ECF1", &CamKt12TruthJetsAuxDyn_ECF1, &b_CamKt12TruthJetsAuxDyn_ECF1);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.PlanarFlow", &CamKt12TruthJetsAuxDyn_PlanarFlow, &b_CamKt12TruthJetsAuxDyn_PlanarFlow);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.ECF2", &CamKt12TruthJetsAuxDyn_ECF2, &b_CamKt12TruthJetsAuxDyn_ECF2);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.Sphericity", &CamKt12TruthJetsAuxDyn_Sphericity, &b_CamKt12TruthJetsAuxDyn_Sphericity);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.ECF3", &CamKt12TruthJetsAuxDyn_ECF3, &b_CamKt12TruthJetsAuxDyn_ECF3);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.Split12", &CamKt12TruthJetsAuxDyn_Split12, &b_CamKt12TruthJetsAuxDyn_Split12);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.Split23", &CamKt12TruthJetsAuxDyn_Split23, &b_CamKt12TruthJetsAuxDyn_Split23);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.Split34", &CamKt12TruthJetsAuxDyn_Split34, &b_CamKt12TruthJetsAuxDyn_Split34);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.Tau1", &CamKt12TruthJetsAuxDyn_Tau1, &b_CamKt12TruthJetsAuxDyn_Tau1);
   fChain->SetBranchAddress("CamKt12TruthJetsAuxDyn.FoxWolfram0", &CamKt12TruthJetsAuxDyn_FoxWolfram0, &b_CamKt12TruthJetsAuxDyn_FoxWolfram0);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.Tau2", &CamKt12TruthWZJetsAuxDyn_Tau2, &b_CamKt12TruthWZJetsAuxDyn_Tau2);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.FoxWolfram1", &CamKt12TruthWZJetsAuxDyn_FoxWolfram1, &b_CamKt12TruthWZJetsAuxDyn_FoxWolfram1);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.Tau3", &CamKt12TruthWZJetsAuxDyn_Tau3, &b_CamKt12TruthWZJetsAuxDyn_Tau3);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.FoxWolfram2", &CamKt12TruthWZJetsAuxDyn_FoxWolfram2, &b_CamKt12TruthWZJetsAuxDyn_FoxWolfram2);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.ThrustMaj", &CamKt12TruthWZJetsAuxDyn_ThrustMaj, &b_CamKt12TruthWZJetsAuxDyn_ThrustMaj);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.FoxWolfram3", &CamKt12TruthWZJetsAuxDyn_FoxWolfram3, &b_CamKt12TruthWZJetsAuxDyn_FoxWolfram3);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.ThrustMin", &CamKt12TruthWZJetsAuxDyn_ThrustMin, &b_CamKt12TruthWZJetsAuxDyn_ThrustMin);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.FoxWolfram4", &CamKt12TruthWZJetsAuxDyn_FoxWolfram4, &b_CamKt12TruthWZJetsAuxDyn_FoxWolfram4);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.Truth", &CamKt12TruthWZJetsAuxDyn_Truth, &b_CamKt12TruthWZJetsAuxDyn_Truth);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.TruthCount", &CamKt12TruthWZJetsAuxDyn_TruthCount, &b_CamKt12TruthWZJetsAuxDyn_TruthCount);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.TruthPt", &CamKt12TruthWZJetsAuxDyn_TruthPt, &b_CamKt12TruthWZJetsAuxDyn_TruthPt);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.TruthWZ", &CamKt12TruthWZJetsAuxDyn_TruthWZ, &b_CamKt12TruthWZJetsAuxDyn_TruthWZ);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.TruthWZCount", &CamKt12TruthWZJetsAuxDyn_TruthWZCount, &b_CamKt12TruthWZJetsAuxDyn_TruthWZCount);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.TruthWZPt", &CamKt12TruthWZJetsAuxDyn_TruthWZPt, &b_CamKt12TruthWZJetsAuxDyn_TruthWZPt);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.Width", &CamKt12TruthWZJetsAuxDyn_Width, &b_CamKt12TruthWZJetsAuxDyn_Width);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.ZCut12", &CamKt12TruthWZJetsAuxDyn_ZCut12, &b_CamKt12TruthWZJetsAuxDyn_ZCut12);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.ZCut23", &CamKt12TruthWZJetsAuxDyn_ZCut23, &b_CamKt12TruthWZJetsAuxDyn_ZCut23);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.ZCut34", &CamKt12TruthWZJetsAuxDyn_ZCut34, &b_CamKt12TruthWZJetsAuxDyn_ZCut34);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.JetGhostArea", &CamKt12TruthWZJetsAuxDyn_JetGhostArea, &b_CamKt12TruthWZJetsAuxDyn_JetGhostArea);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.KtDR", &CamKt12TruthWZJetsAuxDyn_KtDR, &b_CamKt12TruthWZJetsAuxDyn_KtDR);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.ConstituentScale", &CamKt12TruthWZJetsAuxDyn_ConstituentScale, &b_CamKt12TruthWZJetsAuxDyn_ConstituentScale);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.Angularity", &CamKt12TruthWZJetsAuxDyn_Angularity, &b_CamKt12TruthWZJetsAuxDyn_Angularity);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.Aplanarity", &CamKt12TruthWZJetsAuxDyn_Aplanarity, &b_CamKt12TruthWZJetsAuxDyn_Aplanarity);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.Mu12", &CamKt12TruthWZJetsAuxDyn_Mu12, &b_CamKt12TruthWZJetsAuxDyn_Mu12);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.JetConstitScaleMomentum_pt", &CamKt12TruthWZJetsAuxDyn_JetConstitScaleMomentum_pt, &b_CamKt12TruthWZJetsAuxDyn_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.JetConstitScaleMomentum_eta", &CamKt12TruthWZJetsAuxDyn_JetConstitScaleMomentum_eta, &b_CamKt12TruthWZJetsAuxDyn_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.Dip12", &CamKt12TruthWZJetsAuxDyn_Dip12, &b_CamKt12TruthWZJetsAuxDyn_Dip12);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.JetConstitScaleMomentum_phi", &CamKt12TruthWZJetsAuxDyn_JetConstitScaleMomentum_phi, &b_CamKt12TruthWZJetsAuxDyn_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.JetConstitScaleMomentum_m", &CamKt12TruthWZJetsAuxDyn_JetConstitScaleMomentum_m, &b_CamKt12TruthWZJetsAuxDyn_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.Dip13", &CamKt12TruthWZJetsAuxDyn_Dip13, &b_CamKt12TruthWZJetsAuxDyn_Dip13);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.InputType", &CamKt12TruthWZJetsAuxDyn_InputType, &b_CamKt12TruthWZJetsAuxDyn_InputType);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.Dip23", &CamKt12TruthWZJetsAuxDyn_Dip23, &b_CamKt12TruthWZJetsAuxDyn_Dip23);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.AlgorithmType", &CamKt12TruthWZJetsAuxDyn_AlgorithmType, &b_CamKt12TruthWZJetsAuxDyn_AlgorithmType);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.DipExcl12", &CamKt12TruthWZJetsAuxDyn_DipExcl12, &b_CamKt12TruthWZJetsAuxDyn_DipExcl12);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.SizeParameter", &CamKt12TruthWZJetsAuxDyn_SizeParameter, &b_CamKt12TruthWZJetsAuxDyn_SizeParameter);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.ECF1", &CamKt12TruthWZJetsAuxDyn_ECF1, &b_CamKt12TruthWZJetsAuxDyn_ECF1);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.PlanarFlow", &CamKt12TruthWZJetsAuxDyn_PlanarFlow, &b_CamKt12TruthWZJetsAuxDyn_PlanarFlow);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.ECF2", &CamKt12TruthWZJetsAuxDyn_ECF2, &b_CamKt12TruthWZJetsAuxDyn_ECF2);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.Sphericity", &CamKt12TruthWZJetsAuxDyn_Sphericity, &b_CamKt12TruthWZJetsAuxDyn_Sphericity);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.ECF3", &CamKt12TruthWZJetsAuxDyn_ECF3, &b_CamKt12TruthWZJetsAuxDyn_ECF3);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.Split12", &CamKt12TruthWZJetsAuxDyn_Split12, &b_CamKt12TruthWZJetsAuxDyn_Split12);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.Split23", &CamKt12TruthWZJetsAuxDyn_Split23, &b_CamKt12TruthWZJetsAuxDyn_Split23);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.Split34", &CamKt12TruthWZJetsAuxDyn_Split34, &b_CamKt12TruthWZJetsAuxDyn_Split34);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.Tau1", &CamKt12TruthWZJetsAuxDyn_Tau1, &b_CamKt12TruthWZJetsAuxDyn_Tau1);
   fChain->SetBranchAddress("CamKt12TruthWZJetsAuxDyn.FoxWolfram0", &CamKt12TruthWZJetsAuxDyn_FoxWolfram0, &b_CamKt12TruthWZJetsAuxDyn_FoxWolfram0);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.truthOrigin", &CombinedMuonTrackParticlesAuxDyn_truthOrigin, &b_CombinedMuonTrackParticlesAuxDyn_truthOrigin);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.truthType", &CombinedMuonTrackParticlesAuxDyn_truthType, &b_CombinedMuonTrackParticlesAuxDyn_truthType);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.truthParticleLink", &CombinedMuonTrackParticlesAuxDyn_truthParticleLink_, &b_CombinedMuonTrackParticlesAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.truthParticleLink.m_persKey", CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey, &b_CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.truthParticleLink.m_persIndex", CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex, &b_CombinedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.trackLink", &CombinedMuonTrackParticlesAuxDyn_trackLink_, &b_CombinedMuonTrackParticlesAuxDyn_trackLink_);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.trackLink.m_persKey", CombinedMuonTrackParticlesAuxDyn_trackLink_m_persKey, &b_CombinedMuonTrackParticlesAuxDyn_trackLink_m_persKey);
   fChain->SetBranchAddress("CombinedMuonTrackParticlesAuxDyn.trackLink.m_persIndex", CombinedMuonTrackParticlesAuxDyn_trackLink_m_persIndex, &b_CombinedMuonTrackParticlesAuxDyn_trackLink_m_persIndex);
   fChain->SetBranchAddress("ElectronCollectionAuxDyn.truthOrigin", &ElectronCollectionAuxDyn_truthOrigin, &b_ElectronCollectionAuxDyn_truthOrigin);
   fChain->SetBranchAddress("ElectronCollectionAuxDyn.truthType", &ElectronCollectionAuxDyn_truthType, &b_ElectronCollectionAuxDyn_truthType);
   fChain->SetBranchAddress("ElectronCollectionAuxDyn.Loose", &ElectronCollectionAuxDyn_Loose, &b_ElectronCollectionAuxDyn_Loose);
   fChain->SetBranchAddress("ElectronCollectionAuxDyn.Medium", &ElectronCollectionAuxDyn_Medium, &b_ElectronCollectionAuxDyn_Medium);
   fChain->SetBranchAddress("ElectronCollectionAuxDyn.Tight", &ElectronCollectionAuxDyn_Tight, &b_ElectronCollectionAuxDyn_Tight);
   fChain->SetBranchAddress("ElectronCollectionAuxDyn.truthParticleLink", &ElectronCollectionAuxDyn_truthParticleLink_, &b_ElectronCollectionAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("ElectronCollectionAuxDyn.truthParticleLink.m_persKey", ElectronCollectionAuxDyn_truthParticleLink_m_persKey, &b_ElectronCollectionAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("ElectronCollectionAuxDyn.truthParticleLink.m_persIndex", ElectronCollectionAuxDyn_truthParticleLink_m_persIndex, &b_ElectronCollectionAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("EventInfoAuxDyn.subEventTime", &EventInfoAuxDyn_subEventTime, &b_EventInfoAuxDyn_subEventTime);
   fChain->SetBranchAddress("EventInfoAuxDyn.subEventLink", &EventInfoAuxDyn_subEventLink_, &b_EventInfoAuxDyn_subEventLink_);
   fChain->SetBranchAddress("EventInfoAuxDyn.subEventLink.m_persKey", EventInfoAuxDyn_subEventLink_m_persKey, &b_EventInfoAuxDyn_subEventLink_m_persKey);
   fChain->SetBranchAddress("EventInfoAuxDyn.subEventLink.m_persIndex", EventInfoAuxDyn_subEventLink_m_persIndex, &b_EventInfoAuxDyn_subEventLink_m_persIndex);
   fChain->SetBranchAddress("EventInfoAuxDyn.subEventType", &EventInfoAuxDyn_subEventType, &b_EventInfoAuxDyn_subEventType);
   fChain->SetBranchAddress("EventInfoAuxDyn.mcEventNumber", &EventInfoAuxDyn_mcEventNumber, &b_mcEventNumber);
   fChain->SetBranchAddress("EventInfoAuxDyn.mcEventWeights", &EventInfoAuxDyn_mcEventWeights, &b_EventInfoAuxDyn_mcEventWeights);
   fChain->SetBranchAddress("EventInfoAuxDyn.mcChannelNumber", &EventInfoAuxDyn_mcChannelNumber, &b_mcChannelNumber);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.truthOrigin", &ExtrapolatedMuonTrackParticlesAuxDyn_truthOrigin, &b_ExtrapolatedMuonTrackParticlesAuxDyn_truthOrigin);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.truthType", &ExtrapolatedMuonTrackParticlesAuxDyn_truthType, &b_ExtrapolatedMuonTrackParticlesAuxDyn_truthType);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.truthParticleLink", &ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_, &b_ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.truthParticleLink.m_persKey", ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey, &b_ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.truthParticleLink.m_persIndex", ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex, &b_ExtrapolatedMuonTrackParticlesAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.trackLink", &ExtrapolatedMuonTrackParticlesAuxDyn_trackLink_, &b_ExtrapolatedMuonTrackParticlesAuxDyn_trackLink_);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.trackLink.m_persKey", ExtrapolatedMuonTrackParticlesAuxDyn_trackLink_m_persKey, &b_ExtrapolatedMuonTrackParticlesAuxDyn_trackLink_m_persKey);
   fChain->SetBranchAddress("ExtrapolatedMuonTrackParticlesAuxDyn.trackLink.m_persIndex", ExtrapolatedMuonTrackParticlesAuxDyn_trackLink_m_persIndex, &b_ExtrapolatedMuonTrackParticlesAuxDyn_trackLink_m_persIndex);
   fChain->SetBranchAddress("FwdElectronsAuxDyn.Loose", &FwdElectronsAuxDyn_Loose, &b_FwdElectronsAuxDyn_Loose);
   fChain->SetBranchAddress("FwdElectronsAuxDyn.Tight", &FwdElectronsAuxDyn_Tight, &b_FwdElectronsAuxDyn_Tight);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.pz", &GSFConversionVerticesAuxDyn_pz, &b_GSFConversionVerticesAuxDyn_pz);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.etaAtCalo", &GSFConversionVerticesAuxDyn_etaAtCalo, &b_GSFConversionVerticesAuxDyn_etaAtCalo);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.phiAtCalo", &GSFConversionVerticesAuxDyn_phiAtCalo, &b_GSFConversionVerticesAuxDyn_phiAtCalo);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.px", &GSFConversionVerticesAuxDyn_px, &b_GSFConversionVerticesAuxDyn_px);
   fChain->SetBranchAddress("GSFConversionVerticesAuxDyn.py", &GSFConversionVerticesAuxDyn_py, &b_GSFConversionVerticesAuxDyn_py);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.originalTrackParticle", &GSFTrackParticlesAuxDyn_originalTrackParticle_, &b_GSFTrackParticlesAuxDyn_originalTrackParticle_);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.originalTrackParticle.m_persKey", GSFTrackParticlesAuxDyn_originalTrackParticle_m_persKey, &b_GSFTrackParticlesAuxDyn_originalTrackParticle_m_persKey);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.originalTrackParticle.m_persIndex", GSFTrackParticlesAuxDyn_originalTrackParticle_m_persIndex, &b_GSFTrackParticlesAuxDyn_originalTrackParticle_m_persIndex);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.truthParticleLink", &GSFTrackParticlesAuxDyn_truthParticleLink_, &b_GSFTrackParticlesAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.truthParticleLink.m_persKey", GSFTrackParticlesAuxDyn_truthParticleLink_m_persKey, &b_GSFTrackParticlesAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.truthParticleLink.m_persIndex", GSFTrackParticlesAuxDyn_truthParticleLink_m_persIndex, &b_GSFTrackParticlesAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.trackLink", &GSFTrackParticlesAuxDyn_trackLink_, &b_GSFTrackParticlesAuxDyn_trackLink_);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.trackLink.m_persKey", GSFTrackParticlesAuxDyn_trackLink_m_persKey, &b_GSFTrackParticlesAuxDyn_trackLink_m_persKey);
   fChain->SetBranchAddress("GSFTrackParticlesAuxDyn.trackLink.m_persIndex", GSFTrackParticlesAuxDyn_trackLink_m_persIndex, &b_GSFTrackParticlesAuxDyn_trackLink_m_persIndex);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.truthOrigin", &InDetTrackParticlesAuxDyn_truthOrigin, &b_InDetTrackParticlesAuxDyn_truthOrigin);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.truthType", &InDetTrackParticlesAuxDyn_truthType, &b_InDetTrackParticlesAuxDyn_truthType);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.truthMatchProbability", &InDetTrackParticlesAuxDyn_truthMatchProbability, &b_InDetTrackParticlesAuxDyn_truthMatchProbability);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.truthParticleLink", &InDetTrackParticlesAuxDyn_truthParticleLink_, &b_InDetTrackParticlesAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.truthParticleLink.m_persKey", InDetTrackParticlesAuxDyn_truthParticleLink_m_persKey, &b_InDetTrackParticlesAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.truthParticleLink.m_persIndex", InDetTrackParticlesAuxDyn_truthParticleLink_m_persIndex, &b_InDetTrackParticlesAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.trackLink", &InDetTrackParticlesAuxDyn_trackLink_, &b_InDetTrackParticlesAuxDyn_trackLink_);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.trackLink.m_persKey", InDetTrackParticlesAuxDyn_trackLink_m_persKey, &b_InDetTrackParticlesAuxDyn_trackLink_m_persKey);
   fChain->SetBranchAddress("InDetTrackParticlesAuxDyn.trackLink.m_persIndex", InDetTrackParticlesAuxDyn_trackLink_m_persIndex, &b_InDetTrackParticlesAuxDyn_trackLink_m_persIndex);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAuxDyn.truthOrigin", &InDetTrackParticlesForwardAuxDyn_truthOrigin, &b_InDetTrackParticlesForwardAuxDyn_truthOrigin);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAuxDyn.truthType", &InDetTrackParticlesForwardAuxDyn_truthType, &b_InDetTrackParticlesForwardAuxDyn_truthType);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAuxDyn.truthMatchProbability", &InDetTrackParticlesForwardAuxDyn_truthMatchProbability, &b_InDetTrackParticlesForwardAuxDyn_truthMatchProbability);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAuxDyn.truthParticleLink", &InDetTrackParticlesForwardAuxDyn_truthParticleLink_, &b_InDetTrackParticlesForwardAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAuxDyn.truthParticleLink.m_persKey", InDetTrackParticlesForwardAuxDyn_truthParticleLink_m_persKey, &b_InDetTrackParticlesForwardAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAuxDyn.truthParticleLink.m_persIndex", InDetTrackParticlesForwardAuxDyn_truthParticleLink_m_persIndex, &b_InDetTrackParticlesForwardAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAuxDyn.trackLink", &InDetTrackParticlesForwardAuxDyn_trackLink_, &b_InDetTrackParticlesForwardAuxDyn_trackLink_);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAuxDyn.trackLink.m_persKey", InDetTrackParticlesForwardAuxDyn_trackLink_m_persKey, &b_InDetTrackParticlesForwardAuxDyn_trackLink_m_persKey);
   fChain->SetBranchAddress("InDetTrackParticlesForwardAuxDyn.trackLink.m_persIndex", InDetTrackParticlesForwardAuxDyn_trackLink_m_persIndex, &b_InDetTrackParticlesForwardAuxDyn_trackLink_m_persIndex);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.BadChannelList", &LArClusterEMFrwdAuxDyn_BadChannelList, &b_LArClusterEMFrwdAuxDyn_BadChannelList);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.CELL_SIGNIFICANCE", &LArClusterEMFrwdAuxDyn_CELL_SIGNIFICANCE, &b_LArClusterEMFrwdAuxDyn_CELL_SIGNIFICANCE);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.CELL_SIG_SAMPLING", &LArClusterEMFrwdAuxDyn_CELL_SIG_SAMPLING, &b_LArClusterEMFrwdAuxDyn_CELL_SIG_SAMPLING);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.CENTER_LAMBDA", &LArClusterEMFrwdAuxDyn_CENTER_LAMBDA, &b_LArClusterEMFrwdAuxDyn_CENTER_LAMBDA);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.CENTER_MAG", &LArClusterEMFrwdAuxDyn_CENTER_MAG, &b_LArClusterEMFrwdAuxDyn_CENTER_MAG);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.EM_PROBABILITY", &LArClusterEMFrwdAuxDyn_EM_PROBABILITY, &b_LArClusterEMFrwdAuxDyn_EM_PROBABILITY);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.ENG_BAD_CELLS", &LArClusterEMFrwdAuxDyn_ENG_BAD_CELLS, &b_LArClusterEMFrwdAuxDyn_ENG_BAD_CELLS);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.ENG_FRAC_MAX", &LArClusterEMFrwdAuxDyn_ENG_FRAC_MAX, &b_LArClusterEMFrwdAuxDyn_ENG_FRAC_MAX);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.ENG_POS", &LArClusterEMFrwdAuxDyn_ENG_POS, &b_LArClusterEMFrwdAuxDyn_ENG_POS);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.FIRST_ENG_DENS", &LArClusterEMFrwdAuxDyn_FIRST_ENG_DENS, &b_LArClusterEMFrwdAuxDyn_FIRST_ENG_DENS);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.ISOLATION", &LArClusterEMFrwdAuxDyn_ISOLATION, &b_LArClusterEMFrwdAuxDyn_ISOLATION);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.LATERAL", &LArClusterEMFrwdAuxDyn_LATERAL, &b_LArClusterEMFrwdAuxDyn_LATERAL);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.LONGITUDINAL", &LArClusterEMFrwdAuxDyn_LONGITUDINAL, &b_LArClusterEMFrwdAuxDyn_LONGITUDINAL);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.N_BAD_CELLS", &LArClusterEMFrwdAuxDyn_N_BAD_CELLS, &b_LArClusterEMFrwdAuxDyn_N_BAD_CELLS);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.SECOND_LAMBDA", &LArClusterEMFrwdAuxDyn_SECOND_LAMBDA, &b_LArClusterEMFrwdAuxDyn_SECOND_LAMBDA);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.SECOND_R", &LArClusterEMFrwdAuxDyn_SECOND_R, &b_LArClusterEMFrwdAuxDyn_SECOND_R);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.SIGNIFICANCE", &LArClusterEMFrwdAuxDyn_SIGNIFICANCE, &b_LArClusterEMFrwdAuxDyn_SIGNIFICANCE);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.BAD_CELLS_CORR_E", &LArClusterEMFrwdAuxDyn_BAD_CELLS_CORR_E, &b_LArClusterEMFrwdAuxDyn_BAD_CELLS_CORR_E);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.CENTER_X", &LArClusterEMFrwdAuxDyn_CENTER_X, &b_LArClusterEMFrwdAuxDyn_CENTER_X);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.CENTER_Y", &LArClusterEMFrwdAuxDyn_CENTER_Y, &b_LArClusterEMFrwdAuxDyn_CENTER_Y);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.CENTER_Z", &LArClusterEMFrwdAuxDyn_CENTER_Z, &b_LArClusterEMFrwdAuxDyn_CENTER_Z);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.CellLink", &LArClusterEMFrwdAuxDyn_CellLink_, &b_LArClusterEMFrwdAuxDyn_CellLink_);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.CellLink.m_persKey", LArClusterEMFrwdAuxDyn_CellLink_m_persKey, &b_LArClusterEMFrwdAuxDyn_CellLink_m_persKey);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.CellLink.m_persIndex", LArClusterEMFrwdAuxDyn_CellLink_m_persIndex, &b_LArClusterEMFrwdAuxDyn_CellLink_m_persIndex);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.DELTA_ALPHA", &LArClusterEMFrwdAuxDyn_DELTA_ALPHA, &b_LArClusterEMFrwdAuxDyn_DELTA_ALPHA);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.DELTA_PHI", &LArClusterEMFrwdAuxDyn_DELTA_PHI, &b_LArClusterEMFrwdAuxDyn_DELTA_PHI);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.DELTA_THETA", &LArClusterEMFrwdAuxDyn_DELTA_THETA, &b_LArClusterEMFrwdAuxDyn_DELTA_THETA);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.DM_WEIGHT", &LArClusterEMFrwdAuxDyn_DM_WEIGHT, &b_LArClusterEMFrwdAuxDyn_DM_WEIGHT);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.ENG_FRAC_CORE", &LArClusterEMFrwdAuxDyn_ENG_FRAC_CORE, &b_LArClusterEMFrwdAuxDyn_ENG_FRAC_CORE);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.ENG_FRAC_EM", &LArClusterEMFrwdAuxDyn_ENG_FRAC_EM, &b_LArClusterEMFrwdAuxDyn_ENG_FRAC_EM);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.FIRST_ETA", &LArClusterEMFrwdAuxDyn_FIRST_ETA, &b_LArClusterEMFrwdAuxDyn_FIRST_ETA);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.FIRST_PHI", &LArClusterEMFrwdAuxDyn_FIRST_PHI, &b_LArClusterEMFrwdAuxDyn_FIRST_PHI);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.HAD_WEIGHT", &LArClusterEMFrwdAuxDyn_HAD_WEIGHT, &b_LArClusterEMFrwdAuxDyn_HAD_WEIGHT);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.N_BAD_CELLS_CORR", &LArClusterEMFrwdAuxDyn_N_BAD_CELLS_CORR, &b_LArClusterEMFrwdAuxDyn_N_BAD_CELLS_CORR);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.OOC_WEIGHT", &LArClusterEMFrwdAuxDyn_OOC_WEIGHT, &b_LArClusterEMFrwdAuxDyn_OOC_WEIGHT);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.SECOND_ENG_DENS", &LArClusterEMFrwdAuxDyn_SECOND_ENG_DENS, &b_LArClusterEMFrwdAuxDyn_SECOND_ENG_DENS);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.emax_sampl", &LArClusterEMFrwdAuxDyn_emax_sampl, &b_LArClusterEMFrwdAuxDyn_emax_sampl);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.etamax_sampl", &LArClusterEMFrwdAuxDyn_etamax_sampl, &b_LArClusterEMFrwdAuxDyn_etamax_sampl);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.phimax_sampl", &LArClusterEMFrwdAuxDyn_phimax_sampl, &b_LArClusterEMFrwdAuxDyn_phimax_sampl);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.AVG_LAR_Q", &LArClusterEMFrwdAuxDyn_AVG_LAR_Q, &b_LArClusterEMFrwdAuxDyn_AVG_LAR_Q);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.AVG_TILE_Q", &LArClusterEMFrwdAuxDyn_AVG_TILE_Q, &b_LArClusterEMFrwdAuxDyn_AVG_TILE_Q);
   fChain->SetBranchAddress("LArClusterEMFrwdAuxDyn.BADLARQ_FRAC", &LArClusterEMFrwdAuxDyn_BADLARQ_FRAC, &b_LArClusterEMFrwdAuxDyn_BADLARQ_FRAC);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.muonSegment", &MuonSegmentsAuxDyn_muonSegment_, &b_MuonSegmentsAuxDyn_muonSegment_);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.muonSegment.m_persKey", MuonSegmentsAuxDyn_muonSegment_m_persKey, &b_MuonSegmentsAuxDyn_muonSegment_m_persKey);
   fChain->SetBranchAddress("MuonSegmentsAuxDyn.muonSegment.m_persIndex", MuonSegmentsAuxDyn_muonSegment_m_persIndex, &b_MuonSegmentsAuxDyn_muonSegment_m_persIndex);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.MuonEntryLayer_x", &MuonTruthParticleAuxDyn_MuonEntryLayer_x, &b_MuonTruthParticleAuxDyn_MuonEntryLayer_x);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.MuonEntryLayer_x_extr", &MuonTruthParticleAuxDyn_MuonEntryLayer_x_extr, &b_MuonTruthParticleAuxDyn_MuonEntryLayer_x_extr);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.MuonEntryLayer_y", &MuonTruthParticleAuxDyn_MuonEntryLayer_y, &b_MuonTruthParticleAuxDyn_MuonEntryLayer_y);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.MuonEntryLayer_y_extr", &MuonTruthParticleAuxDyn_MuonEntryLayer_y_extr, &b_MuonTruthParticleAuxDyn_MuonEntryLayer_y_extr);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.MuonEntryLayer_z", &MuonTruthParticleAuxDyn_MuonEntryLayer_z, &b_MuonTruthParticleAuxDyn_MuonEntryLayer_z);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.MuonEntryLayer_z_extr", &MuonTruthParticleAuxDyn_MuonEntryLayer_z_extr, &b_MuonTruthParticleAuxDyn_MuonEntryLayer_z_extr);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.etaLayer1Hits", &MuonTruthParticleAuxDyn_etaLayer1Hits, &b_MuonTruthParticleAuxDyn_etaLayer1Hits);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.etaLayer2Hits", &MuonTruthParticleAuxDyn_etaLayer2Hits, &b_MuonTruthParticleAuxDyn_etaLayer2Hits);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.etaLayer3Hits", &MuonTruthParticleAuxDyn_etaLayer3Hits, &b_MuonTruthParticleAuxDyn_etaLayer3Hits);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.etaLayer4Hits", &MuonTruthParticleAuxDyn_etaLayer4Hits, &b_MuonTruthParticleAuxDyn_etaLayer4Hits);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.extendedLargeHits", &MuonTruthParticleAuxDyn_extendedLargeHits, &b_MuonTruthParticleAuxDyn_extendedLargeHits);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.extendedSmallHits", &MuonTruthParticleAuxDyn_extendedSmallHits, &b_MuonTruthParticleAuxDyn_extendedSmallHits);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.innerLargeHits", &MuonTruthParticleAuxDyn_innerLargeHits, &b_MuonTruthParticleAuxDyn_innerLargeHits);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.innerSmallHits", &MuonTruthParticleAuxDyn_innerSmallHits, &b_MuonTruthParticleAuxDyn_innerSmallHits);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.middleLargeHits", &MuonTruthParticleAuxDyn_middleLargeHits, &b_MuonTruthParticleAuxDyn_middleLargeHits);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.middleSmallHits", &MuonTruthParticleAuxDyn_middleSmallHits, &b_MuonTruthParticleAuxDyn_middleSmallHits);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.nphiLayers", &MuonTruthParticleAuxDyn_nphiLayers, &b_MuonTruthParticleAuxDyn_nphiLayers);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.nprecLayers", &MuonTruthParticleAuxDyn_nprecLayers, &b_MuonTruthParticleAuxDyn_nprecLayers);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.ntrigEtaLayers", &MuonTruthParticleAuxDyn_ntrigEtaLayers, &b_MuonTruthParticleAuxDyn_ntrigEtaLayers);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.outerLargeHits", &MuonTruthParticleAuxDyn_outerLargeHits, &b_MuonTruthParticleAuxDyn_outerLargeHits);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.outerSmallHits", &MuonTruthParticleAuxDyn_outerSmallHits, &b_MuonTruthParticleAuxDyn_outerSmallHits);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.phiLayer1Hits", &MuonTruthParticleAuxDyn_phiLayer1Hits, &b_MuonTruthParticleAuxDyn_phiLayer1Hits);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.phiLayer2Hits", &MuonTruthParticleAuxDyn_phiLayer2Hits, &b_MuonTruthParticleAuxDyn_phiLayer2Hits);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.phiLayer3Hits", &MuonTruthParticleAuxDyn_phiLayer3Hits, &b_MuonTruthParticleAuxDyn_phiLayer3Hits);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.phiLayer4Hits", &MuonTruthParticleAuxDyn_phiLayer4Hits, &b_MuonTruthParticleAuxDyn_phiLayer4Hits);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.recoMuonLink", &MuonTruthParticleAuxDyn_recoMuonLink_, &b_MuonTruthParticleAuxDyn_recoMuonLink_);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.recoMuonLink.m_persKey", MuonTruthParticleAuxDyn_recoMuonLink_m_persKey, &b_MuonTruthParticleAuxDyn_recoMuonLink_m_persKey);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.recoMuonLink.m_persIndex", MuonTruthParticleAuxDyn_recoMuonLink_m_persIndex, &b_MuonTruthParticleAuxDyn_recoMuonLink_m_persIndex);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.truthOrigin", &MuonTruthParticleAuxDyn_truthOrigin, &b_MuonTruthParticleAuxDyn_truthOrigin);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.truthType", &MuonTruthParticleAuxDyn_truthType, &b_MuonTruthParticleAuxDyn_truthType);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.MuonEntryLayer_cov_extr", &MuonTruthParticleAuxDyn_MuonEntryLayer_cov_extr, &b_MuonTruthParticleAuxDyn_MuonEntryLayer_cov_extr);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.MuonEntryLayer_px", &MuonTruthParticleAuxDyn_MuonEntryLayer_px, &b_MuonTruthParticleAuxDyn_MuonEntryLayer_px);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.MuonEntryLayer_px_extr", &MuonTruthParticleAuxDyn_MuonEntryLayer_px_extr, &b_MuonTruthParticleAuxDyn_MuonEntryLayer_px_extr);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.MuonEntryLayer_py", &MuonTruthParticleAuxDyn_MuonEntryLayer_py, &b_MuonTruthParticleAuxDyn_MuonEntryLayer_py);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.MuonEntryLayer_py_extr", &MuonTruthParticleAuxDyn_MuonEntryLayer_py_extr, &b_MuonTruthParticleAuxDyn_MuonEntryLayer_py_extr);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.MuonEntryLayer_pz", &MuonTruthParticleAuxDyn_MuonEntryLayer_pz, &b_MuonTruthParticleAuxDyn_MuonEntryLayer_pz);
   fChain->SetBranchAddress("MuonTruthParticleAuxDyn.MuonEntryLayer_pz_extr", &MuonTruthParticleAuxDyn_MuonEntryLayer_pz_extr, &b_MuonTruthParticleAuxDyn_MuonEntryLayer_pz_extr);
   fChain->SetBranchAddress("MuonsAuxDyn.m", &MuonsAuxDyn_m, &b_MuonsAuxDyn_m);
   fChain->SetBranchAddress("PhotonCollectionAuxDyn.truthOrigin", &PhotonCollectionAuxDyn_truthOrigin, &b_PhotonCollectionAuxDyn_truthOrigin);
   fChain->SetBranchAddress("PhotonCollectionAuxDyn.truthType", &PhotonCollectionAuxDyn_truthType, &b_PhotonCollectionAuxDyn_truthType);
   fChain->SetBranchAddress("PhotonCollectionAuxDyn.Loose", &PhotonCollectionAuxDyn_Loose, &b_PhotonCollectionAuxDyn_Loose);
   fChain->SetBranchAddress("PhotonCollectionAuxDyn.Tight", &PhotonCollectionAuxDyn_Tight, &b_PhotonCollectionAuxDyn_Tight);
   fChain->SetBranchAddress("PhotonCollectionAuxDyn.truthParticleLink", &PhotonCollectionAuxDyn_truthParticleLink_, &b_PhotonCollectionAuxDyn_truthParticleLink_);
   fChain->SetBranchAddress("PhotonCollectionAuxDyn.truthParticleLink.m_persKey", PhotonCollectionAuxDyn_truthParticleLink_m_persKey, &b_PhotonCollectionAuxDyn_truthParticleLink_m_persKey);
   fChain->SetBranchAddress("PhotonCollectionAuxDyn.truthParticleLink.m_persIndex", PhotonCollectionAuxDyn_truthParticleLink_m_persIndex, &b_PhotonCollectionAuxDyn_truthParticleLink_m_persIndex);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAuxDyn.cellBased_CENTER_LAMBDA", &TauPi0NeutralPFOContainerAuxDyn_cellBased_CENTER_LAMBDA, &b_TauPi0NeutralPFOContainerAuxDyn_cellBased_CENTER_LAMBDA);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAuxDyn.cellBased_DELTA_PHI", &TauPi0NeutralPFOContainerAuxDyn_cellBased_DELTA_PHI, &b_TauPi0NeutralPFOContainerAuxDyn_cellBased_DELTA_PHI);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAuxDyn.cellBased_DELTA_THETA", &TauPi0NeutralPFOContainerAuxDyn_cellBased_DELTA_THETA, &b_TauPi0NeutralPFOContainerAuxDyn_cellBased_DELTA_THETA);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAuxDyn.cellBased_EM1CoreFrac", &TauPi0NeutralPFOContainerAuxDyn_cellBased_EM1CoreFrac, &b_TauPi0NeutralPFOContainerAuxDyn_cellBased_EM1CoreFrac);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAuxDyn.cellBased_ENG_FRAC_CORE", &TauPi0NeutralPFOContainerAuxDyn_cellBased_ENG_FRAC_CORE, &b_TauPi0NeutralPFOContainerAuxDyn_cellBased_ENG_FRAC_CORE);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAuxDyn.cellBased_ENG_FRAC_EM", &TauPi0NeutralPFOContainerAuxDyn_cellBased_ENG_FRAC_EM, &b_TauPi0NeutralPFOContainerAuxDyn_cellBased_ENG_FRAC_EM);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAuxDyn.cellBased_ENG_FRAC_MAX", &TauPi0NeutralPFOContainerAuxDyn_cellBased_ENG_FRAC_MAX, &b_TauPi0NeutralPFOContainerAuxDyn_cellBased_ENG_FRAC_MAX);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAuxDyn.cellBased_FIRST_ETA", &TauPi0NeutralPFOContainerAuxDyn_cellBased_FIRST_ETA, &b_TauPi0NeutralPFOContainerAuxDyn_cellBased_FIRST_ETA);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAuxDyn.cellBased_LATERAL", &TauPi0NeutralPFOContainerAuxDyn_cellBased_LATERAL, &b_TauPi0NeutralPFOContainerAuxDyn_cellBased_LATERAL);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAuxDyn.cellBased_LONGITUDINAL", &TauPi0NeutralPFOContainerAuxDyn_cellBased_LONGITUDINAL, &b_TauPi0NeutralPFOContainerAuxDyn_cellBased_LONGITUDINAL);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAuxDyn.cellBased_NHitsInEM1", &TauPi0NeutralPFOContainerAuxDyn_cellBased_NHitsInEM1, &b_TauPi0NeutralPFOContainerAuxDyn_cellBased_NHitsInEM1);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAuxDyn.cellBased_NPosECells_EM1", &TauPi0NeutralPFOContainerAuxDyn_cellBased_NPosECells_EM1, &b_TauPi0NeutralPFOContainerAuxDyn_cellBased_NPosECells_EM1);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAuxDyn.cellBased_NPosECells_EM2", &TauPi0NeutralPFOContainerAuxDyn_cellBased_NPosECells_EM2, &b_TauPi0NeutralPFOContainerAuxDyn_cellBased_NPosECells_EM2);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAuxDyn.cellBased_NPosECells_PS", &TauPi0NeutralPFOContainerAuxDyn_cellBased_NPosECells_PS, &b_TauPi0NeutralPFOContainerAuxDyn_cellBased_NPosECells_PS);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAuxDyn.cellBased_SECOND_ENG_DENS", &TauPi0NeutralPFOContainerAuxDyn_cellBased_SECOND_ENG_DENS, &b_TauPi0NeutralPFOContainerAuxDyn_cellBased_SECOND_ENG_DENS);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAuxDyn.cellBased_SECOND_LAMBDA", &TauPi0NeutralPFOContainerAuxDyn_cellBased_SECOND_LAMBDA, &b_TauPi0NeutralPFOContainerAuxDyn_cellBased_SECOND_LAMBDA);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAuxDyn.cellBased_SECOND_R", &TauPi0NeutralPFOContainerAuxDyn_cellBased_SECOND_R, &b_TauPi0NeutralPFOContainerAuxDyn_cellBased_SECOND_R);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAuxDyn.cellBased_asymmetryInEM1WRTTrk", &TauPi0NeutralPFOContainerAuxDyn_cellBased_asymmetryInEM1WRTTrk, &b_TauPi0NeutralPFOContainerAuxDyn_cellBased_asymmetryInEM1WRTTrk);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAuxDyn.cellBased_energy_EM1", &TauPi0NeutralPFOContainerAuxDyn_cellBased_energy_EM1, &b_TauPi0NeutralPFOContainerAuxDyn_cellBased_energy_EM1);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAuxDyn.cellBased_energy_EM2", &TauPi0NeutralPFOContainerAuxDyn_cellBased_energy_EM2, &b_TauPi0NeutralPFOContainerAuxDyn_cellBased_energy_EM2);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAuxDyn.cellBased_firstEtaWRTClusterPosition_EM1", &TauPi0NeutralPFOContainerAuxDyn_cellBased_firstEtaWRTClusterPosition_EM1, &b_TauPi0NeutralPFOContainerAuxDyn_cellBased_firstEtaWRTClusterPosition_EM1);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAuxDyn.cellBased_firstEtaWRTClusterPosition_EM2", &TauPi0NeutralPFOContainerAuxDyn_cellBased_firstEtaWRTClusterPosition_EM2, &b_TauPi0NeutralPFOContainerAuxDyn_cellBased_firstEtaWRTClusterPosition_EM2);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAuxDyn.cellBased_secondEtaWRTClusterPosition_EM1", &TauPi0NeutralPFOContainerAuxDyn_cellBased_secondEtaWRTClusterPosition_EM1, &b_TauPi0NeutralPFOContainerAuxDyn_cellBased_secondEtaWRTClusterPosition_EM1);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAuxDyn.cellBased_secondEtaWRTClusterPosition_EM2", &TauPi0NeutralPFOContainerAuxDyn_cellBased_secondEtaWRTClusterPosition_EM2, &b_TauPi0NeutralPFOContainerAuxDyn_cellBased_secondEtaWRTClusterPosition_EM2);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAuxDyn.nPi0", &TauPi0NeutralPFOContainerAuxDyn_nPi0, &b_TauPi0NeutralPFOContainerAuxDyn_nPi0);
   fChain->SetBranchAddress("TauPi0NeutralPFOContainerAuxDyn.nPi0Proto", &TauPi0NeutralPFOContainerAuxDyn_nPi0Proto, &b_TauPi0NeutralPFOContainerAuxDyn_nPi0Proto);
   fChain->SetBranchAddress("TauShotPFOContainerAuxDyn.tauShots_Fside_5not1", &TauShotPFOContainerAuxDyn_tauShots_Fside_5not1, &b_TauShotPFOContainerAuxDyn_tauShots_Fside_5not1);
   fChain->SetBranchAddress("TauShotPFOContainerAuxDyn.tauShots_Fside_5not3", &TauShotPFOContainerAuxDyn_tauShots_Fside_5not3, &b_TauShotPFOContainerAuxDyn_tauShots_Fside_5not3);
   fChain->SetBranchAddress("TauShotPFOContainerAuxDyn.tauShots_deltaPt12_min", &TauShotPFOContainerAuxDyn_tauShots_deltaPt12_min, &b_TauShotPFOContainerAuxDyn_tauShots_deltaPt12_min);
   fChain->SetBranchAddress("TauShotPFOContainerAuxDyn.tauShots_fracSide_3not1", &TauShotPFOContainerAuxDyn_tauShots_fracSide_3not1, &b_TauShotPFOContainerAuxDyn_tauShots_fracSide_3not1);
   fChain->SetBranchAddress("TauShotPFOContainerAuxDyn.tauShots_fracSide_5not1", &TauShotPFOContainerAuxDyn_tauShots_fracSide_5not1, &b_TauShotPFOContainerAuxDyn_tauShots_fracSide_5not1);
   fChain->SetBranchAddress("TauShotPFOContainerAuxDyn.tauShots_fracSide_5not3", &TauShotPFOContainerAuxDyn_tauShots_fracSide_5not3, &b_TauShotPFOContainerAuxDyn_tauShots_fracSide_5not3);
   fChain->SetBranchAddress("TauShotPFOContainerAuxDyn.tauShots_mergedScore", &TauShotPFOContainerAuxDyn_tauShots_mergedScore, &b_TauShotPFOContainerAuxDyn_tauShots_mergedScore);
   fChain->SetBranchAddress("TauShotPFOContainerAuxDyn.tauShots_nCellsInEta", &TauShotPFOContainerAuxDyn_tauShots_nCellsInEta, &b_TauShotPFOContainerAuxDyn_tauShots_nCellsInEta);
   fChain->SetBranchAddress("TauShotPFOContainerAuxDyn.tauShots_nPhotons", &TauShotPFOContainerAuxDyn_tauShots_nPhotons, &b_TauShotPFOContainerAuxDyn_tauShots_nPhotons);
   fChain->SetBranchAddress("TauShotPFOContainerAuxDyn.tauShots_pt1", &TauShotPFOContainerAuxDyn_tauShots_pt1, &b_TauShotPFOContainerAuxDyn_tauShots_pt1);
   fChain->SetBranchAddress("TauShotPFOContainerAuxDyn.tauShots_pt1OverPt3", &TauShotPFOContainerAuxDyn_tauShots_pt1OverPt3, &b_TauShotPFOContainerAuxDyn_tauShots_pt1OverPt3);
   fChain->SetBranchAddress("TauShotPFOContainerAuxDyn.tauShots_pt3", &TauShotPFOContainerAuxDyn_tauShots_pt3, &b_TauShotPFOContainerAuxDyn_tauShots_pt3);
   fChain->SetBranchAddress("TauShotPFOContainerAuxDyn.tauShots_pt3OverPt5", &TauShotPFOContainerAuxDyn_tauShots_pt3OverPt5, &b_TauShotPFOContainerAuxDyn_tauShots_pt3OverPt5);
   fChain->SetBranchAddress("TauShotPFOContainerAuxDyn.tauShots_pt5", &TauShotPFOContainerAuxDyn_tauShots_pt5, &b_TauShotPFOContainerAuxDyn_tauShots_pt5);
   fChain->SetBranchAddress("TauShotPFOContainerAuxDyn.tauShots_sdevEta5_WRTmean", &TauShotPFOContainerAuxDyn_tauShots_sdevEta5_WRTmean, &b_TauShotPFOContainerAuxDyn_tauShots_sdevEta5_WRTmean);
   fChain->SetBranchAddress("TauShotPFOContainerAuxDyn.tauShots_sdevEta5_WRTmode", &TauShotPFOContainerAuxDyn_tauShots_sdevEta5_WRTmode, &b_TauShotPFOContainerAuxDyn_tauShots_sdevEta5_WRTmode);
   fChain->SetBranchAddress("TauShotPFOContainerAuxDyn.tauShots_sdevPt5", &TauShotPFOContainerAuxDyn_tauShots_sdevPt5, &b_TauShotPFOContainerAuxDyn_tauShots_sdevPt5);
   fChain->SetBranchAddress("TauShotPFOContainerAuxDyn.tauShots_seedHash", &TauShotPFOContainerAuxDyn_tauShots_seedHash, &b_TauShotPFOContainerAuxDyn_tauShots_seedHash);
   fChain->SetBranchAddress("TauShotPFOContainerAuxDyn.tauShots_signalScore", &TauShotPFOContainerAuxDyn_tauShots_signalScore, &b_TauShotPFOContainerAuxDyn_tauShots_signalScore);
   fChain->SetBranchAddress("TauShotPFOContainerAuxDyn.tauShots_ws5", &TauShotPFOContainerAuxDyn_tauShots_ws5, &b_TauShotPFOContainerAuxDyn_tauShots_ws5);
   fChain->SetBranchAddress("TauShotPFOContainerAuxDyn.tauShots_Fside_3not1", &TauShotPFOContainerAuxDyn_tauShots_Fside_3not1, &b_TauShotPFOContainerAuxDyn_tauShots_Fside_3not1);
   fChain->SetBranchAddress("TruthEventAuxDyn.x1", &TruthEventAuxDyn_x1, &b_TruthEventAuxDyn_x1);
   fChain->SetBranchAddress("TruthEventAuxDyn.x2", &TruthEventAuxDyn_x2, &b_TruthEventAuxDyn_x2);
   fChain->SetBranchAddress("TruthEventAuxDyn.id1", &TruthEventAuxDyn_id1, &b_TruthEventAuxDyn_id1);
   fChain->SetBranchAddress("TruthEventAuxDyn.id2", &TruthEventAuxDyn_id2, &b_TruthEventAuxDyn_id2);
   fChain->SetBranchAddress("TruthEventAuxDyn.pdf1", &TruthEventAuxDyn_pdf1, &b_TruthEventAuxDyn_pdf1);
   fChain->SetBranchAddress("TruthEventAuxDyn.pdf2", &TruthEventAuxDyn_pdf2, &b_TruthEventAuxDyn_pdf2);
   fChain->SetBranchAddress("TruthEventAuxDyn.pdfId1", &TruthEventAuxDyn_pdfId1, &b_TruthEventAuxDyn_pdfId1);
   fChain->SetBranchAddress("TruthEventAuxDyn.pdfId2", &TruthEventAuxDyn_pdfId2, &b_TruthEventAuxDyn_pdfId2);
   fChain->SetBranchAddress("TruthEventAuxDyn.scalePDF", &TruthEventAuxDyn_scalePDF, &b_TruthEventAuxDyn_scalePDF);
   fChain->SetBranchAddress("TruthParticleAuxDyn.polarizationPhi", &TruthParticleAuxDyn_polarizationPhi, &b_TruthParticleAuxDyn_polarizationPhi);
   fChain->SetBranchAddress("TruthParticleAuxDyn.polarizationTheta", &TruthParticleAuxDyn_polarizationTheta, &b_TruthParticleAuxDyn_polarizationTheta);
   fChain->SetBranchAddress("chargedTauPFO_eflowRecAuxDyn.eflowRec_HOT_STRIP_FRAC", &chargedTauPFO_eflowRecAuxDyn_eflowRec_HOT_STRIP_FRAC, &b_chargedTauPFO_eflowRecAuxDyn_eflowRec_HOT_STRIP_FRAC);
   fChain->SetBranchAddress("chargedTauPFO_eflowRecAuxDyn.eflowRec_SECOND_R", &chargedTauPFO_eflowRecAuxDyn_eflowRec_SECOND_R, &b_chargedTauPFO_eflowRecAuxDyn_eflowRec_SECOND_R);
   fChain->SetBranchAddress("chargedTauPFO_eflowRecAuxDyn.eflowRec_THREE_CELL_STRIP_FRAC", &chargedTauPFO_eflowRecAuxDyn_eflowRec_THREE_CELL_STRIP_FRAC, &b_chargedTauPFO_eflowRecAuxDyn_eflowRec_THREE_CELL_STRIP_FRAC);
   fChain->SetBranchAddress("chargedTauPFO_eflowRecAuxDyn.PassEOverPCheck", &chargedTauPFO_eflowRecAuxDyn_PassEOverPCheck, &b_chargedTauPFO_eflowRecAuxDyn_PassEOverPCheck);
   fChain->SetBranchAddress("chargedTauPFO_eflowRecAuxDyn.eflowRec_CENTER_LAMBDA", &chargedTauPFO_eflowRecAuxDyn_eflowRec_CENTER_LAMBDA, &b_chargedTauPFO_eflowRecAuxDyn_eflowRec_CENTER_LAMBDA);
   fChain->SetBranchAddress("chargedTauPFO_eflowRecAuxDyn.eflowRec_DELTA_ALPHA", &chargedTauPFO_eflowRecAuxDyn_eflowRec_DELTA_ALPHA, &b_chargedTauPFO_eflowRecAuxDyn_eflowRec_DELTA_ALPHA);
   fChain->SetBranchAddress("chargedTauPFO_eflowRecAuxDyn.eflowRec_EM_FRAC_ENHANCED", &chargedTauPFO_eflowRecAuxDyn_eflowRec_EM_FRAC_ENHANCED, &b_chargedTauPFO_eflowRecAuxDyn_eflowRec_EM_FRAC_ENHANCED);
   fChain->SetBranchAddress("chargedTauPFO_eflowRecAuxDyn.eflowRec_ENG_FRAC_CORE", &chargedTauPFO_eflowRecAuxDyn_eflowRec_ENG_FRAC_CORE, &b_chargedTauPFO_eflowRecAuxDyn_eflowRec_ENG_FRAC_CORE);
   fChain->SetBranchAddress("chargedTauPFO_eflowRecAuxDyn.eflowRec_FIRST_ENG_DENS", &chargedTauPFO_eflowRecAuxDyn_eflowRec_FIRST_ENG_DENS, &b_chargedTauPFO_eflowRecAuxDyn_eflowRec_FIRST_ENG_DENS);
   fChain->SetBranchAddress("egClusterCollectionAuxDyn.emax_sampl", &egClusterCollectionAuxDyn_emax_sampl, &b_egClusterCollectionAuxDyn_emax_sampl);
   fChain->SetBranchAddress("egClusterCollectionAuxDyn.etamax_sampl", &egClusterCollectionAuxDyn_etamax_sampl, &b_egClusterCollectionAuxDyn_etamax_sampl);
   fChain->SetBranchAddress("egClusterCollectionAuxDyn.phimax_sampl", &egClusterCollectionAuxDyn_phimax_sampl, &b_egClusterCollectionAuxDyn_phimax_sampl);
   fChain->SetBranchAddress("egClusterCollectionAuxDyn.etaCalo", &egClusterCollectionAuxDyn_etaCalo, &b_egClusterCollectionAuxDyn_etaCalo);
   fChain->SetBranchAddress("egClusterCollectionAuxDyn.etas1Calo", &egClusterCollectionAuxDyn_etas1Calo, &b_egClusterCollectionAuxDyn_etas1Calo);
   fChain->SetBranchAddress("egClusterCollectionAuxDyn.etas2Calo", &egClusterCollectionAuxDyn_etas2Calo, &b_egClusterCollectionAuxDyn_etas2Calo);
   fChain->SetBranchAddress("egClusterCollectionAuxDyn.etasize_sampl", &egClusterCollectionAuxDyn_etasize_sampl, &b_egClusterCollectionAuxDyn_etasize_sampl);
   fChain->SetBranchAddress("egClusterCollectionAuxDyn.originalClusterLink", &egClusterCollectionAuxDyn_originalClusterLink_, &b_egClusterCollectionAuxDyn_originalClusterLink_);
   fChain->SetBranchAddress("egClusterCollectionAuxDyn.originalClusterLink.m_persKey", egClusterCollectionAuxDyn_originalClusterLink_m_persKey, &b_egClusterCollectionAuxDyn_originalClusterLink_m_persKey);
   fChain->SetBranchAddress("egClusterCollectionAuxDyn.originalClusterLink.m_persIndex", egClusterCollectionAuxDyn_originalClusterLink_m_persIndex, &b_egClusterCollectionAuxDyn_originalClusterLink_m_persIndex);
   fChain->SetBranchAddress("egClusterCollectionAuxDyn.phiCalo", &egClusterCollectionAuxDyn_phiCalo, &b_egClusterCollectionAuxDyn_phiCalo);
   fChain->SetBranchAddress("egClusterCollectionAuxDyn.phisize_sampl", &egClusterCollectionAuxDyn_phisize_sampl, &b_egClusterCollectionAuxDyn_phisize_sampl);
   fChain->SetBranchAddress("egClusterCollectionAuxDyn.CellLink", &egClusterCollectionAuxDyn_CellLink_, &b_egClusterCollectionAuxDyn_CellLink_);
   fChain->SetBranchAddress("egClusterCollectionAuxDyn.CellLink.m_persKey", egClusterCollectionAuxDyn_CellLink_m_persKey, &b_egClusterCollectionAuxDyn_CellLink_m_persKey);
   fChain->SetBranchAddress("egClusterCollectionAuxDyn.CellLink.m_persIndex", egClusterCollectionAuxDyn_CellLink_m_persIndex, &b_egClusterCollectionAuxDyn_CellLink_m_persIndex);
   fChain->SetBranchAddress("egClusterCollectionAuxDyn.BadChannelList", &egClusterCollectionAuxDyn_BadChannelList, &b_egClusterCollectionAuxDyn_BadChannelList);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAuxDyn.eflowRec_FIRST_ENG_DENS", &neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_FIRST_ENG_DENS, &b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_FIRST_ENG_DENS);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAuxDyn.eflowRec_SECOND_R", &neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_SECOND_R, &b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_SECOND_R);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAuxDyn.LeptonType", &neutralJetETMissPFO_eflowRecAuxDyn_LeptonType, &b_neutralJetETMissPFO_eflowRecAuxDyn_LeptonType);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAuxDyn.eflowRec_AVG_LAR_Q", &neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_AVG_LAR_Q, &b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_AVG_LAR_Q);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAuxDyn.eflowRec_AVG_TILE_Q", &neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_AVG_TILE_Q, &b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_AVG_TILE_Q);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAuxDyn.eflowRec_BADLARQ_FRAC", &neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_BADLARQ_FRAC, &b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_BADLARQ_FRAC);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAuxDyn.eflowRec_ENG_BAD_CELLS", &neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_ENG_BAD_CELLS, &b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_ENG_BAD_CELLS);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAuxDyn.eflowRec_ENG_FRAC_MAX", &neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_ENG_FRAC_MAX, &b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_ENG_FRAC_MAX);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAuxDyn.eflowRec_ENG_POS", &neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_ENG_POS, &b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_ENG_POS);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAuxDyn.eflowRec_ISOLATION", &neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_ISOLATION, &b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_ISOLATION);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAuxDyn.eflowRec_LATERAL", &neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_LATERAL, &b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_LATERAL);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAuxDyn.eflowRec_LAYERENERGY_EM3", &neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_EM3, &b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_EM3);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAuxDyn.eflowRec_LAYERENERGY_HEC0", &neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_HEC0, &b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_HEC0);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAuxDyn.eflowRec_LAYERENERGY_Tile0", &neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_Tile0, &b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_Tile0);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAuxDyn.eflowRec_LONGITUDINAL", &neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_LONGITUDINAL, &b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_LONGITUDINAL);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAuxDyn.eflowRec_N_BAD_CELLS", &neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_N_BAD_CELLS, &b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_N_BAD_CELLS);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAuxDyn.eflowRec_SIGNIFICANCE", &neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_SIGNIFICANCE, &b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_SIGNIFICANCE);
   fChain->SetBranchAddress("neutralJetETMissPFO_eflowRecAuxDyn.eflowRec_CENTER_LAMBDA", &neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_CENTER_LAMBDA, &b_neutralJetETMissPFO_eflowRecAuxDyn_eflowRec_CENTER_LAMBDA);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_NonModified_eflowRecAuxDyn.eflowRec_LAYERENERGY_EM3", &neutralJetETMiss_LCPFO_NonModified_eflowRecAuxDyn_eflowRec_LAYERENERGY_EM3, &b_neutralJetETMiss_LCPFO_NonModified_eflowRecAuxDyn_eflowRec_LAYERENERGY_EM3);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_NonModified_eflowRecAuxDyn.eflowRec_LAYERENERGY_HEC0", &neutralJetETMiss_LCPFO_NonModified_eflowRecAuxDyn_eflowRec_LAYERENERGY_HEC0, &b_neutralJetETMiss_LCPFO_NonModified_eflowRecAuxDyn_eflowRec_LAYERENERGY_HEC0);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_NonModified_eflowRecAuxDyn.eflowRec_LAYERENERGY_Tile0", &neutralJetETMiss_LCPFO_NonModified_eflowRecAuxDyn_eflowRec_LAYERENERGY_Tile0, &b_neutralJetETMiss_LCPFO_NonModified_eflowRecAuxDyn_eflowRec_LAYERENERGY_Tile0);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_NonModified_eflowRecAuxDyn.LeptonType", &neutralJetETMiss_LCPFO_NonModified_eflowRecAuxDyn_LeptonType, &b_neutralJetETMiss_LCPFO_NonModified_eflowRecAuxDyn_LeptonType);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAuxDyn.eflowRec_FIRST_ENG_DENS", &neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_FIRST_ENG_DENS, &b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_FIRST_ENG_DENS);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAuxDyn.eflowRec_SECOND_R", &neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_SECOND_R, &b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_SECOND_R);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAuxDyn.LeptonType", &neutralJetETMiss_LCPFO_eflowRecAuxDyn_LeptonType, &b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_LeptonType);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAuxDyn.eflowRec_AVG_LAR_Q", &neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_AVG_LAR_Q, &b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_AVG_LAR_Q);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAuxDyn.eflowRec_AVG_TILE_Q", &neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_AVG_TILE_Q, &b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_AVG_TILE_Q);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAuxDyn.eflowRec_BADLARQ_FRAC", &neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_BADLARQ_FRAC, &b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_BADLARQ_FRAC);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAuxDyn.eflowRec_ENG_BAD_CELLS", &neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_ENG_BAD_CELLS, &b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_ENG_BAD_CELLS);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAuxDyn.eflowRec_ENG_FRAC_MAX", &neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_ENG_FRAC_MAX, &b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_ENG_FRAC_MAX);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAuxDyn.eflowRec_ENG_POS", &neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_ENG_POS, &b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_ENG_POS);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAuxDyn.eflowRec_ISOLATION", &neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_ISOLATION, &b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_ISOLATION);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAuxDyn.eflowRec_LATERAL", &neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_LATERAL, &b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_LATERAL);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAuxDyn.eflowRec_LAYERENERGY_EM3", &neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_EM3, &b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_EM3);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAuxDyn.eflowRec_LAYERENERGY_HEC0", &neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_HEC0, &b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_HEC0);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAuxDyn.eflowRec_LAYERENERGY_Tile0", &neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_Tile0, &b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_LAYERENERGY_Tile0);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAuxDyn.eflowRec_LONGITUDINAL", &neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_LONGITUDINAL, &b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_LONGITUDINAL);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAuxDyn.eflowRec_N_BAD_CELLS", &neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_N_BAD_CELLS, &b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_N_BAD_CELLS);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAuxDyn.eflowRec_SIGNIFICANCE", &neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_SIGNIFICANCE, &b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_SIGNIFICANCE);
   fChain->SetBranchAddress("neutralJetETMiss_LCPFO_eflowRecAuxDyn.eflowRec_CENTER_LAMBDA", &neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_CENTER_LAMBDA, &b_neutralJetETMiss_LCPFO_eflowRecAuxDyn_eflowRec_CENTER_LAMBDA);
   fChain->SetBranchAddress("neutralTauPFO_eflowRecAuxDyn.eflowRec_HOT_STRIP_FRAC", &neutralTauPFO_eflowRecAuxDyn_eflowRec_HOT_STRIP_FRAC, &b_neutralTauPFO_eflowRecAuxDyn_eflowRec_HOT_STRIP_FRAC);
   fChain->SetBranchAddress("neutralTauPFO_eflowRecAuxDyn.eflowRec_SECOND_R", &neutralTauPFO_eflowRecAuxDyn_eflowRec_SECOND_R, &b_neutralTauPFO_eflowRecAuxDyn_eflowRec_SECOND_R);
   fChain->SetBranchAddress("neutralTauPFO_eflowRecAuxDyn.eflowRec_THREE_CELL_STRIP_FRAC", &neutralTauPFO_eflowRecAuxDyn_eflowRec_THREE_CELL_STRIP_FRAC, &b_neutralTauPFO_eflowRecAuxDyn_eflowRec_THREE_CELL_STRIP_FRAC);
   fChain->SetBranchAddress("neutralTauPFO_eflowRecAuxDyn.PassEOverPCheck", &neutralTauPFO_eflowRecAuxDyn_PassEOverPCheck, &b_neutralTauPFO_eflowRecAuxDyn_PassEOverPCheck);
   fChain->SetBranchAddress("neutralTauPFO_eflowRecAuxDyn.eflowRec_CENTER_LAMBDA", &neutralTauPFO_eflowRecAuxDyn_eflowRec_CENTER_LAMBDA, &b_neutralTauPFO_eflowRecAuxDyn_eflowRec_CENTER_LAMBDA);
   fChain->SetBranchAddress("neutralTauPFO_eflowRecAuxDyn.eflowRec_DELTA_ALPHA", &neutralTauPFO_eflowRecAuxDyn_eflowRec_DELTA_ALPHA, &b_neutralTauPFO_eflowRecAuxDyn_eflowRec_DELTA_ALPHA);
   fChain->SetBranchAddress("neutralTauPFO_eflowRecAuxDyn.eflowRec_EM_FRAC_ENHANCED", &neutralTauPFO_eflowRecAuxDyn_eflowRec_EM_FRAC_ENHANCED, &b_neutralTauPFO_eflowRecAuxDyn_eflowRec_EM_FRAC_ENHANCED);
   fChain->SetBranchAddress("neutralTauPFO_eflowRecAuxDyn.eflowRec_ENG_FRAC_CORE", &neutralTauPFO_eflowRecAuxDyn_eflowRec_ENG_FRAC_CORE, &b_neutralTauPFO_eflowRecAuxDyn_eflowRec_ENG_FRAC_CORE);
   fChain->SetBranchAddress("neutralTauPFO_eflowRecAuxDyn.eflowRec_FIRST_ENG_DENS", &neutralTauPFO_eflowRecAuxDyn_eflowRec_FIRST_ENG_DENS, &b_neutralTauPFO_eflowRecAuxDyn_eflowRec_FIRST_ENG_DENS);
   Notify();
}

Bool_t CollectionTree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void CollectionTree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t CollectionTree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef CollectionTree_cxx
