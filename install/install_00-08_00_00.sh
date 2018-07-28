source $ATLAS_LOCAL_ROOT_BASE/user/atlasLocalSetup.sh
rcSetup -u
rcSetup Base,2.0.27


rc checkout_pkg atlasoff/Reconstruction/Jet/JetCalibTools/tags/JetCalibTools-00-04-33
rc checkout_pkg atlasoff/PhysicsAnalysis/AnalysisCommon/AssociationUtils/tags/AssociationUtils-01-00-16

#rc checkout_pkg atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/CxAODMaker/tags/CxAODMaker-00-00-09
rc checkout_pkg atlas-benitezj/CxAODMaker/tags/CxAODMaker-00-00-09

#rc checkout_pkg atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/CxAODMaker_VHbb/tags/CxAODMaker_VHbb-00-00-01
rc checkout_pkg atlas-benitezj/CxAODMaker_VHbb/tags/CxAODMaker_VHbb-00-00-01

#rc checkout_pkg atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/CxAODTools/tags/CxAODTools-00-00-07
rc checkout_pkg atlas-benitezj/CxAODTools/tags/CxAODTools-00-00-07

rc checkout_pkg atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/FrameworkExe/tags/FrameworkExe-00-00-07
rc checkout_pkg atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/FrameworkSub/trunk
rc checkout_pkg atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/TupleReader/tags/TupleReader-00-00-06
rc checkout_pkg atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/TupleMaker/tags/TupleMaker-00-00-06
rc checkout_pkg atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/CxAODReader/tags/CxAODReader-00-00-08

rc checkout_pkg atlas-benitezj/CxAODMaker_SMVH/tags/00-08_00_00
rc checkout_pkg atlas-benitezj/TupleMaker_SMVH/tags/00-08_00_00
rc checkout_pkg atlas-benitezj/SMVH/tags/00-08_00_00

rc build









