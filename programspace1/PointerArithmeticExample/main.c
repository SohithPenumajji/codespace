#include <stdio.h>
#include <stdlib.h>

int stringlength(const char *string);


int main()
{
    printf("%d \n", stringlength("stringlength test"));
    printf("%d \n", stringlength(""));
    printf("%d \n", stringlength("Sohith"));
    return 0;
}
int stringlength(const char *string)
{
    const char *lastaddress = string;

    while (*lastaddress)
        ++lastaddress;

    return lastaddress - string;

}
