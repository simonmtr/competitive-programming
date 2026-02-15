#!/bin/bash

if [ $# -ne 2 ]; then
    echo "Usage: $0 <rating> <number>"
    exit 1
fi

CONTEST=$1
NUMBER=$2
CP="./contests/codeforces/${CONTEST}/${NUMBER}.cpp"

mkdir -p ./bin
g++-15 -std=c++20 -O2 -Wall "$CP" -o ./bin/"$(basename "$CP" .cpp)".out && ./bin/"$(basename "$CP" .cpp)".out

# cd problems/
# export CP=./800/116A.cpp 
# run with: ./macrun.sh