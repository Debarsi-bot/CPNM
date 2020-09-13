#include <stdio.h>

int main()
{
int n;
printf("Enter sum \n");
scanf("%d",&n);
printf("No of 100 notes: %d \n",(n/100));
n%=100;
printf("No of 50 notes: %d \n",(n/50));
n%=50;
printf("No of 10 notes: %d \n" ,(n/10));
n%=10;
}


