#include <stdio.h>
#include <math.h>

void swap(char *str,int left,int right)
{
    char temp=str[left];
    str[left]=str[right];
    str[right]=temp;
}

void reverse(char*str,int right)
{
    int left=0;
    while(left<=right)
    swap(str,left,right);
}

void convert(int n,char*str)
{
    int c=0;
    while(n>0){
    str[c++]=n%10;
    n/=10;
    }
    reverse(str,c-1);
}

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    char str[100000];
    convert(n,str);
    for(int i=0;str[i]!='\0';i++)
    printf("%c",str[i]);
}