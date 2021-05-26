#include<stdio.h>
#include<conio.h>

int main()
{
    float PA, PV, TA, TE;
    printf("Digite o valor da prestacao:");
    scanf("%f", &PV);
    printf("Digite o valor da taxa de juros:");
    scanf("%f" , &TA);
    printf("Digite o tempo em atraso:");
    scanf("%f" , &TE);
    PA=PV+(PV*(TA/100)*TE);
    printf("O valor da prestação em atraso eh: %f" , PA);
    
    getch ();
    return 0;
}
