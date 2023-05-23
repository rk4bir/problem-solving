sum=0
read n

for i in $(seq 1 1 $n); do
    read x
    sum=$((sum+x))
done

avg=`echo $sum/$n | bc -l`
printf "%0.3f\n" $avg

