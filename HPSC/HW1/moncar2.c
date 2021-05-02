#include <stdio.h>
#include <math.h>
int main(){
long long int i,j;
static double  x[100000],y[100000];
long double  monte=0.0;
double len,k=0;
len=sizeof(x)/sizeof(x[0]); //which is as mentioned above
for (i=0;i<=len;i++){
for (j=0;j<=len;j++){
x[i]=(-3.14/2)+i*(3.14/(len));
y[j]=j/(len);
//printf("val : %f %f\n",x[i],y[j]);
if (cos(x[i])>=y[j]){
k+=1;
}
}
}
monte=3.14*k/((len+1)*(len+1));
printf("size X: %li\nlength: %f\nk is : %f\nans is: %Lf\n",sizeof(x),len,k,monte);
return 0;
}
