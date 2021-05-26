#include<stdio.h>
#include<conio.h>

int main()
{
    float AP, LP, AA, LA, R1, R2;
    printf("Digite a largura do azulejo (cm):");
    scanf("%f" , &LA);
    printf("Digite a altura do azulejo (cm):");
    scanf("%f" , &AA);
    printf("Digite  a largura da parede (m):");
    scanf("%f" , &LP);
    printf("Digite a altura da parede (m):");
    scanf("%f" , &AP);
    LA=LA/100;
    AA=AA/100;
    R1=LA*AA;
    R2=LP*AP;
    R2=R2/R1;
    printf("A quantidade de azulejos necessaria eh: %.2f" , R2);
    
    getch();
    return 0; 
}
