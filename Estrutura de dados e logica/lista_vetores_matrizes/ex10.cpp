#include<stdio.h>
 
 int main(){
 	int Vet[3], M[3][3];
 	int i,j,k=0;
 	printf("Digite um numero para o vetor: ");
 	for(i=0;i<3;i++){
 		scanf("%d",&Vet[i]);
	 }
	 printf("\n");
	 printf("Digite um numero para a matriz: ");
	 for(i=0;i<3;i++){
	 	for(j=0;j<3;j++){
	 		scanf("%d",&M[i][j]);
		 }
	 }
	 for(i=0;i<3;i++){
	 	for(j=0;j<3;j++){
	 		printf("Multiplicação %d x %d = %d",Vet[k],M[i][j],Vet[k]*M[i][j]);
	 		k++;
		 }
	 }
	 
 }
