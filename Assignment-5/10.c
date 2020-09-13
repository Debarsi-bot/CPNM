#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int length(char c[])
{
    int i;
    for(i=0;c[i]!='\0';i++)
    {
    }   
    return i;
}

bool check_vowel(char c)
{
    if(c>=97&&c<=122)
    return check_vowel(c-32);
    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    return true;
    return false;
}

int cal(char *c,int l)
{
    int count=0;
    for(int i=0;i<l-1;i++)
    if(check_vowel(c[i])&&check_vowel(c[i+1]))
    count++;
    return count;

}
int main()
{
    char str[10000];
    printf("Enter a string\n");
    gets(str);
    int c=cal(str,length(str));
    printf("Number of occurrences of any two vowels in succession= %d",c);

}