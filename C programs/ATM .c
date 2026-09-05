#include<stdio.h>
int main()
{
    int choice;
    float balance = 5000, amount;

    printf("1. Deposit\n");
    printf("2. Check Balance\n");
    printf("3. Withdraw\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter deposit amount: ");
            scanf("%f", &amount);
            balance = balance + amount;
            printf("Balance = %.2f", balance);
            break;

        case 2:
            printf("Balance = %.2f", balance);
            break;

        case 3:
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);

            if(amount <= balance)
            {
                balance = balance - amount;
                printf("Balance = %.2f", balance);
            }
            else
            {
                printf("Insufficient Balance");
            }
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}

