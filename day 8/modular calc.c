#include <stdio.h>


int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main() {
    int num1, num2, choice;
    float result;

    printf("Modular Calculator\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    switch (choice) {
        case 1:
            result = add(num1, num2);
            printf("Result: %d\n", (int)result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("Result: %d\n", (int)result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("Result: %d\n", (int)result);
            break;
        case 4:
            if (num2 == 0) {
                printf("Error: Division by zero!\n");
            } else {
                result = divide(num1, num2);
                printf("Result: %.2f\n", result);
            }
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}