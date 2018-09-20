#!/usr/bin/env bash

echo "1 4 65 3 76 8\n" > toWork.txt

while true
do
    if `ln toWork.txt toWork.txt.lock`; then
        toPrint = $(tail -n 1 toWork.txt.lock)
        printf "$((toPrint + 1))\n" >> toWork.txt.lock
        rm toWork.txt.lock
    fi
done