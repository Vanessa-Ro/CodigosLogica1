#include<stdio.h>
#include<conio.h>

int main()
{
	int x;
	for(x=0; x<=20; x=x+1)
	{
		if (x%2==0)
		printf("%d - PAR\n" , x);
		else
		printf("%d - IMPAR\n" , x);
	}

 getch();
 return 0;
}

