#include<stdio.h>

int MatrizA (int x, int A[30]);
int MatrizB (int x, int B[30]);
int juncao (int x, int A[30], int B[30],int y, int C[60]);
int exibicao ( int y, int C[60]);

int main (){
	int A[30], B[30], C[60], x, y;
	MatrizA (29, A);
	MatrizB (29, B);
	juncao (29, A, B,59, C);
	exibicao (59, C);
}

int MatrizA (int x, int A[30]){
	for (int i=0; i<=x; ++i){
		printf("Digite os valores para a matriz A:\n");
		scanf("%d" , &A[i]);
	}
}

int MatrizB (int x, int B[30]){
	for(int i=0; i<=x; ++i){
		printf("Digite os valores para matriz B:\n");
		scanf("%d" , &B[i]);
	}
}  

int juncao (int x, int A[30], int B[30],int y, int C[60]){
	for (int i=0; i<=y; ++i){
		if (i<=x){
			C[i]=A[i];
		}
		else{
			C[i]=B[i-30];
		}
	}
}

int exibicao (int y, int C[60]){
	for (int i=0; i<=y; ++i)
	printf("\nValor %d: %d", i, C[i]);
}
	
	
	
	
		
