#include <stdio.h>

int main() {
    char name[100];
    int age;
    float salary;

    printf("Enter employee name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter employee age: ");
    scanf("%d", &age);

    printf("Enter employee salary: ");
    scanf("%f", &salary);

    printf("\nEmployee Details:\n");
    printf("Name: %s", name);
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);

    return 0;
}