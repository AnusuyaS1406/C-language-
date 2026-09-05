#include<stdio.h>
int main()
{
    int k,i,j,row;
    printf("enter the rows");
    scanf("%d", &row);
    for(i=1;i<=row;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        for(k=2;k<=i;k++)
        {
             printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}

