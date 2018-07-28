
for b in `cat $1 | grep -v '#' | grep hist`;do
echo $b

root -b mergeBackground.C\(\"$2\",\"$b\",\"$3\"\) &
done
