#!/bin/bash
g++ $1.cpp -o main
if [ "$2" -eq "2" ]
then
    ./main < in > out
elif [ "$2" -eq "0" ]
then
    ./main 
else
    ./main < in
fi

rm -rf main
