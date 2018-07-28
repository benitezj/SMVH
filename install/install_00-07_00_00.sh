# setup ATLAS environment
source $ATLAS_LOCAL_ROOT_BASE/user/atlasLocalSetup.sh
 
##Later we'll do like this
#svn co svn+ssh://svn.cern.ch/reps/atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/FrameworkSub/trunk FrameworkSub
#source FrameworkSub/bootstrap/setup-trunk.sh
###remove packages not needed for VH resonance analysis
#rm -rf FrameworkExe  
#rm -rf CxAODReader  
#rm -rf FrameworkSub
#rm -rf TupleMaker
#rm -rf TupleReader


##CxAODFramework
rcSetup -u
rcSetup Base,2.0.27
rc checkout_pkg atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/CxAODMaker/devbranches/benitezj/CxAODMaker
rc checkout_pkg atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/CxAODTools/trunk
rc checkout_pkg atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/CxAODMaker_VHbb/trunk

##may need this one to check the current config file:
#rc checkout_pkg atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/FrameworkExe/trunk
##and this one to check samples and additional packages needed
#rc checkout_pkg atlasoff/PhysicsAnalysis/HiggsPhys/Run2/Hbb/CxAODFramework/FrameworkSub/trunk

###For rho computation
rc checkout_pkg atlasoff/Reconstruction/EventShapes/EventShapeTools/tags/EventShapeTools-00-01-09
#these already in release AnalysisBase/2.0.27
#xAODEventShape-00-00-04
#EventShapeInterface-00-00-08

####Resonance analysis
rc checkout_pkg atlas-benitezj/CxAODMaker_SMVH/trunk
rc checkout_pkg atlas-benitezj/TupleMaker_SMVH/trunk

# compile
rc build
