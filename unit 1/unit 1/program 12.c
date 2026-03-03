#include <stdio.h>

int main() {
    char name[100];
    int i;

    // Input name
    printf("Enter your name: ");
    scanf(" %[^\n]", name);  // Read full name including spaces

    // Print vertically
    printf("\nName printed vertically:\n");
    for(i = 0; name[i] != '\0'; i++) {
        printf("%c\n", name[i]);
    }

    return 0;
}
