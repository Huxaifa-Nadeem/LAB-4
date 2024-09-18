#include <stdio.h>

int main() {
    int number;

    while (1) {
        printf("Enter a positive number that is a multiple of 2 and divisible by 10: ");
        scanf("%d", &number);

        if (number > 0 && number % 2 == 0 && number % 10 == 0) {
            printf("You entered a valid number: %d\n", number);
            break; // Exit the loop if the number is valid
        } else {
            printf("Invalid number. Please try again.\n");
        }
    }

    return 0;
}
