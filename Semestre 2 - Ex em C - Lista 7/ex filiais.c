#include <stdio.h>
#include <locale.h>

int FilialMenorRendimento(float rendimentos[5])
{
	int i;
	int posicao = 0;
	float menor_rendimento = rendimentos[0];
	
	for(i = 1; i < 5; i ++)
		if(rendimentos[i] < menor_rendimento)
		{
			menor_rendimento = rendimentos[i];
			posicao = i;
		}
			
	
	return posicao;
}

int FilialMaiorRendimento(float rendimentos[5])
{
	int i;
	int posicao = 0;
	float maior_rendimento = rendimentos[0];
	
	for(i = 1; i < 5; i ++)
		if(rendimentos[i] > maior_rendimento)
		{
			maior_rendimento = rendimentos[i];
			posicao = i;
		}
	
	return posicao;
}

float MediaMensal(float rendimentos[5])
{
	int i;
	float media = 0;
	
	for(i = 0; i < 5; i ++)
		media += rendimentos[i];
	
	media /= i;
	
	return media;
}

float DiferencaRendimentoMinMax(float rendimentos[5])
{
	float diferenca = 0;
	int filial_maior = FilialMaiorRendimento(rendimentos);
	int filial_menor = FilialMenorRendimento(rendimentos);
	
	diferenca = rendimentos[filial_maior] - rendimentos[filial_menor];
	
	return diferenca;
}


int main ()
{
	setlocale(LC_ALL,"");
	
	float rendimentos[5];
	int i;
	
	for(i = 0; i < 5; i ++)
	{
		printf("Digite o rendimento da empresa %d: ", i);
		scanf("%f",&rendimentos[i]);
	}
	
	printf("\nFilial com pior rendimento: %d",
		FilialMenorRendimento(rendimentos));
	printf("\nFilial com melhor rendimento: %d",
		FilialMaiorRendimento(rendimentos));
	printf("\nMédia mensal da empresa: %.2f",
		MediaMensal(rendimentos));
	printf("\nGap dos rendimentos: %.2f",
		DiferencaRendimentoMinMax(rendimentos));
	
	return 0;
}
