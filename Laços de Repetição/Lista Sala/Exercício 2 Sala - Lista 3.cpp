#include<stdio.h>
#include<conio.h>

int main()
{
    int x, y;
    x=1;
    y=0;
    do
    {
        y=x+y;
        x=x+1;
    }
    while (x<=100);
    printf("%d", y);


getch();
return 0;    
}
