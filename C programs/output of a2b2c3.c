#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,j,l,n,count=1;
    char v;
    char s[50]={"aabbccc"};
    l=strlen(s);
    for (i = 0;i<l ; i++)
    {
        if(s[i] == s[i+1])
        {
            count++;
        }
        else
        {
          printf("%c%d",s[i],count);
          count=1;
        }
    }
}