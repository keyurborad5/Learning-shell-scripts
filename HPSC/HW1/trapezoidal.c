//PLEASE COMPILE IT WITH -lm AT THE END
// EXAMPLE: "gcc -o hw1 hw1.c -lm" only then it will work!!!

#include <stdio.h>
#include <math.h> 
#include <omp.h>
#include <time.h>
int main () 
{
int j;
for(j=2;j<=8;j+=2){	//Loop for using number of threads 1 to thread 8
int k,th;
double avgtime=0,trap;
for(k=0;k<5;k++ ){	//Loop for running 5 times on same number of threads
clock_t begin =clock();
double y,y_in,y_las,sum=0;
long long i,l;
l=500000000;		 //Number of divisions between -90 to 90
y_in=cos(-90*M_PI/180);
y_las=cos(90*M_PI/180);
omp_set_num_threads(j);
#pragma omp parallel for private(y) reduction(+:sum)
for (i=1;i<l;i++){
y=cos((-90+(180*i/l))*M_PI/180);
th=omp_get_num_threads();
sum+=y;
}
trap=M_PI/(2*l)*(y_in+y_las+2*sum);
clock_t end= clock();
double ts= (double)(end-begin)/(CLOCKS_PER_SEC*th);
avgtime+=ts;
}
printf("\nIntegration of cos from -pi/2 to +pi/2 is : %f , with %d threads takes at avg time of  %f secs\n",trap,th,avgtime/5);
}   
return 0;
}
