#include<stdio.h>
#include<conio.h>

int main()
{
	int A[8], B[8], i, j, x, acha=0, pesq;
	for(i=0; i<8; i++)
	{printf("Digite os numeros do vetor A: \n");
	scanf("%d" , &A[i]);}
	
	for(i=0; i<8; i++)
{
	B[i]= A[i]*5;
	printf("%d\n" , B[i]);
}
	for (i=0; i<8; ++i)
	for(j=i+1; j<8; ++j)
	if(B[i]>B[j])
	{
		x=B[i];
		B[i]=B[j];
		B[j]=x;
}
	
	for(j=0; j<8; ++j)
	{printf("Os valores dos vetores sao: %d\n" , B[j]);}
	
	printf("Entre com o numero a pesquisar: \n");
	scanf("%d" , &pesq);
	
	for(i=1; i<=8; ++i)
	if(pesq==B[i] &&acha==0)
	{
		acha=1;
		printf("Achei %d na posicao: %d" , pesq, i);}
		else
		i++;	
		
	getch ();
	return 0;
}
