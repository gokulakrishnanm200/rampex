#include <stdio.h>

int main() {
    float temperature;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temperature);

    switch ((int)temperature / 10) {
        case 0:
        case 1:
            printf("It's cold. Wear a jacket.\n");
            break;
        case 2:
            printf("It's cool. Wear a sweater.\n");
            break;
        default:
            if (temperature > 20)
                printf("It's warm. Wear a t-shirt.\n");
            else
                printf("It's cold. Wear a jacket.\n");
            break;
    }

    return 0;
}