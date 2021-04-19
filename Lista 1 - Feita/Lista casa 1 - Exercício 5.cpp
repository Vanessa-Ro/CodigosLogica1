#include<stdio.h>
#include<conio.h>

int main()
{
    float IMC, M, A;
    printf("Digite a massa (kg):");
    scanf("%f" , &M);
    printf("Digite a altura (m):");
    scanf("%f" , &A);
    IMC=M/(A*A);
    printf("O IMC resultante eh: %.2f" , IMC);
    
    getch();
    return 0;
}
