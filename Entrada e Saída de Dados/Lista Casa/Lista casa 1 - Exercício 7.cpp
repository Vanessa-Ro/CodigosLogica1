#include<stdio.h>
#include<conio.h>

int main()
{
	float A, V, R;
	printf("digite o raio da esfera:");
	scanf("%f" , &R);
	V=(4/3)*3.14159*(R*R*R);
	A=4*3.14159*(R*R);
	printf("O volume da esfera eh: %.2f" , V);
	printf("A area da esfera eh: %.2f" , A);
	
	getch();
	return 0;
}
