read a
read b
read c

if [ $a -eq $b ] && [ $a -eq $c ] && [ $b -eq $c ]; then
    echo 'EQUILATERAL'
elif [ $a -ne $b ] && [ $a -ne $c ] && [ $b -ne $c ]; then
    echo "SCALENE"
else
    echo "ISOSCELES"
fi

