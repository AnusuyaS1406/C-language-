#include<stdio.h>
#include<string.h>
struct Payment
{
    int transactionID;
    char name[30];
    float amount;
    int type;
    
union 
{
    char upiID[30];
    char cardNumber[20];
    float cashAmount;
}payment;
};
int main()
{
    struct Payment p;
    printf("*******smart payment wallet*******\n\n");
    
    printf("\nEnter transaction ID");
    scanf("%d", &p.transactionID);
    
    printf("\nEnter customer Name:");
    scanf("%s", &p.name);
    
    printf("\nEnter Amount:");
    scanf("%f",&p.amount);

 
  printf("\nselected the payment method\n");
  printf("\n 1)UPI \n 2)card\n 3)cash\n ");
  printf("Enter your choice:");
  scanf("%d",&p.type);
  switch(p.type)
  {
     case 1:
         printf("Enter the UPI ID:");   
         scanf("%s",&p. payment.upiID);
         break;
     case 2:
         printf("Enter the card Number:");
         scanf("%d",&p.payment.cardNumber);
         break;
     case 3:
         p.payment.cashAmount = p.amount;
         break;

     default:
         printf("invalid payment method\n ");
     return 0; 
  }   
  printf("\n====payment Recipt====");
  
  printf("\ntransacation ID :%d\n", p. transactionID);
  printf("\ncustomer Name:%s\n", p. name);
  printf("\nAmount:%2f", p. amount);
  
  switch(p. type)
  {
      case 1:
      printf("\npayment Type :UPI\n");
      printf("UPI ID:%s\n",p.payment.upiID);
      break;
      case 2:
      printf("\npayment Type:CARD\n");
      printf("card Number:%s\n", p. payment. cardNumber);
      break;
      case 3:
      printf("\npayment Type: CASH\n===");
      printf("cash Amount:%s\n", p. payment. cashAmount);
      break;
  }
}  
      
  