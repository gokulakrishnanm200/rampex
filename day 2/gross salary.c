#include <stdio.h>

int main() {
    float basic, hra, da, gross;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    printf("Enter HRA: ");
    scanf("%f", &hra);

    printf("Enter DA: ");
    scanf("%f", &da);

    gross = basic + hra + da;

    printf("Gross Salary = %.2f\n", gross);

    return 0;
}