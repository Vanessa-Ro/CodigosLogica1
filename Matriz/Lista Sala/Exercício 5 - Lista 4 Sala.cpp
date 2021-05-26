#include<stdio.h>
#include<conio.h>

int main()
{
		int A[20], B[30], C[50], i;
	
		for(i=0; i<20; ++i)
        {printf("Entre com o valor do vetor A: \n");
         scanf("%d" , &A[i]);}
         
   	for(i=0; i<30; ++i)
   	{printf("Entre com o valor do vetor B: \n");
         scanf("%d" , &B[i]);}
         
         
    for(i=0; i<50; ++i)
    {
    	if(i<50)
		C[i]=A[i];

	
    
    else
    	C[i]=B[i-50];
    	printf("%d\n" , C[i]);	
	}
	getch();
	return 0;
}
     
