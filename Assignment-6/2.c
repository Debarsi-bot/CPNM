#include <stdio.h>
int main()
{
    FILE* save;
    save=fopen("info.txt","w");
    char str[10000];
    printf("Enter information\n");
    gets(str);
    if(save==NULL)
    {
        printf("Error in creating file");
        return 0;
    }

    fprintf(save,"%s",str);
}