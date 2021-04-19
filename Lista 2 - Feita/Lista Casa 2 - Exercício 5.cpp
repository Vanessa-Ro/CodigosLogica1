#include<stdio.h>
#include<conio.h>

int main()
{
	float SB, SL, H, A;
	printf("Digite o salario bruto: ");
	scanf("%f" , &SB);
	printf("Digite a quantidade de horas trabalhadas: ");
	scanf("%f" , &H);
	if(H>160)
	{
		H=(H-160);
		A=((SB/160)+(H*0.5));
		SB=(A+SB);
	}
	if(SB<800.00)
	{
	SL=SB;
	printf("O salario liquido eh: %.2f ", SL);
	}
	else
	if((SB>=800.00) && (SB<=1600.00))
	{
		SL=(SB-(SB*0.13));
		printf("O salario liquido eh: %.2f ", SL);
	}
	else
	{
	SL=(SB-(SB*0.22));
	printf("O salario liquido eh: %.2f ", SL);
	}
	
 getch();
 return 0;
 }

