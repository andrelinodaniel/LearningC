#include<stdio.h>

int main(){
	int n[4][4],v[16];
	int i=0,j=0,k=0;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d x %d",i,j);
			scanf("%d",&n[i][j]);
		}
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			
			v[k]=n[i][j];
			k++;
	}
	
	}
		for(i=0;i<16;i++){
		printf("%d: %d\n",i,v[i]);
		}
		return 0;
}
