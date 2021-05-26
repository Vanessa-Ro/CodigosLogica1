#include<stdio.h>
#include<conio.h>

int main()
{
	int C;
	printf("Entre com o numero do curso:"),
	scanf("%d" , &C);
	switch(C){
	case 1:printf("Informatica"); break;
	case 2:printf("Eletronica"); break;	
	case 3:printf("Eletrotecnica"); break;	
	case 4:printf("Mecanica"); break;	
	default: printf("Curso invalido");
	}

 getch();
 return 0;
}

