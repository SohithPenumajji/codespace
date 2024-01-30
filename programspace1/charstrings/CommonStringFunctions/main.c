#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char myString[100];
   char stringName[25][50], temp[25];
   int i, j, k, l;

   printf("\n\nPrint individual characters of string in reverse order :\n");
   printf("----------------------------------------------------------\n");
   printf("Input the string :");
   scanf("%s", &myString);

   i = strlen(myString);
   printf("The characters of the string in reverse order is: \n");

   for (j = i; j >= 0; j--)
   {
       printf("%c", myString[j]);
   }
   printf("\n");
   printf("-----------------------------------------------------------");

   // Sorts the string of an array using bubble sort
   printf("\n\nSorts the strings of an array using bubble sort :\n");
   printf("-----------------------------------------------------\n");

   printf("Input number of strings :\n");
   scanf("%d", &k);

   printf("Input String %d : \n", k);

   for (j = 0; j >= 0, j++)
   {
       scanf("%s", stringName[j]);
   }

   for (j=1;j<=k;j++)
    for (l=0;l<=k-j;jl++)
    if (strcmp(stringName[l], stringName[l+1])>0)

    return 0;
}
