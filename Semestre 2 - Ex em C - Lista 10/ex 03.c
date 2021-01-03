#include <stdio.h>
#include <locale.h>

typedef struct
{
	int num;
	char texto[50];
} NUMTEX;

void main ()
{
	FILE *banco;
	NUMTEX variavel, variavel_banco[50];
	int i = 0, j;
	
	setlocale(LC_ALL,"");
	
	banco = fopen("ex 03.bin", "w");
	if(!banco)
	{
		printf("\n\nErro ao ler o arquivo!");
		exit(1);
	}
	
	do
	{
		printf("Digite um número(para parar digite -1): ");
		scanf("%d",&variavel.num);
		if(variavel.num == -1)
			break;
		printf("Digite uma palavra: ");
		scanf("%s",&variavel.texto);
		fwrite(&variavel, sizeof(NUMTEX), 1, banco);
		i++;
		if(i == 50)
			printf("Capacidade de armazenamento alcançada!!");
	}while(variavel.num != -1 || i < 50);

	fclose(banco);
	
	banco = fopen("ex 03.bin", "r");
	if(!banco)
	{
		printf("\n\nErro ao ler o arquivo!");
		exit(1);
	}
	
	fread(&variavel_banco, sizeof(NUMTEX), i, banco);
	
	for(j = 0; j < i; j ++)
		printf("\nNúmero: %d\t-\tTexto: %s", variavel_banco[j].num, variavel_banco[j].texto);
	
	fclose(banco);
}
