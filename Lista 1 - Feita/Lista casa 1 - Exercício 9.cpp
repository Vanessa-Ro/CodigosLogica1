#include<stdio.h>
#include<conio.h>

int main()
{
	float P1, P2, M, A;
	printf("Digite a nota da prova 1:");
	scanf("%f" , &P1);
	printf("Digite a nota da prova:");
	scanf("%f" , &P2);
	printf("Digite a nota das atividades do semestre:");
	scanf("%f" , &A);
	M=((P1*4)+(P2*4)+(A*2))/10;
	printf("A media final eh: %.2f" , M);
	
	getch();
	return 0;
}
