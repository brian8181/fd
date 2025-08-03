#!/bin/bash

mkdir -p build
reflex --flex slex.l -o build/slex.yy.cpp
g++ build/slex.yy.cpp /usr/local/lib/libreflex.a -o build/slex
