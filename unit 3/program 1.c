//Swap two variables using pointer and function.

#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;

    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    printf("Before swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    // Calling swap function with addresses
    swap(&x, &y);

    printf("After swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
