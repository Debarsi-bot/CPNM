#include <stdio.h>
#include <math.h>
int main()
{
    int n,rev;
    printf("Enter a number\n");
    scanf("%d",&n);
    rev=0;
    while(n>0)
    {
        rev=rev*10+n%10;
        n/=10;
    }

    printf("%d",rev);

}