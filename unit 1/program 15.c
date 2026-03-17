#include <stdio.h>

int main() {
    char str[100];
    int i, vowels = 0, spaces = 0;

    // Input string
    printf("Enter a string: ");
    scanf(" %[^\n]", str);  // Read full line including spaces

    // Count vowels and spaces
    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check for vowel (both uppercase and lowercase)
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }

        // Check for space
        if(ch == ' ') {
            spaces++;
        }
    }

    // Display results
    printf("Number of vowels = %d\n", vowels);
    printf("Number of spaces = %d\n", spaces);

    return 0;
}
