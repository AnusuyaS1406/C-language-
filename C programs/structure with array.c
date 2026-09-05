#include<stdio.h>
struct student
{
    char *name[50];
    int age;
    float per;
};
void display(struct student o[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n name:%s",o[i].name);
        printf("\n age:%d",o[i].age);
        printf("\n percentage:%0.2f",o[i].per);
    }
}
int main()
{
    int n,i;
    printf("how many students you want:");
    scanf("%d",&n);
    struct student o[n];
    for(i=0;i<n;i++)
    {
        scanf("%s",&o[i].name);
        scanf("%d",&o[i].age);
        scanf("%f",&o[i].per);
    }
    display(o,n);
    return 0;
}