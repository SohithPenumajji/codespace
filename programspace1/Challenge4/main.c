#include <stdio.h>

int main()
{
	int minutes = 0;
	
	double MinutesInYear = 0.0;
	double Years = 0.0;
	double days = 0.0;
	
	printf("Please enter the number of minutes: %d\n", minutes);
	scanf("%d", &minutes);
	
	MinutesInYear = (60 * 24 * 365);
	Years = (minutes / MinutesInYear);
	days = (minutes / 60.0) / 24.0;
	
	printf("Minutes in Year is: %.2f\n", MinutesInYear);
	printf("%d Minutes is approx %.2f years and %.2f days\n", minutes, Years, days);
	
	return 0;
	
}

