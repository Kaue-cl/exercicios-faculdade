#include <stdio.h>
#include <locale.h>

typedef struct
{
	char cpf[15], nome[30];
} PROPRIETARIO;

typedef struct
{
	char modelo[20], placa[10];
	int ano;
	PROPRIETARIO proprietario;
} CARRO;

CARRO Entrada_Informacao ()
{
	CARRO carro;
	
	printf("INFORMA��ES DO CARRO\n ");
	printf("\nDigite o modelo do carro: ");
	scanf("%s",&carro.modelo);
	printf("Digite o ano do carro: ");
	scanf("%d",&carro.ano);
	printf("Digite a placa do carro: ");
	scanf("%s",&carro.placa);
	printf("\nINFORMA��ES DO PROPRIET�RIO\n ");
	printf("Digite o nome do propriet�rio: ");
	scanf("%s",&carro.proprietario.nome);
	printf("Digite o CPF do propriet�rio: ");
	scanf("%s",&carro.proprietario.cpf);

	return carro;
}

void Saida_Informacao (CARRO carro)
{
	printf("\nDetalhes do carro: ");
	printf("\nModelo - %s",carro.modelo);
	printf("\nAno - %d",carro.ano);
	printf("\nPlaca - %s",carro.placa);
	printf("\nNome do propriet�rio - %s",carro.proprietario.nome);
	printf("\nCPF - %s",carro.proprietario.cpf);
}


int main ()
{
	setlocale(LC_ALL,"");
	CARRO carro;
	
	carro = Entrada_Informacao();
	Saida_Informacao(carro);
	
	return 0;
}
