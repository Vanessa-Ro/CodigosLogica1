#include<stdio.h>
#include<conio.h>

int main()

{
	int A[4], B[4], C[4][2], i, j;
	for(i=0; i<=3; ++i)
	{
		printf("Digite os numeros da matriz A: \n");
		printf("%d\n", i);
		fflush(stdin);
	}
	
	for(i=0; i<=3; ++i)
	{
		printf("Digite os numeros da matriz B: \n");
		scanf("%d" , &B[i]);
		fflush(stdin);
	}
	
	for(i=0; i<=3; ++i){
	for(j=0; j<=1; ++j){
	C[j][0] = A[i] * 2;
	C[j][1] = B[i] - 5;
}}
	
	for(i=0; i<=3; ++i){
	for(j=0; j<=1; ++j){
		printf("Os valores sao: %d\n" , C[i][j]);
	}}
	
getch();
return 0;
}
