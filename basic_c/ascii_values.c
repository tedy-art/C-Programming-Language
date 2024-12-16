#include <stdio.h>

int main() {
    char c;

    printf("Enter a character: ");
    c = getchar();  // Reads one character from input

    printf("You entered: %c\n", c);  // Outputs the entered character
    return 0;
}
