#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Historico {
	char mat[50];
	float nota1;
	float nota2;
	float media;
};

struct Ficha{
	char nome[50];
	Historico historico;;
};
int menu(){
	int op1;
	system("cls");
	system("color F");
 printf("Digite:\n");
 printf("1.Aprovados");
 printf("2.Reprovados\n");

 scanf("%d",&op1);
 getchar();
 return op1;
}

int main(){
Ficha ficha[2];
for(int i=0;i<2;i++){
	printf("Digite o nome do Aluno: ");
	fgets(ficha[i].nome,50,stdin);
	printf("Digite a materia: ");
	fgets(ficha[i].historico.mat,50,stdin);
	printf("Primeira nota:  ");
	scanf("%f",&ficha[i].historico.nota1);
	printf("Segunda nota:  ");
	scanf("%f",&ficha[i].historico.nota2);
	getchar();
    ficha[i].historico.media = (ficha[i].historico.nota1+ficha[i].historico.nota2)/2;
	
}


int op;

do{

	

	op = menu();   
	if(op==1){
		system("cls");
	for(int i=0;i<2;i++){
	
	if(ficha[i].historico.media >6){
		   
	    	
	    	system("color 2");
			printf("Media do %s: %.2f \n",ficha[i].nome,ficha[i].historico.media );
			printf("Aprovado\n");
			scanf("%d",&op);
		}
	
			if(op==3){
				menu();
				 
			}
	}
}

  if(op==2){
  	system("cls");
   	for(int i=0;i<2;i++){
	if(ficha[i].historico.media<6){ 
	 
	        
	        system("color 4");
			printf("Media do %s: %.2f ",ficha[i].nome,ficha[i].historico.media );
			printf("\nReprovado");
			scanf("%d",&op);
		}
			if(op==3){
				menu();
				 
			}
			

	}
}
}while(op!=0);



	return 0;
}


