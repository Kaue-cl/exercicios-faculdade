#include <stdio.h>
#include <locale.h>

void main () {
	setlocale  (LC_ALL,"");
	//variáveis
	int  operacao;
	float n1, n2,resultado;
	//entrada de dados
	printf("digite o primeiro número:");
	scanf("%f",&n1);
	printf("digite o segundo número:");
	scanf("%f",&n2);
	printf("Escolha a operação a ser efetuada:");
	printf("\n0 - Soma");
	printf("\n1 - Subtração");
	printf("\n2 - Multiplicação");
	printf("\n3 - Divisão\n");
	scanf("%d",&operacao);
	//processamento de dados
	switch (operacao){
		case 0:
			resultado = n1 + n2;
			break;
		case 1:
			resultado = n1 - n2;
			break;
		case 2:
			resultado = n1 * n2;
			break;
		case 3:
			resultado = n1 / n2;
			break;
		default:
			printf("Não pude entender o número digitado\n");
	}
	//saída de dados
	printf("O resultado da operação é de %.2f", resultado);
}
