#include<stdio.h>
#include<conio.h>

int main()
{
	float A, B;
	printf("Digite o valor de A:");
	scanf("%f" , &A);
	printf("Digite o valor de B:");
	scanf("%f" , &B);
	A=A+B;
	B=A-B;
	A=A-B;
	printf("Novo valor A: %.2f" , A);
	printf("Novo valor de B: %.2f" , B);
	
	getch();
	return 0;
}
