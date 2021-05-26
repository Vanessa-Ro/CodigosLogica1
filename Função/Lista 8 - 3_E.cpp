#include<stdio.h>

int MatrizA (int x, int A[12]);
int MatrizB (int x, int B[12]);
int juncao (int x, int A[12], int B[12], int C[12]);
int exibicao (int x, int C[12]);

int i, j, aux;

int main (){
	int A[12], B[12], C[12], x;
	MatrizA (11, A);
	MatrizB (11, B);
	juncao (11, A, B, C);
	exibicao (11, C);
}

int MatrizA (int x, int A[12]){
	for (int i=0; i<=x; ++i){
		printf("Digite os valores para a matriz A:\n");
		scanf("%d" , &A[i]);}

	for(i=0; i<=x-1; ++i)
	for(j=1+i; j<=x; ++j){
        if(A[i] > A[j])
            {
                aux=A[i];
                A[i]=A[j];
                A[j]=aux;
        }}
        for (j=0; j<=x; ++j)
        printf("A Classificacao por ordem crescente eh: %d\n", A[j]);
}

int MatrizB (int x, int B[12]){
	for (int i=0; i<=x; ++i){
		printf("Digite os valores para a matriz B:\n");
		scanf("%d" , &B[i]);
	}

	for(i=0; i<=x-1; ++i)
	for(j=1+i; j<=x; ++j){
        if(B[i] > B[j])
            {
                aux=B[i];
                B[i]=B[j];
                B[j]=aux;
        }}
	for (j=0; j<=x; ++j)
        printf("A Classificacao por ordem crescente eh: %d\n", B[j]);
}

int juncao (int x, int A[12], int B[12], int C[12]){
		for (int i=0; i<=x; ++i){
			C[i]=A[i] + B[i];
		}
	}
			
int exibicao (int x, int C[12]){
	for(i=0; i<=x-1; ++i)
	for(j=1+i; j<=x; ++j){
        if(C[i] > C[j])
            {
                aux=C[i];
                C[i]=C[j];
                C[j]=aux;
    }}
    for(i=0; i<=x; ++i)
    printf("O resultado eh: %d\n" , C[i]);
}
