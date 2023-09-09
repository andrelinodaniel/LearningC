
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
	if(!inicializado){
		topo=-1;
	printf("Inicializado com sucesso!");
	inicializado=true;
}else{
	printf("Pilha ja foi inicializada");
}
}
bool isEmpty(){
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
void insert(){
	if(isFull()){
		printf("\nPilha esta cheia!");
	}else{
		struct carro c;
		printf("\nCadastro carro:\n ");
	    printf("Digite o modelo: ");
		fgets(c.modelo,50,stdin);
	   	printf("Digite o ano: ");
	   	scanf("%d",&c.ano);
	   	getchar();
		topo++;
		pilha[topo]=c;
		printf("Item adicionado com sucesso!");

	
	}
}
void remove(){
	if(isEmpty()){
		printf("\nPilha esta vazia!");
	}else{
		pilha[topo]=(struct carro){};
		topo--;
		printf("Item removido com sucesso!");

	}
}
 void verifytopo(){
	if(isEmpty()){
		printf("Pilha esta vazia!");
	}else{
		printf("Modelo: %s",pilha[topo].modelo);
	   	printf("Ano: %d",pilha[topo].ano);
	}
}
int main(){
	int op;
	carro c;
     do{
     
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
		   
		    	insert();
		    
		    	scanf("%d",&op);
		    	
		    	break;
		    case 3:
		    	system("cls");
			    remove();
			    scanf("%d",&op);
				break;		
		    case 4:	
		    	system("cls");
		    	 verifytopo();

	         	scanf("%d",&op);
	         	break;
	    }
	 }while(op>0);
	return 0;
}


