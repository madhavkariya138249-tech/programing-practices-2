//find out area of circle using pointer and function

#include <stdio.h>

// Function to calculate area using pointer
void areaCircle(float *r, float *area)
{
    *area = 3.14 * (*r) * (*r);
}

int main()
{
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Function call with pointers
    areaCircle(&radius, &area);

    printf("Area of the circle = %.2f\n", area);

    return 0;
}
