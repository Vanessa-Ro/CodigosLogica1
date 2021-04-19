#include<stdio.h>
#include<conio.h>

int main()

{
	int A[7], B[7], C[7][2],i, j, x;
		for (i=0;i<=6;i++)
	{
		printf("Entre com matriz A:");
		scanf("%d", &A[i]);
	}
		for (j=0;j<=6;j++)
	{
		printf("Entre com matriz B:");
		scanf("%d", &B[j]);
	}
	
	for (i=0;i<=6;i++)
	{
		C[i][0] = A[i];
		C[i][1] = B[i];
	}
		for (i=0;i<=1;i++)
			for (j=0;j<=6;j++)	
{
	printf("A matriz  C[%i][%i] eh: %d\n",j, i,C[j][i]);
}

getch();
return 0; 
}	
