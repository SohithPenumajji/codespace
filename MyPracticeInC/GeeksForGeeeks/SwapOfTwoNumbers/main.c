#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, temp;
    printf("Enter x & y values to swap those\n");
    printf("Enter x value\n");
    scanf("%d", &x);
    printf("Enter y value\n");
    scanf("%d", &y);

    temp = x;
    x = y;
    y = temp;

    printf("After swapping x is %d and y is %d\n", x, y);

    return 0;
}
