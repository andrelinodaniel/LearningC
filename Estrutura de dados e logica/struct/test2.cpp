#include<stdio.h>
#include<stdlib.h>

struct Historico {
    char mat[50];
    float nota1;
    float nota2;
    float media;
};

struct Ficha {
    char nome[50];
    struct Historico historico;
};

int menu() {
    int op1;
    system("cls");
    system("color F");
    printf("Digite:\n1. Aprovados\n2. Reprovados\n");
    scanf("%d", &op1);
    return op1;
}

int main() {
    struct Ficha ficha[2];

    for (int i = 0; i < 2; i++) {
        printf("Digite o nome do Aluno: ");
        fgets(ficha[i].nome, 50, stdin);
        printf("Digite a matéria: ");
        fgets(ficha[i].historico.mat, 50, stdin);
        printf("Primeira nota:  ");
        scanf("%f", &ficha[i].historico.nota1);
        printf("Segunda nota:  ");
        scanf("%f", &ficha[i].historico.nota2);
        getchar();
        ficha[i].historico.media = (ficha[i].historico.nota1 + ficha[i].historico.nota2) / 2;
    }

    int op;

    for (int i = 0; i < 2; i++) {
        if (menu() == 1) {
            if (ficha[i].historico.media > 6) {
                system("cls");
                system("color 2");
                printf("Média do %s: %.2f\n", ficha[i].nome, ficha[i].historico.media);
                printf("Aprovado\n");
                scanf("%d", &op);
                if (op == 0) {
                    menu();
                }
            }
        }
        if (menu() == 2) {
            if (ficha[i].historico.media < 6) {
                system("cls");
                system("color 4");
                printf("Média do %s: %.2f\n", ficha[i].nome, ficha[i].historico.media);
                printf("Reprovado\n");
                scanf("%d", &op);
                if (op == 0) {
                    menu();
                }
            }
        }
    }

    return 0;
}

