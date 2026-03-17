//Enter N elements and find out sum of odd and even numbers using dynamic array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *arr;
    int sumEven = 0, sumOdd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamic memory allocation
    arr = (int*)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Finding sum of even and odd numbers
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            sumEven += arr[i];
        else
            sumOdd += arr[i];
    }

    printf("Sum of Even numbers = %d\n", sumEven);
    printf("Sum of Odd numbers = %d\n", sumOdd);

    // Free allocated memory
    free(arr);

    return 0;
}
