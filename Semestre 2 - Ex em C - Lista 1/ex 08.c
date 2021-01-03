#include <stdio.h>
#include <locale.h>

void main () {
	setlocale(LC_ALL,"");
	//variáveis
	int quantidade;
	float valor;
	//entrada de dados
	printf("Digite a quantidade de DVD's que você irá comprar: ");
	scanf("%d",&quantidade);
	//processamento de dados
	if (quantidade <= 100)
		valor = quantidade * 0.50;
	else
		valor = quantidade * 0.45;
	//saída de dados
	printf("A compra sairá no valor de R$%.2f", valor);
}
