#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int A[30], B[30], i, acha=0, pesq;
	
	for(i=0; i<30; ++i)
        {printf("Entre com o valor do vetor A: \n");
         scanf("%d" , &A[i]);}
         
    for(i=0; i<30; ++i)
    B[i]=pow(A[i], 3);
    
	for(i=0; i<30; ++i)
	{printf("%d\n" , B[i]);}
	
	printf("Entre com o numero a pesquisar: \n");
	scanf("%d" , &pesq);
	
	for(i=1; i<=30; ++i)
	if(pesq==B[i] &&acha==0)
	{
		acha=1;
		printf("Achei %d na posicao: %d" , pesq, i);}
		else
		i++;	
		
	getch ();
	return 0;
}
