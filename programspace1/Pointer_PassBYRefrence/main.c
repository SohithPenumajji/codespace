#include <stdio.h>
#include <stdlib.h>

void square(int * const x);

int main()
{
    int num = 10;

    square(&num);
    printf("The square of the given value is: %d\n", num);
    return 0;
}

void square(int * const x)
{
    *x = (*x) * (*x);
}

