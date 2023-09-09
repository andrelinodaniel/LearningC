#include<stdio.h>
#include<stdlib.h>
#define MAXTAM 5

int pilha[MAXTAM];
int topo;
struct carro{
	char modelo[50];
	int ano=0;
	
};
inicializar(){
	topo=-1;
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
void insertPilha(struct carro){
	if(isFull){
		printf("Pilha esta cheia");
	}else{
		topo++;
		pilha[topo]= carro.ano;
		pilha[topo]= carro.modelo;
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
				printf("Digite o modelo: ");
				fgets(carro.modelo,50,stdin);
				printf("Digite o ano: ");
				scanf("%d",&carro.ano);
				insertPilha(n);
				scanf("%d",&op);
				break;
			case 3:
				system("cls");
				
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


