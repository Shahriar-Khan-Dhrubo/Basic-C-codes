#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[20]; // A character array to store the input
    int a, i;

    while (1) {
        printf("Enter a number or 'p' to exit: ");
        if (fgets(input, sizeof(input), stdin) != NULL) {
            input[strcspn(input, "\n")] = '\0'; // Remove the newline character

            if (strcmp(input, "p") == 0) {
                break; // Exit the loop if 'p' is entered
            } else {
                if (sscanf(input, "%d", &a) == 1) {
                    for (i = 1; i <= 10; i++) {
                        printf("%d * %d = %d\n", a, i, a * i);
                    }
                } else {
                    printf("Invalid input. Please enter a number or 'p' to exit.\n");
                }
            }
        }
    }

    return 0;
}

