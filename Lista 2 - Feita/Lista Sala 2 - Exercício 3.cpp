#include<stdio.h>
#include<conio.h>

int main()
{
    float Valor1, Valor2, Diferenca;
    printf("Digite Dois Valores Numericos: ");
    scanf("%f %f" , &Valor1, &Valor2);
    
    if(Valor1==Valor2)
        printf("Os numeros digitados sao iguais, entao nao ha diferencas entre eles");
    else 
    if(Valor1<Valor2)
    {
        Diferenca=Valor2-Valor1;
        printf("A diferença entre os numeros eh: %2.f ", Diferenca);
    }
    else if(Valor2<Valor1)
    {
        Diferenca = Valor1-Valor2;
        printf("A diferença entre os numeros eh: %2.f ", Diferenca);
    }
    
    getch();
    return 0;
} 
