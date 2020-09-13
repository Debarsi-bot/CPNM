#include <stdio.h>
#include <math.h>
int main()
{
    float f,c;
    printf("Enter Temperature of a city in Fahrenheit\n");
    scanf("%f",&f);
    c=(f-32)*(5.0/9.0);
    printf("Temeperature in Centigrade is %.1f",c);
}