#include <stdio.h>

int main() {
    double decimalNumber = 123.45;

    // Convert to integer part and fractional part
    int intPart = (int)decimalNumber;
    double fracPart = decimalNumber - intPart;

    // Convert and display the integer part
    printf("Decimal: %d\n", intPart);

    // Convert and display the binary representation of the integer part
    printf("Binary: ");
    for (int i = 31; i >= 0; i--) {
        int bit = (intPart >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");

    // Convert and display the octal representation of the integer part
    printf("Octal: %o\n", intPart);

    // Convert and display the hexadecimal representation of the integer part
    printf("Hexadecimal: %X\n", intPart);

    // Convert and display the fractional part to binary
    printf("Binary (fractional part): ");
    for (int i = 0; i < 32; i++) {
        fracPart *= 2;
        int bit = (int)fracPart;
        printf("%d", bit);
        fracPart -= bit;
    }
    printf("\n");

    return 0;
}
