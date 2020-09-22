#include <stdio.h>
#include <math.h>


struct data{
    double x;
    double y;
};



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
    
    struct data arr[4]={{1,1},{2,8},{3,27},{4,64}};
    
    double result;
   
   
    result=lagranges(arr,4,2.5);
    printf("Result by Lagranges Formula= %lf\n",result);
    
    result=newton_forward(arr,4,2.5);
    printf("Result by Newton Forwards Formula= %lf\n",result);
    
    result=newton_backward(arr,4,2.5);
    printf("Result by Newton Backward Fromula= %lf\n",result);
    
 

    
}



