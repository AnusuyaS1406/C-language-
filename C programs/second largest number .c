#include<stdio.h>
#include<limits.h>
int main()
{    
    int arr[5]={40,20,30},l=INT_MIN,s=INT_MIN;
    int n=sizeof(arr) / sizeof(int);
    printf("size:%d\n",n);
    printf("l=%d\n",l);
    printf("s=%d\n",s);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>l)
        {
            s=l;
            l=arr[i];
        }
        else if(arr[i]>s && arr[i]!=l)
        {
            s=arr[i];
        }
    }
    printf("greater element:%d\n",l);
    printf("second larger element:%d",s);
}
