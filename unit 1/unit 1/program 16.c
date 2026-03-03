#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // Input two strings
    printf("Enter first string: ");
    scanf(" %[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    // Compare strings using strcmp()
    if(strcmp(str1, str2) == 0) {
        printf("The strings are SAME.\n");
    } else {
        printf("The strings are NOT SAME.\n");
    }

    return 0;
}
