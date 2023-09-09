#include<stdio.h>

main(){
	int V[2][2],v[4];
	int i=0, j=0, l=0, A=0;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&V[i][j]);
			
		}
	
	}
		printf("%d",A);
	printf("Digite o valor de A");
	scanf("%d",&A);

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			v[l] = V[i][j] * A;
			l++;
		
	}
}
	for(l=0;l<4;l++){
		printf("%d: %d \n",l,v[l]);
		
	}
}
