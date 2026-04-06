#!/bin/bash

if [ $# -ne 2 ]; then
    echo "Usage: $0 <rating> <number>"
    exit 1
fi

RATING=$1
NUMBER=$2
CP="./atcoder/ARC_${RATING}_${NUMBER}.cpp"

mkdir -p ./bin
g++-15 -std=c++17 -O2 -Wall -Wextra -Wshadow -Wconversion "$CP" -o ./bin/"$(basename "$CP" .cpp)".out && ./bin/"$(basename "$CP" .cpp)".out

# cd problems/
# export CP=./800/ARC_116A.cpp
# run with: ./atcoder_macrun.sh 800 116A