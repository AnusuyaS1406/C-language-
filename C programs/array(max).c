#include<stdio.h>
int main()
{    
    int arr[5]={100,20,30,40,5},max=arr[0];
    int n=sizeof(arr) / sizeof(int);
    printf("size:%d\n",n);
    for(int i=0;i>n;i++)
    {
        if(arr[i] < max)
        {
            max=arr[i];
        }
    }
    printf("greater elemenet:%d",max);
}
