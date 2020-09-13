#include <stdio.h>
#include <math.h>
int main()
{
    int max,min,n,i;
    printf("Enter size of list\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    min=max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
        min=arr[i];
        else
        if(arr[i]>max)
        max=arr[i];
    }
    printf("Max= %d\nMin= %d",max,min);


    
}