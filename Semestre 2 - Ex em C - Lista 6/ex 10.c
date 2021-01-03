#include <stdio.h>
#include <locale.h>

int Soma (int n1[5][5], int soma_elementos[5])
{
	int i, j;
	for(i = 0; i < 5; i++)
		for(j = 0; j < 5; j++)
			soma_elementos[i] += n1[i][j];
}

int EntradaValor(int num[5][5])
{
	int i, j;
	
	for(i = 0; i < 5; i++)
		for(j = 0; j < 5; j++)
		{
			printf("Digite o número da posição (%d,%d): ",i,j);
			scanf("%d",&num[i][j]);
		}
}

int main()
{
	setlocale (LC_ALL,"");
	int v1[5][5], soma_linha[5] = {0}, i;
	
	EntradaValor(v1);
	Soma(v1, soma_linha);
	
	printf("A soma de cada linha é: ");
	for(i = 0; i < 5; i++)
		printf("\n%dª linha - %d", i+1, soma_linha[i]);
	
	return 0;
}
