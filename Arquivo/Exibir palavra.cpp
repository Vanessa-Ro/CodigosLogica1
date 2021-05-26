#include<stdio.h>
#include<conio.h>

int main (void)

{
    FILE*PTRARQ;
    char PALAVRA[20];
    PTRARQ = fopen ("Sofro.TXT", "a");
    printf ("\n\n ESCREVA UMA PALAVRA: ");
    scanf ("%s", &PALAVRA);
    fprintf (PTRARQ, "%s", PALAVRA);
    fclose (PTRARQ);
    
    return 0;
}   
    
