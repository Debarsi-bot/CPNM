#include <stdio.h>
#include <math.h>
int main()
{
    int n,sum;
    printf("Enter a number\n");
    scanf("%d",&n);
    sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    printf("%d",sum);
}