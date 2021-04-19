#include<stdio.h>
#include<conio.h>

int main()
{
		int A[5], B[5], C[10], i;
	
		for(i=0; i<5; ++i)
        {printf("Entre com o valor do vetor A: \n");
         scanf("%d" , &A[i]);}
         
   	for(i=0; i<5; ++i)
   	{printf("Entre com o valor do vetor B: \n");
         scanf("%d" , &B[i]);}
         
         
    for(i=0; i<10; ++i)
    {
    	if(i<5)
		C[i]=A[i];

	
    
    else
    	C[i]=B[i-5];
    	printf("%d\n" , C[i]);	
	}
	getch();
	return 0;
}
     
