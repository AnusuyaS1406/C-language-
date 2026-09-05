#include<stdio.h>
int main()
{    
    int arr[5]={100,20,30,40,5},min=arr[0];
    int n=sizeof(arr) / sizeof(int);
    printf("size:%d\n",n);
    for(int i=0;i<n;i++)
    {
        if(arr[i] < min)
        {
            min=arr[i];
        }
    }
    printf("smallest elemenet:%d",min);
}
