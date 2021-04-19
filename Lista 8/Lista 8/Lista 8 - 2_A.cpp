#include<stdio.h>
#include<locale.h>

int soma(int N);

int main(){ setlocale (LC_ALL, "portuguese");
	int N;
	printf("Digite o número por favor:");
	scanf("%d" , &N);
	soma(N);
}
	
	int soma(int N){
		int x, y=0;
		for(x=1; x<=N; ++x);
		{
			y=x+y;
		}
	printf("%d" , y);
	}
	

	
