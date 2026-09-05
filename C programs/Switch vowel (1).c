#include<stdio.h>
int main()
{
    char ch;
    printf("enter your choice:");
    scanf(" %s",&ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("it's a vowel");
            break;
        default:
            printf("no vowels");
    }
}
