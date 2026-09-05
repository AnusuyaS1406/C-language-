#include<stdio.h>
int add()
{
    int a,b;
    printf("enter the A and B value:");
    scanf("%d%d",&a,&b);
    return a+b;
}
int main()
{
    int r=add();
    printf("total:%d",r);
}
