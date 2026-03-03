#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    // Input elements of first array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Copy elements from arr1 to arr2
    for(i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    // Display copied array
    printf("\nElements of second array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
