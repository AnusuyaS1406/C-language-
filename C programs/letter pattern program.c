#include <stdio.h>
int main()
{
    int i, j, row;
    printf("Enter the rows:");
    scanf("%d",&row);
    for(i=1; i<=row; i++)
    {
        for(j=1;j<=row;j++)
        {
            if(i==1 || i==5 || j==1 || j==5 || i+j==row+1 || i==j)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}