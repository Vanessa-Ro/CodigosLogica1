#include<stdio.h>
#include<conio.h>

int main()
{
	int A[12], x, i, j;
	
	for(i=0; i<12; ++i)
{
	printf("Digite os numeros do vetor:");
	scanf("%d" , &A[i]);
}
	for (i=0; i<11; ++i)
	for(j=i+1; j<12; ++j)
	if(A[i]<A[j])
	{
		x=A[i];
		A[i]=A[j];
		A[j]=x;
}
	
	for(j=0; j<12; ++j)
	{printf("Os valores dos vetores sao: %d\n" , A[j]);}
	
	getch();
	return 0;
}
