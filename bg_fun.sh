#!/bin/bash
arr=(t e s f w r q)
array()
{
echo "entire array: ${arr[@]}"
echo
echo "3rd element: ${arr[2]}"
}
array &
echo "start now"
jobs -l
