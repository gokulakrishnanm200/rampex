#include <stdio.h>

int main() {
    int num = 2; // Start with the first even number

    printf("Even numbers between 1 and 50:\n");

    while (num <= 50) {
        printf("%d ", num);
        num += 2; // Increment by 2 to get the next even number
    }

    printf("\n");
    return 0;
}