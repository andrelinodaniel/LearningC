#include<stdio.h>
#include<stdlib.h>



int main(){
	int M[2][2], V[4];
	int A,k;
	
	printf("Digite os valores da matriz: \n");
	for(int i;i<2;i++){
		for(int j;i<2;j++){
			scanf("%d",&M[i][j]);
		}
	}
    printf("Digite o valor de A: \n");
    scanf("%d",&A);
    
	for(int i;i<2;i++){
		for(int j;i<2;j++){
			V[k]=M[i][j]*A;
			k++;
		}
	}
	
	printf("Vetor A: ");
	for(int i;i<4;i++){
		printf("%d",V[i]);
	}
    

	

	return 0;
}


