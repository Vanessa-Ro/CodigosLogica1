#include<stdio.h>
#include<conio.h>

int main()
{
    float dis, t, veloc, litusa;
    printf("Entre com o tempo:");
    scanf("%f" , &t);
    printf("Entre com a velocidade:");
    scanf("%f" , &veloc);
    dis=t*veloc;
    litusa=dis/12;
    printf("Os valores s�o: %.2f %.2f %.2f %.2f" , t, veloc, dis, litusa);
    
    getch();
    return 0;
}
    
