#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum, n;
    printf("Enter number that you want to sum of that numbers: ");
    scanf("%d", &n);
    //loop to add natural numbers
    for(int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("sum is: %d", sum);
    return 0;
}
