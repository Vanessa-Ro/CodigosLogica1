#include<stdio.h>
#include<conio.h>

int main()
{
	int A[5], B[5], C[5], i;
	
		for(i=0; i<5; ++i)
        {printf("Entre com o valor do vetor A: \n");
         scanf("%d" , &A[i]);}
         
   	for(i=0; i<5; ++i)
   	{printf("Entre com o valor do vetor B: \n");
         scanf("%d" , &B[i]);}
         
    
    for(i=0; i<5; ++i)
    {C[i]= A[i] - (B[i]);}
    
    for(i=0; i<5; ++i)
    {printf(" Os resultados sao: %d\n" , C[i]);}
    
    getch();
    return 0;
}
    
         
