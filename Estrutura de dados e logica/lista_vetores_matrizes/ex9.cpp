#include<stdio.h>

int main(){
	int Vet[10],v1[5], v2[5];
	int i,k;
	
	for( i=0; i<10;i++){
		Vet[i]=i;
	}
	for( i=0; i<5;i++){
			v1[i] = Vet[i];
			v2[i] = Vet[i+5];
	}
	printf("Vetor original: \n");
	for(i=0; i<10;i++){
		printf("%d ",Vet[i]);
	}
	printf("\n");
	printf("Vetor1: \n");
	for(i=0; i<5;i++){
		printf("%d ",v1[i]);
	}
		printf("\n");
	printf("Vetor2: \n");
	for(i=0; i<5;i++){
		printf("%d ",v2[i]);
	}
}
