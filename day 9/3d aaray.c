#include <stdio.h>

#define X 2
#define Y 3
#define Z 4

int sum3DArray(int arr[X][Y][Z]) {
    int sum = 0;
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            for (int k = 0; k < Z; k++) {
                sum += arr[i][j][k];
            }
        }
    }
    return sum;
}

int main() {
    int arr[X][Y][Z] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };

    int total = sum3DArray(arr);
    printf("Sum of all elements in the 3D array: %d\n", total);

    return 0;
}