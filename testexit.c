#include <stdio.h>

int main() {
    while (1) {
        int a, i;
        char p;
        printf("Enter a number (or 'q' to exit): ");
        if (scanf(" %c", &p) == 1) {
            if (p == 'q') {
                break; // Exit the loop if 'q' is entered
            }
        }
        // If 'q' is not entered, proceed to the multiplication table
        if (scanf("%d", &a) == 1) {
            for (i = 1; i <= 10; i++) {
                printf("%d * %d = %d\n", a, i, a * i);
            }
        } else {
            // Handle input errors
            printf("Invalid input. Please enter a number or 'q' to exit.\n");
            // Clear the input buffer to avoid infinite loops
            while (getchar() != '\n');
        }
    }

    return 0;
}
