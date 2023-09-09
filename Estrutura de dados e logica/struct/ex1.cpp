#include<stdio.h>
#include<stdlib.h>
struct Pessoa {
	char nome[50];
	int idade;
};

int main(){
	
	struct Pessoa pessoa1;
	
	printf("Digite seu nome: ");
	scanf("%s",pessoa1.nome);          
	printf("Digite sua idade: ");
	scanf("%d",&pessoa1.idade);
	
	printf("Nome: %s",pessoa1.nome);
	printf("Idade: %d",pessoa1.idade);

	
	return 0;
}
