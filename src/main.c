#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee employees[3];
    int i, maxIndex = 0;

    // Input employee details
    for (i = 0; i < 3; i++) {
        printf("Enter details for employee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Find employee with the highest salary
    for (i = 1; i < 3; i++) {
        if (employees[i].salary > employees[maxIndex].salary) {
            maxIndex = i;
        }
    }

    // Display the employee with the highest salary
    printf("\nEmployee with the highest salary:\n");
    printf("ID: %d\n", employees[maxIndex].id);
    printf("Name: %s\n", employees[maxIndex].name);
    printf("Salary: %.2f\n", employees[maxIndex].salary);

    return 0;
}