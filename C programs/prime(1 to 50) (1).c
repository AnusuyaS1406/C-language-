#include<stdio.h>
int main()
{
    int n=50,i,j,count;
    for(int j=1;j<=n;j++)
    {
        count=0;
        for(i=1;i<=n;i++)
        {
            if(j%i==0)
            {
                count++;
            }
        }
    if(count==2)
    {
        printf("%d prime number\n",j);
    }
    }
}