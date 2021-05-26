#include<stdio.h>
#include<conio.h>

int main ()
{
    int NC;
    float C;
    
    printf("Digite a quantidade de coelhos:");
    scanf ("%d" , &NC);
    C=(NC*0,70)/18+10;
    printf("Com %d coelhos, o valor do custo sera de: %f" , NC, C);
    
    getch();
    return 0;

}   
