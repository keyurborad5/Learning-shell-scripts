#!/bin/bash
read -p "enter the file name: " y
x=`cat $y | wc -c`
echo $x
