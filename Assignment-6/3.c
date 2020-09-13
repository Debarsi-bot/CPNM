#include <stdio.h>
int main()
{
    FILE* read;
    read=fopen("3.c","r");
    if(read==NULL)
    {
        printf("Error in reading file");
        return 0;
    }
    char ch;

    while((ch=fgetc(read))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(read);

}