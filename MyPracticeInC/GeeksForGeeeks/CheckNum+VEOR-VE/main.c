#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;
    printf("Enter a number to check whether it is an POSITIVE or NEGATIVE or ZERO: ");
    scanf("%d", &A);

    if (A > 0)
    {
        printf("%d is an positive number\n", A);
    } else if (A < 0) {
    printf("%d is an negative number\n", A);
    } else if (A == 0){
        printf("You have entered zero\n");
    }
    return 0;
}
