#include<stdio.h>
int main()
{
    char a;
    printf("Enter a letter :");
    scanf(" %c",&a);
    if(a>='A' && a<='Z')
        printf("Capital letter.");
    else if(a>='a' && a<='z')
        printf("Small letter.");
    else
        printf("Not a letter.");
    return 0;
}
