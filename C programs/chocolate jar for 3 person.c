#include<stdio.h>
int main()
{
    int size,i,j,a=0,b=0,c=0;
    int jars[5]={10,20,30};
    size=sizeof(jars)/sizeof(int);
    for(i=0;i<size;i++)
    {
        for(j=1;j<=jars[i];j++)
        {
            if(j%3==1)
            {
                a++;
            }
            else if(j%3==2)
            {
                b++;
            }
            else
            {
                c++;
            }
        }
    }  
    printf("AAA got %d chocolate\n",a);
    printf("Bhava got %d chocolate\n",b);
    printf("Chandra got %d chocolate\n",c);
           
}