#include <stdio.h>
#include <math.h>
int fact_sum(int n)
{
    int sum=0,i;
    for(i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
            sum+=i;
            else
            sum+=i+n/i;
        }
    }
    
    return sum;

}


int main()
{
    int n,i;
    unsigned long long int sum=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    sum+=i*fact_sum(i);
    printf("Sum of series= %llu",sum);


}