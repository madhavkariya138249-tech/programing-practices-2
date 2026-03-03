#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length = 0, i;

    // Input string
    printf("Enter a string: ");
    scanf(" %[^\n]", str);  // Read full line including spaces

    // Method 1: Without using string function
    for(i = 0; str[i] != '\0'; i++) {
        length++;
    }
    printf("Length of string (without using function) = %d\n", length);

    // Method 2: Using strlen() function
    printf("Length of string (using strlen) = %lu\n", strlen(str));

    return 0;
}
