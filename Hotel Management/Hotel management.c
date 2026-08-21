
#include <stdio.h>
int main() 
{
    int ch,qty;
    char cont;
    float bill=0;
    do
    {
    printf("-----Anu Restaurant -----");
    printf("\n1)egg rice 🥚\n2)sambhar rice🍛\n3)curd rice🍚\n4)chappathi and butter masala🫓 \n5)ice cream🍨");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch) {
        case 1:
          printf("\nEnter the quantity:");
          scanf("%d", &qty);
          bill += qty*150;
          break;
        case 2:
          printf("Enter the quantity:");
          scanf("%d", &qty);
          bill += qty*100;
          break;
        case 3:
          printf("\nEnter the quantity:");
          scanf("%d", &qty);
          bill += qty*80;
          break;
        case 4:
          printf("\nEnter the quantity:");
          scanf("%d", &qty);
          bill += qty*120;
          break;
        case 5:
          printf("\nEnter the quantity:");
          scanf("%d", &qty);
          bill += qty*150;
          break;
        default:
          printf("\nInvalid input");
        } 
        printf("\nDo you want to continue? Y/N :");
        scanf(" %c",&cont);
    }
    while(cont == 'y' || cont == 'Y');
    printf("\nTotal Bill = %.2f",bill);
    printf("\nTHANK YOU! VISIT AGAIN.");
}
