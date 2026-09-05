#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a,b;
    printf("enter the a & b value");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a=%d\n b=%d",a,b);  
}
