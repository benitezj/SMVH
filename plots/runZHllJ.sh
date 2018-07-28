#export INTAG=DB00-04-03
#export INTAG=DB00-04-03_50ns
#export OUTTAG=50nsData78pb

#export INTAG=DB00-04-03_1fb
#export OUTTAG=25nsData1fbV3

#export INTAG=DB00-04-03_1fb_New
#export OUTTAG=25nsData1fbV4

#export INTAG=DB00-05-01
#export OUTTAG=25nsData2p7fb

#export INTAG=DB00-06-01
#export OUTTAG=25nsData3p3fb

#export INTAG=DB00-06-01
#export OUTTAG=25nsData3p2fb

##switch to MC15b
#export INTAG=DB00-06-01_mc15b
#export OUTTAG=25nsData3p2fb

##switch to new crossections
#export INTAG=DB00-06-01_mc15b
#export OUTTAG=3p2fbMC15bXs

##apply PU weight
#export INTAG=DB00-06-01_mc15b
#export OUTTAG=3p2fbMC15bXsPU

#export INTAG=DB00-07-00
#export OUTTAG=25nsData3p2fb

#export INTAG=DB00-07-00
#export OUTTAG=bveto_25nsData3p2fb

#export INTAG=DB00-07-02b
#export OUTTAG=25nsData3p2fb

export INTAG=DB00-07-02d
export OUTTAG=25nsData3p2fb

##test
#rootload SMVH/plots/runZHllJ.C\(\"ZHmmJ\",\"${INTAG}\",\"presel\",\"${OUTTAG}\"\)
#exit 

for ch in ZHmmJ ZHeeJ ZHemJ; do
#for ch in ZHeeJ ; do

rootload SMVH/plots/runZHllJ.C\(\"${ch}\",\"${INTAG}\",\"presel\",\"${OUTTAG}\"\) &
#rootload SMVH/plots/runZHllJ.C\(\"${ch}\",\"${INTAG}\",\"1btag\",\"${OUTTAG}\"\) &
#rootload SMVH/plots/runZHllJ.C\(\"${ch}\",\"${INTAG}\",\"2btag\",\"${OUTTAG}\"\) &
#rootload SMVH/plots/runZHllJ.C\(\"${ch}\",\"${INTAG}\",\"1btaghmass\",\"${OUTTAG}\"\) &
#rootload SMVH/plots/runZHllJ.C\(\"${ch}\",\"${INTAG}\",\"2btaghmass\",\"${OUTTAG}\"\) &
#
#if [ "$ch" != "ZHemJ" ] ; then
#rootload SMVH/plots/runZHllJ.C\(\"${ch}\",\"${INTAG}\",\"1btaghmassL\",\"${OUTTAG}\"\) &
#rootload SMVH/plots/runZHllJ.C\(\"${ch}\",\"${INTAG}\",\"1btaghmassH\",\"${OUTTAG}\"\) &
#rootload SMVH/plots/runZHllJ.C\(\"${ch}\",\"${INTAG}\",\"2btaghmassL\",\"${OUTTAG}\"\) &
#rootload SMVH/plots/runZHllJ.C\(\"${ch}\",\"${INTAG}\",\"2btaghmassH\",\"${OUTTAG}\"\) &
#fi

done
