#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number = 100;
   int *pnumber = NULL;

   pnumber = &number;

   printf("Address of number is: %p\n", &number);
   printf("Address of pnumber is: %p\n", &pnumber);
   printf("Value of the pnumber is: %p\n", pnumber);
   printf("Value of what pnumber is pointing to: %d\n", *pnumber);

   return 0;



}
