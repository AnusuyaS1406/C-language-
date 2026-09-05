#include<stdio.h>
int main()
{    
    int arr[5]={1,-1,1,-1,1},count=0;
    int n=sizeof(arr) / sizeof(int);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==-1)
        {
            count++;
        }
    }
    printf("count:%d",count);
}
