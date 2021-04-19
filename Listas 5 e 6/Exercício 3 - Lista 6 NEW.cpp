#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()

{
	int A[10], B[10][3], i, j, x, y;
	for (i=0;i<=9;i++)
	{
		printf("Entre com matriz A:\n",i);
		scanf("%d", &A[i]);
	
	}
	
	for (i=0;i<=9;i++){
	B[i][0]= A[i] + 5;}
		
	for (i=0;i<=9;i++){
	x=A[i];
	for(y=x-1; y>=1; y--){
        x=x*y;
		}
		B[i][1]=x;
	}
	
	for (i=0; i<=9;i++){
	B[i][2]=pow(A[i], 2);
	}
	
	for (j=0;j<=2;j++)
	for (i=0;i<=9;i++){
	
	printf("B[%d][%d] -%d\n", i, j, B[i][j]);
}

getch();
return 0;
}

