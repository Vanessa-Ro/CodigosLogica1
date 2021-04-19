#include<stdio.h>
#include<locale.h>

int calculo(float *valor, float *taxa, float *tempo)
{
	float prest;
	prest= *valor+(*valor*(*taxa/100)* *tempo);
	printf("%.2f", prest);
}

int main(){ 
	float valor, taxa, tempo, *pv, *pta, *pte;
	printf("Digite o VALOR: ");
	scanf("%f", &valor);
	pv = &valor;
	printf("Digite a TAXA: "); 
	scanf("%f", &taxa);
	pta = &taxa;
	printf("Digite o TEMPO: ");
	scanf("%f", &tempo);
	pte = &tempo;
	calculo(pv, pta, pte);
}
