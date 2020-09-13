#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main()
{
    bool arr[101]={false};
    
    int i,j;
    for(i=2;i<=10;i++)
    {
        if(!arr[i])
        {
            for(j=i*i;j<=100;j+=i)
            arr[j]=true;
        }
    }
    for(i=1;i<=100;i++)
    if(!arr[i])
    printf("%d\n",i);


}