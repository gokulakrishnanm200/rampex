#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 2;
    int result;

    // Compound expression
    result = a + b * c - b / a;

    // Show step-by-step evaluation
    printf("Given: a = %d, b = %d, c = %d\n", a, b, c);
    printf("Expression: a + b * c - b / a\n");
    printf("Step 1: b * c = %d\n", b * c);
    printf("Step 2: b / a = %d\n", b / a);
    printf("Step 3: a + (b * c) = %d\n", a + (b * c));
    printf("Step 4: (a + b * c) - (b / a) = %d\n", result);

    // Print final result
    printf("Result: %d\n", result);

    return 0;
}