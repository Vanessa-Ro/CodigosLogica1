#include<stdio.h>
#include<conio.h>

int main()
{
    float D, R;
    printf("Digite o valor em dolares para conversao:");
    scanf("%f" , &D);
    R=D/2.40;
    printf("O valor em reais eh: %.2f" , R);
    
    getch();
    return 0;
}
