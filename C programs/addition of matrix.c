#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],re[10][10];
    int i,j,r,c;
    printf("enter any no of r and c:");
    scanf("%d%d",&r,&c);
    printf("enter the first matrix");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the second matrix");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            re[i][j]=a[i][j] + b[i][j];
            printf("%d\t",re[i][j]);
        }
        printf("\n");
    }
}
