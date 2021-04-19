#include<stdio.h>

int x=0, y=1;
int Fib(int z, int i, int a)
{
	printf("A sequencia ficou da seguinte forma: ");
	for(i=1; i<=a; ++i)
	{
		printf("%d\n", x);
		z=y;
		y=x;
		x=y+z;
	}
}

int main (){
	int a, z, i;
	printf("Entre com os numeros da sequencia: ");
	scanf("%d", &a);
	Fib(z, i, a);
}
