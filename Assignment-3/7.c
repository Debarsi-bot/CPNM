#include <stdio.h>
#include <math.h>


int main()
{
    int n;
    unsigned long long sum=0,val=1;
    printf("Enter value of n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        val*=(long long)i;
        sum+=val;
    }
    printf("Sum of series= %llu",sum);


}