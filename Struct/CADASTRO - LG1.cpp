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
    	printf("Digite uma op��o por favor: \n 1. Cadastro e Registros \n 2. Pesquisa de Registro \n 3. Classifica��o Alfab�tica \n 4. Altera��o de Registro \n 5. Sair \n");
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
        printf("ENDERE�O: ");
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
            printf("O nome %s foi encontrado na posi��o %d: \n", acha, i);} break;
        
        //ORDENA��O//
    case 3:
        
        printf("A classifica��o por ordem alfab�tica �: ");
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
        
        
        //ALTERA��O//
    case 4:
        
        printf("Entre com o nome do cadastro a ser alterado: ");
            fflush(stdin);
        fgets(acha, 60, stdin);
        	for(i=0; i<=4; ++i){
            if(strcmp(x[i].nome, acha)==0) break;
        
        printf("Fa�a um novo cadastro: ");
        
        	fflush(stdin);
        printf("NOME: ");
            fgets(x[i].nome, 60, stdin);
            
            fflush(stdin);
        printf("IDADE: ");
            scanf("%i", &x[i].idade);
            
            fflush(stdin);
        printf("ENDERE�O: ");
            fgets(x[i].end, 100, stdin);
            
            fflush(stdin);
        printf("TELEFONE: ");
            fgets(x[i].tel, 8, stdin);
             break;
	
	
		//SAIR//
	case 5:
		printf("Voc� est� saindo... Obrigada! \n"); break;
		
	    default: printf("INVALIDO\n");}
        }
        
    }
	
getch();
return 0;
}
            
                
    
             
                
                
            
