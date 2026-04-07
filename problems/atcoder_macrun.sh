#!/bin/bash

if [ $# -ne 3 ]; then
    echo "Usage: $0 <contest_type> <rating> <number>"
    exit 1
fi

CONTEST_TYPE=$1
RATING=$2
NUMBER=$3
CP="./atcoder/${CONTEST_TYPE}_${RATING}${NUMBER}.cpp"

mkdir -p ./bin
g++-15 -std=c++17 -O2 -Wall -Wextra -Wshadow -Wconversion "$CP" -o ./bin/"$(basename "$CP" .cpp)".out && ./bin/"$(basename "$CP" .cpp)".out

# cd problems/
# export CP=./800/ARC_116A.cpp
# run with: ./atcoder_macrun.sh ARC 800 116A