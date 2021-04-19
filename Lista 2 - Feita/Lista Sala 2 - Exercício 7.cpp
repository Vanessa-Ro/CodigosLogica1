#include<stdio.h>
#include<conio.h>

int main()
{
	int N,X;
	printf("O valor de N eh:");
	scanf("%d" , &N);
	if(N<0)
	X=(N*-1);
	else 
	X=N;
	printf("O valor do modulo deste numero eh: %2.d" , X);

 getch();
 return 0;
 }

