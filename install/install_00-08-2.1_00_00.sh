source $ATLAS_LOCAL_ROOT_BASE/user/atlasLocalSetup.sh
rcSetup -u
rcSetup Base,2.1.31

rc checkout_pkg atlas-benitezj/CxAODMaker/tags/00-08-2.1_00_00
rc checkout_pkg atlas-benitezj/CxAODMaker_VHbb/tags/00-08-2.1_00_00
rc checkout_pkg atlas-benitezj/CxAODTools/tags/00-08-2.1_00_00

rc checkout_pkg atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/FrameworkExe/tags/FrameworkExe-00-00-07
rc checkout_pkg atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/FrameworkSub/trunk
rc checkout_pkg atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/TupleReader/tags/TupleReader-00-00-06
rc checkout_pkg atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/TupleMaker/tags/TupleMaker-00-00-06
rc checkout_pkg atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/CxAODReader/tags/CxAODReader-00-00-08

rc checkout_pkg atlasoff/PhysicsAnalysis/ElectronPhotonID/ElectronIsolationSelection/tags/ElectronIsolationSelection-00-01-02

rc checkout_pkg atlas-benitezj/TupleMaker_SMVH/tags/00-08-2.1_00_00

rc build


