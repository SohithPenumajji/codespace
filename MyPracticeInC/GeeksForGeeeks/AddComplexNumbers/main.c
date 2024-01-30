#include <stdio.h>
#include <stdlib.h>

//defining a structure for complex number
typedef struct ComplexNumbers {
   int real;
   int imaginary;
} complex;

// This function accepts two complex numbers as parameter and return addition of them.
complex add(complex x, complex y);

int main()
{
     // Define three complex type numbers
    complex a, b, sum;

    // first complex number
    a.real = 2;
    a.imaginary = 4;

    // second complex number
    b.real = 6;
    b.imaginary = 5;

    printf("\na = %d + %di", a.real, a.imaginary);
    printf("\nb = %d + %di", b.real, b.imaginary);

    sum = add(a, b); // calling the function here

    printf("\nsum = %d + %di", sum.real, sum.imaginary);


    return 0;
}

complex add(complex x, complex y)
{
   complex(add);
   add.real = x.real + y.real;
   add.imaginary = x.imaginary + y.imaginary;

   return(add);
}
