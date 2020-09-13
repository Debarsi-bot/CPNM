#include <stdio.h>
#include <math.h>

void swap(int *x, int *y)  
{  
    int temp = *x;  
    *x = *y;  
    *y = temp;  
}  

int main()
{
    int i;
    int arr[10];
    printf("Entter ten numbers\n");
    for(i=0;i<10;i++)
    scanf("%d",&arr[i]);
    int index,j;
    for (i = 0; i < 10; i++)  
    {  
        index = i;  
        for (j = i+1; j < 10; j++)  
        if (arr[j] < arr[index])  
            index = j;  
   
        swap(&arr[index], &arr[i]);  
    }

    for (i = 0; i < 10; i++) 
    printf("%d ",arr[i]);


}