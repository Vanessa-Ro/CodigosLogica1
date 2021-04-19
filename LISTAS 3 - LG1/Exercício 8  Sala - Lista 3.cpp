#include<stdio.h>
#include<conio.h>

int main()
{
	int x=0, y=1, z=0, c;
	for(c=1; c<=15; c++)
	{
		if(c==1)
		{
		printf("%d\n" , y);
	}
	
	else{
	
	z=x+y;
	x=y;
	y=z;
	
	printf("%d\n" , z);
}}

	getch();
	return 0;
}
