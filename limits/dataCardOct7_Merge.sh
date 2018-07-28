#!/bin/sh

export INPUT=${1}
echo $INPUT

export OUTPUT=${INPUT}_Merged
echo $OUTPUT
rm -rf $OUTPUT
mkdir $OUTPUT

################################
####Merge ee and mm
################################
for eeJ in `ls ./$INPUT | grep -v .txt | grep ZHeeJ`; do
export mmJ=`echo $eeJ | awk -F'_' '{print $1"_ZHmmJ_"$3"_"$4"_"$5"_"$6}'`
export llJ=`echo $eeJ | awk -F'_' '{print $1"_llJ_"$3"_"$4"_"$5"_"$6}'`
hadd $OUTPUT/$llJ $INPUT/$eeJ $INPUT/$mmJ
done


###############################
###copy and rename em
################################
for emJ in `ls ./$INPUT | grep -v .txt | grep ZHemJ`; do
export llJ=`echo $emJ | awk -F'_' '{print $1"_llJ_"$3"_emu_"$5"_"$6}'`
echo $OUTPUT/$llJ
cp $INPUT/$emJ $OUTPUT/$llJ
done

##################################
###Add additional systematics
##################################
echo "------------------------------------------------------------------------"
echo "----------------Adding MODEL systematics--------------------------------"
echo "------------------------------------------------------------------------"
rootload SMVH/limits/dataCardOct7_addSysts.C\(\"${OUTPUT}\"\)

###############################
###Merge Event Lits
###############################
echo "------------------------------------------------------------------------"
echo "---------------Merging Event Lists--------------------------------"
echo "------------------------------------------------------------------------"
for eeJ in `ls ./$INPUT | grep .txt | grep ZHeeJ`; do
export mmJ=`echo $eeJ | awk -F'_' '{print $1"_ZHmmJ_"$3"_"$4"_"$5"_"$6}'`
export llJ=`echo $eeJ | awk -F'_' '{print $1"_llJ_"$3"_"$4"_"$5"_"$6}'`
rm -f $OUTPUT/$llJ
cat $INPUT/$eeJ $INPUT/$mmJ >> $OUTPUT/${llJ}.tmp
cat $OUTPUT/${llJ}.tmp | sort -n -k 2 >> $OUTPUT/$llJ 
rm -f $OUTPUT/${llJ}.tmp
echo $OUTPUT/$llJ
done

for emJ in `ls ./$INPUT | grep .txt | grep ZHemJ`; do
export llJ=`echo $emJ | awk -F'_' '{print $1"_llJ_"$3"_emu_"$5"_"$6}'`
/bin/cp $INPUT/$emJ $OUTPUT/$llJ
echo $OUTPUT/$llJ
done

