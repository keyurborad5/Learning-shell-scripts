#!/bin/bash
#nested ifelse is tested here
NAME=keyur
PASSWORD=abc123
read -p "Enter your name: " name
if [ "$NAME" = "$name" ]; then
read -s -p "enter the passcode " passcode
if [ "$PASSWORD" = "$passcode" ]; then
echo -e "\nwelcome $name"
else
echo -e "\nwrong passcode"
fi
else
echo -e "\nwrong name"
fi

