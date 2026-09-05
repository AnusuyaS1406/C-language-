#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,c;
    char result[50]="";
    char s[50]={"aBI@"};
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        c=s[i];
        if(c >=65 && c <=90)
        {    
            result[i] = (char)(c+32);
        }
        else if(c >=97 && c <= 122)
        {
            result[i] = (char)(c-32);
        }
        else
        {
            result[i]=c;
        }
    }
    printf("result:%s",result);
}
