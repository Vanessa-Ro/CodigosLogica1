#include<stdio.h>
#include<conio.h>

int main()
{
	int N, NC;
	printf("Digite um numero inteiro: ");
	scanf("%d" , &N);
	NC=20;
	if((N>=0) && (N<=100))
	{
		N=(N-NC);
		if (N<0)
	{
		N=(N*-1);
	}
	}
	
	else 
	printf("Numero digitado incorreto");
	
	printf("A distancia do numero digitado e o numero chave eh: %d", N);
 
 getch();
 return 0;
 }

