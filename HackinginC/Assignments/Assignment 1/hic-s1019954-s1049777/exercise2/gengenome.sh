#!/usr/bin/bash

if [[ -e "newgenome.txt" ]]; then
    rm newgenome.txt
fi

Arr=( 'A' 'C' 'G' 'T' )
str=""
for ((i = 0; i < 500; i++)); do
    for (( j=0; j < 100; j++)); do
        str+=${Arr[$(($RANDOM%4))]}
    done
    echo $str >> newgenome.txt
    str=""
done
