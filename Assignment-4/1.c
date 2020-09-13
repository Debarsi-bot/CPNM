#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,temp;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter n values\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    printf("Reversed array is\n");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);

}