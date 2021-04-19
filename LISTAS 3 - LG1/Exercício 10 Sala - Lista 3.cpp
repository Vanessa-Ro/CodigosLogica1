#include<stdio.h>
#include<conio.h>

int main()
{
	int x=1, y=0;
	do{
        if (x%2==0)
		y=y+x;
		x++;
		
        printf("%d\n" , y);
	}
	while(x<=500);

 getch();
 return 0;
}

