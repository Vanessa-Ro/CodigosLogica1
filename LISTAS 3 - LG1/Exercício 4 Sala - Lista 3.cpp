#include<stdio.h>
#include<conio.h>

int main()
{
    int N=1, x;
    printf("Digite um numero menor ou igual a cinquenta:");
    scanf("%d" , &N);
    if (N<=50)
    {
    	while (N<=250)
    	{
    		N=N*3;
    		printf("%d\n" , N);
		}
	}
    else
    printf("Numero invalido");

    getch ();
    return 0;
}
    
    
