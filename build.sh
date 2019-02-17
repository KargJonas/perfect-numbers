#!/bin/bash

exec g++ $(dirname $0)/main.cpp -o $(dirname $0)/main.exe
# ./$(dirname $0)/main.exe
