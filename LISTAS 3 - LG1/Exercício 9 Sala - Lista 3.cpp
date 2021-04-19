#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int N=1, M=0, z;
	printf("Digite um numero para base:");
	scanf("%d" , &N);
	printf("Digite um numero para o expoente:");
	scanf("%d" , &M);
	do{
		z=pow(N, M);
		printf("%d\n" , z);
		N++;	
	}
	while(N<0);
	

 getch();
 return 0;
}

