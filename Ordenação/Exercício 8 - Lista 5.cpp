#include<stdio.h>
#include<conio.h>

int main()
{
	int A[40], x, i, j, acha=0, pesq;
	
	for(i=0; i<40; ++i)
{
	printf("Digite os numeros do vetor:");
	scanf("%d" , &A[i]);
}
	for (i=0; i<39; ++i)
	for(j=i+1; j<40; ++j)
	if(A[i]>A[j])
	{
		x=A[i];
		A[i]=A[j];
		A[j]=x;
}
	
	for(j=0; j<40; ++j)
	{printf("Os valores dos vetores sao: %d\n" , A[j]);}
	
	printf("Entre com o numero a pesquisar: \n");
	scanf("%d" , &pesq);
	
	for(i=1; i<=40; ++i)
	if(pesq==A[i] &&acha==0)
	{
		acha=1;
		printf("Achei %d na posicao: %d" , pesq, i);}
		else
		i++;	
	
	getch();
	return 0;
}
