#include<stdio.h>
void add()
{
    int a,b,c;
    printf("enter the A and B value:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("total:%d\n",c);
}
int main()
{
    add();
    add();
    return 0;
}

