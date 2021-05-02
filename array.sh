#!/bin/bash
declare -a fruit=('Apple' 'mango' 'lichi' 'banana' 'orange')
echo -e "Length of an array is: ${#fruit[@]} \n"
echo -e "number of characters of 3rd element is : ${#fruit[2]} \n"
echo -e "whole array is : ${fruit[@]} \n"
echo -e "5th element is : ${fruit[4]}\n"
declare -a select_fruit=${fruit[@]:1:3}
echo -e "the 3 elements starting from 2nd element is: ${fruit[@]:1:3}\n"
echo -e "new var: $select_fruit \n"
fruit[2]='papaya'
echo -e "Replacing lichi by papaya:${fruit[@]} \n"
fruit=("${fruit[@]}" "jamun" "grape")
echo -e "Appending jamun and grape to an array:${fruit[@]} \n"
unset fruit[5]
echo -e "Removing element from an array:${fruit[@]} \n"
