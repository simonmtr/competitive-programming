#!/bin/bash

if [ $# -ne 2 ]; then
    echo "Usage: $0 <rating> <number>"
    exit 1
fi

RATING=$1
NUMBER=$2
CP="./codeforces/${RATING}/${NUMBER}.cpp"

mkdir -p ./bin
g++-15 -std=gnu++17 -O2 -Wall -Wextra -Wshadow -Wconversion "$CP" -o ./bin/"$(basename "$CP" .cpp)".out && ./bin/"$(basename "$CP" .cpp)".out

# cd problems/
# export CP=./800/116A.cpp 
# run with: ./macrun.sh