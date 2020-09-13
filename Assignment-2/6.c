#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,max,min;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    max=a>b?(a>c?a:c):(b>c?b:c);
    min=a<b?(a<c?a:c):(b<c?b:c);
    printf("Maximum= %d\nMinimum= %d\n",max,min);

}