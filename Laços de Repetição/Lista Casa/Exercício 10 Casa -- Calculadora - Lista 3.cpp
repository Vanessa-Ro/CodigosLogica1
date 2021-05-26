#include<stdio.h>
#include<conio.h>

int main()
{
	int x, y, R=0;
	char op;
	char sair;
	do{
	printf("Digite a operacao (+, -, *, /):\n");
	scanf("%c" , &op);
		if(op=='s'){
			printf("FECHANDO\n");}
	else{
	
	printf("Digite o primeiro numero:\n ");
	scanf("%d" , &x);
	printf("Digite o segundo numero:\n ");
	scanf("%d" , &y);
	R=0;
	switch(op){
		case '+': printf("O resultado eh: %d\n" , R=x+y); break;
		case '-': printf("O resultado eh: %d\n" , R=x-y); break;
		case '*': printf("O resultado eh: %d\n" , R=x*y); break;
		case '/': printf("O resultado eh: %d\n" , R=x/y); break;
		default: printf("INVALIDO\n");}
		printf("Para sair digite S");
		scanf("%c" , &op);
	
		}}
		while(op!='s');

 getch();
 return 0;
}

