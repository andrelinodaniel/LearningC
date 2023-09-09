#include<stdio.h>
#include<stdlib.h>
#define MAXTAM 5

int pilha[MAXTAM];
int topo;

bool inicializado=false;

bool inicializar(){
	if(!inicializado){
		topo=-1;
		inicializado=true;
		printf("Pilha ja foi inicializada");

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

insert(int a){
	if(isFull()){
		printf("Pilha esta cheia!");
	}else{
		topo++;
		pilha[topo] = a;
	}
}
void remove(){
	if(isEmpty()){
		printf("Pilha esta vazia!");
	}else{
		pilha[topo]=NULL;
		topo--;
	}
}

verifyTopo(){
	if(isEmpty()){
		printf("Pilha esta vazia!");
	}else{
		printf("Topo: %d",pilha[topo]);
	}
}

int main(){
	int op;
do{
	
        system("cls");
     	printf("--Pilha test--\n\n");
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
		         int n;
		         printf("Digite um numero: ");
		         scanf("%d",&n);
		    	insert(n);
		    
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


