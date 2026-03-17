//Add two matrices using array of pointers
#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Dynamic allocation of arrays of pointers
    int **A = (int**)malloc(rows * sizeof(int*));
    int **B = (int**)malloc(rows * sizeof(int*));
    int **Sum = (int**)malloc(rows * sizeof(int*));

    for(i = 0; i < rows; i++) {
        A[i] = (int*)malloc(cols * sizeof(int));
        B[i] = (int*)malloc(cols * sizeof(int));
        Sum[i] = (int*)malloc(cols * sizeof(int));
    }

    // Input elements of matrix A
    printf("Enter elements of matrix A:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &A[i][j]);

    // Input elements of matrix B
    printf("Enter elements of matrix B:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &B[i][j]);

    // Adding matrices
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            Sum[i][j] = A[i][j] + B[i][j];

    // Displaying the sum
    printf("Sum of matrices:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++)
            printf("%d ", Sum[i][j]);
        printf("\n");
    }

    // Free dynamically allocated memory
    for(i = 0; i < rows; i++) {
        free(A[i]);
        free(B[i]);
        free(Sum[i]);
    }
    free(A);
    free(B);
    free(Sum);

    return 0;
}
