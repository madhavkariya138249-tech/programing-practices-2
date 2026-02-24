#include <stdio.h>

// Define a structure for complex numbers
struct Complex {
    float real;
    float imag;
};

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex sum;
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    return sum;
}

int main() {
    struct Complex num1, num2, result;

    // Input first complex number
    printf("Enter first complex number (real and imaginary part): ");
    scanf("%f %f", &num1.real, &num1.imag);

    // Input second complex number
    printf("Enter second complex number (real and imaginary part): ");
    scanf("%f %f", &num2.real, &num2.imag);

    // Add the two complex numbers
    result = addComplex(num1, num2);

    // Display the result
    printf("Sum of complex numbers: %.2f + %.2fi\n", result.real, result.imag);

    return 0;
}
