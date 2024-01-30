#include <stdio.h>
#include <stdlib.h>

struct employee {

char name[25];
char date[20];
float salary;
};

int main()
{
    // Initialization and declaration of structures
    struct employee details = {"Alice","18/07/2003",88080.00f};

    printf("Employee Name is: %s\n", details.name);
    printf("Date of Joining: %s\n", details.date);
    printf("Salary of the Employee: %.2f\n", details.salary);

    printf("\nEnter Employee Details: ");

    printf("\nName of the Employee: ");
    scanf("%s", details.name);

    printf("\nJoining Date: ");
    scanf("%s", details.date);

    printf("\n Salary to date: ");
    scanf("%f", &details.salary);

    printf("\nEmployee Name is: %s", details.name);
    printf("\nDate of Joining: %s", details.date);
    printf("\nSalary of the Employee: %.2f", details.salary);


    return 0;
}
