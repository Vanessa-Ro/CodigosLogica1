#include<stdio.h>
#include<conio.h>

int main()
{
	int x;
	x=0;
	while (x<=20)
	{
		if (x%2==0)
		printf("%d - PAR\n" , x);
		else
		printf("%d - IMPAR\n" , x);
		x=x+1; 
	}

 getch();
 return 0;
}

