source $ATLAS_LOCAL_ROOT_BASE/user/atlasLocalSetup.sh
rcSetup -u
rcSetup Base,2.3.12

rc checkout_pkg atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/CxAODMaker/trunk
rc checkout_pkg atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/CxAODMaker_VHbb/trunk
rc checkout_pkg atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/CxAODReader/trunk
rc checkout_pkg atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/CxAODTools/trunk
rc checkout_pkg atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/CxAODTools_VHbb/trunk
rc checkout_pkg atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/FrameworkExe/trunk
rc checkout_pkg atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/TupleMaker/trunk
rc checkout_pkg atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/TupleReader/trunk
rc checkout_pkg atlasoff/Event/xAOD/xAODMissingET/tags/xAODMissingET-00-01-22
rc checkout_pkg atlasperf/CombPerf/FlavorTag/FlavorTagEfficiencyMaps/BTagEfficiencyReader/tags/BTagEfficiencyReader-00-00-14
rc checkout_pkg atlas-benitezj/TupleMaker_SMVH/trunk

rc build


