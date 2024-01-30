#include <stdio.h>
#include <stdlib.h>

void print_table(int range, int num);


int main()
{
    int num;
    printf("Please enter the number to want your table: ");
    scanf("%d", &num);

    int range;
    printf("Please enter the range of your table: ");
    scanf("%d", &range);

    print_table(range, num);

    return 0;
}
void print_table(int range, int num)
{
    int mul;

    for (int i = 1; i <= range; i++)
    {
        mul = num * i;
        printf("%d * %d = %d\n", num, i, mul);
    }

    printf("\n");
}
