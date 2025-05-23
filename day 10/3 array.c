#include <stdio.h> 

int main() {
    int x, y, z;
    int arr1[2][2][2], arr2[2][2][2], result[2][2][2];

    // Input for first 3D array
    printf("Enter elements for first 3D array (2x2x2):\n");
    for (x = 0; x < 2; x++) {
        for (y = 0; y < 2; y++) {
            for (z = 0; z < 2; z++) {
                printf("arr1[%d][%d][%d]: ", x, y, z);
                scanf("%d", &arr1[x][y][z]);
            }
        }
    }

    // Input for second 3D array
    printf("Enter elements for second 3D array (2x2x2):\n");
    for (x = 0; x < 2; x++) {
        for (y = 0; y < 2; y++) {
            for (z = 0; z < 2; z++) {
                printf("arr2[%d][%d][%d]: ", x, y, z);
                scanf("%d", &arr2[x][y][z]);
            }
        }
    }

    // Subtract arrays
    for (x = 0; x < 2; x++) {
        for (y = 0; y < 2; y++) {
            for (z = 0; z < 2; z++) {
                result[x][y][z] = arr1[x][y][z] - arr2[x][y][z];
            }
        }
    }

    // Display result
    printf("Resultant 3D array after subtraction:\n");
    for (x = 0; x < 2; x++) {
        for (y = 0; y < 2; y++) {
            for (z = 0; z < 2; z++) {
                printf("result[%d][%d][%d] = %d\n", x, y, z, result[x][y][z]);
            }
        }
    }

    return 0;
}