#include<stdio.h>
#include<conio.h>

int main()
{
	int A[15], B[15], i, j, x, y;
	for(i=0; i<15; i++)
	{
	printf("Digite os numeros do vetor A: \n");
	scanf("%d" , &A[i]);
	}
	for(i=0;i<15;i++){
	x=A[i];
	for(y=x-1; y>=1; y--){
        x=x*y;
		}
		B[i]=x;
		}
	
    printf("O resultado eh: %d\n" , B[i]);
    for (i=0; i<15; ++i)
	for(j=i+1; j<15; ++j)
	if(B[i]>B[j])
	{
		x=B[i];
		B[i]=B[j];
		B[j]=x;
}
	for(j=0; j<15; ++j)
	{printf("Os valores dos vetores sao: %d\n" , B[j]);}

getch();
return 0;
}
	
        
