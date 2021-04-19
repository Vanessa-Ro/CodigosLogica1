#include<stdio.h>
#include<locale.h>

int calculo(float valor, float taxa, float tempo);

int main(){ 
	float valor, taxa, tempo;
	printf("Digite o VALOR: ");
	scanf("%f", &valor);
	printf("Digite a TAXA: "); 
	scanf("%f", &taxa);
	printf("Digite o TEMPO: ");
	scanf("%f", &tempo);
	calculo(valor, taxa, tempo);
}

int calculo(float valor, float taxa, float tempo){
	setlocale(LC_ALL, "portuguese");
	float prest;
	prest=valor+(valor*(taxa/100)*tempo);
	printf("O valor da PRESTAÇÃO é: %.2f", prest);
}
