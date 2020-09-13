#include <stdio.h>
#include <math.h>

int length(char c[])
{
    int i;
    for(i=0;c[i]!='\0';i++)
    {
    }   
    return i;
}

int word_count(char *str,int l)
{
    int c=0;
    int i;
    for(i=0;str[i]==' ';i++);
    {
    }
    if(str[i]!='\0')
    c++;
    i++;
    for(;i<l;i++)
    {
        if(str[i-1]==' '&&str[i]!=' ')
        c++;
    }

    return c;
}


int main()
{
    char str[10000];
    printf("Enter a string\n");
    gets(str);
    printf("No of words= %d",word_count(str,length(str)));
    
}