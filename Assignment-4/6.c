#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct student_data
{
    int arr[5];
    int total;
};
int main()
{
    int i,max=0,j;
    struct student_data array[5];
    for(i=0;i<5;i++)
    {
        printf("Enter marks of student no %d\n",i+1);
        array[i].total=0;
        for(j=0;j<5;j++)
        {
            printf("Subject %d- ",j+1);
            scanf("%d",&array[i].arr[j]);
            array[i].total+=array[i].arr[j];
            
        }
        if(array[i].total>max)
        max=array[i].total;
    }
    printf("\n");
    for(i=0;i<5;i++)
    printf("Total of student no %d - %d\n",i+1,array[i].total);
    printf("Highest total marks= %d",max);


}