#include<stdio.h>
#include<ctype.h>
int main()
{
    char a,b;
    printf("Enter an uppercase letter: ");
    scanf(" %c", &a);
    printf("Lowercase letter is : %c", tolower(a));
    printf("\nEnter a lowercase letter : ");
    scanf(" %c", &b);
    printf("Uppercase letter is : %c", toupper(b));
    char c,d;
    printf("\nEnter an uppercase letter : ");
    scanf(" %c", &c);
    printf("Lowercase letter is : %c", c+32);
    printf("\nEnter an lowercase letter : ");
    scanf(" %c", &d);
    printf("Uppercase letter is : %c", d-32);
    return 0;
}
