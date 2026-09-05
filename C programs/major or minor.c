#include<stdio.h>
int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 0 && age <= 100)
    {
        if (age >= 18 && age <= 100)
        {
            printf("Major");
        }
        else
        {
            printf("Minor");
        }
    }
    else
    {
        printf("Invalid age");
    }

    return 0;
}
