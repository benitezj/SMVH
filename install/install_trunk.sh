# setup ATLAS environment
source $ATLAS_LOCAL_ROOT_BASE/user/atlasLocalSetup.sh
 
# checkout setup.sh
# svn co svn+ssh://svn.cern.ch/reps/atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/FrameworkSub/trunk FrameworkSub

# setup RootCore and checkout packages
source FrameworkSub/bootstrap/setup-trunk.sh

###remove packages not needed for VH resonance analysis

####Check out VH Resonance specific packages
svn co $MYSVN/TupleMaker_SMVH/trunk TupleMaker_SMVH

# compile
#rc build

