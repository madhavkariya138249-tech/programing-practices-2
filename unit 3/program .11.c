//Enter a string and print it in uppercase letters.

#include <stdio.h>
#include <ctype.h> // For toupper()

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert each character to uppercase
    while(str[i]) {
        str[i] = toupper(str[i]);
        i++;
    }

    printf("String in uppercase: %s\n", str);

    return 0;
}
