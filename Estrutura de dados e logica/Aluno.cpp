#include <stdio.h>
#include <stdlib.h>
int N_MAX_alunos = 2;
struct aluno{
    char nome[50];
    int idade;
    float nota1;
    float nota2;
    float media;
}; 
struct aluno alunos[2];

void cadastro_aluno() {
    int op = 0;
    for (int i = 0; i < N_MAX_alunos; i++) {
        printf("Cadastro Aluno:\n");
        printf("Digite o nome: ");
        fgets(alunos[i].nome, 50, stdin);
        printf("Digite a idade: ");
        scanf("%d", &alunos[i].idade);
        printf("Digite a 1ª nota: ");
        scanf("%f", &alunos[i].nota1);
        printf("Digite a 2ª nota: ");
        scanf("%f", &alunos[i].nota2);
        getchar();
        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2;
        
        printf("Digite 1 para continuar cadastrando ou 0 para voltar para o menu: ");
        scanf("%d", &op);
        if (op == 0) {
            break; // Sair do loop e voltar para o menu principal
        }
    }
}

void dados_aluno() {
    int op = 0;
    for (int i = 0; i < N_MAX_alunos; i++) {
        printf("Dados dos alunos:\n");
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("1ª nota: %f\n", alunos[i].nota1);
        printf("2ª nota: %f\n", alunos[i].nota2);
        printf("Media: %f\n", alunos[i].media);
        
        printf("Digite 1 para continuar visualizando ou 0 para voltar para o menu: ");
        scanf("%d", &op);
        if (op == 0) {
            break; // Sair do loop e voltar para o menu principal
        }
    }
}

int main() {
    int op = 0;
    do {
        printf("Sistema Escolar\n\n");
        printf("Digite de 1 a 2\n");
        printf("1. Cadastrar aluno\n");
        printf("2. Mostrar dados dos alunos\n");
        printf("0. Sair\n");
        scanf("%d", &op);
        getchar();
        
        switch (op) {
            case 1:
                cadastro_aluno();
                break;
            case 2:
                dados_aluno();
                break;
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida. Digite novamente.\n");
                break;
        }
    } while (op != 0);

    return 0;
}

