#include<stdio.h>
#include<conio.h>

int main()
{
    int A[3], I;
    
    for(I=0; I<3; ++I)
    {printf("Entre com o valor do vetor: \n");
    scanf("%d" , &A[I]);}
    
    for(I=0; I<3; ++I)
    {printf("%d" , A[I]);}
    
    getch ();
    return 0;
}
