#include <stdio.h>


int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}


int lcm(int a, int b) {
    static int multiple = 0;
    multiple += b;
    if (multiple % a == 0 && multiple % b == 0)
        return multiple;
    return lcm(a, b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Reset static variable before each call
    int result = (num1 > num2) ? lcm(num1, num2) : lcm(num2, num1);

    printf("LCM of %d and %d is %d\n", num1, num2, result);
    return 0;
}