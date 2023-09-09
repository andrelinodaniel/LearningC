#include <stdio.h>

int main() {
    int M[6][6], A, V[36];
    int i, j, k;

    // Lendo a matriz M e o valor A
    printf("Digite os elementos da matriz M:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    printf("Digite o valor de A:\n");
    scanf("%d", &A);

    // Multiplicando a matriz M pelo valor A e armazenando no vetor V
    k = 0;
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            V[k] = M[i][j] * A;
            k++;
        }
    }

    // Escrevendo o vetor V
    printf("Vetor V:\n");
    for (i = 0; i < 36; i++) {
        printf("%d ", V[i]);
    }

    return 0;
}

