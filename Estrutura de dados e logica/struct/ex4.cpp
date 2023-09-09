#include<stdio.h>
#include<stdlib.h>

struct Endereco{
	char rua[50];
	char bairro[50];
	char cidade[50];
	char estado[50];
	char cep[50];
};

struct Cadastro{
	char nome[50];
	struct Endereco endereco;
	float salario;
	char id[50];
	char cpf[50];
	char estadocivil[50];
	char tel[50];
	int idade;
	char sexo[20];	
};


int main(){
	struct Cadastro cadastro[2];
	int pM[2];
	int mSal[2];
	int maiorIdade;
	for(int i=0;i<2;i++){
		system("cls");
		printf("----Cadastro----\n");
		printf("Digite seu nome: ");
		fgets(cadastro[i].nome,50,stdin);
		printf("Digite sua idade: ");
		scanf("%d",&cadastro[i].idade);
		getchar();
		printf("Digite seu sexo: ");
		fgets(cadastro[i].sexo,20,stdin);
		printf("Digite seu telefone: ");
		fgets(cadastro[i].tel,50,stdin);
		printf("Digite sua identidade: ");
		fgets(cadastro[i].id,50,stdin);
		printf("Digite seu estado civil: ");
		fgets(cadastro[i].estadocivil,50,stdin);
		printf("Digite seu salario: ");
		scanf("%f",&cadastro[i].salario,50,stdin);
		getchar();
		printf("\nDigite seu cpf: ");
		fgets(cadastro[i].cpf,50,stdin);
		system("cls");
		printf("--Endereco--");
		printf("\nDigite sua Cidade: ");
		fgets(cadastro[i].endereco.cidade,50,stdin);
		printf("\nDigite seu Estado: ");
		fgets(cadastro[i].endereco.estado,50,stdin);
		printf("\nDigite seu Bairro: ");
		fgets(cadastro[i].endereco.bairro,50,stdin);
		printf("\nDigite sua Rua: ");
		fgets(cadastro[i].endereco.rua,50,stdin);
		
		if(cadastro[i].idade > maiorIdade){
			maiorIdade=i;
		}
		if(cadastro[i].sexo=="masculino"||cadastro[i].sexo=="Masculino"){
			 pM[i]=i;
		}
		if(cadastro[i].salario>1000){
			 mSal[i]=i;
		}
	
		
		
	}
	system("cls");
	for(int i=0;i<2;i++){
		
		printf("---Pessoas Cadastradas---\n");
		printf("Nome: %s\n",cadastro[i].nome);
		printf("Idade: %d\n",cadastro[i].idade);
		printf("Sexo: %s\n",cadastro[i].sexo);
		printf("Telefone: %s\n",cadastro[i].tel);
		printf("Identidade: %s\n",cadastro[i].id);
		printf("Estado Civil: %s\n",cadastro[i].estadocivil);
		printf("CPF: %s\n",cadastro[i].cpf);
		printf("Salario: %f\n",cadastro[i].salario);
		printf("==Endereco--\n");
		printf("Estado: %s\n",cadastro[i].endereco.estado);
		printf("Cidade: %s\n",cadastro[i].endereco.cidade);
		printf("Bairro: %s\n",cadastro[i].endereco.bairro);
		printf("Rua: %s\n\n",cadastro[i].endereco.rua);
		
	
		
	}
	printf("--Pessoas do sexo Masculino--\n");
	for(int i=0;i,2;i++){
		
		printf("Nome: %s\n",cadastro[pM[i]].nome);
		printf("--Pessoas Com salario acima de R$1000--\n");
		printf("Nome: %s",cadastro[pM[i]].nome);
		printf("Nome: %f\n",cadastro[pM[i]].salario);
	}
	

	return 0;
}


