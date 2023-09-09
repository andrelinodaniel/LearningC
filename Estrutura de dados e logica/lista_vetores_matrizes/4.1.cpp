#include<stdio.h>

int main(){
	int v[4];
	int i, M;
	
	for(i=0;i<4;i++){
		scanf("%d",&v[i]);
		M=v[1];
		if(v[i]>M){
			M=v[i];
		}
		
	}
	
			for(i=0;i<4;i++){
				printf("%d / %d = %d\n",v[i],M,v[i]/M);
			}
		
	}
