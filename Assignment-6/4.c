#include <stdio.h>
#include <math.h>
#define max 10

struct student
{
    char name[100];
    int roll;
    float marks[6];
    float average;
};
void swap(struct student *xp, struct student *yp)  
{  
    struct student temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  

void sort(struct student data[])
{
    int i, j;  
    for (i = 0; i < max-1; i++)      
    for (j = 0; j < max-1-i; j++)  
        if (data[j].average > data[j+1].average)  
            swap(&data[j], &data[j+1]);  

}

void print(struct student data[])
{
    for(int i=0;i<max;i++)
    printf("%d %s %.2f\n",data[i].roll,data[i].name,data[i].average);
}

int main()
{
    struct student data[max];
    int i,j;
    float sum;
    for(i=0;i<max;i++)
    {
        printf("Enter name of student %d\n",i+1);
        scanf("%s",&data[i].name);
        printf("Enter roll number\n");
        scanf("%d",&data[i].roll);
        sum=0;
        printf("Enter marks of student\n");
        for(j=0;j<6;j++)
        {
            scanf("%f",&data[i].marks[j]);
            sum+=data[i].marks[j];
        }
        data[i].average=sum/6;

    }
    sort(data);
    print(data);
}