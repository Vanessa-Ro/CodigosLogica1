#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int x=3, y=0, z;
	do
	{
		z=pow(x,y);
		printf("%d\n" , z);
		y++;
	}
	while(y<=15);
	
	getch ();
	return 0;
}

