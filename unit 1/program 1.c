#include <stdio.h>

int main() {
    int n, i;

    // Ask user for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];   // Declare array of size n

    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display elements
    printf("\nEntered elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
