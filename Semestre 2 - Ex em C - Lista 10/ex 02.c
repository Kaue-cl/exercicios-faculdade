#include <stdio.h>
#include <locale.h>

typedef struct
{
	int matricula;
	char nome[50];
	float nota[2];
} FICHA;

int Identificar_Indice(FICHA alunos_banco[10])
{
	int resposta, i;
	
	printf("Digite a matrícula do aluno desejado: ");
	scanf("%d", &resposta);
	
	for(i = 0; i < 10; i++)
		if(resposta == alunos_banco[i].matricula)
			break;
	return i;
}

float Media(FICHA alunos_banco)
{
	float media = 0;
	int j;
	
	for(j = 0; j < 2; j++)
		media += alunos_banco.nota[j];
	media /= j;
	
	return media;
}

void main ()
{
	FILE *banco;
	FICHA alunos_banco[10];
	int i;
	float media;
	char resposta;
	
	setlocale(LC_ALL,"");
	
	banco = fopen("ex 01.bin", "r");
	if(!banco)
	{
		printf("\n\nErro ao ler o arquivo!");
		exit(1);
	}

	fread(&alunos_banco, sizeof(FICHA), 10, banco);
	
	do
	{
		i = Identificar_Indice(alunos_banco);
		media = Media(alunos_banco[i]);
		printf("A média do(a) aluno(a) %s é %.2f", alunos_banco[i].nome, media);
		printf("\nGostaria de saber a média de outro aluno? (S/N): ");
		getchar();
		scanf("%c",&resposta);
	}while(toupper(resposta) == 'S');
	
	fclose(banco);
}

