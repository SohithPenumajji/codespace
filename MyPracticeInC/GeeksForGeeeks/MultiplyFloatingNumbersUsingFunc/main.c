#include <stdio.h>
#include <stdlib.h>

float multiply(float a, float b);

int main()
{
    float A, B, product;
    printf("Enter two floating point values\n");
    printf("Enter A:\n");
    scanf("%f", &A);
    printf("Enter B:\n");
    scanf("%f", &B);

    product = multiply(A, B);

    printf("The answer is: %.2f\n", product);

    return 0;
}

float multiply(float a, float b)
{
    return a * b;
}
