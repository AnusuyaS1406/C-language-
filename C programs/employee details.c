#include<stdio.h>
struct employee
{
    char *name[50];
    int age;
    int emp_id;
};
void display(struct employee o[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\nName : %s",o[i].name);
        printf("\nAge : %d",o[i].age);
        printf("\nEmployee ID: %d",o[i].emp_id);
    }
}       
int main()
{  
    int n,i;
    printf("employees count :" );
    scanf("%d",&n);
    struct employee o[n];
    for(i=0;i<n;i++)
    {
        scanf("%s",&o[i].name);
        scanf("%d",&o[i].age);
        scanf("%d",&o[i].emp_id);
    }
    display(o,n);
return 0;
}
