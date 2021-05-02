#!/bin/bash
read -p "Enter the Word " mystring
if [ -z "$mystring" ]; then 
#-z checks the nullness
echo -e "\nstring is empty"
elif [[ "$mystring" == *"raj"* ]]; then
echo -e "\n\"$mystring\" contains raj init"
elif [[ "$mystring" == *"key"* ]]; then
echo -e "\n\"$mystring\" contains key in it"
else
echo -e "\n $mystring is bad "
fi
