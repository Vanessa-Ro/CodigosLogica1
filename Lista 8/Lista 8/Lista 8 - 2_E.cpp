#include<stdio.h>

int MatrizA (int A[12]);
int MatrizB (int B[12]);
int juncao (int C[12], int A[12], int B[12]);
int exibicao (int C[12]);

int A[12], B[12], C[12], i, j, aux;

int main (){
	MatrizA (A);
	MatrizB (B);
	juncao (C, A, B);
	exibicao (C);
}

int MatrizA (int A[12]){
	for (int i=0; i<12; ++i){
		printf("Digite os valores para a matriz A:\n");
		scanf("%d" , &A[i]);
	}
	for(i=0; i<=10; ++i)
	for(j=1+i; j<=11; ++j)
        if(A[i] > A[j])
            {
                aux=A[i];
                A[i]=A[j];
                A[j]=aux;
        }
        for (j=0; j<12; ++j)
        printf("A Classificacao por ordem crescente eh: %d\n", A[j]);
}

int MatrizB (int B[12]){
	for (int i=0; i<12; ++i){
		printf("Digite os valores para a matriz B:\n");
		scanf("%d" , &B[i]);
	}
	for(i=0; i<=10; ++i)
	for(j=1+i; j<=11; ++j)
        if(B[i] > B[j])
            {
                aux=B[i];
                B[i]=B[j];
                B[j]=aux;
        }
        for (i=0;i<=11;++i)
        printf("A Classificacao por ordem crescente eh: %d\n", B[i]);
}

int juncao (int C[12], int A[12], int B[12]){
		for (int i=0; i<12; ++i){
			C[i]=A[i] + B[i];}
			}
			
int exibicao (int C[12]){
		for(i=0; i<=10; ++i)
	for(j=1+i; j<=11; ++j)
        if(C[i] > C[j])
            {
                aux=C[i];
                C[i]=C[j];
                C[j]=aux;
        }
        
	for (i=0;i<=11;++i)
    printf("O resultado eh: %d\n" , C[i]);
	

}
		



