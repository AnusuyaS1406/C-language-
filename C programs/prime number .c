#include<stdio.h>
int main()
{
    int n=4,i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    printf("%d\n",count);
    if(count==2)
    {
        printf("%d prime number",n);
    }
    else
    {
        printf("%d not prime",n);
    }
}
