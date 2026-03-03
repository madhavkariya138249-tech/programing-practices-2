#include <stdio.h>

int main() {
    int a[3][3], b[3][3], diff[3][3];
    int i, j;

    // Input first matrix
    printf("Enter elements of first 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Subtract matrices
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    // Display result
    printf("\nDifference of the two matrices (A - B):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}
