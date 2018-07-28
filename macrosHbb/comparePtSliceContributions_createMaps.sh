###Z B
#cat NTUPLES/CxTupleSamples/0lep/Oct17_MAXHTPTV_MVA/ZnunuB_v221/tuple_*.sh | grep cp | grep -v submit | awk -F" " '{print $2 }' | awk -F"\." '{print $5}' | awk -F"PTV" '{print $2}' > PtSlice_ZnunuB.txt 
#cat NTUPLES/CxTupleSamples/0lep/Oct17_MAXHTPTV_MVA/ZnunuB_v221/tuple_*.sh | grep cp | grep submitDir | awk -F" " '{print $3}' > File_ZnunuB.txt 
###Z L
#cat NTUPLES/CxTupleSamples/0lep/Oct17_MAXHTPTV_MVA/ZnunuL_v221/tuple_*.sh | grep cp | grep -v submit | awk -F" " '{print $2 }' | awk -F"\." '{print $5}' | awk -F"PTV" '{print $2}' > PtSlice_ZnunuL.txt 
#cat NTUPLES/CxTupleSamples/0lep/Oct17_MAXHTPTV_MVA/ZnunuL_v221/tuple_*.sh | grep cp | grep submitDir | awk -F" " '{print $3}' > File_ZnunuL.txt 


for s in ZnunuB WmunuB WenuB WtaunuB ZnunuL WmunuL WenuL WtaunuL; do

cat NTUPLES/CxTupleSamples/0lep/Oct17_MAXHTPTV_MVA/${s}_v221/tuple_*.sh | grep cp | grep -v submit | awk -F" " '{print $2}' | awk -F"\." '{print $5}' | awk -F"PTV" '{print $2}' > PtSlice_${s}.txt 
cat NTUPLES/CxTupleSamples/0lep/Oct17_MAXHTPTV_MVA/${s}_v221/tuple_*.sh | grep cp | grep submitDir | awk -F" " '{print $3}' > File_${s}.txt 

done
