#include <stdio.h>
#include <locale.h>
#include <string.h>
#define numero_alunos 5
#define numero_provas 3

typedef struct 
{
	int matricula;
	char nome[30];
	float nota[numero_provas];
	
} FICHA_ALUNO;

void Entrada_Ficha (FICHA_ALUNO alunos[numero_alunos])
{
	int i, j;

	for(i = 0; i < numero_alunos; i++)
	{
		printf("%dº aluno\n", i+1);
		printf("Digite o número de matrícula do aluno: ");
		scanf("%d",&alunos[i].matricula);
		printf("Digite o nome do aluno: ");
		scanf("%s",& alunos[i].nome);
	
		for(j = 0; j < numero_provas; j++)
		{
			printf("Digite a nota do aluno na %dª prova: ", i+1);
			scanf("%f",& alunos[i].nota[j]);
		}
		printf("\n");
	}
}

void Saida_Ficha (FICHA_ALUNO alunos[numero_alunos])
{
	int i,j;
		
	printf("Número\tNome");
	for(j = 0; j < numero_provas; j ++)
		printf("\tP%d",j+1);
	
	for(i = 0; i < numero_alunos; i++)
	{
		printf("\n%d\t%s", alunos[i].matricula,alunos[i].nome);
			for(j = 0; j < numero_provas; j++)
				printf("\t%.2f", alunos[i].nota[j]);
	}
}

int Indice_NotaMax (FICHA_ALUNO alunos[numero_alunos])
{
	int i, indice = 0;
	float notaMAx = alunos[0].nota[0];
	
	for(i = 1; i < numero_alunos; i++)
		if(alunos[i].nota[0] > notaMAx)
		{
			notaMAx = alunos[i].nota[0];
			indice = i;
		}
	
	return indice;
}

void Media (FICHA_ALUNO alunos[numero_alunos], float media[numero_alunos])
{
	int i, j;
	
	for(i = 0; i < numero_alunos; i ++)
	{
		for(j = 0; j < numero_provas; j ++)
			media[i] += alunos[i].nota[j];
		media[i] /= j;
	}

}

int* Indice_MediaMaxMin (float media[numero_alunos], int indice_mediaMaxMin[2])
{
	int i;
	float mediaMax = media[0], mediaMin = media[0];
	
	for(i = 1; i < numero_alunos; i++)
	{
		if(media[i] > mediaMax)
		{
			mediaMax = media[i];
			indice_mediaMaxMin[0] = i;
		}
		if(media[i] < mediaMin)
		{
			mediaMin = media[i];
			indice_mediaMaxMin[1] = i;
		}
	}
	
	return indice_mediaMaxMin;
}

void Aprovacao (char aprovacao[numero_alunos][10], float media[numero_alunos])
{
	int i;
	
	for(i = 0; i < numero_alunos; i++)
	{
		if(media[i] >= 6)
			strcpy(aprovacao[i], "APROVADO");
		else
			strcpy(aprovacao[i], "REPROVADO");
	}
	
}

void Saida_Aprovacao (FICHA_ALUNO alunos[numero_alunos], float media[numero_alunos],char aprovacao[numero_alunos][10])
{
	int i;
	
	printf("\n\nNúmero\tNome\tMédia\tResultado");
	for(i = 0; i < numero_alunos; i++)
	{
		printf("\n%d\t%s\t%.2f\t%s", alunos[i].matricula, alunos[i].nome,
			media[i], aprovacao[i]);
	}
}

int main ()
{
	setlocale(LC_ALL,"");
	
	FICHA_ALUNO alunos[numero_alunos];
	int i;
	int indice_notaMax, indice_mediaMaxMin[2] = {0};//0 - MAx, 1 - Min
	float media[numero_alunos] = {0};
	char aprovacao[numero_alunos][10];
	
	Entrada_Ficha(alunos);
	Saida_Ficha(alunos);
	indice_notaMax = Indice_NotaMax(alunos);
	Media(alunos, media);
	Indice_MediaMaxMin(media, indice_mediaMaxMin);
	Aprovacao(aprovacao, media);
	
	
	printf("\n\nO aluno %s teve a maior nota na primeira prova: %.2f",
		alunos[indice_notaMax].nome,alunos[indice_notaMax].nota[0]);
	printf("\nO aluno %s teve a maior média geral: %.2f",
		alunos[indice_mediaMaxMin[0]].nome,media[indice_mediaMaxMin[0]]);
	printf("\nO aluno %s teve a menor média geral: %.2f",
		alunos[indice_mediaMaxMin[1]].nome,media[indice_mediaMaxMin[1]]);
	Saida_Aprovacao(alunos, media, aprovacao);

	
	return 0;
}
