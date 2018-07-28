#!/bin/sh

#######################################################################
#export TAG=DB00-03_EXOT11_Trig
#export TAG=DBHTaggerAug12
#export TAG=DB_trunkSep4
#export TAG=DB00-04-03
export TAG=DB00-04-03_50ns

################### Summer15  ################################
rm -f ./LimitInputs_ZH*.root
rootload SMVH/limits/dataCardSMSummer15.C\(\"ZHmmJ\",\"${TAG}\"\)
rootload SMVH/limits/dataCardSMSummer15.C\(\"ZHeeJ\",\"${TAG}\"\)
rootload SMVH/limits/dataCardSMSummer15.C\(\"ZHemJ\",\"${TAG}\"\)
hadd LimitInputs_ZHllJ_${TAG}.root LimitInputs_ZHmmJ_${TAG}.root LimitInputs_ZHeeJ_${TAG}.root LimitInputs_ZHemJ_${TAG}.root
