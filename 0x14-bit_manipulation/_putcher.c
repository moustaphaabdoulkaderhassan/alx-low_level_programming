#include <stdio.h>

void _putcher(char c) {
    // Example: Perform a bitwise XOR operation with a mask
    char mask = 0x0F;  // You can modify the mask as needed
    char result = c ^ mask;

    // Example: Print the original and result characters
    printf("Original: %c, Result: %c\n", c, result);
}

int main() {
    char myChar = 'A';  // Replace 'A' with your character

    // Call _putcher with your character
    _putcher(myChar);

    return 0;
}
