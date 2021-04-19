#include<stdio.h>
#include<conio.h>

int main()
{
	int Num;
	printf("Digite um numero inteiro: ");
	scanf("%d" , &Num);
	if (Num % 2==0)
	{
		printf("O numero digitado e par");
	}
	else 
		printf("O numero digitado e impar");
		
 getch();
 return 0;
 }

