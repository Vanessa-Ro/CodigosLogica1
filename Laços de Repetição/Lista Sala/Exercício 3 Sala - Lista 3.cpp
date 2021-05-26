#include<stdio.h>
#include<conio.h>

int main()
{
    int x, y;
    printf("Insira um valor a ser multiplicado \n");
    scanf ("%d", &y);
    x=0;
    do {
        printf ("%d * %d = %d\n" , x, y, (y * x));
        x=x+1;
    }
    while (x<=10);
    getch ();
    return 0;
}
