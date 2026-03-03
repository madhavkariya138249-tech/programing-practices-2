#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    float arr[n];   // Array declaration

    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];   // Add each element to sum
    }

    // Calculate average
    average = sum / n;

    // Display results
    printf("\nTotal = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
