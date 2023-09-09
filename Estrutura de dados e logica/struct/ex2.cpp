#include<stdio.h>

struct Retangulo {
	float larg;
	float alt;
};
 calc_area(float a, float l){
	float area = a * l;
	
	printf("Area = %.2f",area);
}
int main(){
	
	struct Retangulo retangulo1;
	
	printf("Digite a largura: ");
	scanf("%f",&retangulo1.larg);
	printf("Digite a altura: ");
	scanf("%f",&retangulo1.alt);
	
	calc_area(retangulo1.alt,retangulo1.larg);

	
	return 0;
}
