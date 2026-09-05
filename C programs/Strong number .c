#include<stdio.h>
int main()
{
    int n=145,i,fact,r,sum=0,temp;
    temp=n;
    while(n>0){
        r=n%10;
        fact=1;
    for(i=1;i<=r;i++) {
        fact*=i;
    }
    sum+=fact;
    n/=10;
    }
    if(temp=sum)
    {
        printf("string nimber");
    }
    else
    {
        printf("not a strong nimber");
    }
}
