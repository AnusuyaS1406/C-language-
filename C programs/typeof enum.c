#include<stdio.h>
typedef enum{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,saturday
}weekday;
int main()
{
     weekday today=saturday;
     switch(today)
     {
         case Sunday:
             printf("fundayy");
             break;
         case Monday:
         case Tuesday:
         case Wednesday:
         case Thursday:
         case Friday:
             printf("working day");
             break;
         case saturday:
             printf("weekend");
             break;
         default:     
             printf("enter day properly");
     }
}
