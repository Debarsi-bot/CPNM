#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter value of n\n");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    printf("%d * %d = %d\n",n,i,n*i);
}