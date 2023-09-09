#include<stdio.h>
#include<math.h>

main(){
	int i;
	float n, v[15];
	
	for(i=0;i<15;i++){
		printf("Digite um numero: ");
		scanf("%f",&n);
		if(n<0){
			v[i]= -1;
		}
		else
		v[i] = sqrt(n);
	}
	for(i=0;i<15;i++){
	 printf("%.2f ",v[i]);
	}
	

}
