#include<stdio.h>
#include<conio.h>

int main()
{
	float A, B, AUX;
	printf("Digite o valor A:");
	scanf("%f" , &A);
	printf("Digite o valor B:");
	scanf("%f" , &B);
	AUX=A;
	A=B;
	B=AUX;
	printf("Novo valor A: %.2f" , A);
	printf("Novo valor de B: %.2f" , B);
	
	getch();
	return 0;
}
