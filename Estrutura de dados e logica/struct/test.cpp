#include<stdio.h>
#include<stdlib.h>
struct Aluno{
	char matricula[50];
	char nome[50];
	int codDisciplina;
	float nota1;
	float nota2;
};


int main(){
struct Aluno aluno[2];
float media[2];
printf("---Cadastro Aluno---\n");
for(int i=0;i<2;i++){
	system("cls");
	printf("Digite o nome: ");
	fgets(aluno[i].nome,50,stdin);
	printf("Digite o numero de matricula: ");
	fgets(aluno[i].matricula,50,stdin);
	printf("Digite 	o codigo de disciplina: ");
	scanf("%d",&aluno[i].codDisciplina);
	getchar();
	printf("Digite a primeira nota: ");
	scanf("%f",&aluno[i].nota1);
	getchar();
	printf("Digite a segunda nota: ");
	scanf("%f",&aluno[i].nota2);
	getchar();
	
	 media[i]=(aluno[i].nota1+(aluno[i].nota2))/2;
}
system("cls");
printf("---Dados do Aluno---\n");
for(int i=0;i<2;i++){
	printf("\nAluno: %s",aluno[i].nome);
	printf("Matricula: %s",aluno[i].matricula);
	printf("Codigo de disciplina: %d\n",aluno[i].codDisciplina);
	printf("Nota 1: %.2f\n",aluno[i].nota1);
	printf("Nota 2: %.2f\n",aluno[i].nota2);
	printf("Media: %.2f\n",media[i]);
}

	return 0;
}


