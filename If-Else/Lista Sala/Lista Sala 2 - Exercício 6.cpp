#include<stdio.h>
#include<conio.h>
#include<math.h>
//pow(var,x) -> pot
//sqrt(var) -> raiz
int main()
{
	float A, B, C, X1, X2, Delta;
	printf("Equacao do segundo grau ");
	printf("Digite o coeficiente A: ");
	scanf("%f" , &A);
	printf ("Digite o coeficiente B: ");
	scanf("%f" , &B);
	printf ("Digite o coeficiente C: ");
	scanf("%f" , &C);
	
	if(A!=0){
		Delta=pow(B,2)-(4*A*C);
	
	if (Delta<0)
	
	{
		printf("A equacao nao tem solucao");
	}
	
	else{
	
	if(Delta==0){
	
	X1=((-B)/2*A);
	X2=X1;
	printf(" A equacao tem duas raizes reais e iguais: %2.f %2.f", X1, X2);
}
	
	else 
	
	{
	X1=(-B+sqrt(Delta))/(2*A);
	X2=(-B-sqrt(Delta))/(2*A);	
	printf("A equacao tem duas raizes reais e diferentes %2.f %2.f", X1, X2);
	}
}
	}else printf("Nao e uma equacao do segundo grau!");

	getch ();
	return 0;
}

