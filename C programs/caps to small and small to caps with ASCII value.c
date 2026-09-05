#include<stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char c;
    char result[50]="";
    char s[50]={"aBI@"};
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        c=s[i];
        if(c >='A' && c <='Z')
        {    
            result[i] = c+32;
        }
        else if(c >= 'a'&& c <= 'z')
        {
            result[i] = c-32;
        }
        else
        {
            result[i]=c;
        }
    }
    printf("result:%s",result);
}
