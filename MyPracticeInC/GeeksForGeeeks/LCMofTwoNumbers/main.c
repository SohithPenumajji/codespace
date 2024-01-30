#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, max;
    printf("Enter two numbers that you want to fing L.C.M: ");
    scanf("%d %d", &x, &y);

    max = x > y ? x : y;

    while (1)
    {
        if (max % x == 0 && max % y == 0) {
            printf("The L.C.M of the %d and %d is %d.", x, y, max);
            break;
         }
         ++max;
    }


    return 0;
}
