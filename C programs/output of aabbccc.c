#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int l,i,n,j,k=0;
    char v;
    char re[50]="";
    char s[50]={"a2b2c3"};
    l=strlen(s);
    printf("length:%d\n",l);
    for(i=0;i<l;i++)
    {
        if(isalpha(s[i]))
        {
            v=s[i];
        }
        else
        {
            n=s[i] -'0';
            for(j=0;j<n;j++)
            {
            re[k++] = v;
            }
        }
    }
    printf("result:%s",re);
}