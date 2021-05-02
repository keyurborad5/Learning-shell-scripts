#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){
long int i,len=100000000;
double frac=0,k=0,tim=0.0;
long double x;
float y;
clock_t begin =clock();
srand(time(0));
for(i=0;i<=len;i++){
x=(rand()%100001);
x=-3.14/2+3.14*x/100000;
y=(rand()%10001);
y=y/10000;
//printf("cosx=%f , y= %f \n",cos(x),y);
if (cos(x)>=y){
k+=1;
}
//printf("k= %f, len= %ld\n",k,len);
}
frac=k/len;
printf("frac = %f\n",frac);
printf("\n %f",frac*3.14);
clock_t end = clock();
tim = (double)(end - begin)/ CLOCKS_PER_SEC;
printf("\n time: %f \n", tim);

return 0;
}
