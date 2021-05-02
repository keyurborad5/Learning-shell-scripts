#include <stdio.h>
#include <math.h>

int main(){
int i,x[200];
double y[200],sum,monte;
for (i=0;i<=180;i++){
x[i]=-90+i;
y[i]=cos(x[i]*3.14/180);
sum=sum+y[i];
}
monte=sum*3.14/180;
printf("Integration using monte carlo of Cos from -pi/2 to pi/2 :%f \n",monte);

return 0;
}
