#!/bin/bash
for dir in test*; do
echo "File in $dir directory:"
echo
for file in $(ls -1 $dir); do
echo $file
done
echo "--------------------------------"
done
