#include <stdio.h>
int main()
{
int n,d;
float f;

printf("Enter two numbers \n");
scanf("%d",&n);
scanf("%d",&d);
if(d-n>0){
n=n+d;
d=n-d;
n=n-d;
}
f=(float)n/(float)d;
printf("%d/%d \n",n-(d*(n/d)),d);
printf("%f\n",f);
}



