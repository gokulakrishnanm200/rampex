

#include <stdio.h>

int main() {
    int C, M;
    scanf("%d %d", &C, &M);

    int fuel, total;

    for (int i = 0; i < C; i++) {
        total = 0;
        for (int j = 0; j < M; j++) {
            scanf("%d", &fuel);
            total += fuel;
        }
        printf("%d\n", total);
    }

    return 0;
}
