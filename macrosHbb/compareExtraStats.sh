####final BDT comparisons
#rootload -q SMVH/macrosHbb/compareExtraStats.C\(\"W\",\"2tag2jet_150ptv_SR_mva\",50\)
#rootload -q SMVH/macrosHbb/compareExtraStats.C\(\"W\",\"2tag3jet_150ptv_SR_mva\",50\)
#rootload -q SMVH/macrosHbb/compareExtraStats.C\(\"Z\",\"2tag2jet_150ptv_SR_mva\",50\)
#rootload -q SMVH/macrosHbb/compareExtraStats.C\(\"Z\",\"2tag3jet_150ptv_SR_mva\",50\)
#rootload -q SMVH/macrosHbb/compareExtraStats.C\(\"H\",\"2tag2jet_150ptv_SR_mva\",50\)
#rootload -q SMVH/macrosHbb/compareExtraStats.C\(\"H\",\"2tag3jet_150ptv_SR_mva\",50\)

#######H MET 
rootload -b -q SMVH/macrosHbb/compareExtraStats.C\(\"H\",\"2tag2jet_150ptv_SR_MET\",10,0,1200,1e-3\)
rootload -b -q SMVH/macrosHbb/compareExtraStats.C\(\"H\",\"2tag3jet_150ptv_SR_MET\",10,0,1200,1e-3\)
#######Zbb MET 
rootload -b -q SMVH/macrosHbb/compareExtraStats.C\(\"Zbb\",\"2tag2jet_150ptv_SR_MET\",10,0,1200,1e-3\)
rootload -b -q SMVH/macrosHbb/compareExtraStats.C\(\"Zbb\",\"2tag3jet_150ptv_SR_MET\",10,0,1200,1e-3\)
######Wbb MET 
rootload -b -q SMVH/macrosHbb/compareExtraStats.C\(\"Wbb\",\"2tag2jet_150ptv_SR_MET\",10,0,1200,1e-3\)
rootload -b -q SMVH/macrosHbb/compareExtraStats.C\(\"Wbb\",\"2tag3jet_150ptv_SR_MET\",10,0,1200,1e-3\)
