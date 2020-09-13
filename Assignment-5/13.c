#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int length(char c[])
{
    int i;
    for(i=0;c[i]!='\0';i++)
    {
    }   
    return i;
}

bool check_pal(char *c,int right)
{
    int left=0;
    while(left<=right){
    
    if(c[left]!=c[right])
    return false;
    left++;
    right--;
    }
    return true;
}



int main()
{    
    char str[10000];
    gets(str);
    int l=length(&str);
 
    if(check_pal(str,l-1))
    printf("Palindrome");
    else
    printf("Not a palindrome");
    
}