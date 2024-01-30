#include <stdio.h>
#include <stdlib.h>

// function to check a number is even or odd

void To_Check(int N);


int main()
{
    int N;
    printf("Enter Number To check if a number is even or odd: ");
    scanf("%d", &N);
    To_Check(N);
    return 0;
}
void To_Check(int N)
{
    int r;
    r = N % 2;
    if (r == 0)
    {
      printf("It is an even number");
    }
     else
    {
      printf("It is an odd number");
    }
}
