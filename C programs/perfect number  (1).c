#include<stdio.h>
int main()
{
    int n=9,sum=0,i;
    for(i=0;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        printf("it's a perfect number");
    }
    else
    {
        printf("it's not a perfect number");
    }
}