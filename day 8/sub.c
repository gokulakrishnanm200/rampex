#include <stdio.h>

// Function to subtract two numbers
int subtract(int a, int b) {
    return a - b;
}

int main() {
    int num1, num2, result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    result = subtract(num1, num2);

    printf("Result: %d - %d = %d\n", num1, num2, result);

    return 0;
}