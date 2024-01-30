#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// compound intrest formula = principal * ( 1 + rate / 100 ) ^ Time
int main()
{
    double Principle, Time, Roi, Total, CI;
    printf("\nEnter Principle Amount of your car loan: ");
    scanf("%lf", &Principle);
    printf("\nEnter Time period of your loan: ");
    scanf("%lf", &Time);
    printf("\nEnter Rate of Intrest of your loan: ");
    scanf("%lf", &Roi);

    Total = Principle *
                  ((pow((1 + Roi / 100),
                    Time)));

    CI = Total - Principle;
    printf("\nThe compund Intrest for your loan is: %.2lf", CI);
    return 0;
}
