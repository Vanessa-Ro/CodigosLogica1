#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int x, y;
	x=15;
	while(x<=200)
	{
		y= pow(x,2);
		printf("%d\n" , y);
		x++;
	}
	getch();
	return 0;
}
