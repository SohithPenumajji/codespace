#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int size;
    char *text = NULL;

    printf("Enter the  limit of text: \n");
    scanf("%d", &size);

    text = (char *) malloc(size * sizeof(char));
    if (text != 0)
    {
        printf("Enter Some Text: \n");
        scanf(" ");
        gets(text);

        printf("Inputetd Text is %s\n", text);
    }
    free(text);
    text = NULL;
    return 0;
}
