//PLEASE COMPILE IT WITH -lm AT THE END
// EXAMPLE: "gcc -o hw1 hw1.c -lm" only then it will work!!!

#include <stdio.h>
#include <math.h> 
#include <omp.h>
#include <time.h>
int main () 
{
int j;
for(j=1;j<=10;j++){
clock_t begin =clock();
double y,y_in,y_las,sum=0,trap;
long long i,l;
int th;
l=10000000;
y_in=cos(-90*M_PI/180);
y_las=cos(90*M_PI/180);
omp_set_num_threads(j);
#pragma omp parallel for private(y) reduction(+:sum)
for (i=1;i<180*l;i++){
y=cos((-90+(i/l))*M_PI/180);
th=omp_get_num_threads();
//printf("\ninter: %lld thread : %d\n",i,th);
//#pragma omp atomic update
sum+=y;
}
trap=M_PI/(2*180*l)*(y_in+y_las+2*sum);
clock_t end= clock();
double ts= (double)(end-begin)/(CLOCKS_PER_SEC*th);
printf("\nIntegration of cos from -pi/2 to +pi/2 is : %f , with %d threads takes %f secs\n",trap,th,ts);
}   
return 0;
}
