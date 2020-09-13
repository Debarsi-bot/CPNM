#include <stdio.h>
void swap(int *a,int *b)
{
   int c=*a;
   *a=*b;
   *b=c;

}
int main()
{
    int x,y;
    printf("Enter two numbers\n");
    printf("Enter x\n");
    scanf("%d",&x);
    printf("Enter y\n");
    scanf("%d",&y);
    swap(&x,&y);
    printf("x=%d\ny=%d",x,y);
}