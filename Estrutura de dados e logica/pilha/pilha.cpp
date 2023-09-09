#include<stdio.h>
#include<stdlib.h>
#define MAXTAM 5

struct carro{
	char modelo[50];
	int ano;
	float preco;
}; carro pilha[MAXTAM];
int topo;

bool inicializado=false;
void inicializar(){
	topo=-1;
	printf("Inicializado com sucesso!");
	inicializado=true;
	
}
bool isNull(){
	if(topo==-1){
		return true;
	}else{
		return false;
	}
}
bool isFull(){
	if(topo==(MAXTAM-1)){
		return true;
	}else{
		return false;
	}
}
void insert(struct carro c){
	if(isFull()){
		printf("\nPilha esta cheia!");
	}else{
		topo++;
		pilha[topo]=c;
		printf("Item adicionado com sucesso!");

	
	}
}
void remove(){
	if(isNull){
		printf("\nPilha esta vazia!");
	}else{
		pilha[topo]=(struct carro){};
		topo--;
		printf("Item removido com sucesso!");

	}
}
struct carro verifytopo(){
	if(isNull){
		printf("Pilha esta vazia!");
	}else{
		return pilha[topo];
	}
}
int main(){
	int op;
	carro c;
     do{
     	printf("%d\n",topo);
        system("cls");
     	printf("--Estacionamento--\n\n");
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
				scanf("%d",&op);
				break;
		    case 2:	
		    system("cls");
				printf("\nCadastro carro:\n ");
		    	printf("Digite o modelo: ");
		    	fgets(c.modelo,50,stdin);
		    	printf("Digite o ano: ");
		    	scanf("%d",&c.ano);
		    	scanf("%d",&op);
		    	insert(c);
		    	system("cls");
		    	getchar();
		    	break;
		}
	 }while(op>0);
	return 0;
}


