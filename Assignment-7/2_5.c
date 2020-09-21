#include <stdio.h>
#include <math.h>

double f(double x)
{
    return 4*pow(x,3)+6*(x,2)+3*x;
}

double simpsons(double a, double b, int n)
{
	double result = f(a)+f(b);
	double h = (b-a)/n;
	for(int i=1;i<n;i++)
	{
		if(i%2)
			result += 4*f(a+i*h);
		else
			result += 2*f(a+i*h);
	}
	result *= (b-a)*(h/3);

	return result;
}

double trapezoidal(double a, double b, double n) 
{ 
   
    double h = (b-a)/n; 
    double result = f(a)+f(b); 
    for (int i = 1; i < n; i++) 
        result += 2*f(a+i*h); 
    
    result*=h/2;
    return result; 
} 
  

int main()
{
    double a,b,result;
    int n,c;
    printf("Considered equation is 4x^3+6x^2+3x\n");
    printf("Enter lower limit\n");
    scanf("%lf",&a);
    printf("Enter upper limit\n");
    scanf("%lf",&b);
    printf("Enter no of segments  to divide the domain into\n");
    scanf("%d",&n);

    printf("Press 1 to solve  by Trapezoidal rule\nPress 2 to solve by Simpsons 1/3 rd rule\n");
    scanf("%d",&c);

    switch(c)
    {
        case 1:
        result=trapezoidal(a,b,n);
        printf("Approximate value of integration is = %lf",result);
        break;

        case 2:
        result=simpsons(a,b,n);
        printf("Approximate value of integration is = %lf",result);
        break;

        case 3:
        printf("Invalid choice");

    }

}