#include <stdio.h>

int main() {
    char ch;

    // Prompt the user for input
    printf("Enter a character: ");
    scanf(" %c", &ch); // Note the space before %c to handle any leading whitespace

    // Check the type of character using if-else statements
    if (ch >= 'a' && ch <= 'z') {
        printf("The character '%c' is a small alphabet.\n", ch);
    } else if (ch >= 'A' && ch <= 'Z') {
        printf("The character '%c' is a capital alphabet.\n", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("The character '%c' is a digit.\n", ch);
    } else {
        printf("The character '%c' is a special character.\n", ch);
    }

    return 0;
}
