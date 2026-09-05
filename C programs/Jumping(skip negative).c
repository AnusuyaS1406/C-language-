#include<stdio.h>
int main()
{    
    int i,sum=0,b,n=5;
    for(i=1;i<=n;i++)
    {
        printf("enter the number\n");
        scanf("%d",&b);
        if(b<0)
        {
            continue;
        }
        sum=sum+b;
    }
    printf("sum:%d\n",sum);
}
