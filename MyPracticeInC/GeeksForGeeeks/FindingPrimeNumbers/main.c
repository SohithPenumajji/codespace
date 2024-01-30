#include <stdio.h>
#include <stdlib.h>

// function to check prime number
void CheckPrime(int P);

int main()
{
   int P;
   printf("Please Enter to check if number is a Prime\n");
   scanf("%d", &P);

   CheckPrime(P);

    return 0;
}
void CheckPrime(int P)
{
    // initally we take an flag as an variable and set to true
    int flag = 1;


    // loop to iterate to 2 through /2

    for(int i = 2; i <= P / 2; i++) //if P is perfectly divisible by i then falg is set to false
    {
        if (P % i == 0){
            flag = 0;
            break;
        }

        }
    if (flag)
    {
        printf("%d is an Prime Number.\n", P);
    } else {
    printf("%d is not an Prime Number.\n", P);
    }
}
