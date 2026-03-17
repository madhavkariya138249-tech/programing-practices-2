#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length, flag = 1;

    // Input string
    printf("Enter a string: ");
    scanf(" %[^\n]", str);  // Read full line including spaces

    length = strlen(str);

    // Check palindrome
    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - 1 - i]) {
            flag = 0;  // Not palindrome
            break;
        }
    }

    if(flag) {
        printf("The string is a PALINDROME.\n");
    } else {
        printf("The string is NOT a PALINDROME.\n");
    }

    return 0;
}
