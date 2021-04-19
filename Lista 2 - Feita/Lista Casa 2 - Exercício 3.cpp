#include<stdio.h>
#include<conio.h>

int main()
{
	float NM, N, R, RE;
	printf("Digite o valor da nota: ");
	scanf("%f" , &N);
	R=((int)N*100)%100;
	if (R>=50){
	N=(N-(R/100)+1);}
	else{
	N=(N-(R/100));}	
	printf("A nota do aluno eh: %f " , N);
	
 getch();
 return 0;
}

