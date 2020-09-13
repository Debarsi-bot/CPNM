#include <stdio.h>
#include <math.h>
int main()
{
    int n,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    i=1;
    while(i*n<=100)
    {
        printf("%d\n",i*n);
        i++;
    }

}