#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b;
    printf("enter the value A and B");
    scanf("%d%d",&a,&b);
    int r=add(a,b);
    printf("total:%d",r);
    return 0;
}
