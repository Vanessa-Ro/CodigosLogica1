#include<stdio.h>
#include<conio.h>

int main()
{
 	float MEDIA, N1, N2, N3;
	printf("Digite a primeira nota: ");
	scanf("%f" , &N1);
	printf("Digite a segunda nota: ");
	scanf("%f" , &N2);
	printf("Digite a terceira nota: ");
	scanf("%f" , &N3);
	MEDIA=(N1+N2+N3)/3;
	if (MEDIA>=6.0)
	printf("Aluno APROVADO com media: %.2f" , MEDIA);
	else printf("Aluno REPROVADO com media: %.2f" , MEDIA);
	
	getch();
	return 0;
}
