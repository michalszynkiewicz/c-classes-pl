#!/bin/bash

file=$1

echo -ne "Compiling...\t"
gcc -ansi -pedantic -Wall "${file}" 
echo -e "DONE\nRunning:\n"
./a.out
