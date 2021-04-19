#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>

int cadastro ();
int pesquisa ();
int ordenacao ();
int alteracao ();
int remocao ();
	
	struct cad{
		char nome[60], end[100], email[100], tel[9];};
	struct cad y[5], aux;
	
	int menu=0, x, i, j;
		
int main ()
{ 
	setlocale(LC_ALL, "portuguese");
	
	//SAIR//
	while(menu!=6){
		
		printf("Digite uma opção por favor:\n 1.Cadastro\n 2.Pesquisa\n 3.Classificação\n 4.Alteração\n 5.Remoção\n 6.Sair\n");
		scanf("%d" , &menu);
		system ("cls");
	
	switch(menu){
		case 1: cadastro (); break;
		case 2: pesquisa (); break;
		case 3: ordenacao (); break;
		case 4: alteracao (); break;
		case 5: remocao (); break;
		}
	}
		return (0);
}
	
	int cadastro () { setlocale(LC_ALL, "portuguese");
		for(i=0; i<=4; ++i){
			
			fflush(stdin);
				printf("Nome:");
			fgets(y[i].nome, 60, stdin);
			
			fflush(stdin);
				printf("Endereço:");
			fgets(y[i].end, 100, stdin);
			
			fflush(stdin);
				printf("E-mail:");
			fgets(y[i].email, 100, stdin);
			
			fflush(stdin);
				printf("Telefone:");
			fgets(y[i].tel, 9, stdin);
		}
	}
	
	int pesquisa(){ setlocale(LC_ALL, "portuguese");
		
	char pesq[60];
	   
	   printf("Entre com o nome a ser pesquisado:\n");
	fflush(stdin);
	   fgets(pesq, 60, stdin);
	
    for(i=0; i<=4; ++i){
        if(strcmp(y[i].nome, pesq)==0)
    printf("O nome %s foi encontrado na posição %d: \n", pesq, i); break;
	}
}
	
	int ordenacao (){setlocale(LC_ALL, "portuguese");
	
	   printf("A Classificação por ordem alfabética é: \n");
	for(i=0; i<=3; ++i)
	for(j=1+i; j<=4; ++j){
        if(strcmp(y[i].nome, y[j].nome)>0)
            {
                aux=y[i];
                y[i]=y[j];
                y[j]=aux;
        }}
    for(i=0; i<=4; ++i)
        puts(y[i].nome);}
        
    int alteracao (){ setlocale(LC_ALL, "portuguese");
   
    char pesq[60];
	   
	   printf("Entre com o nome a ser pesquisado:\n");
	fflush(stdin);
	   fgets(pesq, 60, stdin);
	
    for(i=0; i<=4; ++i){
        if(strcmp(y[i].nome, pesq)==0)
    printf("O nome %s foi encontrado na posição %d: \n", pesq, i);} 
			
			fflush(stdin);
				printf("Nome:");
			fgets(y[i].nome, 60, stdin);
			
			fflush(stdin);
				printf("Endereço:");
			fgets(y[i].end, 100, stdin);
			
			fflush(stdin);
				printf("E-mail:");
			fgets(y[i].email, 100, stdin);
			
			fflush(stdin);
				printf("Telefone:");
			fgets(y[i].tel, 9, stdin);
		}
	
	int remocao (){setlocale(LC_ALL, "portuguese");
	
	char pesq[60];
	   
	   printf("Entre com o nome a ser pesquisado:\n");
	fflush(stdin);
	   fgets(pesq, 60, stdin);
	
    for(i=0; i<=4; ++i){
        if(strcmp(y[i].nome, pesq)==0) break;}
        
        printf("Digite ENTER quatro vezes por favor:\n");
            fgets(y[i].nome, 60, stdin);
        fgets(y[i].end, 100, stdin);
            fgets(y[i].email, 100, stdin);
        fgets(y[i].tel, 9, stdin);
            printf("Você deletou o registro...!");}
        
            
        
	

	
		
	


