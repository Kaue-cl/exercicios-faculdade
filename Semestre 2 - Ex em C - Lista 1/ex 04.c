#include <stdio.h>
#include <locale.h>

void main () {
	setlocale  (LC_ALL,"");
	//vari�veis
	int  operacao;
	float n1, n2,resultado;
	//entrada de dados
	printf("digite o primeiro n�mero:");
	scanf("%f",&n1);
	printf("digite o segundo n�mero:");
	scanf("%f",&n2);
	printf("Escolha a opera��o a ser efetuada:");
	printf("\n0 - Soma");
	printf("\n1 - Subtra��o");
	printf("\n2 - Multiplica��o");
	printf("\n3 - Divis�o\n");
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
			printf("N�o pude entender o n�mero digitado\n");
	}
	//sa�da de dados
	printf("O resultado da opera��o � de %.2f", resultado);
}
