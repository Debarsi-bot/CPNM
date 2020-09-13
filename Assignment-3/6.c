#include <stdio.h>
#include <math.h>

unsigned long long fact( n)
{
    if(n==1)
    return 1;
    else
    return (long long)n*fact(n-1);
}
int main()
{
    int n;
    unsigned long long sum=0;
    printf("Enter value of n\n");
    scanf("%d",&n);
    printf("%llu",fact(n));


}