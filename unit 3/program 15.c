// Copy a string into another.

#include <stdio.h>
#include <string.h>

int main() {
    char source[100], destination[100];

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);
    source[strcspn(source, "\n")] = '\0'; // Remove newline

    // Copy source string into destination
    strcpy(destination, source);

    printf("Copied string: %s\n", destination);

    return 0;
}
