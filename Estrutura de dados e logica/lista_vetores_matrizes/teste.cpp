#include <stdio.h>

int main() {
    int Vet[3], Mat[3][3];
    int i, j, k;

    // leitura do vetor
    printf("Digite os 3 elementos do vetor:\n");
    for (i = 0; i < 3; i++) {
        scanf("%d", &Vet[i]);
    }

    // leitura da matriz
    printf("Digite os 9 elementos da matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &Mat[i][j]);
        }
    }

    // multiplicação do vetor pelas colunas da matriz
    for (j = 0; j < 3; j++) {
        int coluna[3];
        for (i = 0; i < 3; i++) {
            coluna[i] = Mat[i][j];
        }
        int resultado = 0;
        for (i = 0; i < 3; i++) {
            resultado += Vet[i] * coluna[i];
        }
        printf("Resultado da multiplicação do vetor pelas coluna %d da matriz: %d\n", j+1, resultado);
    }

    return 0;
}

