#!/bin/bash
function machine #function declaration
{ #function defination
echo -e "\n machine info: " ; uname -a
echo -e "\n user loggin : " ; w -h
echo -e "\n Machine status: " ; uptime
echo -e "\n memory: " ; free
echo -e "\n file system status: "; df -h
echo -e "\n end of program"
}
echo -e "\n Begining of program"
$1 #this passes the argument while executing script 
