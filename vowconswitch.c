//vowel consonant using a switch.I learned new thing about flag variables and how to use them. For word input, there are problems
#include<stdio.h>
int main()
{
    char letter;
    int valid=1;
    printf("Enter any letter :");
    scanf(" %c",&letter);
    if(letter<'A'|| (letter>'Z' && letter<'a') || letter>'z')
    {
        valid=0;
        printf("Invalid character.");
    }
    if(valid)
    {
        switch(letter)
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
            printf("The letter is vowel.");
            break;
        default:
            printf("The letter is consonant.");
            break;
        }
    }
    return 0;
}
