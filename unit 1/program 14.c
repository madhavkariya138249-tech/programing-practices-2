#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length = 0;

    // Input string
    printf("Enter a string: ");
    scanf(" %[^\n]", str);  // Read full line including spaces

    // Method 1: Without using string function
    while(str[length] != '\0') {
        length++;
    }
    printf("\nReverse (without using function):\n");
    for(i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    // Method 2: Using strlen() function
    length = strlen(str);
    printf("\nReverse (using strlen function):\n");
    for(i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
