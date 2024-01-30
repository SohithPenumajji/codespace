#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Leap_year(int year);

int main()
{
    int year;
    printf("Enter the year that you want to check for a leap year: ");
    scanf("%d", &year);

    if (Leap_year(year))
    {
        printf("%d is an leap year", year);
    }
    else {
        printf("%d is not an leap year", year);
    }

    return 0;
}
bool Leap_year(int year)
{
    // if an year is multiple of 400 then it is a leap year
    if (year % 400 == 0)
        return true;

    // if an year is multiple of 100 then it is not a leap year
    else if (year % 100 == 0)
        return false;

    // if an year is multiple of 4 then it is a leap year
    else if (year % 4 == 0)
        return true;

    // if no other condition satisfies then it is not a leap year
    return false;
}
