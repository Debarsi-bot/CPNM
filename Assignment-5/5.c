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


int main()
{    
    char str[1000];
    gets(str);
    int l=length(&str);
    printf("Length of string= %d",l);

    

}