#include<stdio.h>
#include<conio.h>

int main()
{
    float D, R;
    printf("Digite o valor em reais para conversao:");
    scanf("%f" , &R);
    D=R/2.40;
    printf("O valor em dolares eh: %.2f" , D);
    
    getch();
    return 0;
}
