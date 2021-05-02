#include <stdio.h>
#include <omp.h>

int main()
{
#pragma omp parallel
{
#pragma omp sections
{
#pragma omp section

printf("\n Heyyloo World!");

#pragma omp section

printf("\n Exiting the progam\n");

}
}
}
