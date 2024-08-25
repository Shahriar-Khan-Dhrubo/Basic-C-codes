//vowel consonant using if else.Problem occurs while inputing any word or double characters
#include<stdio.h>
#include<ctype.h>
int main()
{
    char a;
    printf("Enter a letter :");
    scanf(" %c",&a);
    if(a== 'a'|| a== 'e' || a== 'i' || a== 'o' || a== 'u' || a== 'A' || a== 'E' || a== 'I' || a== 'O' || a== 'U')
        printf("The letter is a vowel.");
    else if(a<'A' || (a>'Z' && a<'a') || a>'z')
        printf("Invalid letter.");
    else
        printf("The letter is a consonant.");
    return 0;
}
