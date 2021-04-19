#include<stdio.h>
#include<conio.h>

int main()
{
    int x;
    for(x=0; x<100; x++)
    
    {
        if (x%2==0) continue;
        printf("\n%d" , x);
        
    }
    
    getch ();
    return 0;
}
