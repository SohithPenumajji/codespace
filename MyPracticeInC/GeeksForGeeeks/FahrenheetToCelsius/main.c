#include <stdio.h>
#include <stdlib.h>
// fahrenheit to celsius fomrmula ((F-32) * 5.0 /9.0)
float fah_to_cels(float f);
int main()
{
    float F;
    printf("Enter Fahrenheit value\n");
    scanf("%f", &F);
    float c = fah_to_cels(F);
    printf("The fahrenheit for %.2f to celcius is %.2f degree celcius", F, c);
    return 0;
}

float fah_to_cels(float f)
{
    return ((f - 32.0) * 5.0 / 9.0);
}
