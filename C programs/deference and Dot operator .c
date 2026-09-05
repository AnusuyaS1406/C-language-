#include<stdio.h>
struct student
{
    char *name;
    int age;
    float per;
};
int main()
{
    struct student o={"Anu",19,8.79};
    struct student *ptr=&o;
//arrow operator
printf("\nname:%s",ptr->name);
printf("\nage:%d",ptr->age);
printf("\npercentage:%0.2f",ptr->per);
//dot operator
printf("\nname:%s",(*ptr).name);
printf("\nage:%0.2f",(*ptr).age);
printf("\npercentage:%0.2f",(*ptr).per);
return 0;
}