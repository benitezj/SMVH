
export INTAG=${1}
export OUTTAG=${2}

rootload SMVH/plots/runSMVH_llJ_Merge.C\(\"ZHllJ\",\"ZHeeJ\",\"ZHmmJ\",\"${INTAG}\",\"preselhmass\",\"${OUTTAG}\"\) &
rootload SMVH/plots/runSMVH_llJ_Merge.C\(\"ZHllJ\",\"ZHeeJ\",\"ZHmmJ\",\"${INTAG}\",\"0btaghmass\",\"${OUTTAG}\"\) &
rootload SMVH/plots/runSMVH_llJ_Merge.C\(\"ZHllJ\",\"ZHeeJ\",\"ZHmmJ\",\"${INTAG}\",\"1btaghmass\",\"${OUTTAG}\"\) &
rootload SMVH/plots/runSMVH_llJ_Merge.C\(\"ZHllJ\",\"ZHeeJ\",\"ZHmmJ\",\"${INTAG}\",\"2btaghmass\",\"${OUTTAG}\"\) &
