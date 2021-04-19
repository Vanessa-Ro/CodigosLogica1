#include<stdio.h>
#include<conio.h>

int main()
{
	int X[9], Y[9], i;
	printf("Digite os numeros de RAV: \n");
	for(i=1; i<=9; i++)
	{
	scanf("%d" , &X[i]);
    }

		Y[1]=X[1]; 
		Y[2]=X[2]; 
		Y[3]=X[3]; 
		Y[4]=X[4];
		Y[5]=X[5]; 
		Y[6]=X[9]; 
        Y[7]=X[8]; 
		Y[8]=X[7]; 
        Y[9]=X[6]; 
	
	for(i=1; i<=9; i++)
    {
    printf("O numero de RAC eh: %d\n" , Y[i]);
    }
	
 getch();
 return 0;
}
