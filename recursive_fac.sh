#/bin/bash
fac()
{
echo "factorila"
}
read -p "Enter the number: " n
if [ $n -eq 0 ]; then
echo -e "factorial of $n is 1"
else
fac
fi

