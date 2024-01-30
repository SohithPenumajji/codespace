#include <stdio.h>
#include <stdlib.h>
#define FILENAME "Test_file.txt"

int main()
{
    FILE *fp = NULL;
    char ch;
    int LinesCount = 0;

    fp = fopen(FILENAME, "r");

    if (fp == NULL)
    {
        printf("\nFile does not exist");
        return -1;
    }

    while ((ch=fgetc(fp))!= EOF)
    {
        if(ch == '\n')
            LinesCount++;
    }

    fclose(fp);
    fp = NULL;

    printf("Total Number of lines are: %d\n", ++LinesCount);

    return 0;
}
