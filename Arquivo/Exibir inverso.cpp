#include<stdio.h>
#include<conio.h>

int main (void)

{
    FILE*PTRARQ;
    char PALAVRA[20];
    PTRARQ = fopen ("Sofro.TXT", "r");
    fscanf (PTRARQ, "%s", PALAVRA);
    printf("Palavra = %s", PALAVRA);
    fclose (PTRARQ);
    
    getch();
    return 0;
}   
    
