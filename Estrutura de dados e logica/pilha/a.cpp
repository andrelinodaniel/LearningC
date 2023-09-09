#include<stdio.h>
#include<stdlib.h>
#define MAXTAM 5 

struct aluno{
	char nome[50];
	float nota[2];
	float media;
};aluno aluno[MAXTAM];

int topo;
bool inicializado =false;
void inicializar(){
	if(!inicializado){
	
	topo = -1;
	inicializado = true;
	printf("Pilha iniciada com sucesso!\n");
}else{
	printf("Pilha já foi inicializada\n");
}
}
bool isEmpty(){
	return topo == -1;
}
bool isFull(){
	return topo == MAXTAM;
}

addPilha(){
	if(isFull()){
		printf("Pilha esta cheia!");  
	}else{
		topo++;
		struct aluno a;
		printf("\nCadastro aluno:\n ");
	    printf("Digite o nome: ");
		fgets(a.nome,50,stdin);
		for(int i=0;i<2;i++){
	   	printf("Digite a nota %d: ",i+1);
	   	scanf("%f",&a.nota[i]);
	   }
	   	getchar();
	   a.media = (a.nota[0]+a.nota[1])/2;
	   
	 
		
		aluno[topo]=a; 
	}
}
remove(){
	if(isEmpty()){
		printf("pilha está vazia");
	}else{
		aluno[topo]=(struct aluno){};
	}
}

void verifyTopo(){
	if(isEmpty()){
		printf("pilha está vazia");
	}else{
		printf("Nome: %s",aluno[topo]);
		printf("Nota 1: %1.f\n",aluno[topo].nota[0]);
		printf("Nota 2: %1.f\n",aluno[topo].nota[1]);
		printf("Media: %1.f",aluno[topo].media);

	}
}

int main(){
	int op;
     do{
     	printf("%d\n",topo);
        system("cls");
     	printf("--Pilha Alunos--\n\n");
     	if(!inicializado){
     	    printf("1.Inicializar\n");
		 }
		printf("2.Adicionar\n");
		printf("3.Remover\n");
		printf("4.Verificar topo\n");
		scanf("%d",&op);
		getchar();
		switch(op){
			case 1: 
			    system("cls");
				inicializar();
				printf("\nDigite qualquer numero para ir para o menu\n");
				scanf("%d",&op);
				break;
		    case 2:	
		    system("cls");
		   
		    	addPilha();
		    
		    	scanf("%d",&op);
		    	
		    	break;
		    case 3:
		    	system("cls");
			    remove();
			    scanf("%d",&op);
				break;		
		    case 4:	
		    	system("cls");
		        verifyTopo();

	         	scanf("%d",&op);
	         	break;
	    }
	 }while(op>0);
	return 0;
}


