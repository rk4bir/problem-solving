string='start'
while [ ${#string} -ne 0 ]; do
    read string
    echo ${string: 2:1}
done

