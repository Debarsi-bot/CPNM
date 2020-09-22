#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    long long sum=0;
    printf("Enter value of n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    sum+=i*(i+1);
    printf("Sum of series=%d",sum);

}