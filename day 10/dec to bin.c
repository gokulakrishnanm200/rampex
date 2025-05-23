#include <stdio.h>

void decToBin(int n) {
    if (n > 1)
        decToBin(n / 2);
    printf("%d", n % 2);
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("Binary: ");
    decToBin(num);
    printf("\n");
    return 0;
}