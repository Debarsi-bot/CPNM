#include <stdio.h>
#include <string.h>

void initials(char *inp,char *out)
{
    int i,c=0;
    
    out[c++]=inp[0];
    for(i=0;inp[i]!='\0';i++)
    {
        if(inp[i]==' ')
        {
            out[c++]=inp[++i];
        }
    }
}


int main()
{    
    char inp[10000];
    char out[10000];
    gets(inp);
    initials(inp,out);
    printf("%s",out);

}