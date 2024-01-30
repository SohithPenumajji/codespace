#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C;
    printf("Enter 3 number to check which is highest among them: ");
    scanf("%d %d %d", &A, &B, &C);

    // condition starts from here
    if (A >= B && B >= C)
    {
        printf("%d is an highest among other.", A);
    }
    else if (B >= A && B >= C)
    {
        printf("%d is an highest among other.", B);
    }
    else
    {
        printf("%d is an highest among other.", C);
    }
    return 0;
}
