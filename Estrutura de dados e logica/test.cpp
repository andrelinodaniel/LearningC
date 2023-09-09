#include <stdio.h>
#include <stdlib.h>

int N_MAX_alunos = 2;

struct aluno {
    char nome[50];
    int idade;
    float nota1;
    float nota2;
    float media;
};

struct aluno alunos[N_MAX_alunos]; // Correção: Renomeie para 'alunos'

void cadastro_aluno() {
    for (int i = 0; i < N_MAX_alunos; i++) { // Correção: Adicione ponto e vírgula aqui
        printf("Cadastro Aluno:\n");
        printf("Digite o nome: ");
        fgets(alunos[i].nome, 50, stdin);
        printf("Digite a idade: ");
        scanf("%d", &alunos[i].idade);
        printf("Digite a 1º nota: ");
        scanf("%f", &alunos[i].nota1);
        printf("Digite a 2º nota: ");
        scanf("%f", &alunos[i].nota2);
        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2;
    }
}

void dados_aluno() {
    for (int i = 0; i < N_MAX_alunos; i++) { // Correção: Adicione ponto e vírgula aqui
        printf("Dados dos alunos:\n");
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade); // Correção: Adicione \n aqui
        printf("1º nota: %f\n", alunos[i].nota1); // Correção: Adicione \n aqui
        printf("2º nota: %f\n", alunos[i].nota2); // Correção: Adicione \n aqui
        printf("Media: %f\n", alunos[i].media); // Correção: Adicione \n aqui
    }
}

int main() {
    int op = 0;
    printf("Sistema Escolar\n\n");
    printf("Digite 1 para cadastrar aluno\n");
    printf("Digite 2 para mostrar dados dos alunos\n");
    scanf("%d", &op);
    if (op == 1) {
        cadastro_aluno();
    } else if (op == 2) { // Correção: Use 'else if' aqui para evitar loop infinito
        dados_aluno();
    }

    return 0;
}

