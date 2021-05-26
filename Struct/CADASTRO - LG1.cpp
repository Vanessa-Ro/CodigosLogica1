#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

int main()
{
    setlocale (LC_ALL, "portuguese");
    
    int menu=0, x, i, j, op;
    char acha[60];
    
        //SAIR//
    while(menu!=5){    
    	printf("Digite uma opção por favor: \n 1. Cadastro e Registros \n 2. Pesquisa de Registro \n 3. Classificação Alfabética \n 4. Alteração de Registro \n 5. Sair \n");
    scanf("%d" , &menu);
   
    struct cad{
        char nome[60], end[100], tel[8];
        int idade;};
    struct cad x[5], aux;
        
    switch(menu){
       
       //CADASTRO//
    
    case 1:
        for(i=0; i<=4; ++i){
            fflush(stdin);
        
        printf("NOME: ");
            fgets(x[i].nome, 60, stdin);
            
            fflush(stdin);
        printf("IDADE: ");
            scanf("%i", &x[i].idade);
            
            fflush(stdin);
        printf("ENDEREÇO: ");
            fgets(x[i].end, 100, stdin);
            
            fflush(stdin);
        printf("TELEFONE: ");
            fgets(x[i].tel, 8, stdin);} break;
            
    
        //PESQUISA//
    case 2:  
    
        printf("Entre com o nome a ser pesquisado: \n");
        fflush(stdin);
        fgets(acha, 60, stdin); 
        for(i=0; i<=4; ++i){
            if(strcmp(x[i].nome, acha)==0)
            printf("O nome %s foi encontrado na posição %d: \n", acha, i);} break;
        
        //ORDENAÇÃO//
    case 3:
        
        printf("A classificação por ordem alfabética é: ");
            for(i=0; i<=3; ++i)
            for(j=1+i; j<=4; ++j){
                if(strcmp(x[i].nome, x[j].nome)>0)
        {
            aux=x[i];
            x[i]=x[j];
            x[j]=aux;   
        }}
		
			for(i=0; i<=4; ++i){
				puts(x[i].nome);
		} break;
        
        
        //ALTERAÇÃO//
    case 4:
        
        printf("Entre com o nome do cadastro a ser alterado: ");
            fflush(stdin);
        fgets(acha, 60, stdin);
        	for(i=0; i<=4; ++i){
            if(strcmp(x[i].nome, acha)==0) break;
        
        printf("Faça um novo cadastro: ");
        
        	fflush(stdin);
        printf("NOME: ");
            fgets(x[i].nome, 60, stdin);
            
            fflush(stdin);
        printf("IDADE: ");
            scanf("%i", &x[i].idade);
            
            fflush(stdin);
        printf("ENDEREÇO: ");
            fgets(x[i].end, 100, stdin);
            
            fflush(stdin);
        printf("TELEFONE: ");
            fgets(x[i].tel, 8, stdin);
             break;
	
	
		//SAIR//
	case 5:
		printf("Você está saindo... Obrigada! \n"); break;
		
	    default: printf("INVALIDO\n");}
        }
        
    }
	
getch();
return 0;
}
            
                
    
             
                
                
            
