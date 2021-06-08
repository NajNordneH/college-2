#!/usr/bin/env bash
set -euo pipefail
IFS=$'\n\t'

run_program_ten_times(){
    for ((i=0;i < 10;i++)); do
	echo $(./exercise3d /dev/urandom | wc -l) >> $1
    done
}

if [[ -e $1 ]]; then
    rm $1
fi

if [[ -e exercise3d ]]; then
    run_program_ten_times $1
else
    gcc -o exercise3d exercise3d.c 
    run_program_ten_times $1
fi
