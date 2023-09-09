#include<stdio.h>

 main(){
	int mA[10][10], mB[10][10];
	int i, j, k;
	
	for(i=0;i<10;i++){
		for(j=0;j<10;i++){
			mA[i][j] = k;
			k++;
		}
	}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(i%2==0&&j%2==0){
				mB[i][j] = mA[i][j]+6;
			}
			else
			mB[i][j] = mA[i][j]*6;
			
		}
	}
	printf("Matriz A: \n");
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%d",mA[i][j]);
		}
	}
		printf("Matriz B: \n");
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%d",mB[i][j]);
		}
	
}
}

