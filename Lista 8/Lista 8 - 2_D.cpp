#include<stdio.h>
#include<math.h>

int potencia(int base, int expo){
	int result=pow(base, expo);
	printf("%d", result);
}

int main(){
	int base, expo;
		printf("Digite o numero da base e depois do expoente:\n");
		scanf("%d", &base);
		scanf("%d", &expo);
		printf("Resultado: ");
	potencia(base, expo);
}
