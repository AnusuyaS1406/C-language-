#include<stdio.h>
int main()
{
    int n=344,sum=0,r;
    while(n>0)
    {     
    r=n%10;
    sum+=r;
    n/=10;
    }
    printf("sum of natural nimber: %d",sum);
}
