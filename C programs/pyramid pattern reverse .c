#include<stdio.h>
int main()
{
    int k,i,j,row;
    printf("enter the rows");
    scanf("%d", &row);
    for(i=row;i>=1;i--)
    {
        for(j=1;j<=row-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
             printf("* ");
        }
        printf("\n");
    }
}
