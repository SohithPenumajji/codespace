#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char ch = ' ';
    double a, b;

    while (1) {
        printf("Enter the operator that you want to calculate '+' or '-' or '*' or '/' or if you want to exit press 'x': ");
        scanf(" %c", &ch);

        if (ch == 'x')
            exit(0);

        printf("Enter two numbers separated by spaces: ");
        scanf("%lf %lf", &a, &b);

        switch (ch)
        {
        case '+':
            printf("%.2lf + %.2lf = %.2lf", a, b, a + b);
            break;

        case '-':
            printf("%.2lf - %.2lf = %.2lf", a, b, a - b);
            break;

        case '*':
            printf("%.2lf * %.2lf = %.2lf", a, b, a * b);
            break;

        case '/':
            if (b != 0) {
                printf("%.2lf / %.2lf = %.2lf", a, b, a / b);
            } else {
                printf("Error!! Division by zero.");
            }
            break;

        default:
            printf("Error!! Please enter a valid operator.\n");
        }

        printf("\n");
    }

    return 0;
}
