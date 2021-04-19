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
	if ((N1 % 2==0) && (N1 % 3==0))
		printf("Numero divisivel por 2 e 3: %d\n", N1);
	if ((N2 % 2==0) && (N2 % 3==0))
		printf("Numero divisivel por 2 e 3: %d\n", N2);
	if((N3 % 2==0) && (N3 % 3==0))
		printf("Numero divisivel por 2 e 3: %d\n", N3);
	if((N4 % 2==0) && (N4 % 3==0))
		printf("Numero divisivel por 2 e 3: %d\n", N4);
	else 
		printf("Nao foi digitado nenhum numero divisivel por 2 e 3");

 	getch();
	return 0;
 }

