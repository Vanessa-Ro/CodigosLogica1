#include<stdio.h>
#include<conio.h>

int main()
{
	int A[10], B[10], X, i;
	for(i=0; i<10; ++i)
	{printf("Entre com os valores do vetor: \n");
	 scanf("%d", &A[i]);
	}
	X=9;
	for(i=0; i<10; ++i){
		B[i]=A[X]; --X;
		printf("B: %d\n" , B[i]);
	}

 getch();
 return 0;
}

