#include <stdio.h>
#include <stdlib.h>
// formula for simple intrest is P * T * R / 100
int main()
{
    float Principle_Amount, Time, Rate_Of_Intrest, Total;
    printf("\nEnter Principle Amount of your car loan: ");
    scanf("%f", &Principle_Amount);
    printf("\nEnter Time period of your loan: ");
    scanf("%f", &Time);
    printf("\nEnter Rate of Intrest of your loan: ");
    scanf("%f", &Rate_Of_Intrest);

    Total = ((Principle_Amount * Time * Rate_Of_Intrest) / 100);

    printf("The Simple Intrest is %.2f\n", Total);
    return 0;
}
