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

struct aluno alunos[N_MAX_alunos]; // Corre��o: Renomeie para 'alunos'

void cadastro_aluno() {
    for (int i = 0; i < N_MAX_alunos; i++) { // Corre��o: Adicione ponto e v�rgula aqui
        printf("Cadastro Aluno:\n");
        printf("Digite o nome: ");
        fgets(alunos[i].nome, 50, stdin);
        printf("Digite a idade: ");
        scanf("%d", &alunos[i].idade);
        printf("Digite a 1� nota: ");
        scanf("%f", &alunos[i].nota1);
        printf("Digite a 2� nota: ");
        scanf("%f", &alunos[i].nota2);
        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2;
    }
}

void dados_aluno() {
    for (int i = 0; i < N_MAX_alunos; i++) { // Corre��o: Adicione ponto e v�rgula aqui
        printf("Dados dos alunos:\n");
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade); // Corre��o: Adicione \n aqui
        printf("1� nota: %f\n", alunos[i].nota1); // Corre��o: Adicione \n aqui
        printf("2� nota: %f\n", alunos[i].nota2); // Corre��o: Adicione \n aqui
        printf("Media: %f\n", alunos[i].media); // Corre��o: Adicione \n aqui
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
    } else if (op == 2) { // Corre��o: Use 'else if' aqui para evitar loop infinito
        dados_aluno();
    }

    return 0;
}

