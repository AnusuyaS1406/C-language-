#include<stdio.h>
int main()
{
    int hage,wage;
    float hsalary,wsalary;
    printf("enter the age");
    scanf("%d", &hage);
    printf("enter the age");
    scanf("%d", &wage);
    printf("enter the salary");
    scanf("%f", &hsalary);
    printf("enter the salary");
    scanf("%f", &wsalary);
    if(hage>=30 && wage>=25 && hsalary>=100000 && wsalary>=50000)
    {
        printf("your loan is sanction");
    }
    else
    {
        printf("loan is not approved\n");
        
        if(hage<30)
            printf("loan is not saction because of husband age\n");
            
        if(wage<25)
            printf("loan is not sanction because of wife age\n");
            
        if(hsalary<100000)
            printf("loan is not saction because of hus salary\n");
            
        if(wsalary<50000)
            printf("loan is not saction because of wife salary\n");
    }
    return 0;
}
