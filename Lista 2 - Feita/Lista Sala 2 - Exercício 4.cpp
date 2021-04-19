#include<stdio.h>
#include<conio.h>

int main()
{
	float A, B, C;
	printf("Digite 3 valores para os lados de um Triangulo: ");
	scanf("%f %f %f" , &A, &B, &C);
	if((A<B+C)&&(B<A+C)&&(C<A+B))
	{
	if ((A==B) && (B==C))
	{
		printf("Estes valores formam um Triangulo Equilatero");
	}
	
	else 
	if ((A==B)||(A==C)||(B==C))
	{
		printf("Este valores formam um Triangulo Isósceles");
	}
	
	else printf("Estes valores formam um Triangulo Escaleno");
	}
	else printf("estes valores nao formam um Triangulo");
		
	getch ();
	return 0;
}

