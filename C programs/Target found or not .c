#include<stdio.h>
#include<limits.h>
int main()
{    
    int arr[3]={40,20,30},i,found=0,t=20;
    int n=sizeof(arr) / sizeof(int);
    for(i=0;i<n;i++)
    {
        if(arr[i]==t)
        {
            printf("target value found:%d",i);
            found=1;
            break;
        }
    }
    if(!found)
    {
      printf("target not found");
    }    
}
