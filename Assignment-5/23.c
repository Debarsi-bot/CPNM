#include <stdio.h>
#include <math.h>
void print(int *arr,int n)
{
    for(int i=0;i<n;i++)
    printf("%d ",*(arr+i));
}

int sum(int *arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    sum+=*(arr+i);
    
    return sum;

   
}
int main()
{
    int n,i;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    print(arr,n);
    printf("\nSum of all elemnts= %d",sum(arr,n));




}