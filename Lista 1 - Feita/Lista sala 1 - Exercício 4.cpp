#include<stdio.h>
#include<conio.h>

int main ()
{
	float A, B, C;
	printf ("Entre com o valor A");
	scanf ("%f", &A);
	printf ("Entre com o valor B");
	scanf ("%f" , &B);
	printf ("Entre com o valor C");
	scanf ("%f" , &C);
	C=A;
	A=B;
	B=C;
	printf ("O valor de A eh: %f e o valor de B eh: %f" , A, B);
	getch();
	return 0;
}
