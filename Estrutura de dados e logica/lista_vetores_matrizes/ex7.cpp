#include<stdio.h>

int main(){
	int n[10][10],v[20];
	int i=0,j=0,k=0;
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			scanf("%d",&n[i][j]);
		}
	}
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			
			v[k]=n[i][j];
			k++;
	}
	
	}
		for(i=0;i<10;i++){
		printf("%d: %d\n",i,v[i]);
		}
		return 0;
}
