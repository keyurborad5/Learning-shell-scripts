#include <stdio.h>
#include <omp.h>

int main()
{
int num_thd, thd_id;
omp_set_num_threads(4);
#pragma omp parallel
{
#pragma omp single
{
num_thd=omp_get_num_threads();
thd_id=omp_get_thread_num();


printf("\n Hello World!! from thread num %d out of %d threads\n",thd_id,num_thd);
}
}
printf("\nExit program\n");
}
