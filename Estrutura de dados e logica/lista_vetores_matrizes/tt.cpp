#include <stdio.h>

int main() {
    int mA[10][10], mB[10][10];
    int i, j, k;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            mA[i][j] = k;
            k++;
        }
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (i % 2 == 0 && j % 2 == 0) {
                mB[i][j] = mA[i][j] + 6;
            } else {
                mB[i][j] = mA[i][j] * 6;
            }
        }
    }

    printf("Matriz A: \n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", mA[i][j]); // adiciona um espaço após cada valor
        }
        printf("\n"); // adiciona uma quebra de linha após imprimir cada linha da matriz
    }

    printf("Matriz B: \n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", mB[i][j]); // adiciona um espaço após cada valor
        }
        printf("\n"); // adiciona uma quebra de linha após imprimir cada linha da matriz
    }

    return 0;
}

