#include<stdio.h>
int main()
{
    int amount;
    printf("Enter your tour budget: Rs.");
    scanf("%d", &amount);
    if (amount >= 130000 && amount < 300000)
    {
        printf("\nYou can go to Japan\n");
        printf("Tour Package: Rs.220000\n");
        printf("Duration: 10Days\n");
    }
    else if (amount >= 200000 && amount <= 300000)
    {
        printf("\nYou can go to korea\n");
        printf("Tour Package: Rs.200000\n");
        printf("Duration: 10 Days\n");
    }
    else
    {
        printf("\nSorry! No tour package available for this budget.\n");
    }
    return 0;
}
