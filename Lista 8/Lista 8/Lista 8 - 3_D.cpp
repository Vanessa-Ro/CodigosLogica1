#include<stdio.h>
#include<math.h>

int potencia(int *base, int *expo){
	int result=pow(*base, *expo);
	printf("Resultado: %d", result);
}

int main(){
	int base, expo, *pb, *pe;
		printf("Digite o numero da base e depois do expoente:\n");
		scanf("%d", &base);
		pb = &base;
		scanf("%d", &expo);
		pe= &expo;
	potencia(pb, pe);
}
