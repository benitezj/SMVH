#!/bin/sh

export INTAG=${1}
export VARIABLE=${2}

export BLIND=0 
export SYSTS=0

if [ "$INTAG" == "" ] || [ "$VARIABLE" == "" ]; then
echo "NO TAG or VARIABLE given"
else 

################### Summer15  ################################
rm -rf ./LimitInputs_ZHllJ_${INTAG}_${VARIABLE}
mkdir ./LimitInputs_ZHllJ_${INTAG}_${VARIABLE}


rootload SMVH/limits/inputsSMVH.C\(\"ZHmmJ\",\"${INTAG}\",\"preselhmass\",\"${VARIABLE}\",0,${SYSTS}\) & 
rootload SMVH/limits/inputsSMVH.C\(\"ZHeeJ\",\"${INTAG}\",\"preselhmass\",\"${VARIABLE}\",0,${SYSTS}\) & 
rootload SMVH/limits/inputsSMVH.C\(\"ZHmmJ\",\"${INTAG}\",\"0btaghmass\",\"${VARIABLE}\",0,${SYSTS}\) & 
rootload SMVH/limits/inputsSMVH.C\(\"ZHeeJ\",\"${INTAG}\",\"0btaghmass\",\"${VARIABLE}\",0,${SYSTS}\) & 
rootload SMVH/limits/inputsSMVH.C\(\"ZHmmJ\",\"${INTAG}\",\"1btaghmass\",\"${VARIABLE}\",${BLIND},${SYSTS}\) & 
rootload SMVH/limits/inputsSMVH.C\(\"ZHeeJ\",\"${INTAG}\",\"1btaghmass\",\"${VARIABLE}\",${BLIND},${SYSTS}\) & 
rootload SMVH/limits/inputsSMVH.C\(\"ZHmmJ\",\"${INTAG}\",\"2btaghmass\",\"${VARIABLE}\",${BLIND},${SYSTS}\) & 
rootload SMVH/limits/inputsSMVH.C\(\"ZHeeJ\",\"${INTAG}\",\"2btaghmass\",\"${VARIABLE}\",${BLIND},${SYSTS}\) &



#rootload SMVH/limits/inputsSMVH.C\(\"ZHmmJ\",\"${INTAG}\",\"presel\",\"${VARIABLE}\",${BLIND},${SYSTS}\) & 
#rootload SMVH/limits/inputsSMVH.C\(\"ZHeeJ\",\"${INTAG}\",\"presel\",\"${VARIABLE}\",${BLIND},${SYSTS}\) & 
#rootload SMVH/limits/inputsSMVH.C\(\"ZHemJ\",\"${INTAG}\",\"presel\",\"${VARIABLE}\",0,${SYSTS}\) & 
#rootload SMVH/limits/inputsSMVH.C\(\"ZHmmJ\",\"${INTAG}\",\"preselhmassL\",\"${VARIABLE}\",0,${SYSTS}\) & 
#rootload SMVH/limits/inputsSMVH.C\(\"ZHeeJ\",\"${INTAG}\",\"preselhmassL\",\"${VARIABLE}\",0,${SYSTS}\) & 
#rootload SMVH/limits/inputsSMVH.C\(\"ZHmmJ\",\"${INTAG}\",\"preselhmassH\",\"${VARIABLE}\",0,${SYSTS}\) & 
#rootload SMVH/limits/inputsSMVH.C\(\"ZHeeJ\",\"${INTAG}\",\"preselhmassH\",\"${VARIABLE}\",0,${SYSTS}\) & 
#
#
#rootload SMVH/limits/inputsSMVH.C\(\"ZHmmJ\",\"${INTAG}\",\"0btag\",\"${VARIABLE}\",${BLIND},${SYSTS}\) & 
#rootload SMVH/limits/inputsSMVH.C\(\"ZHeeJ\",\"${INTAG}\",\"0btag\",\"${VARIABLE}\",${BLIND},${SYSTS}\) & 
#rootload SMVH/limits/inputsSMVH.C\(\"ZHemJ\",\"${INTAG}\",\"0btag\",\"${VARIABLE}\",0,${SYSTS}\) & 
#rootload SMVH/limits/inputsSMVH.C\(\"ZHmmJ\",\"${INTAG}\",\"0btaghmassL\",\"${VARIABLE}\",0,${SYSTS}\) & 
#rootload SMVH/limits/inputsSMVH.C\(\"ZHeeJ\",\"${INTAG}\",\"0btaghmassL\",\"${VARIABLE}\",0,${SYSTS}\) & 
#rootload SMVH/limits/inputsSMVH.C\(\"ZHmmJ\",\"${INTAG}\",\"0btaghmassH\",\"${VARIABLE}\",0,${SYSTS}\) & 
#rootload SMVH/limits/inputsSMVH.C\(\"ZHeeJ\",\"${INTAG}\",\"0btaghmassH\",\"${VARIABLE}\",0,${SYSTS}\) & 
#
#
#rootload SMVH/limits/inputsSMVH.C\(\"ZHmmJ\",\"${INTAG}\",\"1btag\",\"${VARIABLE}\",${BLIND},${SYSTS}\) & 
#rootload SMVH/limits/inputsSMVH.C\(\"ZHeeJ\",\"${INTAG}\",\"1btag\",\"${VARIABLE}\",${BLIND},${SYSTS}\) & 
#rootload SMVH/limits/inputsSMVH.C\(\"ZHemJ\",\"${INTAG}\",\"1btag\",\"${VARIABLE}\",0,${SYSTS}\) & 
#rootload SMVH/limits/inputsSMVH.C\(\"ZHmmJ\",\"${INTAG}\",\"1btaghmassL\",\"${VARIABLE}\",0,${SYSTS}\) & 
#rootload SMVH/limits/inputsSMVH.C\(\"ZHeeJ\",\"${INTAG}\",\"1btaghmassL\",\"${VARIABLE}\",0,${SYSTS}\) & 
#rootload SMVH/limits/inputsSMVH.C\(\"ZHmmJ\",\"${INTAG}\",\"1btaghmassH\",\"${VARIABLE}\",0,${SYSTS}\) & 
#rootload SMVH/limits/inputsSMVH.C\(\"ZHeeJ\",\"${INTAG}\",\"1btaghmassH\",\"${VARIABLE}\",0,${SYSTS}\) & 
#
#
#rootload SMVH/limits/inputsSMVH.C\(\"ZHmmJ\",\"${INTAG}\",\"2btag\",\"${VARIABLE}\",${BLIND},${SYSTS}\) & 
#rootload SMVH/limits/inputsSMVH.C\(\"ZHeeJ\",\"${INTAG}\",\"2btag\",\"${VARIABLE}\",${BLIND},${SYSTS}\) & 
#rootload SMVH/limits/inputsSMVH.C\(\"ZHemJ\",\"${INTAG}\",\"2btag\",\"${VARIABLE}\",0,${SYSTS}\) &
#rootload SMVH/limits/inputsSMVH.C\(\"ZHmmJ\",\"${INTAG}\",\"2btaghmassL\",\"${VARIABLE}\",0,${SYSTS}\) & 
#rootload SMVH/limits/inputsSMVH.C\(\"ZHeeJ\",\"${INTAG}\",\"2btaghmassL\",\"${VARIABLE}\",0,${SYSTS}\) & 
#rootload SMVH/limits/inputsSMVH.C\(\"ZHmmJ\",\"${INTAG}\",\"2btaghmassH\",\"${VARIABLE}\",0,${SYSTS}\) & 
#rootload SMVH/limits/inputsSMVH.C\(\"ZHeeJ\",\"${INTAG}\",\"2btaghmassH\",\"${VARIABLE}\",0,${SYSTS}\) &

fi
