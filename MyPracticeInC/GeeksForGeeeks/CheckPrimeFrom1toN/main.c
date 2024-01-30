#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_Prime(int n);

int main()
{
    int N;
    printf("Enter the number N to check for prime numbers between 1 and N: ");
    scanf("%d", &N);

    printf("Prime numbers between 1 and %d are:", N);

    for (int i = 2; i <= N; i++)
    {
        if (is_Prime(i))
        {
            printf(" %d", i);
        }
    }

    printf("\n");
    return 0;
}

bool is_Prime(int n)
{
    if (n <= 1) // 0 and 1 are not prime, so return false
        return false;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0) // if n is divisible by i, it is not a prime number
            return false;
    }
    return true;
}
