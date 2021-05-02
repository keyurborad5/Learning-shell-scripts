#!/bin/bash
array()
{
arr=($@)
echo -e "all the elements: \n ${arr[@]}"
echo -e " 2nd element is : \n ${arr[3]}"
}
keyur=(rajkt mum chen sur mandor tori)
array ${keyur[@]}
item=(bike car pen dock sameer)
array ${item[@]}
