#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    // Swap using a third variable
    temp = a;
    a = b;
    b = temp;

    // Output the swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}