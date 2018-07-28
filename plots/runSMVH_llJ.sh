
#export INTAG=CxAOD_00-24-07
#export OUTTAG=Sep8

#export INTAG=CxAOD_00-24-07
#export OUTTAG=Sep8_2trkjet

export INTAG=CxAOD_00-24-07
export OUTTAG=Sep8_2trkjet_40fb


##test
#rootload SMVH/plots/runZHllJ.C\(\"ZHmmJ\",\"${INTAG}\",\"presel\",\"${OUTTAG}\"\)
#exit 

for ch in ZHmmJ ZHeeJ ZHemJ; do
#for ch in ZHeeJ ; do

rootload SMVH/plots/runSMVH_llJ.C\(\"${ch}\",\"${INTAG}\",\"preselhmass\",\"${OUTTAG}\"\) &
rootload SMVH/plots/runSMVH_llJ.C\(\"${ch}\",\"${INTAG}\",\"0btaghmass\",\"${OUTTAG}\"\) &
rootload SMVH/plots/runSMVH_llJ.C\(\"${ch}\",\"${INTAG}\",\"1btaghmass\",\"${OUTTAG}\"\) &
rootload SMVH/plots/runSMVH_llJ.C\(\"${ch}\",\"${INTAG}\",\"2btaghmass\",\"${OUTTAG}\"\) &

#if [ "$ch" != "ZHemJ" ] ; then
#rootload SMVH/plots/runSMVH_llJ.C\(\"${ch}\",\"${INTAG}\",\"preselhmassL\",\"${OUTTAG}\"\) &
#rootload SMVH/plots/runSMVH_llJ.C\(\"${ch}\",\"${INTAG}\",\"preselhmassH\",\"${OUTTAG}\"\) &
#rootload SMVH/plots/runSMVH_llJ.C\(\"${ch}\",\"${INTAG}\",\"0btaghmassL\",\"${OUTTAG}\"\) &
#rootload SMVH/plots/runSMVH_llJ.C\(\"${ch}\",\"${INTAG}\",\"0btaghmassH\",\"${OUTTAG}\"\) &
#rootload SMVH/plots/runSMVH_llJ.C\(\"${ch}\",\"${INTAG}\",\"1btaghmassL\",\"${OUTTAG}\"\) &
#rootload SMVH/plots/runSMVH_llJ.C\(\"${ch}\",\"${INTAG}\",\"1btaghmassH\",\"${OUTTAG}\"\) &
#rootload SMVH/plots/runSMVH_llJ.C\(\"${ch}\",\"${INTAG}\",\"2btaghmassL\",\"${OUTTAG}\"\) &
#rootload SMVH/plots/runSMVH_llJ.C\(\"${ch}\",\"${INTAG}\",\"2btaghmassH\",\"${OUTTAG}\"\) &
#fi

done
