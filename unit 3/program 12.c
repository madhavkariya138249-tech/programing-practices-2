// Enter a string and print it in lowercase letters

#include <stdio.h>
#include <ctype.h> // For tolower()

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert each character to lowercase
    while(str[i]) {
        str[i] = tolower(str[i]);
        i++;
    }

    printf("String in lowercase: %s\n", str);

    return 0;
}
