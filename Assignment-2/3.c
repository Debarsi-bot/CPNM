#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter a three digit nunber\n");
    scanf("%d",&n);
    int sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    printf("Sum of digits= %d",sum);
}