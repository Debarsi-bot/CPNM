#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void  input(double *low,double *high, double*eps)
{
    printf("Enter lower limit guess\n");
    scanf("%lf",low);
    printf("Enter higher limit guess\n");
    scanf("%lf",high);
    printf("Enter error tolerance\n");
    scanf("%lf",eps);
    
}

double f(double x)
{
    return (x-2)*(x-4)*(x+8);
   
}

// bisection method start
void  bisection(double a,double b,double fm_old,double eps)
{
   double fm_new=(a+b)/2;
    if(f(fm_new)==0)
    {
       printf("Root is %lf",fm_new);
        return;  
    }
    double eps_a=(fabs(fm_new-fm_old)/fm_new)*100;
    if(fabs(eps_a)<=eps)
    {
        printf("Root is %lf",fm_new);
        return;
    }

    if(f(a)*f(fm_new)<0)
    bisection(a,fm_new,fm_new,eps);
    else
    bisection(fm_new,b,fm_new,eps);
}

//bisection method end


//regula falsi start
double derivative(double x)
{
    return 3*pow(x,2)+4*x-40;
}

void newton_rhapson(double x_old,double eps)
{
    double x_new=x_old-f(x_old)/derivative(x_old);
    double eps_a=fabs(fabs(x_new-x_old)/x_new);
    if(eps_a<=eps)
    {
        printf("root is %lf\n",x_new);
        return;
    }
    newton_rhapson(x_new,eps);

}





double calculate_mid_regula_falsi(double low,double high)
{
        return (high*f(low)-low*f(high))/(f(low)-f(high));
}

void regula_falsi(double low,double high,double prev,double eps)
{
    double xm=calculate_mid_regula_falsi(high,low);
    double eps_a=fabs(fabs(xm-prev)/xm*100);
    if(eps_a<=eps)
    {
        printf("Root is %lf\n",xm);
        return;
    }
    if(f(low)*f(xm)<0)
    regula_falsi(low,xm,xm,eps);
    else 
    regula_falsi(xm,high,xm,eps);
}

//end of regula falsi

//newton rhapson start



int main()
{
    int ch;
    printf("Press 1 for bisection\nPress 2 for Regula Falsi\nPress 3 for Newton-Raphson\n");
    scanf("%d",&ch);
     double low,high,mid,eps,guess;
    switch(ch)
    {
        case 1:
       
        input(&low,&high,&eps);        
        mid=(low+high)/2;
        if(f(low)*f(high)>0){
        printf("Wrong guess values\n");
        return 0;
        }
        if(f(mid)==0)
        {
            printf("Root is %lf",mid);
            return 0;
        }
        else
        if(f(low)*f(mid)<0)
        bisection(low,mid,mid,eps);
        else
        bisection(mid,high,mid,eps);
    
        case 2:
        input(&low,&high,&eps);
        if(f(low)*f(high)>0){
        printf("Wrong guess values\n");
        return 0;
        }
        double xm=calculate_mid_regula_falsi(low,high);
        if(f(xm)==0)
        {
            printf("Root is %lf\n",xm);
            return 0;
        }
        if(f(low)*f(xm)<0)
        regula_falsi(low,xm,xm,eps);
        else 
        regula_falsi(xm,high,xm,eps);

        case 3:
        printf("Enter initial guess of root\n");
        scanf("%lf",&guess);
        printf("Enter error tolerance");
        scanf("%lf",&eps);
        newton_rhapson(guess,eps);

        default:
        printf("Wrong option\n");
    }
}