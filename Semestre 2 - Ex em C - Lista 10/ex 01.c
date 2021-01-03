#include <stdio.h>
#include <locale.h>

typedef struct
{
	int matricula;
	char nome[50];
	float nota[2];
} FICHA;

void Entrada_Ficha (FICHA alunos[10])
{
	int i, j;
	
	for(i = 0; i < 10; i++)
	{
		printf("%dº - Aluno", i+1);
		printf("\nDigite o número de matrícula: ");
		scanf("%d", &alunos[i].matricula);
		printf("Digite o nome do aluno: ");
		scanf("%s",alunos[i].nome);
		
		for(j = 0; j < 2; j++)
		{
			printf("Digite a nota da %dª prova:", j+1);
			scanf("%f",&alunos[i].nota[j]);
		}
		printf("\n");
	}
}

void Saida_Ficha (FICHA alunos_banco[10])
{
	int i, j;
	
	printf("Matrícula\tNome\tP1\tP2");
	
	for(i = 0; i < 10; i++)
	{
		printf("\n%d\t\t%s", alunos_banco[i].matricula,
			alunos_banco[i].nome);

		for(j = 0; j < 2; j++)
			printf("\t%.2f", alunos_banco[i].nota[j]);
	}
}

void main()
{
	FILE *banco;
	FICHA alunos[10], alunos_banco[10];
	
	setlocale (LC_ALL,"");
	
	//abrindo arquivo
	banco = fopen("ex 01.bin", "wb");
	if(!banco)
	{
		printf("\n\nErro ao criar o arquivo!");
		exit(1);
	}
	
	Entrada_Ficha(alunos);
	fwrite(&alunos, sizeof(FICHA), 10, banco);
	
	fclose(banco);
	
	//lendo arquivo
	banco = fopen("ex 01.bin", "r");
	if(!banco)
	{
		printf("\n\nErro ao ler o arquivo!");
		exit(1);
	}
	
	fread(&alunos_banco, sizeof(FICHA), 10, banco);
	Saida_Ficha(alunos_banco);
	
	fclose(banco);
}

