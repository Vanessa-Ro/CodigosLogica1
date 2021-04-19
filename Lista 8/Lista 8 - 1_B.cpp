#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int cadastro();
int ordenacao();
int correcao();
int pesquisa();
int aprovados();
int reprovados();

int menu=0, y, i, j;
struct alunos{
	char nome[60];
	float p1, p2, m;
}; struct alunos x[20], aux;

	int main (){setlocale(LC_ALL, "portuguese");
	
	//SAIR//
	while(menu!=6){
	
	printf ("1. Cadastrar\n2. Ordenar\n3. Alterar\n4. Pesquisar\n5. Aprovar\n6. Reprovar\n");
	scanf("%d" , &menu);
	system ("cls");

	switch(menu){
		case 1: cadastro(); break;
		case 2: ordenacao(); break;
		case 3: correcao(); break;
		case 4: pesquisa(); break;
		case 5: aprovados(); break;
		case 6: reprovados(); break;
		}
	}
		return (0);
}
	
	int cadastro() { setlocale(LC_ALL, "portuguese");	
		for(i=0; i<=19; ++i){
			
		fflush(stdin);
			printf("Nome:");
		fgets(x[i].nome, 60, stdin);
		
		fflush(stdin);
			printf("Prova 1:");
		scanf("%f" , &x[i].p1);
		
		fflush(stdin);
			printf("Prova 2:");
		scanf("%f" , &x[i].p2);
	
	x[i].m=(x[i].p1 + x[i].p2)/2;
printf("A média é: %.2f\n", x[i].m);}}

	int ordenacao(){
	setlocale(LC_ALL, "portuguese");
	
	   printf("A Classificação por ordem alfabética é: \n");
	for(i=0; i<=18; ++i)
	for(j=1+i; j<=19; ++j){
        if(strcmp(x[i].nome, x[j].nome)>0)
            {
                aux=x[i];
                x[i]=x[j];
                x[j]=aux;
        }}
    for(i=0; i<=19; ++i)
        puts(x[i].nome);}
        
	int correcao(){
	setlocale(LC_ALL, "portuguese");
		
		char pesq[60];
	   
		printf("Entre com o nome a ser pesquisado:\n");
	fflush(stdin);
	   fgets(pesq, 60, stdin);
	   
	   fflush(stdin);
			printf("Nome:");
		fgets(x[i].nome, 60, stdin);
		
		fflush(stdin);
			printf("Prova 1:");
		scanf("%f" , &x[i].p1);
		
		fflush(stdin);
			printf("Prova 2:");
		scanf("%f" , &x[i].p2);
	
	x[i].m=(x[i].p1 + x[i].p2)/2;
printf("A média é: %.2f\n", x[i].m);}
	
	int pesquisa(){
	 setlocale(LC_ALL, "portuguese");
	
	char pesq[60];
	   
	   printf("Entre com o nome a ser pesquisado:\n");
	fflush(stdin);
	   fgets(pesq, 60, stdin);
	   
	   for(i=0; i<=19; ++i){
        if(strcmp(x[i].nome, pesq)==0)
    printf("O nome %s foi encontrado na posição %d: \n", pesq, i); break;
	}
}	

	int aprovados(){
	setlocale(LC_ALL, "portuguese");
	
		printf("APROVADOS");
	for(i=0; i<=19; ++i)		
		if (x[i].m>=7)
		printf("%s", x[i].nome);}
		
	int reprovados (){
	setlocale(LC_ALL, "portuguese");
	
		printf("REPROVADOS");
	for(i=0; i<=19; ++i)
		if (x[i].m<7)
		printf("%s" , x[i].nome);}

