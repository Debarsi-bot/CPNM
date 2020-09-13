#include <stdio.h>
#include <string.h>

int length(char c[])
{
    int i;
    for(i=0;c[i]!='\0';i++)
    {
    }   
    return i;
}

void print_reverse(char str[],int l)
{
    for(int i=l-1;i>=0;i--)
    printf("%c",str[i]);
}


int main()
{    
    char str[10000];
    int i,j,l;
    printf("Enter a string\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {}
    l=length(&str);
    print_reverse(&str,l);


    

}