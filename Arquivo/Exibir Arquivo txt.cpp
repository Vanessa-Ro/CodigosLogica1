#include<stdio.h>
#include<conio.h>

int main (void)

{
    FILE*PTRARQ;
    PTRARQ = fopen ("Sofro.TXT", "a");
    fclose (PTRARQ);
    
    return 0; 
}   
    
