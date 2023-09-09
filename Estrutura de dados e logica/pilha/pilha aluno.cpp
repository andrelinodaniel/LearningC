#include<stdio.h>
#include<stdlib.h>
#define MAXTAM 5 

struct aluno{
	char nome[50];
	float nota[2];
};aluno aluno[MAXTAM];

int topo;
bool inicializado =false;
void inicializar(){
	topo = -1;
	inicializado = true;
}
bool isEmpty(){
	return topo == -1;
}
bool isFull(){
	return topo == MAXTAM;
}

addPilha(struct aluno a){
	if(isFull()){
		printf("Pilha esta cheia");
	}else{
		topo++;
		aluno[topo]=a;
	}
}


int main(){
printf("");
	return 0;
}


