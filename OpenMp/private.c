#include <stdio.h>
#include <omp.h>

int main()
{
int my_id,tot=0;
#pragma omp parallel private(my_id) shared(tot)
{
my_id=omp_get_thread_num();
#pragma omp atomic update
tot+=my_id;
}
printf("\nTotal : %d\n Exit program\n",tot);
}
