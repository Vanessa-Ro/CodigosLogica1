#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

int main()
{
    setlocale (LC_ALL, "portuguese");
           
    int menu=0, x, i, j, op;
    
        //SAIR//
    while(menu!=5){
        
        printf("Escolha uma opção por favor!: \n 1.Cadastro \n 2.Listagem Aposentados \n 3.Listagem Peso \n");
    scanf("%d", &menu);
    
    struct old{
        char nome[60];
        int idade;
        float peso;};
    struct old x[10], aux;
    
    switch(menu){
        
        
        //CADASTRO//
        
    case 1:
        for(i=0; i<=9; ++i){
            fflush(stdin);
        
        printf("NOME: ");
            fgets(x[i].nome, 60, stdin);
            
            fflush(stdin);
        printf("IDADE: ");
            scanf("%i", &x[i].idade);
            
            fflush(stdin);
        printf("PESO: ");
            scanf("%f", &x[i].peso);} break;
            
    
        //ORDENAÇÃO//
    
    case 2:
        printf("A listagem dos idosos aposentados ficou da seguinte forma: \n");
            for(i=0; i<=9; ++i)
            for(j=1+i; j<=10; ++j){
        
        if(x[i].idade>=65)
         {
            aux=x[i];
            x[i]=x[j];
            x[j]=aux;   
        }}
        
        for(i=0; i<=9; ++i);{
            printf("%i\n",x[i].idade);} break;
            
    
        //ORDENAÇÃO//
    
    case 3:
        printf("A listagem dos pesos dos idosos ficou da seguinte forma: \n");
           for(i=0; i<=9; ++i)
           for(j=1+i; j<=10; ++j){  
        
        if(x[i].peso < x[j].peso)
           
           {
            aux=x[i];
            x[i]=x[j];
            x[j]=aux;   
           }} 
        
            for(i=0; i<=9; ++i){
                printf("%f\n", x[i].peso);} break;
    
    
        //SAIR//
        
    case 4: 
        printf("Você está saindo... Obrigada! \n"); break;
        
            default: printf("INVALIDO\n");}}
                
getch();
return 0;
}            

                 
