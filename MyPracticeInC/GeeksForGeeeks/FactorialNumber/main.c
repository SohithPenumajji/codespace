#include <stdio.h>
#include <stdlib.h>

unsigned int factorial(unsigned int n);

int main()
{
    int num;
    printf("Enter the number that you want to check the factorial: ");
    scanf("%d", &num);
    int answer = factorial(num);// calling the function here
    printf("The factorial for %d is %d.", num, answer);
    return 0;
}
unsigned int factorial(unsigned int n)
{
    int result = 1;  // setting result to true
    int i;
    // loop starts over here
    for(i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}
