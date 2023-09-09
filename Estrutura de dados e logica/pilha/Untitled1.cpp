#include<stdio.h>
#include<stdlib.h>
#define MAXTAM 5l	

int pilha[MAXTAM];
int topo;

inicializar(){
		topo=-1;
}
isEmpty(){
	if(topo==-1){
		return true;
	}else{
		return false;	
	}
} 
isFull(){
	if(topo==MAXTAM){
		return true;
	}else{
		return false;
	}
}
insertPilha(int n){
	if(isFull()){
		printf("Pilha esta cheia");
	}else{
		topo++;
		pilha[topo]=n;
	}
	
}
void remove(){
	if(isEmpty()){
		printf("Pilha esta vazia");
	}else{
		pilha[topo]=NULL;
		topo--;
		printf("Removido com sucesso!");
		
	}
}
int verifyTopo(){
	if(isEmpty()){
		printf("Pilha esta vazia");
		return NULL;
	}else{
		return pilha[topo];
		
	
	}
}


int main(){
	int n=0;
	int op=0;
	do{
		system("cls");
		printf("---Menu---\n\n");
		if(topo!=-1){
			printf("1.Inicializar Pilha\n");
		}
			printf("2.Adicidionar\n");
			printf("3.Remover\n");
			printf("4.Verificar topo\n");
		
			scanf("%d",&op);
			switch(op){
			case 1:
				system("cls");
				inicializar();
				scanf("%d",&op);
			break;	
			case 2:	
				system("cls");
				printf("Digite um valor: ");
				scanf("%d",&n);
				insertPilha(n);
				scanf("%d",&op);
				break;
			case 3:
				system("cls");
				remove();	
				scanf("%d",&op);
				break;
			case 4:
				system("cls");
				printf("Topo da pilha: %d\n",verifyTopo());
				scanf("%d",&op);	
				break;
		}
		
			
		}while(op>0);
	

	return 0;
}


