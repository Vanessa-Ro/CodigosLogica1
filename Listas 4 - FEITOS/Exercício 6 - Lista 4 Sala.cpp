#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int A[8], B[8], i;
	
	for(i=0; i<8; ++i)
        {printf("Entre com o valor do vetor A: \n");
         scanf("%d" , &A[i]);}
         
    for(i=0; i<8; ++i)
    B[i]=pow(A[i], 2);
    
	for(i=0; i<8; ++i)
	{printf("%d\n" , B[i]);}
    
    getch();
    return 0;
}
    

    
