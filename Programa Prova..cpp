#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int X, Y, R, op;

   do{
    printf("Digite um numero:\n");
    scanf("%d" , &X);
    printf("Escolha uma opcao (1- Potencia, 2- Raiz quadrada, 3- Fatorial, 4- Sair):\n");
    scanf("%d" , &op);
 
        switch (op){
        case 1:
        R=pow(X,3);
        printf("O resultado eh: %d\n" , R);
        break;
        
        case 2:
        R=sqrt(X);
        printf("O resultado eh: %d\n" , R);
        break;
        
        case 3:
        for(Y=X-1; Y>=1; Y--){
            X=X*Y;}
        printf("O resultado eh: %d\n" , X);
        break;
        
        case 4:
        printf("FECHANDO..." , R);
        break;
       
       default: 
       printf("INVALIDO!");
    } }     
        
    while (op!=4);
    
    getch ();
    return 0;
}
