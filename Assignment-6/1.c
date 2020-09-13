#include <stdio.h>


struct class{
    int roll;
    char name[100];
    char department[100];
    char course[100];
    int year;
};

void print_year(struct class arr[],int size,int y)
{
    for(int i=0;i<size;i++)
    if(arr[i].year==y)
    printf("%s\n",arr[i].name);
}

void print_data(struct class arr[],int size,int r)
{
    struct class temp;
    for(int i=0;i<size;i++){
    temp=arr[i];
    if(temp.roll==r)
    {
        printf("Roll number: %d\nName: %s\nDepartment: %s\nCourse: %s\nYear of joining: %d\n",temp.roll,temp.name,temp.department,temp.course,temp.year);
        break;
    }
    }
}

int main()
{
    int size,year,roll;
    printf("Enter no of students\n");
    scanf("%d",&size);
    struct class arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter details of student %d\n",(i+1));
        printf("Enter Roll no \n",&arr[i].roll);
        scanf("%d",&arr[i].roll);
        printf("Enter Name \n");
        scanf("%s",&arr[i].name);
        printf("Enter Department\n");
        scanf("%s",&arr[i].department);
        printf("Enter Course \n");
        scanf("%s",&arr[i].course);
        printf("Enter Year of joining \n");
        scanf("%d",&arr[i].year);
    }

    printf("Enter year of query\n");
    scanf("%d",&year);
    printf("Enter roll no of query\n");
    scanf("%d",&roll);
    print_year(arr,size,year);
    print_data(arr,size,roll);


}