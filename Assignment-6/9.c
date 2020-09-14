#include <stdio.h>

int main()
{
    char name[1000];
    FILE *read,*write;

    printf("Enter file name to be read from\n");
    scanf("%s",name);
    read=fopen(name, "r");
    if(read==NULL)
    {
        printf("Invalid File name");
        return 0;
    }

    printf("Enter file name to be written into\n");
    scanf("%s",name);
    write=fopen(name,"w");
    
    char ch;
    ch=fgetc(read);

    while(ch!= EOF)
    {
     
        fputc(ch,write);
        ch=fgetc(read);

    }

    printf("File copied");
    fclose(read);
    fclose(write);
    return 0;
   

}