#include<stdio.h>
#include<conio.h>

int main()
{
    float N , Q;
    printf("Digite um numero inteiro:");
    scanf("%f" , &N);
    Q=N*N;
    printf("O quadrado deste numero eh: %.1f" , Q);
    
    getch();
    return 0;
}    
