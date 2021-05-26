#include<stdio.h>
#include<conio.h>

int main()
{
	float A, B, C;
	printf("Diite tres numeros: ");
	scanf("%f %f %f" , &A, &B, &C);
	if((A<B) && (A<C) && (B<C))
	
	{
		printf("Os valores em ordem crescente são: %f %f %f" , A, B, C);
	}
	
	else 
	if((A<B) && (A<C) && (C<B))
	
	{
		printf("Os valores em ordem crescente são: %f %f %f" , A, C, B);
	}

	else
		if((B<A) && (B<C) && (A<C))
	
	{
		printf("Os valores em ordem crescente são: %f %f %f", B, A, C);		
	}
	
	else
	if((B<A) && (B<C) && (C<A))
	
	{
		printf("Os valores em ordem crescente são: %f %f %f", B, C, A);
	}
	
	else
	if((C<A) && (C<B) && (A<B))
	
	{
		printf("Os valores em ordem crescente são: %f %f %f", C, A, B);
	}
	
	else printf("Os valores em ordem crescente são: %f %f %f", C, B, A);

	getch ();
	return 0;
}

