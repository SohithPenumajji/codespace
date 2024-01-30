#include <stdio.h>

int main()
{
	double width = 55.9;
	double height = 100.8;
	double perimeter = 0.0;
	double area = 0.0;
	perimeter = 2.0 * (height + width);
	area = width * height;
	
	printf("Width is: %.2f, Height is: %.2f and Perimeter is: %.2f\n", width, height, perimeter);
	printf("Width is: %.2f, Height is: %.2f and Area is: %.2f\n", width, height, area);
	
	return 0;
}

