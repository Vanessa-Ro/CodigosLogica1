#include<stdio.h>
#include<conio.h>

int main()
{
    float A, C, R;
    printf("Digite o raio da circunferencia:");
    scanf("%f" , &R);
    A=3.14159*(R*R);
    printf("A area do circulo eh: %f" , A);
    C=2*3.14159*R;
    printf("O comprimento do circulo eh: %f" , C);
    
    getch();
    return 0; 
}
