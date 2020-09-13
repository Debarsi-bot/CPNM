#include <stdio.h>
#include <math.h>

int convert(char *c)
{
    int ans=0,i;
    for(i=0;c[i]!='\0';i++)
    if(c[i]>=48&&c[i]<=57)
    ans=ans*10+c[i]-48;
    return ans;

}
int main()
{
    char str[10000];
    printf("Enter a string\n");
    gets(str);
    int ans=convert(str);
    printf("%d",ans);
}