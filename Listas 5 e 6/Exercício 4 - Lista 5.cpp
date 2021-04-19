#include<stdio.h>
#include<conio.h>

int main()
{
	int A[12], B[12], C[12], i, j, x;
	
		for(i=0; i<12; ++i)

{
	printf("Digite os numeros do vetor A:");
	scanf("%d" , &A[i]);
}
	for (i=0; i<11; ++i)
	for(j=i+1; j<12; ++j)
	if(A[i]>A[j])
	{
		x=A[i];
		A[i]=A[j];
		A[j]=x;
}
	
	for(j=0; j<12; ++j)
	{printf("Os valores dos vetores sao: %d\n" , A[j]);}
	
	for(i=0; i<12; ++i)

	{
	printf("Digite os numeros do vetor B:");
	scanf("%d" , &B[i]);
}
	for (i=0; i<11; ++i)
	for(j=i+1; j<12; ++j)
	if(B[i]>B[j])
	{
		x=B[i];
		B[i]=B[j];
		B[j]=x;
}
	
	for(j=0; j<12; ++j)
	{printf("Os valores dos vetores sao: %d\n" , B[j]);}
	
	for(i=0; i<12; ++i)
    {C[i]= A[i] + B[i];}
    
	for (i=0; i<11; ++i)
	for(j=i+1; j<12; ++j)
	if(C[i]>C[j])
	{
		x=C[i];
		C[i]=C[j];
		C[j]=x;
}
	
	for(j=0; j<12; ++j)
	{printf("Os valores dos vetores de C sao: %d\n" , C[j]);}
	
	getch();
	return 0;
}
	
	
	
	
	
	
