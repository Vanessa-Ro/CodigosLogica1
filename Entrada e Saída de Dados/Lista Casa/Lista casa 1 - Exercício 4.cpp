#include<stdio.h>
#include<conio.h>

int main()
{
    float A, B, AR, PE;
    printf("Digite a medida do lado A do retangulo:");
    scanf("%f" , &A);
    printf("Digite a medida do lado B do retangulo:");
    scanf("%f" , &B);
    AR=(A*B);
    printf("Area total do retangulo: %.2f" , AR);
    PE= (2*A)+(2*B);
    printf("perimetro do retangulo: %.2f" , PE);
    
    getch();
    return 0;
    }
