#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12
#define YEARS 5
int main ()
{
	// initailize rainfall data for 2021 to 2025
	float rain[YEARS][MONTHS] = 
	{
		{ 7.7,7.8,9.3,7.4,8.4,6.4,9.3,6.8,9.6,9.9,11.3,7.3 },
		{ 11.3,7.3,2.8,8.7,3.6,8.4,4.8,7.7,7.8,9.3,2.8,4.7 },
	    { 7.4,8.4,6.4,9.3,6.8,9.6,11.3,7.3,2.8,4.7,3.6,8.4 },
		{ 3.6,8.4,4.8,8.9,7.0,4.8,8.8,6.9,9.9,9.5,4.8,7.7 },
		{ 9.9,10.9,7.7,7.8,9.3,7.4,8.4,6.4,9.3,6.8,7.8,9.3 }
		
	};

	   int year, month;
	   float subtot, total;
	     
	   printf(" YEAR\t\t\tRAINFALL  (inches)\n");
	   
	   for(year = 0, total = 0; year < YEARS; year++)
	{
		   for(month = 0, subtot = 0; month < MONTHS; month++)
		   {
			   subtot += rain[year][month];
		   }
	   printf("%5d \t\t%15.1f\n", 2020 + year, subtot);
	   total += subtot;
		   
	}
		printf("\nThe Yearly Avg is: %.2f inches.\n\n", total/YEARS);
		
		printf("Monthmy Averages:\n\n");
		printf(" JAN FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC\n");
		
		for (month = 0; month < MONTHS; month++)
		{
 			for (year = 0; subtot = 0; year < YEARS, year++)
		     subtot += rain[year][month];
		
		printf("%4.1f ", subtot/YEARS);
		}
		printf("\n");
		
		return 0;
	}
		