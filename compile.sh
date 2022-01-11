#!/bin/bash

clear

mkdir tmp
cd tmp

flex ../lang.l
bison --verbose --debug -d ../syntax.y -o syntax.c

gcc lex.yy.c syntax.c ../main.c -o pls

cp pls ../pls

cd ..