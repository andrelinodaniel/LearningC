#include<stdio.h>

struct Data {
	int dia;
	int mes;
	int ano;
};
calc_dif(int a,int b,int c,int d, int e,int f){
	int dif = a - b;
	printf("Diferença de %d dias",dif);
}
int main(){
	struct Data data[1];
	
	for(int i=0;i<2;i++){
	
	printf("Digite o dia: ");
	scanf("%d",&data[i].dia);
	printf("Digite o mes: ");
	scanf("%d",&data[i].mes);
	printf("Digite o ano: ");
	scanf("%d",&data[i].ano);
}
	calc_dif(data[0].dia,data[0].mes,data[0].ano,data[1].dia,data[1].mes,data[1].ano);
}
