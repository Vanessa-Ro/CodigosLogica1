#include<stdio.h>
#include<math.h>

int soma(int *N){
	int soma=0;
	for(int i=0; i<= *N; ++i)
	soma += i;
	printf("%d", soma);
}

int main(){
	int N, *res;
	printf("Digite o numero por favor: ");
	scanf("%d", &N);
	res= &N;
	printf("Resultado: ");
	soma(res);
}
