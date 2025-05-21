#include <stdio.h>


double power(double x, int y) {
    double result = 1.0;
    int i;
    int exponent = y;

    if (y < 0) {
        exponent = -y;
    }

    for (i = 0; i < exponent; i++) {
        result *= x;
    }

    if (y < 0) {
        return 1.0 / result;
    }
    return result;
}

int main() {
    double base;
    int exp;

    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);

    printf("%.2lf^%d = %.2lf\n", base, exp, power(base, exp));
    return 0;
}