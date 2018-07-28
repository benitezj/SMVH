export INTAG=${1}


###create channel inputs 
#for VAR in mVH mJet pTJet MET pTV mV pTL1; do
for VAR in mJet pTJet MET pTV mV pTL1; do 
#for VAR in       pTJet MET pTV mV pTL1; do 
echo $INTAG $VAR
source SMVH/limits/dataCardOct7.sh $INTAG $VAR
##must wait before going to next variable
sleep 50m
done

###MUST use a separate loop so that the above processes are done
####Merge ee+mumu , add MODEL systematics
#for VAR in mVH mJet pTJet MET pTV mV pTL1; do
for VAR in mJet pTJet MET pTV mV pTL1; do 
#for VAR in pTJet MET pTV mV pTL1; do 
echo $INTAG $VAR
source SMVH/limits/dataCardOct7_Merge.sh LimitInputs_ZHllJ_${INTAG}_${VAR}
done
