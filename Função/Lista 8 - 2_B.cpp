#include<stdio.h>

int MatrizA ();
int MatrizB ();
int juncao (int A[30], int B[30]);
int exibicao (int C[60]);

int A[30], B[30], C[60];

int main (){
	MatrizA ();
	MatrizB ();
	juncao (A, B);
	exibicao (C);
}

int MatrizA (){
	for (int i=0; i<30; ++i){
		printf("Digite os valores para a matriz A:\n");
		scanf("%d" , &A[i]);
	}
}

int MatrizB (){
	for(int i=0; i<30; ++i){
		printf("Digite os valores para matriz B:\n");
		scanf("%d" , &B[i]);
		}
	}  

int juncao (int A[30], int B[30]){
	for (int i=0; i<60; ++i)
		if (i<=30){
			C[i]=A[i];
		}
		else{
			C[i]=B[i-30];
		}
	}
	
int exibicao (int C[60]){
	for (int i=0; i<60; ++i)
	printf("\nValor %d: %d", i, C[i]);
}
	
	
	
	
		
