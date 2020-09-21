#include <stdio.h>
#include <math.h>
struct data{
    double x;
    double y;
};

void input(struct data arr[],int n)
{
    printf("Enter the values of x and f(x)\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter x%d- ",(i+1));
        scanf("%lf",&arr[i].x);
        printf("Enter y%d- ",(i+1));
        scanf("%lf",&arr[i].y);
    }
   
}

double lagranges(struct data arr[],int n,double x)
{
   
    double result=0,term;
    int i,j;
    for(i=0;i<n;i++)
    {
        term=arr[i].y;
        for(j=0;j<n;j++)
        {
            if(j==i)
            continue;
            term*=(x-arr[j].x)/(arr[i].x-arr[j].x);
        }
        result+=term;
    }
    return result;
}



double newton_forward(struct data arr[],int n,double x)
{
    double difference[n][n];
    int i,j;
    for(i=0;i<n;i++)
    difference[i][0]=arr[i].y;

    for(i=1;i<n;i++)
         for(j=0;j<n-i;j++)
            difference[j][i]=difference[j+1][i-1]-difference[j][i-1];
    
    
    double y=arr[0].y;
    double u=(x-arr[0].x)/(arr[1].x-arr[0].x);
    double term=u;
    long fact=1;
    for(int i=1;i<n;i++){
        fact*=i;
     
        y+=(term*difference[0][i]/fact);
        term*=(u-i);

    }

    return y;
}

double newton_backward(struct data arr[],int n,double x)
{
     double difference[n][n];
    int i,j;
    for(i=0;i<n;i++)
    difference[i][0]=arr[i].y;

    for(i=1;i<n;i++)
         for(j=n-1;j>=i;j--)
            difference[j][i]=difference[j][i-1]-difference[j-1][i-1];
    
    
    double y=arr[n-1].y;
    double u=(x-arr[n-1].x)/(arr[1].x-arr[0].x);
    double term=u;
    long fact=1;
    for(int i=1;i<n;i++){
        fact*=i;
     
        y+=(term*difference[n-1][i]/fact);
        term*=(u+i);

    }

    return y;
}


int main(){
    int n,c;
    printf("Enter no of data points\n");
    scanf("%d",&n);
    struct data arr[n];
    input(arr,n);
    double x,result;
    printf("Enter value of x\n");
    scanf("%lf",&x);
    printf("Press 1 to find by Lagranges Method\nPress 2 to find by Newton Forward\nPress 3 to find by Newton Backward\n");
    scanf("%d",&c);
    switch(c){
    case 1:
    result=lagranges(arr,n,x);
    printf("%lf\n",result);
    break;
    case 2:
    result=newton_forward(arr,n,x);
    printf("%lf\n",result);
    break;
    case 3:
    result=newton_backward(arr,n,x);
    printf("%lf\n",result);
    break;
    default:
    printf("Invalid choice\n");


    }
}



