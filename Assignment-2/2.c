#include <stdio.h>
#include <math.h>
int main()
{
    double l,b,r,area1,area2,peri;
    printf("Enter length of rectangle-");
    scanf("%lf",&l);
    printf("Enter breadth of rectangle-");
    scanf("%lf",&b);
    printf("Enter radius of circle-");
    scanf("%lf",&r);
    area1=(l*b);
    peri=2*(l+b);
    area2=M_PI*r*r;
    printf("Area of rectangle= %lf\nPerimeter of rectangle= %lf\nArea of circle= %lf",area1,peri,area2);
}
