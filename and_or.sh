#!/bin/bash
read -p "enter a word: " mystring
if [ -z "$mystring" ]; then
echo -e "nothing was typed\n"
elif [[ "$mystring" == *"raj"* ]] && [[ "$mystring" == *"nath"* ]]; then
echo -e "\"$mystring\" contains both rsj snd nsth \n"
elif [[ "$mystring" == *"raj"* ]] || [[ "$mystring" == *"nath"* ]]; then
echo -e " \"$mystring\" contains either rsj or nsth \n"
else
echo "bad string"
fi

