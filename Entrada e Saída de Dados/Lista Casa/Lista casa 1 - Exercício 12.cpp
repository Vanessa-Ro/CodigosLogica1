#include<stdio.h>
#include<conio.h>

int main()
{
	float DE, DT, VM, SF, SI, TF, TI;
	printf("Digite o espaço inicial do corpo:");
	scanf("%f" , &SI);
	printf("Digite o espaço final do corpo: ");
	scanf("%f" , &SF);
	printf("Digite o Tempo inicial do corpo: ");
	scanf("%f" , &TI);
	printf("Digite o Tempo final do corpo: ");
	scanf("%f" , &TF);
	DT=TF-TI;
	DE=SF-SI;
	VM=DE/DT;
	printf("A velocidade media eh: %.2f" , VM);
	
	getch();
	return 0;
}
