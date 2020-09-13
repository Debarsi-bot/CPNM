#include <stdio.h>
int main()
{
float s;
printf("Enter salary \n");
scanf("%f",&s);
s=s+60.0/100.0*s+15.0/100.0*s;
printf("Gross salary = %f \n",s );
}
