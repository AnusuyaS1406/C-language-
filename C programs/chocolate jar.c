#include<stdio.h>
int main()
{
    int jar=10,a=0,b=0,c=0,i;
    for(int i=1;i<=jar;i++)
    {
        if(i%3==1)
        {
            a++;
        }
        else if(i%3==0)
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    printf("%d chocolate for a person\n",a);
    printf("%d chocolate for b person\n",b);
    printf("%d chocolate for c person\n",c);  
}
