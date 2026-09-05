#include<stdio.h>
int main()
{    
    int sum=0;
    for(int i=0;i<=10;i++)
    {
        sum=sum+i;
        if(i==4)
        {
            goto Anu;
        }
    }
    Anu:
    printf("sum=%d",sum);
    return 0;
}
