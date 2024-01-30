#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str = NULL;

int main(void)
{
    /* Intial memory Allocation */
    str = (char *) malloc(15 * sizeof(char));
    strcpy(str, "Sohith");
    printf("String: %s, Address: %p\n", str, str);

    /*Rellaocate Memory to the existing */
    str = (char *) realloc(str, 25 * sizeof(char));
    strcat(str, ".com");
    printf("String: %s, Address: %p\n", str, str);

    free(str);
    str = NULL;




    return 0;
}
