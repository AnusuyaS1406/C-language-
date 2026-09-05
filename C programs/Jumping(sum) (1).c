#include<stdio.h>
int main()
{    
    int i,sum=0;
    for(i=1;i<=10;i++)
    {
        if(i==6)
        {
            break;
        }
        sum=sum+i;
    }
    printf("%d\n",sum);
}