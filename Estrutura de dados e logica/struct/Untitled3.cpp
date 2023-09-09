#include<stdio.h>
#include<stdlib.h>

struct funcionarios {
	int sal;
	char nome[50];
	char cargo[50];
	
};

main(){
	int i;
	struct funcionarios funcionario[3];
	
	for(i=0;i<3;i++){
		printf("Digite seu nome: ");
		fgets(funcionario[i].nome,50, stdin);
		printf("Digite seu salario: ");
		scanf("%d",&funcionario[i].sal);
		getchar();
	}
	
		for(i=0;i<3;i++){
		printf("\nNome: %s",funcionario[i].nome);
		printf("Salario: %d\n",funcionario[i].sal);
	}
		
		
	


}
