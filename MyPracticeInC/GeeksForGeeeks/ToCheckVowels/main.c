#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter a character to check whether it is an vowel or not: ");
    scanf("%c", &ch);

    if (ch == 'a' || 'A' || 'e' || 'E' || 'i' || 'I' || 'o' || 'O' || 'u' || 'U')
    {
        printf("%c is an vowel", ch);
    }
    else
    {
        printf("%c is not an consonant", ch);
    }
    return 0;
}
