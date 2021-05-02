#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

int main(){
long int i,len=10000000;
double frac=0,k=0,tim=0.0;
long double x;
float y;
int thred,j,p;
for(p=2;p<=8;p+=2){ 	//for running code for multiple threads
omp_set_num_threads(p);
double avgfrac=0,frac=0;
clock_t begin=clock();
for(j=0;j<5;j++){	//for running code 5 times
frac=0;
k=0;
srand(time(0));

#pragma omp parallel for private(x,y) reduction(+:k)
for(i=1;i<=len;i++){
//printf("\niteration %ld is handled by %d thread\n",i,omp_get_thread_num());
x=(rand()%100001); //for random int range: 0-100000
x=-M_PI/2+M_PI*x/100000;
y=(rand()%10001);
y=y/10000;
thred =omp_get_num_threads();
//printf("cosx=%f , y= %f \n",cos(x),y);
if (cos(x)>=y){
k+=1;
//printf("k= %f, len= %ld\n",k,len);
}
}

frac=k/len;
avgfrac+=frac;
}
printf("\nIntergral value of cos from -90 to 90: %f, with %d threads",avgfrac*M_PI/5,thred);
clock_t end = clock();
tim = (double)(end - begin)/( CLOCKS_PER_SEC*thred);

printf("\nAverage time taken for 5 times executing the code: %f sec\n",tim/5);
printf("************************************************************\n");
}
return 0;
}

