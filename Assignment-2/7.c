#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    float avg;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)/3.0;
    
    printf("Numbers above average are:\n");
    if(avg-a<0)
    printf("%d\n",a);
    if(avg-b<0)
    printf("%d\n",b);
    if(avg-c<0)
    printf("%d\n",c);
    printf("Numbers below average are:\n");
    if(avg-a>0)
    printf("%d\n",a);
    if(avg-b>0)
    printf("%d\n",b);
    if(avg-c>0)
    printf("%d\n",c);

}