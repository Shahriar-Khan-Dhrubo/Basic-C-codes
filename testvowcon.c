#include <stdio.h>
#include <ctype.h>

int main() {
    char a;
    printf("Enter a letter: ");
    scanf(" %c", &a);

    if (isalpha(a) && (a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z')) {
        if ((a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' ||
            a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') && (a != '0')) {
            printf("The letter is a vowel.\n");
        } else {
            printf("The letter is a consonant.\n");
        }
    } else {
        printf("Invalid letter or more than one character entered.\n");
    }

    return 0;
}

