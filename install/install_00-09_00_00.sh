source $ATLAS_LOCAL_ROOT_BASE/user/atlasLocalSetup.sh
rcSetup -u
rcSetup Base,2.3.12

rc checkout_pkg atlasperf/CombPerf/FlavorTag/FlavorTagEfficiencyMaps/BTagEfficiencyReader/tags/BTagEfficiencyReader-00-00-14
rc checkout_pkg atlasoff/Event/xAOD/xAODMissingET/tags/xAODMissingET-00-01-22
rc checkout_pkg atlas-benitezj/CxAODMaker/tags/00-09_00_00
rc checkout_pkg atlas-benitezj/CxAODMaker_VHbb/tags/00-09_00_00
rc checkout_pkg atlas-benitezj/CxAODTools/tags/00-09_00_00
rc checkout_pkg atlas-benitezj/CxAODTools_VHbb/tags/00-09_00_00
rc checkout_pkg atlas-benitezj/TupleMaker_SMVH/tags/00-09_00_00
rc checkout_pkg atlas-benitezj/SMVH/tags/00-09_00_00

rc build