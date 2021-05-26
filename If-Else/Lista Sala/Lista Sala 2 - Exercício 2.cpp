#include<stdio.h>
#include<conio.h>

int main()
{
    float N1, N2, MEDIA, NE, NM;
    printf("Digite a primeira nota: ");
    scanf("%f" , &N1);
    printf("Digite a segunda nota: ");
    scanf("%f" , &N2);
    MEDIA=(N1+N2)/2;
    if(MEDIA>=6.0)
    printf("Aluno APROVADO com media: %.2f" , MEDIA);
    else printf("Aluno REPROVADO com media: %.2f" , MEDIA);
    scanf("%f" , &NE);
    NM=(NE+MEDIA);
    if (NM>=5.0)
    printf("Aluno APROVADO com media: %.2f" , NM);
    else printf("Aluno REPROVADO com media: %.2f" , NM); 
    
    getch();
    return 0;

}
