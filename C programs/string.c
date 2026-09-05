#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int size,i,upper=0,lower=0,digit=0,space=0,special=0;
    char s[50]={"CSE-A mass@104 "};
    size=strlen(s);
    for(i=0;i<=14;i++)
    {
        if(isupper(s[i]))
        {
            upper++;
        }
        else if(islower(s[i]))
        {
            lower++;
        }
        else if(isdigit(s[i]))
        {
            digit++;
        }
        else if(isspace(s[i]))
        {
            space++;
        }
        else
        {
            special++;
        }
    }
    printf("uppercase count:%d\n",upper);
    printf("lowercase count:%d\n",lower);
    printf("digit count:%d\n",digit);
    printf("space count:%d\n",space);
    printf("special count:%d\n",special);
}