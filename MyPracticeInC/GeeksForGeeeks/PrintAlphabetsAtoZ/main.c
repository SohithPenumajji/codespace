#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Printing alphabets from A to Z using for loop
    char i;

    printf("The alphabets from A to Z are: \n");

    for (i = 'A'; i <= 'Z'; i++)
    {
        printf("%c ", i);
    }

    // for printing small letters

    printf("\nThe alphabets from a to z are: \n");

    for (i = 'a'; i <= 'z'; i++)
    {
        printf("%c ", i);
    }

    // using while loop

    char j = 'A';

    printf("\nThe alphabets from A to Z are: \n");

    while (j <= 'Z')
    {
         printf("%c ", j);
            j++;

    }

    // printing alphabets using ascii values

    char k;

    printf("\nPrinting of alphabets using ASCII values: \n");

    for (k = 65; k <= 90; k++)
    {
        printf("%c ", k);
    }

    char l;

    printf("\nASCII values from a to z: \n");

    for (l = 97; l <= 122; l++)
    {
        printf("%c ", l);
    }


    return 0;
}


