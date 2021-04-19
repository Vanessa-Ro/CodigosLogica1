#include<stdio.h>
#include<conio.h>

int main()
{
	int C;
	printf("Entre com o numero do curso:"),
	scanf("%d" , &C);
	switch(C){
	case 1: printf("Engenharia"); break;
	case 2: printf("Edificacoes"); break;	
	case 3: printf("Sistemas Eletricos"); break;	
	case 4: printf("Turismo"); break;
	case 5: printf("Analise de Sistemas"); break;	
	default: printf("Curso invalido!");
	}

 getch();
 return 0;
}

