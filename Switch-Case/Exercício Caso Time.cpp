#include<stdio.h>
#include<conio.h>

int main()
{
	int T;
	printf("Entre com o numero do time:"),
	scanf("%d" , &T);
	switch(T){
	case 1:printf("Palmeiras"); break;
	case 2:printf("Santos"); break;	
	case 3:printf("Corinthias"); break;	
	case 4:printf("Sao Paulo"); break;	
	default: printf("Time invalido!");
	}

 getch();
 return 0;
}

