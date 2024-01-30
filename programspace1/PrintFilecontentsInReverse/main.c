#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define FILENAME "text.txt"



int main()
{
    FILE *fp = NULL;

    int count = 0;
    int i = 0;

    fp = fopen(FILENAME, "r");

    if (fp == NULL)
        return -1;

    // fseek moves the file pointer to end of the file
    fseek(fp, 0, SEEK_END);

    //get the position of the file
    count = ftell(fp);

    while (i < count)
    {
        i++;
        fseek(fp, -i, SEEK_END);
        printf("%c", fgetc(fp));

    }

    printf("\n");

    fclose(fp);
    fp = NULL;


    return 0;
}
