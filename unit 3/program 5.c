//Enter N elements and find out sum of prime numbers using dynamic array

#include <stdio.h>
#include <stdlib.h>

int isPrime(int num)
{
    int i;
    if (num <= 1)
        return 0;

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n, i, sum = 0;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamic memory allocation
    arr = (int*)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Check prime numbers and add them
    for (i = 0; i < n; i++)
    {
        if (isPrime(arr[i]))
        {
            sum += arr[i];
        }
    }

    printf("Sum of prime numbers = %d\n", sum);

    // Free allocated memory
    free(arr);

    return 0;
}
