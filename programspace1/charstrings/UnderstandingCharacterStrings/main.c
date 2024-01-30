#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int stringlength(const char string[]);
void concat(char result[], const char  str1[], const char str2[]);
bool equalstrings(const char s1[], const char s2[]);
int main()
{
   const char word1[] = "sohith";
   const char word2[] = "developer";
   const char word3[] = "okay";
   char result[50];

   printf("%d   %d   %d\n", stringlength(word1), stringlength(word2), stringlength(word3));

   concat(result, word1, word2);

   printf("%s", result);

   printf("\n%d\n", equalstrings("sohith", "sohith"));
   printf("%d\n", equalstrings("sohitha", "sohith"));

    return 0;
}
int stringlength(const char string[])
{
    int count = 0;
    while (string[count] != '\0')
        ++count;
    return count;
}
void concat(char result[], const char  str1[], const char str2[])
{
    int i, j;
    for (i = 0; str1[i] != '\0'; ++i)
    {
        result[i] = str1[i];
    }
    for (j = 0; str2[j] != '\0'; ++j)
    {
        result[i + j] = str2[j];
    }
        result[i+j] = '\0';
}
bool equalstrings(const char s1[], const char s2[])
{
    int i = 0;
    bool isEquals = false;

    while (s1[i] == s2 [i] &&
           s1[i] != '\0' &&
           s2[i] != '\0' )
            ++i;
    if (s1[i] == '\0' && s2[i] == '\0')
        isEquals = true;
        else
        isEquals = false;
    return isEquals;
}
