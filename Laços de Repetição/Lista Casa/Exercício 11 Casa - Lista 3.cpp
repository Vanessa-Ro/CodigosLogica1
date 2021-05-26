#include<stdio.h>
#include<conio.h>

int main()
{
	int x, y;
	printf("Digite o numero:\n");
	scanf("%d" , &y);
	for(x=0; x<=10; x++)
	{
		printf("%d * %d = %d\n" , x, y, (x * y));
	}

 getch();
 return 0;
}

