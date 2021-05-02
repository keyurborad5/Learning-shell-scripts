#!/bin/bash
echo "hey world"
func()
{
echo "you are inside function"
read -p "Enter your name: " name
echo "hello $name"
}
func
