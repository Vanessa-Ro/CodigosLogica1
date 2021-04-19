#include<stdio.h>
#include<conio.h>

int main()
{
	int N1, N2, N3, N4;
	printf("Digite quatro numeros inteiros: \n");
	scanf("%d", &N1);
	scanf("%d", &N2);
	scanf("%d", &N3);
	scanf("%d", &N4);
	if ((N1 % 4==0) || (N1 % 5==0))
		printf("Numero divisivel por 4 ou 5: %d\n", N1);
	if ((N2 % 4==0) || (N2 % 5==0))
		printf("Numero divisivel por 4 ou 5: %d\n", N2);
	if((N3 % 4==0) || (N3 % 5==0))
		printf("Numero divisivel por 4 ou 5: %d\n", N3);
	if((N4 % 4==0) || (N4 % 5==0))
		printf("Numero divisivel por 4 ou 5: %d\n", N4);
	else 
		printf("Nao foi digitado nenhum numero divisivel por 4 ou 5");

 	getch();
	return 0;
 }

