//Subtract two matrices using pointer to pointer

#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Dynamic allocation of 2D arrays using pointer to pointer
    int **A = (int**)malloc(rows * sizeof(int*));
    int **B = (int**)malloc(rows * sizeof(int*));
    int **Diff = (int**)malloc(rows * sizeof(int*));

    for(i = 0; i < rows; i++) {
        A[i] = (int*)malloc(cols * sizeof(int));
        B[i] = (int*)malloc(cols * sizeof(int));
        Diff[i] = (int*)malloc(cols * sizeof(int));
    }

    // Input elements for matrix A
    printf("Enter elements of matrix A:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &A[i][j]);

    // Input elements for matrix B
    printf("Enter elements of matrix B:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &B[i][j]);

    // Subtract matrices: Diff = A - B
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            Diff[i][j] = A[i][j] - B[i][j];

    // Displaying the result
    printf("Difference of matrices (A - B):\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++)
            printf("%d ", Diff[i][j]);
        printf("\n");
    }

    // Free dynamically allocated memory
    for(i = 0; i < rows; i++) {
        free(A[i]);
        free(B[i]);
        free(Diff[i]);
    }
    free(A);
    free(B);
    free(Diff);

    return 0;
}
