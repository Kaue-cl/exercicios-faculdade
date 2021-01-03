#include <stdio.h>
#include <locale.h>

typedef struct
{
	char rua[50];
	char cidade[50];
	char estado[2];
	int cep;
	int numero;
} ENDERECO;
	
typedef struct
{
	char nome[30];
	char telefone[12];
	int idade;
	ENDERECO endereco_comercial, endereco_residencial;
	int codigo_plano	
} FICHA_CADASTRO;

void main()
{
	setlocale(LC_ALL,"");
	
	FICHA_CADASTRO pessoas[30];
	//continuação do programa
}
