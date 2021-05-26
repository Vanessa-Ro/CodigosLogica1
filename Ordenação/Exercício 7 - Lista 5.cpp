#include<stdio.h>
#include<conio.h>

int main()
{
	int A[20], B[20], x, i, j, acha=0, pesq;
	
	for(i=0; i<20; ++i)
{
	printf("Digite os numeros do vetor:");
	scanf("%d" , &A[i]);
}
	for(i=0; i<20; ++i)
	{B[i]= A[i] + 2;}
		
	for (i=0; i<19; ++i)
	for(j=i+1; j<20; ++j)
	if(B[i]>B[j])
	{
		x=B[i];
		B[i]=B[j];
		B[j]=x;
}

	
	for(j=0; j<20; ++j)
	{printf("Os valores dos vetores de B sao: %d\n" , B[j]);}
	
	
	printf("Entre com o numero a pesquisar: \n");
	scanf("%d" , &pesq);
	
	for(i=1; i<=20; ++i)
	if(pesq==B[i] &&acha==0)
	{
		acha=1;
		printf("Achei %d na posicao: %d" , pesq, i);}
		else
		i++;	
		
	getch ();
	return 0;
}
