#include<stdio.h>
#include<conio.h>

int main()
{
		int A[20], B[30], C[50], i, j, x;
	
		for(i=0; i<20; ++i)
        {printf("Entre com o valor do vetor A: \n");
         scanf("%d" , &A[i]);}
         
   	for(i=0; i<30; ++i)
   	{printf("Entre com o valor do vetor B: \n");
    scanf("%d" , &B[i]);}
         
    for(i=0; i<50; ++i)
    {C[i]= A[i] + B[i];}
    
	for (i=0; i<49; ++i)
	for(j=i+1; j<50; ++j)
	if(C[i]<C[j])
	{
		x=C[i];
		C[i]=C[j];
		C[j]=x;
}
	
	for(j=0; j<50; ++j)
	{printf("Os valores dos vetores de C sao: %d\n" , C[j]);}
	
getch();
return 0;
}
         
