#include<stdio.h>
#include<conio.h>

int main()
{
	int A[5], B[5], i;
	for(i=0; i<5; i++)
	{printf("Digite os numeros do vetor A: \n");
	scanf("%d" , &A[i]);}
	
	for(i=0; i<5; i++)
{
	B[i]= A[i]*3;
	printf("%d\n" , B[i]);
}
 getch();
 return 0;
}

