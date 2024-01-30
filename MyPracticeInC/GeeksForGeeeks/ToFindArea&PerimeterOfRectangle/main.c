#include <stdio.h>
#include <stdlib.h>
// formulas to find area and perimeter of a rectangle
// area = length * breadth
// perimeter = 2 * ( length + breadth )
int main()
{
    int length, breadth, area, perimeter;
    printf("\nEnter the Length  of the rectangle: ");
    scanf("%d", &length);
    printf("\nEnter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("\nThe area of rectangle is: %d", area);
    printf("\nThe perimeter of rectangle is: %d", perimeter);
    return 0;
}
