#include<stdio.h>
#include<conio.h>

int main()
{
	int A[6], B[6], X, Y, i;
	for(i=0; i<6; ++i)
	{printf("Digite os numeros do vetor A: \n");
	scanf("%d" , &A[i]);}
	
	for(i=0; i<6; ++i)
	{
        X=A[i];
        if (A[i]==1){
            B[i]=1;
        }
    
        else{
	
	 for(Y=X-1; Y>=1; Y--){
            X=X*Y;
            B[i]=X;}}}
            
	for(i=0; i<6; ++i)
	{printf("%d\n" , B[i]);}

 getch();
 return 0;
}

