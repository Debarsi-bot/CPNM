#include <stdio.h>
#include <string.h>

void capitalize(char* str)
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=97&&str[i]<=122)
        str[i]-=32;
    }
}

int main()
{    
    char str[10000];
    int i;
    gets(str);
    capitalize(str);
    for(i=0;str[i]!='\0';i++)
    printf("%c",str[i]);
}