#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int arr[3];
int c=0;




double f(double x,double c)
{
    return x*tan(x)-c;
   
}
double derivative(double x)
{
    return x*pow(1/cos(x),2)+tan(x);
}

void  input_bisection(double *low,double *high, double*eps)
{
    
    printf("Enter lower limit guess\n");
    scanf("%lf",low);
    printf("Enter higher limit guess\n");
    scanf("%lf",high);
    printf("Enter error tolerance\n");
    scanf("%lf",eps);
    
}

void input_newton(double *guess,double *eps)
{
   
    printf("Enter guess value of root\n");
    scanf("%d,guess");
    printf("Enter error tolerance\n");
    scanf("%d",eps);
}



// bisection method start
void  bisection(double a,double b,double fm_old,double eps,double constant)
{
   double fm_new=(a+b)/2;
    if(f(fm_new,constant)==0)
    {
       arr[c++]=fm_new;
       printf("Root is %lf\n",fm_new);
       return;  
    }
    double eps_a=(fabs(fm_new-fm_old)/fm_new)*100;
    if(fabs(eps_a)<=eps)
    {
        printf("Root is %lf\n",fm_new);
        return;
    }

    if(f(a,constant)*f(fm_new,constant)<0)
    bisection(a,fm_new,fm_new,eps,constant);
    else
    bisection(fm_new,b,fm_new,eps,constant);
}

//bisection method end




//newton rhapson start

void newton_rhapson(double x_old,double eps,double constant)
{
    double x_new=x_old-f(x_old,constant)/derivative(x_old);
    double eps_a=fabs(fabs(x_new-x_old)/x_new);
    if(eps_a<=eps)
    {
        arr[c++]=x_new;
        printf("Root is %lf\n",x_new);
        return;
    }
    newton_rhapson(x_new,eps,constant);

}

//newton rhapson end



int main()
{
    int ch;
    double low,high,mid,eps,guess,constant;
    printf("Enter value of constant c\n");
    scanf("%lf",&constant);

    while(c<3){
    printf("Taking input of root no %d\n",(c+1));
    printf("Press 1 for bisection\nPress 2 for Newton-Raphson\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        input_bisection(&low,&high,&eps);        
        mid=(low+high)/2;
        if(f(low,constant)*f(high,constant)>0){
        printf("Wrong guess values\n");
        break;
        }
        if(f(mid,constant)==0)
        {
            printf("Root is %lf",mid);
            return 0;
        }
        else
        if(f(low,constant)*f(mid,constant)<0)
        bisection(low,mid,mid,eps,constant);
        else
        bisection(mid,high,mid,eps,constant);
        break;
    

        case 2:
        printf("Enter initial guess of root\n");
        scanf("%lf",&guess);
        printf("Enter error tolerance\n");
        scanf("%lf",&eps);
        newton_rhapson(guess,eps,constant);
        break;

        default:
        printf("Wrong option\n");
    }
    }
}