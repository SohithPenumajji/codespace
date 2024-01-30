#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   printf("Enter the number that you want to check whether it is an armstrong number or not: ");
   scanf("%d", &n);
   int temp = n;
   int p = 0;

   while (n > 0)
   {
       int remainder = n % 10;
       p = (p) + (remainder * remainder * remainder);
       n =  n / 10;
   }

   if (temp == p) {
        printf("Yes. It is Armstrong Number.");
    }
    else {
        printf("No. It is not an Armstrong Number.");
    }
    return 0;
}
