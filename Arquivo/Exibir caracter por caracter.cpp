#include<stdio.h>
#include<conio.h>

int main(void)
{
    FILE*PTRARQ;
    char LETRA;
    PTRARQ = fopen ("Sofro.TXT", "r");
    
    printf("\n\nFrase = ");
    
    while(LETRA = fgetc(PTRARQ) != EOF)
        printf("%c", LETRA);
        fclose(PTRARQ);
        
    getch();
    return 0;
}
